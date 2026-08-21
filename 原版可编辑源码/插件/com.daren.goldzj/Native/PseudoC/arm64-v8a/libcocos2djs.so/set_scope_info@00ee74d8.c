
/* v8::internal::SharedFunctionInfo::set_scope_info(v8::internal::ScopeInfo,
   v8::internal::WriteBarrierMode) */

void __thiscall
v8::internal::SharedFunctionInfo::set_scope_info(SharedFunctionInfo *this,ulong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong local_38;
  ulong local_18;
  
  uVar1 = *(uint *)(*(ulong *)this + 7);
  uVar4 = *(ulong *)this & 0xffffffff00000000;
  uVar3 = uVar4 | uVar1;
  local_38 = param_2;
  if (((uVar1 & 1) != 0) && (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x83)) {
    local_18 = uVar3;
    uVar3 = ScopeInfo::FunctionName((ScopeInfo *)&local_18);
  }
  ScopeInfo::SetFunctionName((ScopeInfo *)&local_38,uVar3);
  uVar4 = *(ulong *)this;
  uVar3 = uVar4 & 0xffffffff00000000;
  if (((*(uint *)(uVar4 + 7) & 1) == 0) ||
     (uVar5 = uVar3 | *(uint *)(uVar4 + 7),
     *(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x83)) {
    if (((*(uint *)(uVar4 + 3) & 1) == 0) ||
       (1 < *(ushort *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | *(uint *)(uVar4 + 3)) - 1)) - 0x95))
    goto LAB_00ee7720;
  }
  else {
    local_18 = uVar5;
    uVar3 = ScopeInfo::HasInferredFunctionName((ScopeInfo *)&local_18);
    if ((uVar3 & 1) == 0) goto LAB_00ee7720;
  }
  uVar4 = *(ulong *)this;
  uVar3 = uVar4 & 0xffffffff00000000;
  if (((*(uint *)(uVar4 + 7) & 1) == 0) ||
     (uVar5 = uVar3 | *(uint *)(uVar4 + 7),
     *(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x83)) {
    if (((*(uint *)(uVar4 + 3) & 1) == 0) ||
       (1 < *(ushort *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | *(uint *)(uVar4 + 3)) - 1)) - 0x95))
    goto LAB_00ee764c;
    uVar3 = *(ulong *)this & 0xffffffff00000000;
    iVar2 = *(int *)((uVar3 | *(uint *)((uVar3 | *(uint *)(*(ulong *)this + 3)) + 3)) + 7);
    uVar3 = local_18;
  }
  else {
    local_18 = uVar5;
    uVar3 = ScopeInfo::HasInferredFunctionName((ScopeInfo *)&local_18);
    if ((((uVar3 & 1) == 0) ||
        (uVar3 = ScopeInfo::InferredFunctionName((ScopeInfo *)&local_18), (uVar3 & 1) == 0)) ||
       (0x3f < *(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)))) {
LAB_00ee764c:
      uVar3 = *(ulong *)(((ulong)*(uint *)(this + 4) << 0x20) + 200);
    }
    iVar2 = *(int *)(uVar3 + 7);
    uVar3 = local_18;
  }
  local_18 = uVar3;
  if (iVar2 == 0) goto LAB_00ee7720;
  uVar5 = *(ulong *)this;
  uVar4 = uVar5 & 0xffffffff00000000;
  if (((*(uint *)(uVar5 + 7) & 1) == 0) ||
     (local_18 = uVar4 | *(uint *)(uVar5 + 7),
     *(short *)((uVar4 | 7) + (ulong)*(uint *)(local_18 - 1)) != 0x83)) {
    local_18 = uVar3;
    if (((*(uint *)(uVar5 + 3) & 1) == 0) ||
       (1 < *(ushort *)((uVar4 | 7) + (ulong)*(uint *)((uVar4 | *(uint *)(uVar5 + 3)) - 1)) - 0x95))
    goto LAB_00ee770c;
    uVar4 = *(ulong *)this & 0xffffffff00000000;
    uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)(*(ulong *)this + 3)) + 3);
  }
  else {
    uVar3 = ScopeInfo::HasInferredFunctionName((ScopeInfo *)&local_18);
    if ((((uVar3 & 1) == 0) ||
        (uVar4 = ScopeInfo::InferredFunctionName((ScopeInfo *)&local_18), (uVar4 & 1) == 0)) ||
       (0x3f < *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)))) {
LAB_00ee770c:
      uVar4 = *(ulong *)(((ulong)*(uint *)(this + 4) << 0x20) + 200);
    }
  }
  ScopeInfo::SetInferredFunctionName((ScopeInfo *)&local_38,uVar4);
LAB_00ee7720:
  uVar3 = local_38;
  *(int *)(*(long *)this + 7) = (int)local_38;
  if (param_3 != 0) {
    if (param_3 == 4) {
      if ((local_38 & 1) == 0) {
        return;
      }
      pbVar6 = (byte *)(local_38 & 0xfffffffffffc0000 | 8);
      if ((*(byte *)((local_38 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
        Heap_MarkingBarrierSlow(*(long *)this,*(long *)this + 7,local_38);
      }
    }
    else {
      if ((local_38 & 1) == 0) {
        return;
      }
      pbVar6 = (byte *)(local_38 & 0xfffffffffffc0000 | 8);
    }
    if (((*pbVar6 & 0x18) != 0) &&
       (uVar4 = *(ulong *)this, (*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,uVar4 + 7,uVar3);
    }
  }
  return;
}

