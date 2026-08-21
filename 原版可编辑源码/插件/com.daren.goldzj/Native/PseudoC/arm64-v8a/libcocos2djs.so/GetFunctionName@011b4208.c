
/* v8::internal::ProfilerListener::GetFunctionName(v8::internal::SharedFunctionInfo) */

void __thiscall
v8::internal::ProfilerListener::GetFunctionName(ProfilerListener *this,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_30;
  ulong local_28;
  
  local_30 = param_2;
  if (*(int *)(this + 0x30) != 0) {
    if (*(int *)(this + 0x30) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar2 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_30);
    goto LAB_011b42e0;
  }
  uVar1 = *(uint *)(param_2 + 7);
  param_2 = param_2 & 0xffffffff00000000;
  uVar2 = param_2 | uVar1;
  if (((uVar1 & 1) == 0) || (*(short *)((param_2 | 7) + (ulong)*(uint *)(uVar2 - 1)) != 0x83)) {
    if (uVar1 != 0) goto joined_r0x011b4298;
  }
  else {
    local_28 = uVar2;
    uVar2 = ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_28);
    param_2 = local_30 & 0xffffffff00000000;
    if ((uVar2 & 1) != 0) {
      uVar1 = *(uint *)(local_30 + 7);
      uVar2 = param_2 | uVar1;
joined_r0x011b4298:
      if (((uVar1 & 1) == 0) || (*(short *)((param_2 | 7) + (ulong)*(uint *)(uVar2 - 1)) != 0x83))
      goto LAB_011b42e0;
      local_28 = uVar2;
      uVar3 = ScopeInfo::HasFunctionName((ScopeInfo *)&local_28);
      if ((uVar3 & 1) != 0) {
        local_28 = uVar2;
        uVar2 = ScopeInfo::FunctionName((ScopeInfo *)&local_28);
        goto LAB_011b42e0;
      }
      param_2 = local_30 & 0xffffffff00000000;
    }
  }
  uVar2 = *(ulong *)(param_2 + 200);
LAB_011b42e0:
  StringsStorage::GetName((StringsStorage *)(this + 0x18),uVar2);
  return;
}

