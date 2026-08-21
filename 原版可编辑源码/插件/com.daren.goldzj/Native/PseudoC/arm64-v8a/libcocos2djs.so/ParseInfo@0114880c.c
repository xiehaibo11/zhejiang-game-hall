
/* v8::internal::ParseInfo::ParseInfo(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>) */

void __thiscall v8::internal::ParseInfo::ParseInfo(ParseInfo *this,Isolate *param_1,ulong *param_3)

{
  Isolate *pIVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong *puVar4;
  Isolate *pIVar5;
  CanonicalHandleScope *this_00;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_48;
  
  pIVar1 = param_1 + 0x95a0;
  ParseInfo(this,param_1,*(AccountingAllocator **)(param_1 + 0x95d0));
  uVar2 = *(uint *)(this + 8);
  *(uint *)(this + 8) = uVar2 | 0x80;
  uVar7 = uVar2 & 0xffffefff | 0x80;
  if ((*(uint *)(*param_3 + 0x1b) & 0x4000) != 0) {
    uVar7 = uVar2 | 0x1080;
  }
  *(uint *)(this + 8) = uVar7;
  local_48 = *param_3;
  uVar3 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_48);
  *(undefined4 *)(this + 0x38) = uVar3;
  local_48 = *param_3;
  uVar3 = SharedFunctionInfo::EndPosition((SharedFunctionInfo *)&local_48);
  *(undefined4 *)(this + 0x3c) = uVar3;
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(*param_3 + 0x1f);
  SetFunctionInfo<v8::internal::Handle<v8::internal::SharedFunctionInfo>>(this,param_3);
  uVar8 = *param_3 & 0xffffffff00000000;
  uVar10 = uVar8 | *(uint *)(*param_3 + 0xf);
  if (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0x5b) {
    uVar10 = uVar8 | *(uint *)(uVar10 + 0xb);
  }
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pIVar1;
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = uVar10;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
  }
  set_script(this,puVar4);
  local_48 = *param_3;
  uVar8 = SharedFunctionInfo::HasOuterScopeInfo((SharedFunctionInfo *)&local_48);
  if ((uVar8 & 1) != 0) {
    uVar8 = *param_3;
    uVar7 = *(uint *)(uVar8 + 3);
    pIVar5 = (Isolate *)(uVar8 & 0xffffffff00000000);
    if ((uVar7 == 0x84) ||
       (((uVar7 & 1) != 0 &&
        (*(ushort *)(((ulong)pIVar5 | 7) + (ulong)*(uint *)(((ulong)pIVar5 | (ulong)uVar7) - 1)) -
         0x95 < 2)))) {
      uVar8 = (ulong)pIVar5 | (ulong)*(uint *)(uVar8 + 0xb);
      this_00 = *(CanonicalHandleScope **)(param_1 + 0x95b8);
      if (this_00 != (CanonicalHandleScope *)0x0) goto LAB_011489e4;
LAB_011489b0:
      puVar6 = *(ulong **)pIVar1;
      if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar6 + 1;
      *puVar6 = uVar8;
    }
    else {
      if (((*(uint *)(uVar8 + 7) & 1) == 0) ||
         (uVar8 = (ulong)pIVar5 | (ulong)*(uint *)(uVar8 + 7),
         *(short *)(((ulong)pIVar5 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x83)) {
        uVar8 = ScopeInfo::Empty(pIVar5);
      }
      local_48 = uVar8;
      uVar8 = ScopeInfo::OuterScopeInfo((ScopeInfo *)&local_48);
      this_00 = *(CanonicalHandleScope **)(param_1 + 0x95b8);
      if (this_00 == (CanonicalHandleScope *)0x0) goto LAB_011489b0;
LAB_011489e4:
      puVar6 = (ulong *)CanonicalHandleScope::Lookup(this_00,uVar8);
    }
    *(ulong **)(this + 0x58) = puVar6;
  }
  uVar9 = *param_3 & 0xffffffff00000000;
  uVar10 = uVar9 | *(uint *)(*param_3 + 0xf);
  uVar8 = uVar10;
  if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0x5b) {
    uVar8 = uVar9 | *(uint *)(uVar10 + 0xb);
  }
  if (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x65) {
    if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0x5b) {
      uVar10 = uVar9 | *(uint *)(uVar10 + 0xb);
    }
    uVar7 = *(uint *)(this + 8) & 0xbfffffff;
    if ((*(byte *)(uVar10 + 0x2f) & 8) != 0) {
      uVar7 = *(uint *)(this + 8) | 0x40000000;
    }
  }
  else {
    uVar7 = *(uint *)(this + 8) & 0xbfffffff;
  }
  *(uint *)(this + 8) = uVar7;
  if (*(int *)(param_1 + 0xb814) == 1) {
    uVar8 = *param_3 & 0xffffffff00000000;
    local_48 = uVar8 | *(uint *)(*param_3 + 0xb);
    if (*(short *)((uVar8 | 7) + (ulong)*(uint *)(local_48 - 1)) == 0x9e) {
      uVar8 = FeedbackMetadata::HasTypeProfileSlot((FeedbackMetadata *)&local_48);
      uVar7 = *(uint *)(this + 8);
    }
    else {
      local_48 = *puVar4;
      uVar8 = Script::IsUserJavaScript((Script *)&local_48);
      uVar7 = *(uint *)(this + 8);
    }
    if ((uVar8 & 1) != 0) {
      uVar7 = uVar7 | 0x200;
      goto LAB_01148ae0;
    }
  }
  uVar7 = uVar7 & 0xfffffdff;
LAB_01148ae0:
  *(uint *)(this + 8) = uVar7;
  return;
}

