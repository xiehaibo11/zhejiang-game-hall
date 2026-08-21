
/* v8::Function::GetInferredName() const */

ulong * __thiscall v8::Function::GetInferredName(Function *this)

{
  CanonicalHandleScope *this_00;
  ulong *puVar1;
  ulong uVar2;
  Isolate *pIVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_18;
  
  uVar4 = *(ulong *)this;
  uVar6 = uVar4 & 0xffffffff00000000;
  uVar2 = uVar6 | 7;
  if (*(short *)(uVar2 + *(uint *)(uVar4 - 1)) != 0x439) {
    return (ulong *)(uVar6 + 0xa0);
  }
  uVar4 = uVar6 | *(uint *)(uVar4 + 0xb);
  if (((*(uint *)(uVar4 + 7) & 1) == 0) ||
     (uVar5 = uVar6 | *(uint *)(uVar4 + 7), *(short *)(uVar2 + *(uint *)(uVar5 - 1)) != 0x83)) {
    if (((*(uint *)(uVar4 + 3) & 1) != 0) &&
       (*(ushort *)(uVar2 + *(uint *)((uVar6 | *(uint *)(uVar4 + 3)) - 1)) - 0x95 < 2)) {
      uVar2 = uVar6 | *(uint *)((uVar6 | *(uint *)(uVar4 + 3)) + 3);
      goto LAB_00ebdabc;
    }
  }
  else {
    local_18 = uVar5;
    uVar2 = internal::ScopeInfo::HasInferredFunctionName((ScopeInfo *)&local_18);
    if ((((uVar2 & 1) != 0) &&
        (uVar2 = internal::ScopeInfo::InferredFunctionName((ScopeInfo *)&local_18), (uVar2 & 1) != 0
        )) && (*(ushort *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) < 0x40))
    goto LAB_00ebdabc;
  }
  uVar2 = *(ulong *)(uVar6 + 200);
LAB_00ebdabc:
  this_00 = *(CanonicalHandleScope **)((ulong)*(uint *)(this + 4) << 0x20 | 0x95b8);
  if (this_00 == (CanonicalHandleScope *)0x0) {
    pIVar3 = (Isolate *)((ulong)*(uint *)(this + 4) << 0x20);
    puVar1 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar1 = (ulong *)internal::HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar2;
  }
  else {
    puVar1 = (ulong *)internal::CanonicalHandleScope::Lookup(this_00,uVar2);
  }
  return puVar1;
}

