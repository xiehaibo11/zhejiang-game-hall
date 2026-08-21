
/* cocos2d::StopGrid::cacheTargetAsGridNode() */

void __thiscall cocos2d::StopGrid::cacheTargetAsGridNode(StopGrid *this)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(long *)(this + 0x38) != 0) {
                    /* try { // try from 00ed567c to 00fd569f has its CatchHandler @ 00ed56ec */
    uVar1 = __dynamic_cast(*(long *)(this + 0x38),&Node::typeinfo,&NodeGrid::typeinfo,0);
  }
  *(undefined8 *)(this + 0x58) = uVar1;
  return;
}

