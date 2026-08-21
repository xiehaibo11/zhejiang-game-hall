
/* v8::Function::GetName() const */

Isolate * __thiscall v8::Function::GetName(Function *this)

{
  uint uVar1;
  Isolate *pIVar2;
  ulong uVar3;
  Isolate *pIVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_38;
  
  uVar3 = *(ulong *)this;
  pIVar4 = (Isolate *)(uVar3 & 0xffffffff00000000);
  uVar5 = (ulong)pIVar4 | 7;
  if (*(short *)(uVar5 + *(uint *)(uVar3 - 1)) == 0x438) {
    pIVar4 = (Isolate *)internal::JSBoundFunction::GetName(pIVar4,this);
    return pIVar4;
  }
  if (*(short *)(uVar5 + *(uint *)(uVar3 - 1)) != 0x439) {
    return pIVar4 + 0xa0;
  }
  uVar6 = (ulong)pIVar4 | (ulong)*(uint *)(uVar3 + 0xb);
  uVar1 = *(uint *)(uVar6 + 7);
  uVar3 = (ulong)pIVar4 | (ulong)uVar1;
  if (((uVar1 & 1) == 0) || (*(short *)(uVar5 + *(uint *)(uVar3 - 1)) != 0x83)) {
    if (uVar1 != 0) goto joined_r0x00ebd954;
  }
  else {
    local_38 = uVar3;
    uVar3 = internal::ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_38);
    if ((uVar3 & 1) != 0) {
      uVar1 = *(uint *)(uVar6 + 7);
      uVar3 = (ulong)pIVar4 | (ulong)uVar1;
joined_r0x00ebd954:
      if (((uVar1 & 1) == 0) || (*(short *)(uVar5 + *(uint *)(uVar3 - 1)) != 0x83))
      goto LAB_00ebd990;
      local_38 = uVar3;
      uVar5 = internal::ScopeInfo::HasFunctionName((ScopeInfo *)&local_38);
      if ((uVar5 & 1) != 0) {
        local_38 = uVar3;
        uVar3 = internal::ScopeInfo::FunctionName((ScopeInfo *)&local_38);
        goto LAB_00ebd990;
      }
    }
  }
  uVar3 = *(ulong *)(pIVar4 + 200);
LAB_00ebd990:
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    pIVar2 = *(Isolate **)(pIVar4 + 0x95a0);
    if (pIVar2 == *(Isolate **)(pIVar4 + 0x95a8)) {
      pIVar2 = (Isolate *)internal::HandleScope::Extend(pIVar4);
    }
    *(Isolate **)(pIVar4 + 0x95a0) = pIVar2 + 8;
    *(ulong *)pIVar2 = uVar3;
  }
  else {
    pIVar2 = (Isolate *)
             internal::CanonicalHandleScope::Lookup
                       (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar3);
  }
  return pIVar2;
}

