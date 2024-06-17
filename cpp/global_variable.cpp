#include <iostream>
using namespace std;
bool is_music_playing = false;

void dance() {
  if (is_music_playing) {
    cout << "dancing with the beat" << endl;
  } else {
    cout << "I can't dance without music" << endl;
  }
}

void on_off_music() {
  // cout << "before modification is_music_playing=" << is_music_playing << endl;
  is_music_playing = !(is_music_playing);
  // cout << "after modification is_music_playing=" << is_music_playing << endl;
}

string music_status() {
  string message;
  if (is_music_playing) {
    message = "Yes, music is playing now";
  } else {
    message = "No, music is not playing";
  }
  return message;
}

int main() {
  dance();
  cout << music_status() << endl;
  on_off_music();
  cout << music_status() << endl;
  dance();
  on_off_music();
  cout << music_status() << endl;
  dance();
}