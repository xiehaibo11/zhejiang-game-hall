
/* cocos2d::ccArrayAppendObjectWithResize(cocos2d::_ccArray*, cocos2d::Ref*) */

void cocos2d::ccArrayAppendObjectWithResize(_ccArray *param_1,Ref *param_2)

{
  void *__ptr;
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 <= *(long *)param_1) {
    __ptr = *(void **)(param_1 + 0x10);
    do {
      *(long *)(param_1 + 8) = lVar1 << 1;
      __ptr = realloc(__ptr,lVar1 << 4);
      lVar1 = *(long *)(param_1 + 8);
      *(void **)(param_1 + 0x10) = __ptr;
    } while (lVar1 <= *(long *)param_1);
  }
  Ref::retain(param_2);
  lVar1 = *(long *)param_1;
  *(Ref **)(*(long *)(param_1 + 0x10) + lVar1 * 8) = param_2;
  *(long *)param_1 = lVar1 + 1;
  return;
}

