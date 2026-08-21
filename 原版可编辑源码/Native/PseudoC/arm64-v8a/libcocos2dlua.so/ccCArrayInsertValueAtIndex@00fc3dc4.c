
/* cocos2d::ccCArrayInsertValueAtIndex(cocos2d::_ccCArray*, void*, long) */

void cocos2d::ccCArrayInsertValueAtIndex(_ccCArray *param_1,void *param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  lVar1 = *(long *)param_1 + 1;
  lVar3 = *(long *)param_1 - param_3;
  if (lVar1 == *(long *)(param_1 + 8)) {
    *(long *)(param_1 + 8) = lVar1 * 2;
    pvVar2 = realloc(*(void **)(param_1 + 0x10),lVar1 * 0x10);
    *(void **)(param_1 + 0x10) = pvVar2;
  }
  if (0 < lVar3) {
    pvVar2 = (void *)(*(long *)(param_1 + 0x10) + param_3 * 8);
    memmove((void *)((long)pvVar2 + 8),pvVar2,lVar3 * 8);
  }
  *(long *)param_1 = *(long *)param_1 + 1;
  *(void **)(*(long *)(param_1 + 0x10) + param_3 * 8) = param_2;
  return;
}

