
/* v8::internal::Dictionary<v8::internal::NameDictionary,
   v8::internal::NameDictionaryShape>::SlowReverseLookup(v8::internal::Object) */

ulong __thiscall
v8::internal::Dictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::
SlowReverseLookup(Dictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape> *this,
                 int param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = *(ulong *)this;
  uVar2 = uVar4 & 0xffffffff00000000;
  if ((int)*(uint *)(uVar4 + 0xf) >> 1 != 0) {
    lVar3 = (long)((ulong)*(uint *)(uVar4 + 0xf) << 0x20) >> 0x21;
    lVar5 = 0x1800000000;
    lVar6 = 0x1400000000;
    do {
      uVar1 = *(uint *)(uVar4 + 7 + (lVar6 >> 0x20));
      if (((uVar1 != *(uint *)(uVar2 + 0xa8)) && (uVar1 != *(uint *)(uVar2 + 0xa0))) &&
         (*(int *)(uVar4 + 7 + (lVar5 >> 0x20)) == param_2)) {
        return uVar2 | uVar1;
      }
      lVar5 = lVar5 + 0xc00000000;
      lVar3 = lVar3 + -1;
      lVar6 = lVar6 + 0xc00000000;
    } while (lVar3 != 0);
  }
  return *(ulong *)(uVar2 + 0xa0);
}

