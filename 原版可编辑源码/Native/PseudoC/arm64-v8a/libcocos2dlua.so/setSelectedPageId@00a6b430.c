
/* fairygui::GController::setSelectedPageId(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool) */

void __thiscall
fairygui::GController::setSelectedPageId(GController *this,basic_string *param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ToolSet::findInStringArray((vector *)(this + 0x78),param_1);
  if ((iVar2 != -1) && (iVar1 = *(int *)(this + 0x70), iVar1 != iVar2)) {
    *(int *)(this + 0x70) = iVar2;
    *(int *)(this + 0x74) = iVar1;
    this[0x60] = (GController)0x1;
    GComponent::applyController(*(GComponent **)(this + 0x68),this);
    if (param_2) {
      UIEventDispatcher::dispatchEvent
                ((UIEventDispatcher *)this,2,(void *)0x0,(Value *)&cocos2d::Value::Null);
    }
    this[0x60] = (GController)0x0;
  }
  return;
}

