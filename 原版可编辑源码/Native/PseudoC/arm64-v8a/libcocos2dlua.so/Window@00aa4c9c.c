
/* fairygui::Window::Window() */

void __thiscall fairygui::Window::Window(Window *this)

{
  GComponent::GComponent((GComponent *)this);
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined4 *)(this + 0x288) = 0;
  *(undefined ***)this = &PTR__Window_016a77d8;
  *(undefined8 *)(this + 0x298) = 0;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x2a8) = 0;
  *(undefined8 *)(this + 0x2a0) = 0;
  *(undefined8 *)(this + 0x2b1) = 0;
  *(undefined8 *)(this + 0x2a9) = 0;
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined2 *)(this + 0x2d8) = 0;
  this[0x2b9] = UIConfig::bringWindowToFrontOnClick;
  return;
}

