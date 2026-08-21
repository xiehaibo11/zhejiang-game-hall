
/* v8::internal::Dictionary<v8::internal::SimpleNumberDictionary,
   v8::internal::SimpleNumberDictionaryShape>::SlowReverseLookup(v8::internal::Object) */

ulong __thiscall
v8::internal::
Dictionary<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>::
SlowReverseLookup(Dictionary<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>
                  *this,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  
  uVar2 = *(ulong *)this;
  uVar3 = uVar2 & 0xffffffff00000000;
  if ((int)*(uint *)(uVar2 + 0xf) >> 1 != 0) {
    lVar4 = (long)((ulong)*(uint *)(uVar2 + 0xf) << 0x20) >> 0x21;
    iVar5 = 0x17;
    do {
      uVar1 = *(uint *)(uVar2 + 7 + (long)(iVar5 + -0xb));
      if (((uVar1 != *(uint *)(uVar3 + 0xa8)) && (uVar1 != *(uint *)(uVar3 + 0xa0))) &&
         (*(int *)(uVar2 + (long)iVar5) == param_2)) {
        return uVar3 | uVar1;
      }
      lVar4 = lVar4 + -1;
      iVar5 = iVar5 + 8;
    } while (lVar4 != 0);
  }
  return *(ulong *)(uVar3 + 0xa0);
}

