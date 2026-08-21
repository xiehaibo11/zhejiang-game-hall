
/* v8::internal::SharedFunctionInfo::DebugName() */

ulong __thiscall v8::internal::SharedFunctionInfo::DebugName(SharedFunctionInfo *this)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_28;
  
  uVar1 = *(uint *)(*(ulong *)this + 7);
  uVar3 = *(ulong *)this & 0xffffffff00000000;
  local_28 = uVar3 | uVar1;
  if (((uVar1 & 1) == 0) || (*(short *)((uVar3 | 7) + (ulong)*(uint *)(local_28 - 1)) != 0x83)) {
    uVar2 = local_28;
    if (uVar1 != 0) goto joined_r0x0110ae7c;
  }
  else {
    uVar2 = ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_28);
    uVar3 = *(ulong *)this & 0xffffffff00000000;
    if ((uVar2 & 1) != 0) {
      uVar1 = *(uint *)(*(ulong *)this + 7);
      uVar2 = uVar3 | uVar1;
joined_r0x0110ae7c:
      if (((uVar1 & 1) == 0) || (*(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar2 - 1)) != 0x83))
      goto LAB_0110aec4;
      local_28 = uVar2;
      uVar3 = ScopeInfo::HasFunctionName((ScopeInfo *)&local_28);
      if ((uVar3 & 1) != 0) {
        local_28 = uVar2;
        uVar2 = ScopeInfo::FunctionName((ScopeInfo *)&local_28);
        goto LAB_0110aec4;
      }
      uVar3 = (ulong)*(uint *)(this + 4) << 0x20;
    }
  }
  uVar2 = *(ulong *)(uVar3 + 200);
LAB_0110aec4:
  if (*(int *)(uVar2 + 7) < 1) {
    uVar2 = *(ulong *)this;
    uVar3 = uVar2 & 0xffffffff00000000;
    if (((*(uint *)(uVar2 + 7) & 1) == 0) ||
       (local_28 = uVar3 | *(uint *)(uVar2 + 7),
       *(short *)((uVar3 | 7) + (ulong)*(uint *)(local_28 - 1)) != 0x83)) {
      if (((*(uint *)(uVar2 + 3) & 1) != 0) &&
         (*(ushort *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | *(uint *)(uVar2 + 3)) - 1)) - 0x95 < 2
         )) {
        uVar3 = *(ulong *)this & 0xffffffff00000000;
        return uVar3 | *(uint *)((uVar3 | *(uint *)(*(ulong *)this + 3)) + 3);
      }
    }
    else {
      uVar3 = ScopeInfo::HasInferredFunctionName((ScopeInfo *)&local_28);
      if ((((uVar3 & 1) != 0) &&
          (uVar3 = ScopeInfo::InferredFunctionName((ScopeInfo *)&local_28), (uVar3 & 1) != 0)) &&
         (*(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) < 0x40)) {
        return uVar3;
      }
    }
    uVar2 = *(ulong *)(((ulong)*(uint *)(this + 4) << 0x20) + 200);
  }
  return uVar2;
}

