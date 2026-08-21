
/* cocos2d::SpriteBatchNode::atlasIndexForChild(cocos2d::Sprite*, int) */

long __thiscall
cocos2d::SpriteBatchNode::atlasIndexForChild(SpriteBatchNode *this,Sprite *param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  SpriteBatchNode *pSVar4;
  long *plVar5;
  long lVar6;
  Sprite *pSVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x260))(param_1);
  plVar3 = (long *)(**(code **)(*plVar2 + 0x240))();
  plVar2 = (long *)*plVar3;
  plVar5 = (long *)plVar3[1];
  plVar9 = plVar5;
  plVar10 = plVar2;
  if (plVar2 != plVar5) {
    pSVar7 = (Sprite *)*plVar2;
    plVar8 = plVar2;
    while ((plVar9 = plVar8, plVar10 = plVar8, pSVar7 != param_1 &&
           (plVar8 = plVar8 + 1, plVar9 = plVar5, plVar10 = plVar5, plVar5 != plVar8))) {
      pSVar7 = (Sprite *)*plVar8;
    }
  }
  lVar6 = (long)plVar10 - (long)plVar2 >> 3;
  if (plVar9 == plVar5) {
    lVar6 = -1;
  }
  pSVar4 = (SpriteBatchNode *)(**(code **)(*(long *)param_1 + 0x260))(param_1);
                    /* catch() { ... } // from try @ 00f428a0 with catch @ 00f42cf4 */
  if (lVar6 < 1) {
    plVar2 = (long *)0x0;
    if (pSVar4 != this) goto LAB_00f42d0c;
LAB_00f42d88:
    if (lVar6 == 0) {
      return 0;
    }
    while( true ) {
      plVar5 = (long *)(**(code **)(*plVar2 + 0x240))(plVar2);
      if (*plVar5 == plVar5[1]) break;
      plVar2 = *(long **)(plVar5[1] + -8);
    }
  }
  else {
                    /* catch() { ... } // from try @ 00f4280c with catch @ 00f42cf8 */
    plVar2 = *(long **)(*plVar3 + lVar6 * 8 + -8);
                    /* catch() { ... } // from try @ 00f429c0 with catch @ 00f42d04 */
                    /* catch() { ... } // from try @ 00f42988 with catch @ 00f42d08 */
    if (pSVar4 == this) goto LAB_00f42d88;
LAB_00f42d0c:
                    /* catch() { ... } // from try @ 00f42a0c with catch @ 00f42d0c */
    if (lVar6 == 0) {
      lVar6 = (**(code **)(*(long *)param_1 + 0x260))(param_1);
      return *(long *)(lVar6 + 0x308) + (ulong)((uint)~param_2 >> 0x1f);
    }
                    /* catch() { ... } // from try @ 00f42844 with catch @ 00f42d10 */
    uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2);
    if ((-1 < (int)(uVar1 & param_2)) &&
       (uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2), (int)(uVar1 | param_2) < 0)) {
      lVar6 = (**(code **)(*(long *)param_1 + 0x260))(param_1);
      lVar6 = *(long *)(lVar6 + 0x308);
      goto LAB_00f42db4;
    }
    while( true ) {
      plVar5 = (long *)(**(code **)(*plVar2 + 0x240))(plVar2);
      if (*plVar5 == plVar5[1]) break;
      plVar2 = *(long **)(plVar5[1] + -8);
    }
  }
  lVar6 = plVar2[0x61];
LAB_00f42db4:
  return lVar6 + 1;
}

