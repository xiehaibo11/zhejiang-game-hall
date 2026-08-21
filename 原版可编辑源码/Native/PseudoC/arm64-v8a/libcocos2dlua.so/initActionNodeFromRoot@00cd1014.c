
/* cocostudio::ActionNode::initActionNodeFromRoot(cocos2d::Ref*) */

void __thiscall cocostudio::ActionNode::initActionNodeFromRoot(ActionNode *this,Ref *param_1)

{
  Widget *pWVar1;
  Ref *this_00;
  
  if (((param_1 != (Ref *)0x0) &&
      (pWVar1 = (Widget *)
                __dynamic_cast(param_1,&cocos2d::Ref::typeinfo,&cocos2d::ui::Widget::typeinfo,0),
      pWVar1 != (Widget *)0x0)) &&
     (this_00 = (Ref *)cocos2d::ui::Helper::seekActionWidgetByActionTag
                                 (pWVar1,*(int *)(this + 0x30)), this_00 != (Ref *)0x0)) {
    if (*(Ref **)(this + 0x48) != (Ref *)0x0) {
      cocos2d::Ref::release(*(Ref **)(this + 0x48));
    }
    *(Ref **)(this + 0x48) = this_00;
    cocos2d::Ref::retain(this_00);
    return;
  }
  return;
}

