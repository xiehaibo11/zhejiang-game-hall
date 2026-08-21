
/* fairygui::Window::showModalWait(int) */

void __thiscall fairygui::Window::showModalWait(Window *this,int param_1)

{
  ulong uVar1;
  Ref *this_00;
  
  if (param_1 != 0) {
    *(int *)(this + 0x288) = param_1;
  }
  uVar1 = (ulong)(UIConfig::windowModalWaiting >> 1);
  if ((UIConfig::windowModalWaiting & 1) != 0) {
    uVar1 = DAT_01782780;
  }
  if (uVar1 != 0) {
    if (*(long *)(this + 0x298) == 0) {
      this_00 = (Ref *)UIPackage::createObjectFromURL((basic_string *)&UIConfig::windowModalWaiting)
      ;
      *(Ref **)(this + 0x298) = this_00;
      cocos2d::Ref::retain(this_00);
    }
    layoutModalWaitPane();
    GComponent::addChild((GComponent *)this,*(GObject **)(this + 0x298));
    return;
  }
  return;
}

