
/* cocos2d::ProtectedNode::getProtectedChildByTag(int) */

long __thiscall cocos2d::ProtectedNode::getProtectedChildByTag(ProtectedNode *this,int param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = *(long **)(this + 0x2f8);
  plVar5 = *(long **)(this + 0x300);
  if (plVar4 == plVar5) {
LAB_00f391e4:
    lVar3 = 0;
  }
  else {
    plVar2 = (long *)*plVar4;
    if (plVar2 != (long *)0x0) goto LAB_00f391c8;
    do {
      do {
        plVar4 = plVar4 + 1;
        if (plVar5 == plVar4) goto LAB_00f391e4;
        plVar2 = (long *)*plVar4;
      } while (plVar2 == (long *)0x0);
LAB_00f391c8:
      iVar1 = (**(code **)(*plVar2 + 0x2b8))();
    } while (iVar1 != param_1);
    lVar3 = *plVar4;
  }
                    /* catch() { ... } // from try @ 00f39220 with catch @ 00f391f0 */
  return lVar3;
}

