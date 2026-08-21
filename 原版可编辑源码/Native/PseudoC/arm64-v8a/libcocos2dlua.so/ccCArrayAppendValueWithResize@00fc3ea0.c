
/* cocos2d::ccCArrayAppendValueWithResize(cocos2d::_ccCArray*, void*) */

void cocos2d::ccCArrayAppendValueWithResize(_ccCArray *param_1,void *param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)param_1;
  lVar2 = *(long *)(param_1 + 8);
  if (lVar3 < lVar2) {
    pvVar1 = *(void **)(param_1 + 0x10);
  }
  else {
    pvVar1 = *(void **)(param_1 + 0x10);
    do {
      *(long *)(param_1 + 8) = lVar2 << 1;
      pvVar1 = realloc(pvVar1,lVar2 << 4);
      lVar3 = *(long *)param_1;
      lVar2 = *(long *)(param_1 + 8);
      *(void **)(param_1 + 0x10) = pvVar1;
    } while (lVar2 <= lVar3);
  }
  *(void **)((long)pvVar1 + lVar3 * 8) = param_2;
  *(long *)param_1 = lVar3 + 1;
  if (lVar2 <= lVar3 + 1) {
    *(long *)(param_1 + 8) = lVar2 << 1;
    pvVar1 = realloc(*(void **)(param_1 + 0x10),lVar2 << 4);
    *(void **)(param_1 + 0x10) = pvVar1;
  }
  return;
}

