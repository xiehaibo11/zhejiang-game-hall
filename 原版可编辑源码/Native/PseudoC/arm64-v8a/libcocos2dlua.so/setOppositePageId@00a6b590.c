
/* fairygui::GController::setOppositePageId(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall fairygui::GController::setOppositePageId(GController *this,basic_string *param_1)

{
  int iVar1;
  GComponent *this_00;
  
  iVar1 = ToolSet::findInStringArray((vector *)(this + 0x78),param_1);
  if (iVar1 < 1) {
    if ((ulong)((*(long *)(this + 0x80) - *(long *)(this + 0x78) >> 3) * -0x5555555555555555) < 2) {
      return;
    }
    iVar1 = *(int *)(this + 0x70);
    if (iVar1 == 1) {
      return;
    }
    this_00 = *(GComponent **)(this + 0x68);
    this[0x60] = (GController)0x1;
    *(undefined4 *)(this + 0x70) = 1;
  }
  else {
    iVar1 = *(int *)(this + 0x70);
    if (iVar1 == 0) {
      return;
    }
    this_00 = *(GComponent **)(this + 0x68);
    this[0x60] = (GController)0x1;
    *(undefined4 *)(this + 0x70) = 0;
  }
  *(int *)(this + 0x74) = iVar1;
  GComponent::applyController(this_00,this);
  UIEventDispatcher::dispatchEvent
            ((UIEventDispatcher *)this,2,(void *)0x0,(Value *)&cocos2d::Value::Null);
  this[0x60] = (GController)0x0;
  return;
}

