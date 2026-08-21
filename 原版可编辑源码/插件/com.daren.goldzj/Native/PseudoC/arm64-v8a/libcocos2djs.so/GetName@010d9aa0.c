
/* v8::internal::JSFunction::GetName(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSFunction>) */

Isolate * v8::internal::JSFunction::GetName(Isolate *param_1,ulong *param_2)

{
  uint uVar1;
  CanonicalHandleScope *this;
  Isolate *pIVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_28;
  
  uVar3 = *param_2;
  uVar4 = uVar3 & 0xffffffff00000000;
  if ((*(uint *)((uVar4 | *(uint *)(uVar3 + 0xb)) + 0x1b) >> 0x1a & 1) != 0) {
    return param_1 + 0x4b0;
  }
  uVar5 = uVar4 | *(uint *)(uVar3 + 0xb);
  uVar1 = *(uint *)(uVar5 + 7);
  uVar3 = uVar4 | uVar1;
  if (((uVar1 & 1) == 0) || (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0x83)) {
    if (uVar1 != 0) goto joined_r0x010d9b34;
LAB_010d9b78:
    uVar3 = *(ulong *)(uVar4 + 200);
  }
  else {
    local_28 = uVar3;
    uVar3 = ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_28);
    if ((uVar3 & 1) == 0) goto LAB_010d9b78;
    uVar1 = *(uint *)(uVar5 + 7);
    uVar3 = uVar4 | uVar1;
joined_r0x010d9b34:
    if (((uVar1 & 1) != 0) && (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x83)) {
      local_28 = uVar3;
      uVar5 = ScopeInfo::HasFunctionName((ScopeInfo *)&local_28);
      if ((uVar5 & 1) != 0) {
        local_28 = uVar3;
        uVar3 = ScopeInfo::FunctionName((ScopeInfo *)&local_28);
        this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
        goto joined_r0x010d9b80;
      }
      goto LAB_010d9b78;
    }
  }
  this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
joined_r0x010d9b80:
  if (this == (CanonicalHandleScope *)0x0) {
    pIVar2 = *(Isolate **)(param_1 + 0x95a0);
    if (pIVar2 == *(Isolate **)(param_1 + 0x95a8)) {
      pIVar2 = (Isolate *)HandleScope::Extend(param_1);
    }
    *(Isolate **)(param_1 + 0x95a0) = pIVar2 + 8;
    *(ulong *)pIVar2 = uVar3;
  }
  else {
    pIVar2 = (Isolate *)CanonicalHandleScope::Lookup(this,uVar3);
  }
  return pIVar2;
}

