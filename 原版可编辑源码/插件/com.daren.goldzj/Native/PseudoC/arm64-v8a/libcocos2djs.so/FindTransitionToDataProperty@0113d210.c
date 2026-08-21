
/* v8::internal::TransitionsAccessor::FindTransitionToDataProperty(v8::internal::Handle<v8::internal::Name>,
   v8::internal::TransitionsAccessor::RequestedLocation) */

ulong * __thiscall
v8::internal::TransitionsAccessor::FindTransitionToDataProperty
          (TransitionsAccessor *this,ulong *param_2,int param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = *param_2;
  if (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x40) {
    iVar4 = (*(uint *)(uVar3 + 7) & 1) << 1;
  }
  else {
    iVar4 = 0;
  }
  uVar3 = SearchTransition(this,uVar3,0,iVar4);
  if ((int)uVar3 != 0) {
    pIVar1 = *(Isolate **)this;
    if ((param_3 != 1) ||
       ((*(uint *)(pIVar1 + ((long)(int)((*(uint *)(uVar3 + 0xb) >> 10 & 0x3ff) - 1) * 0xc00000000 +
                             0x1000000000 >> 0x20 | 3U) + (ulong)*(uint *)(uVar3 + 0x17)) >> 2 & 1)
        == 0)) {
      if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) != (CanonicalHandleScope *)0x0) {
        puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar3);
        return puVar2;
      }
      puVar2 = *(ulong **)(pIVar1 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar1);
      }
      *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar3;
      return puVar2;
    }
  }
  return (ulong *)0x0;
}

