
/* cocos2d::ccCArrayAppendArray(cocos2d::_ccCArray*, cocos2d::_ccCArray*) */

void cocos2d::ccCArrayAppendArray(_ccCArray *param_1,_ccCArray *param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (0 < *(long *)param_2) {
    lVar4 = 0;
    do {
      lVar3 = *(long *)param_1;
      *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar3 * 8) =
           *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar4 * 8);
                    /* catch() { ... } // from try @ 009a1a8c with catch @ 009a1be0 */
      lVar2 = *(long *)(param_1 + 8);
                    /* catch() { ... } // from try @ 009a1a80 with catch @ 009a1be4 */
      lVar3 = lVar3 + 1;
                    /* catch() { ... } // from try @ 009a1a60 with catch @ 009a1be8 */
      *(long *)param_1 = lVar3;
      if (lVar2 <= lVar3) {
                    /* catch() { ... } // from try @ 009a1a98 with catch @ 009a1bf8 */
        *(long *)(param_1 + 8) = lVar2 << 1;
        pvVar1 = realloc(*(void **)(param_1 + 0x10),lVar2 << 4);
        *(void **)(param_1 + 0x10) = pvVar1;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(long *)param_2);
  }
  return;
}

