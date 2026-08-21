
/* cocos2d::ccArrayShrink(cocos2d::_ccArray*) */

void cocos2d::ccArrayShrink(_ccArray *param_1)

{
  size_t __size;
  long lVar1;
  bool bVar2;
  void *pvVar3;
  size_t sVar4;
  
                    /* catch() { ... } // from try @ 009a0e60 with catch @ 009a11ac */
  lVar1 = *(long *)param_1;
                    /* catch() { ... } // from try @ 009a0e98 with catch @ 009a11bc
                       catch() { ... } // from try @ 009a0f34 with catch @ 009a11bc
                       catch() { ... } // from try @ 009a1018 with catch @ 009a11bc */
  if ((lVar1 < *(long *)(param_1 + 8)) && ((*(long *)(param_1 + 8) != 1 || (lVar1 != 0)))) {
    sVar4 = lVar1 << 3;
    bVar2 = lVar1 == 0;
    if (bVar2) {
      lVar1 = 1;
    }
    __size = 8;
    if (!bVar2) {
      __size = sVar4;
    }
    *(long *)(param_1 + 8) = lVar1;
    pvVar3 = realloc(*(void **)(param_1 + 0x10),__size);
    *(void **)(param_1 + 0x10) = pvVar3;
  }
  return;
}

