
/* cocos2d::ReuseGrid::cacheTargetAsGridNode() */

void __thiscall cocos2d::ReuseGrid::cacheTargetAsGridNode(ReuseGrid *this)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(long *)(this + 0x38) != 0) {
    uVar1 = __dynamic_cast(*(long *)(this + 0x38),&Node::typeinfo,&NodeGrid::typeinfo,0);
  }
  *(undefined8 *)(this + 0x58) = uVar1;
  return;
}

