
/* fairygui::GController::setSelectedIndex(int, bool) */

void __thiscall fairygui::GController::setSelectedIndex(GController *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x70);
  if (iVar1 != param_1) {
    *(int *)(this + 0x70) = param_1;
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

