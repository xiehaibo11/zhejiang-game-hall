
/* cocos2d::GridAction::cacheTargetAsGridNode() */

void __thiscall cocos2d::GridAction::cacheTargetAsGridNode(GridAction *this)

{
  undefined8 uVar1;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ed4904 with catch @ 00ed49ec
                        */
  uVar1 = 0;
  if (*(long *)(this + 0x38) != 0) {
    uVar1 = __dynamic_cast(*(long *)(this + 0x38),&Node::typeinfo,&NodeGrid::typeinfo,0);
  }
  *(undefined8 *)(this + 0x60) = uVar1;
  return;
}

