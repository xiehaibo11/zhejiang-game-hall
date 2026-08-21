
/* v8::internal::Dictionary<v8::internal::GlobalDictionary,
   v8::internal::GlobalDictionaryShape>::SlowReverseLookup(v8::internal::Object) */

ulong __thiscall
v8::internal::Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>::
SlowReverseLookup(Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>
                  *this,int param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  
  uVar4 = *(ulong *)this;
  uVar2 = uVar4 & 0xffffffff00000000;
  if ((int)*(uint *)(uVar4 + 0xf) >> 1 == 0) {
    return *(ulong *)(uVar2 + 0xa0);
  }
  lVar3 = (long)((ulong)*(uint *)(uVar4 + 0xf) << 0x20) >> 0x21;
  iVar5 = 0x14;
  while( true ) {
    uVar1 = *(uint *)(uVar4 + 7 + (long)iVar5);
    if (((uVar1 != (uint)*(ulong *)(uVar2 + 0xa0)) &&
        (uVar6 = uVar2 | uVar1, *(int *)(uVar6 + 0xb) != *(int *)(uVar2 + 0xa8))) &&
       (*(int *)((uVar2 | 0xb) + (ulong)*(uint *)((long)iVar5 + uVar4 + 7)) == param_2)) break;
    lVar3 = lVar3 + -1;
    iVar5 = iVar5 + 4;
    if (lVar3 == 0) {
      return *(ulong *)(uVar2 + 0xa0);
    }
  }
  return uVar2 | *(uint *)(uVar6 + 3);
}

