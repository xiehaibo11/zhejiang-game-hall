
/* cocos2d::ccCArrayEnsureExtraCapacity(cocos2d::_ccCArray*, long) */

void cocos2d::ccCArrayEnsureExtraCapacity(_ccCArray *param_1,long param_2)

{
  void *__ptr;
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < *(long *)param_1 + param_2) {
    __ptr = *(void **)(param_1 + 0x10);
    do {
      *(long *)(param_1 + 8) = lVar1 << 1;
      __ptr = realloc(__ptr,lVar1 << 4);
      lVar1 = *(long *)(param_1 + 8);
      *(void **)(param_1 + 0x10) = __ptr;
    } while (lVar1 < *(long *)param_1 + param_2);
  }
  return;
}

