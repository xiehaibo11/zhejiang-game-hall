
/* cocos2d::ReuseGrid::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::ReuseGrid::startWithTarget(ReuseGrid *this,Node *param_1)

{
  long lVar1;
  
  ActionInstant::startWithTarget((ActionInstant *)this,param_1);
  lVar1 = 0;
  if (*(long *)(this + 0x38) != 0) {
    lVar1 = __dynamic_cast(*(long *)(this + 0x38),&Node::typeinfo,&NodeGrid::typeinfo,0);
  }
  *(long *)(this + 0x58) = lVar1;
  lVar1 = *(long *)(lVar1 + 0x300);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x21) != '\0')) {
    *(int *)(lVar1 + 0x24) = *(int *)(this + 0x60) + *(int *)(lVar1 + 0x24);
  }
  return;
}

