
/* v8::internal::CanonicalHandleScope::Lookup(unsigned long) */

ulong * __thiscall
v8::internal::CanonicalHandleScope::Lookup(CanonicalHandleScope *this,ulong param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong *puVar3;
  Isolate *pIVar4;
  ushort local_14 [2];
  
  pIVar4 = *(Isolate **)this;
  if (*(int *)(pIVar4 + 0x95b0) == *(int *)(this + 0x58)) {
    if (((param_1 & 3) == 1) &&
       (uVar1 = RootIndexMap::Lookup(*(RootIndexMap **)(this + 0x48),param_1,(RootIndex *)local_14),
       (uVar1 & 1) != 0)) {
      puVar3 = (ulong *)(*(long *)this + (ulong)local_14[0] * 8 + 0x80);
    }
    else {
      plVar2 = (long *)IdentityMapBase::GetEntry(*(IdentityMapBase **)(this + 0x50),param_1);
      puVar3 = (ulong *)*plVar2;
      if (puVar3 == (ulong *)0x0) {
        pIVar4 = *(Isolate **)this;
        puVar3 = *(ulong **)(pIVar4 + 0x95a0);
        if (puVar3 == *(ulong **)(pIVar4 + 0x95a8)) {
          puVar3 = (ulong *)HandleScope::Extend(pIVar4);
        }
        *(ulong **)(pIVar4 + 0x95a0) = puVar3 + 1;
        *puVar3 = param_1;
        *plVar2 = (long)puVar3;
      }
    }
  }
  else {
    puVar3 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar3 + 1;
    *puVar3 = param_1;
  }
  return puVar3;
}

