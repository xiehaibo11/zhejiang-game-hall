
/* fairygui::Window::~Window() */

void __thiscall fairygui::Window::~Window(Window *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined ***)this = &PTR__Window_016a77d8;
  if (*(Ref **)(this + 0x280) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x280));
  }
  if (*(Ref **)(this + 0x290) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x290));
  }
  if (*(Ref **)(this + 0x2a0) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x2a0));
  }
  if (*(Ref **)(this + 0x2a8) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x2a8));
  }
  if (*(Ref **)(this + 0x298) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x298));
  }
  puVar1 = *(undefined8 **)(this + 0x2c0);
  puVar2 = *(undefined8 **)(this + 0x2c8);
  if (puVar1 != puVar2) {
    do {
      cocos2d::Ref::release((Ref *)*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar2 != puVar1);
    puVar1 = *(undefined8 **)(this + 0x2c0);
  }
  *(undefined8 **)(this + 0x2c8) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x2c8) = puVar1;
    operator_delete(puVar1);
  }
  GComponent::~GComponent((GComponent *)this);
  return;
}

