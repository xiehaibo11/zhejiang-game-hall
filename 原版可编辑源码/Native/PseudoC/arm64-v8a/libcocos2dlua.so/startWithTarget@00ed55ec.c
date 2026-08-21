
/* cocos2d::StopGrid::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::StopGrid::startWithTarget(StopGrid *this,Node *param_1)

{
  long lVar1;
  GridBase *this_00;
  
  ActionInstant::startWithTarget((ActionInstant *)this,param_1);
  lVar1 = 0;
  if (*(long *)(this + 0x38) != 0) {
    lVar1 = __dynamic_cast(*(long *)(this + 0x38),&Node::typeinfo,&NodeGrid::typeinfo,0);
  }
  *(long *)(this + 0x58) = lVar1;
  this_00 = *(GridBase **)(lVar1 + 0x300);
  if ((this_00 != (GridBase *)0x0) && (this_00[0x21] != (GridBase)0x0)) {
    GridBase::setActive(this_00,false);
    return;
  }
  return;
}

