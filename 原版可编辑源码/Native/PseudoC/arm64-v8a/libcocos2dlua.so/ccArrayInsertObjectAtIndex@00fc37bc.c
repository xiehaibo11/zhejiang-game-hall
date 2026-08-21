
/* cocos2d::ccArrayInsertObjectAtIndex(cocos2d::_ccArray*, cocos2d::Ref*, long) */

void cocos2d::ccArrayInsertObjectAtIndex(_ccArray *param_1,Ref *param_2,long param_3)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)param_1;
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 <= lVar3) {
    pvVar1 = *(void **)(param_1 + 0x10);
    do {
      *(long *)(param_1 + 8) = lVar2 << 1;
      pvVar1 = realloc(pvVar1,lVar2 << 4);
      lVar3 = *(long *)param_1;
      lVar2 = *(long *)(param_1 + 8);
      *(void **)(param_1 + 0x10) = pvVar1;
    } while (lVar2 <= lVar3);
  }
  if (0 < lVar3 - param_3) {
    pvVar1 = (void *)(*(long *)(param_1 + 0x10) + param_3 * 8);
    memmove((void *)((long)pvVar1 + 8),pvVar1,(lVar3 - param_3) * 8);
  }
  Ref::retain(param_2);
  *(Ref **)(*(long *)(param_1 + 0x10) + param_3 * 8) = param_2;
  *(long *)param_1 = *(long *)param_1 + 1;
  return;
}

