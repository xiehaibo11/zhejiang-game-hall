
/* fairygui::GComponent::setChildrenRenderOrder(fairygui::ChildrenRenderOrder) */

void __thiscall fairygui::GComponent::setChildrenRenderOrder(GComponent *this,int param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(int *)(this + 0x250) != param_2) {
    *(int *)(this + 0x250) = param_2;
    lVar1 = cocos2d::Director::getInstance();
    uVar2 = cocos2d::Scheduler::isScheduled
                      (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_buildNativeDisplayList
                      );
    if ((uVar2 & 1) == 0) {
      lVar1 = cocos2d::Director::getInstance();
      cocos2d::Scheduler::schedule
                (*(Scheduler **)(lVar1 + 0xa0),__selector_buildNativeDisplayList,(Ref *)0x0,0.0,
                 SUB81(this,0));
      return;
    }
  }
  return;
}

