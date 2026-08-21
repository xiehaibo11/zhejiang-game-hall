
/* fairygui::Window::hide() */

void __thiscall fairygui::Window::hide(Window *this)

{
  if (*(long *)(this + 0xa0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00aa5588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0xf8))();
    return;
  }
  return;
}

