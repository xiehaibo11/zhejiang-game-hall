
/* cocos2d::ccCArrayDoubleCapacity(cocos2d::_ccCArray*) */

void cocos2d::ccCArrayDoubleCapacity(_ccCArray *param_1)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  *(long *)(param_1 + 8) = lVar1 << 1;
  pvVar2 = realloc(*(void **)(param_1 + 0x10),lVar1 << 4);
  *(void **)(param_1 + 0x10) = pvVar2;
  return;
}

