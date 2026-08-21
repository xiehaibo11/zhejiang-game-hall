
/* cocos2d::ccArrayInsertObjectAtIndex(cocos2d::_ccArray*, cocos2d::Ref*, long) */

void cocos2d::ccArrayInsertObjectAtIndex(_ccArray *param_1,Ref *param_2,long param_3)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  
                    /* try { // try from 009a1458 to 00aa14b3 has its CatchHandler @ 009a1458
                       catch() { ... } // from try @ 009a1458 with catch @ 009a1458
                       catch() { ... } // from try @ 009a1674 with catch @ 009a1458 */
  lVar3 = *(long *)param_1;
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 <= lVar3) {
    pvVar1 = *(void **)(param_1 + 0x10);
    do {
      *(long *)(param_1 + 8) = lVar2 << 1;
      pvVar1 = realloc(pvVar1,lVar2 << 4);
      lVar3 = *(long *)param_1;
      lVar2 = *(long *)(param_1 + 8);
      *(void **)(param_1 + 0x10) = pvVar1;
    } while (lVar2 <= lVar3);
  }
  if (0 < lVar3 - param_3) {
    pvVar1 = (void *)(*(long *)(param_1 + 0x10) + param_3 * 8);
                    /* try { // try from 009a14b4 to 00aa14cb has its CatchHandler @ 009a16f8 */
    memmove((void *)((long)pvVar1 + 8),pvVar1,(lVar3 - param_3) * 8);
  }
  Ref::retain(param_2);
  *(Ref **)(*(long *)(param_1 + 0x10) + param_3 * 8) = param_2;
  *(long *)param_1 = *(long *)param_1 + 1;
                    /* try { // try from 009a14d4 to 00aa14df has its CatchHandler @ 009a16f4 */
                    /* try { // try from 009a14e0 to 00aa14eb has its CatchHandler @ 009a16f0 */
  return;
}

