
/* cocos2d::ccCArrayDoubleCapacity(cocos2d::_ccCArray*) */

void cocos2d::ccCArrayDoubleCapacity(_ccCArray *param_1)

{
  long lVar1;
  void *pvVar2;
  
                    /* try { // try from 009a1928 to 00aa1a0b has its CatchHandler @ 009a1760 */
  lVar1 = *(long *)(param_1 + 8);
  *(long *)(param_1 + 8) = lVar1 << 1;
  pvVar2 = realloc(*(void **)(param_1 + 0x10),lVar1 << 4);
  *(void **)(param_1 + 0x10) = pvVar2;
  return;
}

