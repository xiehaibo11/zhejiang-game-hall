
/* v8::internal::Dictionary<v8::internal::GlobalDictionary,
   v8::internal::GlobalDictionaryShape>::NumberOfEnumerableProperties() */

int __thiscall
v8::internal::Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>::
NumberOfEnumerableProperties
          (Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape> *this)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  
  uVar3 = *(ulong *)this;
  iVar2 = 0;
  if ((int)*(uint *)(uVar3 + 0xf) >> 1 != 0) {
    uVar4 = uVar3 & 0xffffffff00000000;
    lVar5 = (long)((ulong)*(uint *)(uVar3 + 0xf) << 0x20) >> 0x21;
    iVar6 = 0x14;
    do {
      uVar1 = *(uint *)(uVar3 + (long)iVar6 + 7);
      if (((uVar1 != *(uint *)(uVar4 + 0xa0)) &&
          (uVar7 = uVar4 | uVar1, *(int *)(uVar7 + 0xb) != *(int *)(uVar4 + 0xa8))) &&
         ((uVar1 = *(uint *)(uVar7 + 3), (uVar1 & 1) == 0 ||
          (*(short *)((uVar4 | 7) + (ulong)*(uint *)((uVar4 | uVar1) - 1)) != 0x40)))) {
        iVar2 = ((*(uint *)((uVar4 | *(uint *)(uVar3 + (long)iVar6 + 7)) + 7) >> 5 ^ 0xffffffff) & 1
                ) + iVar2;
      }
      lVar5 = lVar5 + -1;
      iVar6 = iVar6 + 4;
    } while (lVar5 != 0);
  }
  return iVar2;
}

