#include <Control_Surface.h>
#include <MIDI_Interfaces/BluetoothMIDI_Interface.hpp>

BluetoothMIDI_Interface midi_ble;

NoteButton button1 {
  23,
  {MIDI_Notes::C(3), CHANNEL_1},
  127
};

NoteButton button2 {
  22,
  {MIDI_Notes::D(3), CHANNEL_1},
  127
};

NoteButton button3 {
  32,
  {MIDI_Notes::E(3), CHANNEL_1},
  127
};

NoteButton button4 {
  33,
  {MIDI_Notes::F_(3), CHANNEL_1},
  127
};

NoteButton button5 {
  21,
  {MIDI_Notes::G(3), CHANNEL_1},
  127
};

NoteButton button6 {
  19,
  {MIDI_Notes::A(3), CHANNEL_1},
  127
};

NoteButton button7 {
  25,
  {MIDI_Notes::B(3), CHANNEL_1},
  127
};

NoteButton button8 {
  26,
  {MIDI_Notes::C(4), CHANNEL_1},
  127
};

NoteButton button9 {
  18,
  {MIDI_Notes::D(4), CHANNEL_1},
  127
};

NoteButton button10 {
  5,
  {MIDI_Notes::E(4), CHANNEL_1},
  127
};

NoteButton button11 {
  27,
  {MIDI_Notes::F_(4), CHANNEL_1},
  127
};

NoteButton button12 {
  14,
  {MIDI_Notes::G(4), CHANNEL_1},
  127
};

NoteButton button13 {
  17,
  {MIDI_Notes::A(4), CHANNEL_1},
  127
};

NoteButton button14 {
  16,
  {MIDI_Notes::B(4), CHANNEL_1},
  127
};

NoteButton button15 {
  12,
  {MIDI_Notes::C(5), CHANNEL_1},
  127
};

NoteButton button16 {
  13,
  {MIDI_Notes::D(5), CHANNEL_1},
  127
};

void setup() {
  midi_ble.setName("TouchMIDI");
  Control_Surface.begin();
}

void loop() {
  Control_Surface.loop();
}