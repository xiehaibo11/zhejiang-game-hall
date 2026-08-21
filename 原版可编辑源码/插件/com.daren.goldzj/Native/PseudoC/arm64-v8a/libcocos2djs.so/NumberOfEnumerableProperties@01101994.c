
/* v8::internal::Dictionary<v8::internal::SimpleNumberDictionary,
   v8::internal::SimpleNumberDictionaryShape>::NumberOfEnumerableProperties() */

undefined8 __thiscall
v8::internal::
Dictionary<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>::
NumberOfEnumerableProperties
          (Dictionary<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>
           *this)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  
  uVar2 = *(ulong *)this;
  if ((int)*(uint *)(uVar2 + 0xf) >> 1 != 0) {
    uVar3 = uVar2 & 0xffffffff00000000;
    lVar4 = (long)((ulong)*(uint *)(uVar2 + 0xf) << 0x20) >> 0x21;
    iVar5 = 0xc;
    do {
      uVar1 = *(uint *)(uVar2 + (long)iVar5 + 7);
      if (((uVar1 != *(uint *)(uVar3 + 0xa8)) && (uVar1 != *(uint *)(uVar3 + 0xa0))) &&
         (((uVar1 & 1) == 0 ||
          (*(short *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | uVar1) - 1)) != 0x40)))) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      lVar4 = lVar4 + -1;
      iVar5 = iVar5 + 8;
    } while (lVar4 != 0);
  }
  return 0;
}

