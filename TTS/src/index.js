/**This JavaScript file contains the main logic of the TTS converter web application.*/

// Accessing web app components with DOM
const convertButton = document.getElementById('bottom-area__convert-btn');
const voiceSelect = document.getElementById('voice-select');
const inputTxt = document.getElementById('text-text-area');
const pitch = document.getElementById('pitch-value');
const pitchValue = document.getElementById('pitch-display');
const rate = document.getElementById('rate-value');
const rateValue = document.getElementById('rate-display');

const synth = window.speechSynthesis;

let voices = [];

// Populating voice dynamically.
function populateVoiceList() {
    voices = synth.getVoices();
    console.log(voices); //log voices for debugging

    //clear existing options in the select element 
    voiceSelect.innerHTML = '';

    //populate the dropdown with available voices
    voices.forEach((voice) => {
        const option = document.createElement('option');
        option.textContent = `${voice.name} (${voice.lang})`;

        if (voice.default) {
            option.textContent += " - DEFAULT";
        }

        option.setAttribute('data-lang', voice.lang);
        option.setAttribute('data-name', voice.name);

        voiceSelect.appendChild(option);
    });
}

if (speechSynthesis.onvoiceschanged !== undefined) {
    speechSynthesis.onvoiceschanged = populateVoiceList;
}else{
    populateVoiceList();
}

// Update display for pitch and rate
pitch.addEventListener('input', () => {
    pitchValue.textContent = pitch.value;
});

rate.addEventListener('input', () => {
    rateValue.textContent = rate.value;
});

// Initialize display values

pitchValue.textContent = pitch.value;
rateValue.textContent = rate.value;

function speakUp(e){
    const textValue = inputTxt.value;
    
    e.preventDefault();
    
    const utterVoice = new SpeechSynthesisUtterance(textValue);
    const selectedOption = voiceSelect.selectedOptions[0].getAttribute('data-name');

    for (let i = 0; i < voices.length; i++) {
        if (voices[i].name === selectedOption) {
            utterVoice.voice = voices[i];
        }
    }

    // Pitch and rate functionality
    utterVoice.pitch = pitch.value;
    utterVoice.rate = rate.value;

    synth.speak(utterVoice);
    
    inputTxt.blur();
}

convertButton.addEventListener('click', speakUp);