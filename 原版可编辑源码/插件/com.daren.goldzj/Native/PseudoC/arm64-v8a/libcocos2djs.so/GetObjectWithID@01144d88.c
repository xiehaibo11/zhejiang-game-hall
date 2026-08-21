
/* v8::internal::ValueDeserializer::GetObjectWithID(unsigned int) */

ulong * __thiscall
v8::internal::ValueDeserializer::GetObjectWithID(ValueDeserializer *this,uint param_1)

{
  uint uVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong uVar4;
  
  uVar4 = **(ulong **)(this + 0x30);
  if (param_1 < (uint)(*(int *)(uVar4 + 3) >> 1)) {
    uVar1 = *(uint *)(uVar4 + (long)(int)(param_1 << 2) + 7);
    pIVar2 = *(Isolate **)this;
    if (((uVar1 & 1) == 0) || (uVar1 != *(uint *)(pIVar2 + 0xa8))) {
      uVar4 = uVar4 & 0xffffffff00000000 | (ulong)uVar1;
      if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) != (CanonicalHandleScope *)0x0) {
        puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar4);
        return puVar3;
      }
      puVar3 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar4;
      return puVar3;
    }
  }
  return (ulong *)0x0;
}

