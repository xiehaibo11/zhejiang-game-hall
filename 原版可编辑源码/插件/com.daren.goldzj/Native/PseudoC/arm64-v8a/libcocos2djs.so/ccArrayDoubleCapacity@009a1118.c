
/* cocos2d::ccArrayDoubleCapacity(cocos2d::_ccArray*) */

void cocos2d::ccArrayDoubleCapacity(_ccArray *param_1)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = *(long *)(param_1 + 8);
                    /* try { // try from 009a1130 to 00aa1173 has its CatchHandler @ 009a1194 */
  *(long *)(param_1 + 8) = lVar1 << 1;
  pvVar2 = realloc(*(void **)(param_1 + 0x10),lVar1 << 4);
  *(void **)(param_1 + 0x10) = pvVar2;
  return;
}

