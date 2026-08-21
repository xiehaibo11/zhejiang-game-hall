
/* cocos2d::extension::TableView::__indexFromOffset(cocos2d::Vec2) */

long cocos2d::extension::TableView::__indexFromOffset(float param_1,float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  
  lVar2 = (**(code **)(**(long **)(param_3 + 0x4d0) + 0x28))(*(long **)(param_3 + 0x4d0),param_3);
  if (*(int *)(param_3 + 0x330) != 0) {
    param_1 = param_2;
  }
  lVar3 = lVar2 + -1;
  if (lVar2 < 1) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    do {
      lVar4 = lVar3 - lVar2;
      if (lVar4 < 0) {
        lVar4 = lVar4 + 1;
      }
      lVar4 = lVar2 + (lVar4 >> 1);
      fVar5 = *(float *)(*(long *)(param_3 + 0x488) + lVar4 * 4);
      if ((fVar5 <= param_1) &&
         (param_1 <= *(float *)(*(long *)(param_3 + 0x488) + (lVar4 + 1) * 4))) {
        return lVar4;
      }
      lVar1 = lVar4 + -1;
      if (fVar5 <= param_1) {
        lVar2 = lVar4 + 1;
        lVar1 = lVar3;
      }
      lVar3 = lVar1;
                    /* try { // try from 00e1913c to 00f19187 has its CatchHandler @ 00e1913c
                       catch() { ... } // from try @ 00e1913c with catch @ 00e1913c
                       catch() { ... } // from try @ 00e193c4 with catch @ 00e1913c */
    } while (lVar2 <= lVar3);
    lVar2 = -(ulong)(0 < lVar2);
  }
                    /* try { // try from 00e19188 to 00f19193 has its CatchHandler @ 00e194b4 */
  return lVar2;
}

