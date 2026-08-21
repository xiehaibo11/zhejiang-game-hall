
/* v8::internal::Dictionary<v8::internal::NameDictionary,
   v8::internal::NameDictionaryShape>::NumberOfEnumerableProperties() */

int __thiscall
v8::internal::Dictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::
NumberOfEnumerableProperties
          (Dictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape> *this)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  uVar3 = *(ulong *)this;
  iVar2 = 0;
  if ((int)*(uint *)(uVar3 + 0xf) >> 1 != 0) {
    uVar4 = uVar3 & 0xffffffff00000000;
    lVar5 = (long)((ulong)*(uint *)(uVar3 + 0xf) << 0x20) >> 0x21;
    lVar6 = 0x1c00000000;
    lVar7 = 0x1400000000;
    do {
      uVar1 = *(uint *)(uVar3 + (lVar7 >> 0x20) + 7);
      if (((uVar1 != *(uint *)(uVar4 + 0xa8)) && (uVar1 != *(uint *)(uVar4 + 0xa0))) &&
         (((uVar1 & 1) == 0 ||
          (*(short *)((uVar4 | 7) + (ulong)*(uint *)((uVar4 | uVar1) - 1)) != 0x40)))) {
        iVar2 = ((*(uint *)(uVar3 + (lVar6 >> 0x20) + 7) >> 5 ^ 0xffffffff) & 1) + iVar2;
      }
      lVar6 = lVar6 + 0xc00000000;
      lVar5 = lVar5 + -1;
      lVar7 = lVar7 + 0xc00000000;
    } while (lVar5 != 0);
  }
  return iVar2;
}

