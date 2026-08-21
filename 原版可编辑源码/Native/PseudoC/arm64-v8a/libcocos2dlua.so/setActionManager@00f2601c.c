
/* cocos2d::Node::setActionManager(cocos2d::ActionManager*) */

void __thiscall cocos2d::Node::setActionManager(Node *this,ActionManager *param_1)

{
  ActionManager *pAVar1;
  
  pAVar1 = *(ActionManager **)(this + 0x1e8);
  if (pAVar1 != param_1) {
    (**(code **)(*(long *)pAVar1 + 0x20))(pAVar1,this);
    if (param_1 != (ActionManager *)0x0) {
      Ref::retain((Ref *)param_1);
    }
    if (*(Ref **)(this + 0x1e8) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this + 0x1e8));
    }
    *(ActionManager **)(this + 0x1e8) = param_1;
  }
  return;
}

