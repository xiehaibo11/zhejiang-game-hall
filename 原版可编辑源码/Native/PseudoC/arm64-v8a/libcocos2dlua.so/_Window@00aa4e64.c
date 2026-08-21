
/* fairygui::Window::~Window() */

void __thiscall fairygui::Window::~Window(Window *this)

{
  ~Window(this);
  operator_delete(this);
  return;
}

