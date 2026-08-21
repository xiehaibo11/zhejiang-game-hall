
/* v8::internal::TransitionsAccessor::GetPrototypeTransition(v8::internal::Handle<v8::internal::Object>)
    */

ulong * __thiscall
v8::internal::TransitionsAccessor::GetPrototypeTransition(TransitionsAccessor *this,int *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  Isolate *pIVar5;
  int iVar6;
  ulong uVar7;
  
  if ((*(int *)(this + 0x20) == 4) && (uVar3 = *(ulong *)(this + 0x18), *(int *)(uVar3 + 7) != 0)) {
    uVar3 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 7);
  }
  else {
    uVar3 = *(ulong *)(*(long *)this + 0x420);
  }
  if ((1 < *(uint *)(uVar3 + 3)) && (1 < *(int *)(uVar3 + 7))) {
    uVar4 = (ulong)(uint)(*(int *)(uVar3 + 7) >> 1);
    iVar6 = 4;
    do {
      uVar1 = *(uint *)(uVar3 + 7 + (long)iVar6);
      if (((uVar1 != 3) && (((ulong)uVar1 & 3) == 3)) &&
         (uVar7 = (ulong)uVar1 & 0xfffffffffffffffd | uVar3 & 0xffffffff00000000,
         *(int *)(uVar7 + 0xf) == *param_2)) {
        pIVar5 = *(Isolate **)this;
        if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) != (CanonicalHandleScope *)0x0) {
          puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar7);
          return puVar2;
        }
        puVar2 = *(ulong **)(pIVar5 + 0x95a0);
        if (puVar2 == *(ulong **)(pIVar5 + 0x95a8)) {
          puVar2 = (ulong *)HandleScope::Extend(pIVar5);
        }
        *(ulong **)(pIVar5 + 0x95a0) = puVar2 + 1;
        *puVar2 = uVar7;
        return puVar2;
      }
      uVar4 = uVar4 - 1;
      iVar6 = iVar6 + 4;
    } while (uVar4 != 0);
  }
  return (ulong *)0x0;
}

