
/* cocos2d::ccCArrayAppendValue(cocos2d::_ccCArray*, void*) */

void cocos2d::ccCArrayAppendValue(_ccCArray *param_1,void *param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)param_1;
  *(void **)(*(long *)(param_1 + 0x10) + lVar3 * 8) = param_2;
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = lVar3 + 1;
  *(long *)param_1 = lVar3;
  if (lVar2 <= lVar3) {
    *(long *)(param_1 + 8) = lVar2 << 1;
    pvVar1 = realloc(*(void **)(param_1 + 0x10),lVar2 << 4);
    *(void **)(param_1 + 0x10) = pvVar1;
  }
  return;
}

