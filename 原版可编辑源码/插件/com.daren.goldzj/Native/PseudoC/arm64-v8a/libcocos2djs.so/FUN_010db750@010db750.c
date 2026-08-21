
void FUN_010db750(ulong *param_1)

{
  int iVar1;
  uint uVar2;
  ulong *puVar3;
  char cVar4;
  ushort uVar5;
  long lVar6;
  Isolate *pIVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  IncrementalStringBuilder aIStack_60 [8];
  int local_58;
  int local_50;
  int local_4c;
  long *local_40;
  ulong local_38;
  
  pIVar7 = (Isolate *)((ulong)*(uint *)((long)param_1 + 4) << 0x20);
  v8::internal::IncrementalStringBuilder::IncrementalStringBuilder(aIStack_60,pIVar7);
  if (local_58 == 0) {
    lVar9 = (long)local_4c;
    local_4c = local_4c + 1;
    *(undefined1 *)(*local_40 + lVar9 + 0xb) = 0x66;
    if (local_4c == local_50) {
      v8::internal::IncrementalStringBuilder::Extend(aIStack_60);
    }
    iVar1 = local_4c + 1;
    *(undefined1 *)(*local_40 + (long)local_4c + 0xb) = 0x75;
    local_4c = iVar1;
    if (iVar1 == local_50) {
      v8::internal::IncrementalStringBuilder::Extend(aIStack_60);
    }
    iVar1 = local_4c + 1;
    *(undefined1 *)(*local_40 + (long)local_4c + 0xb) = 0x6e;
    local_4c = iVar1;
    if (iVar1 == local_50) {
      v8::internal::IncrementalStringBuilder::Extend(aIStack_60);
    }
    iVar1 = local_4c + 1;
    *(undefined1 *)(*local_40 + (long)local_4c + 0xb) = 99;
    local_4c = iVar1;
    if (iVar1 == local_50) {
      v8::internal::IncrementalStringBuilder::Extend(aIStack_60);
    }
    iVar1 = local_4c + 1;
    *(undefined1 *)(*local_40 + (long)local_4c + 0xb) = 0x74;
    local_4c = iVar1;
    if (iVar1 == local_50) {
      v8::internal::IncrementalStringBuilder::Extend(aIStack_60);
    }
    iVar1 = local_4c + 1;
    *(undefined1 *)(*local_40 + (long)local_4c + 0xb) = 0x69;
    local_4c = iVar1;
    if (iVar1 == local_50) {
      v8::internal::IncrementalStringBuilder::Extend(aIStack_60);
    }
    iVar1 = local_4c + 1;
    *(undefined1 *)(*local_40 + (long)local_4c + 0xb) = 0x6f;
    local_4c = iVar1;
    if (iVar1 == local_50) {
      v8::internal::IncrementalStringBuilder::Extend(aIStack_60);
    }
    iVar1 = local_4c + 1;
    *(undefined1 *)(*local_40 + (long)local_4c + 0xb) = 0x6e;
    local_4c = iVar1;
    if (iVar1 == local_50) {
      v8::internal::IncrementalStringBuilder::Extend(aIStack_60);
    }
    iVar1 = local_4c + 1;
    *(undefined1 *)(*local_40 + (long)local_4c + 0xb) = 0x20;
    local_4c = iVar1;
    if (iVar1 == local_50) {
      v8::internal::IncrementalStringBuilder::Extend(aIStack_60);
    }
  }
  else {
    uVar5 = 0x66;
    lVar9 = 1;
    do {
      lVar6 = (long)local_4c;
      local_4c = local_4c + 1;
      *(ushort *)(*local_40 + lVar6 * 2 + 0xb) = uVar5;
      if (local_4c == local_50) {
        v8::internal::IncrementalStringBuilder::Extend(aIStack_60);
      }
      uVar5 = (ushort)(byte)"  virtual bound function "[lVar9 + 0x10];
      lVar9 = lVar9 + 1;
    } while (lVar9 != 10);
  }
  uVar11 = *param_1;
  uVar2 = *(uint *)(uVar11 + 7);
  uVar10 = uVar11 & 0xffffffff00000000;
  uVar8 = uVar10 | uVar2;
  if (((uVar2 & 1) == 0) || (*(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x83)) {
    if (uVar2 != 0) goto joined_r0x010dba08;
  }
  else {
    local_38 = uVar8;
    uVar8 = v8::internal::ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_38);
    if ((uVar8 & 1) != 0) {
      uVar2 = *(uint *)(uVar11 + 7);
      uVar8 = uVar10 | uVar2;
joined_r0x010dba08:
      if (((uVar2 & 1) == 0) || (*(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x83))
      goto LAB_010dba48;
      local_38 = uVar8;
      uVar11 = v8::internal::ScopeInfo::HasFunctionName((ScopeInfo *)&local_38);
      if ((uVar11 & 1) != 0) {
        local_38 = uVar8;
        uVar8 = v8::internal::ScopeInfo::FunctionName((ScopeInfo *)&local_38);
        goto LAB_010dba48;
      }
    }
  }
  uVar8 = *(ulong *)(uVar10 + 200);
LAB_010dba48:
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar3 = (ulong *)v8::internal::HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar8;
  }
  else {
    puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar8);
  }
  v8::internal::IncrementalStringBuilder::AppendString(aIStack_60,puVar3);
  if (local_58 == 0) {
    cVar4 = '(';
    lVar9 = 1;
    do {
      lVar6 = (long)local_4c;
      local_4c = local_4c + 1;
      *(char *)(*local_40 + lVar6 + 0xb) = cVar4;
      if (local_4c == local_50) {
        v8::internal::IncrementalStringBuilder::Extend(aIStack_60);
      }
      cVar4 = "() { [native code] }"[lVar9];
      lVar9 = lVar9 + 1;
    } while (lVar9 != 0x15);
  }
  else {
    uVar5 = 0x28;
    lVar9 = 1;
    do {
      lVar6 = (long)local_4c;
      local_4c = local_4c + 1;
      *(ushort *)(*local_40 + lVar6 * 2 + 0xb) = uVar5;
      if (local_4c == local_50) {
        v8::internal::IncrementalStringBuilder::Extend(aIStack_60);
      }
      uVar5 = (ushort)(byte)"() { [native code] }"[lVar9];
      lVar9 = lVar9 + 1;
    } while (lVar9 != 0x15);
  }
  lVar9 = v8::internal::IncrementalStringBuilder::Finish(aIStack_60);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
  return;
}

