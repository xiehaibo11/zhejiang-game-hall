
/* cocos2d::Node::setLocalZOrder(int) */

void __thiscall cocos2d::Node::setLocalZOrder(Node *this,int param_1)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = (**(code **)(*(long *)this + 0x30))();
  if (iVar1 == param_1) {
    return;
  }
  (**(code **)(*(long *)this + 0x28))(this,param_1);
  plVar2 = *(long **)(this + 400);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x2a8))(plVar2,this,param_1);
  }
  EventDispatcher::setDirtyForNode(*(EventDispatcher **)(this + 0x1f0),this);
  return;
}

