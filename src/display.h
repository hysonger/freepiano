#pragma once;


// init display
int display_init(HWND hwnd);

// terminate display
int display_shutdown();

// send keyboard event to display system
void display_keyboard_event(byte code, uint status);

// send midi event to display system
void display_midi_key(byte code, uint status);
void display_midi_key_reset();

// display set image
void display_set_image(uint type, const char *name);

// display render
void display_render();

// update display
void display_update(double time);

// display process emssage
int display_process_message(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

// get display width
int display_get_width();

// get display height
int display_get_height();

// capture bitmap
int display_capture_bitmap_I420(unsigned char * *planes, int *strikes);

// get key rect
void display_get_key_rect(int key, int &x1, int &y1, int &x2, int &y2);