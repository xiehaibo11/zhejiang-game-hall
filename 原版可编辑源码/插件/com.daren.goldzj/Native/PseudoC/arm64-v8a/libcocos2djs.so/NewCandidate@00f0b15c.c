
/* v8::internal::SharedFunctionInfoFinder::NewCandidate(v8::internal::SharedFunctionInfo,
   v8::internal::JSFunction) */

void __thiscall
v8::internal::SharedFunctionInfoFinder::NewCandidate
          (SharedFunctionInfoFinder *this,ulong param_2,undefined8 param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_48;
  ulong local_28;
  
  uVar6 = param_2 & 0xffffffff00000000;
  local_28 = uVar6 | *(uint *)(param_2 + 0xf);
  if (*(short *)((uVar6 | 7) + (ulong)*(uint *)(local_28 - 1)) == 0x5b) {
    local_28 = uVar6 | *(uint *)(local_28 + 0xb);
  }
  if (((local_28 & 1) != 0) && ((int)local_28 == *(int *)((local_28 & 0xffffffff00000000) + 0xa0)))
  {
    return;
  }
  local_48 = param_2;
  uVar5 = Script::IsUserJavaScript((Script *)&local_28);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (((*(uint *)(param_2 + 3) & 1) != 0) &&
     (*(short *)((uVar6 | 7) + (ulong)*(uint *)((uVar6 | *(uint *)(param_2 + 3)) - 1)) == 0x57)) {
    return;
  }
  uVar1 = *(ushort *)(local_48 + 0x19);
  if (uVar1 == 0xffff) {
LAB_00f0b218:
    iVar2 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_48);
  }
  else {
    iVar2 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_48);
    iVar2 = iVar2 - (uint)uVar1;
    if (iVar2 == -1) goto LAB_00f0b218;
  }
  iVar4 = *(int *)(this + 0x14);
  if (iVar4 < iVar2) {
    return;
  }
  iVar3 = SharedFunctionInfo::EndPosition((SharedFunctionInfo *)&local_48);
  if (iVar3 < iVar4) {
    return;
  }
  if (*(int *)this != 0) {
    iVar4 = *(int *)(this + 0x10);
    if (iVar4 == iVar2) {
      iVar4 = SharedFunctionInfo::EndPosition((SharedFunctionInfo *)&local_48);
      iVar3 = SharedFunctionInfo::EndPosition((SharedFunctionInfo *)this);
      if (iVar4 == iVar3) {
        if (((int)param_3 == 0) && (*(int *)(this + 8) != 0)) {
          return;
        }
        if (((*(uint *)(*(long *)this + 0x1b) >> 0x1c & 1) == 0) &&
           ((*(uint *)(local_48 + 0x1b) >> 0x1c & 1) != 0)) {
          return;
        }
        goto LAB_00f0b2c0;
      }
      iVar4 = *(int *)(this + 0x10);
    }
    if (iVar2 < iVar4) {
      return;
    }
    iVar4 = SharedFunctionInfo::EndPosition((SharedFunctionInfo *)this);
    iVar3 = SharedFunctionInfo::EndPosition((SharedFunctionInfo *)&local_48);
    if (iVar4 < iVar3) {
      return;
    }
  }
LAB_00f0b2c0:
  *(int *)(this + 0x10) = iVar2;
  *(ulong *)this = local_48;
  *(undefined8 *)(this + 8) = param_3;
  return;
}

