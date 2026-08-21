
/* cocos2d::ccCArrayAppendArrayWithResize(cocos2d::_ccCArray*, cocos2d::_ccCArray*) */

void cocos2d::ccCArrayAppendArrayWithResize(_ccCArray *param_1,_ccCArray *param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)param_2;
  lVar3 = *(long *)param_1;
  lVar2 = *(long *)(param_1 + 8);
                    /* try { // try from 009a1c50 to 00aa1cab has its CatchHandler @ 009a1c50
                       catch() { ... } // from try @ 009a1c50 with catch @ 009a1c50
                       catch() { ... } // from try @ 009a1e6c with catch @ 009a1c50 */
  if (lVar2 < lVar3 + lVar4) {
    pvVar1 = *(void **)(param_1 + 0x10);
    do {
      *(long *)(param_1 + 8) = lVar2 << 1;
      pvVar1 = realloc(pvVar1,lVar2 << 4);
      lVar3 = *(long *)param_1;
      lVar2 = *(long *)(param_1 + 8);
      *(void **)(param_1 + 0x10) = pvVar1;
    } while (lVar2 < lVar3 + lVar4);
    lVar4 = *(long *)param_2;
  }
  if (0 < lVar4) {
    lVar4 = 0;
    while( true ) {
                    /* try { // try from 009a1cac to 00aa1cc3 has its CatchHandler @ 009a1ef0 */
      *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar3 * 8) =
           *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar4 * 8);
      *(long *)param_1 = lVar3 + 1;
      if (lVar2 <= lVar3 + 1) {
        *(long *)(param_1 + 8) = lVar2 << 1;
        pvVar1 = realloc(*(void **)(param_1 + 0x10),lVar2 << 4);
                    /* try { // try from 009a1ccc to 00aa1cd7 has its CatchHandler @ 009a1eec */
        *(void **)(param_1 + 0x10) = pvVar1;
      }
      lVar4 = lVar4 + 1;
                    /* try { // try from 009a1cd8 to 00aa1ce3 has its CatchHandler @ 009a1ee8 */
      if (*(long *)param_2 <= lVar4) break;
      lVar3 = *(long *)param_1;
      lVar2 = *(long *)(param_1 + 8);
    }
  }
                    /* try { // try from 009a1ce4 to 00aa1e6b has its CatchHandler @ 009a1f00 */
  return;
}

