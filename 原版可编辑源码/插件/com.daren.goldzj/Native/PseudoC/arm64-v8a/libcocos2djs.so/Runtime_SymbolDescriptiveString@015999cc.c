
/* v8::internal::Runtime_SymbolDescriptiveString(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_SymbolDescriptiveString(int param_1,ulong *param_2,Isolate *param_3)

{
  int iVar1;
  Isolate *pIVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  IncrementalStringBuilder aIStack_68 [8];
  int local_60;
  int local_58;
  int local_54;
  long *local_48;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar10 = FUN_01599e40(param_1,param_2,param_3);
    return uVar10;
  }
  pIVar2 = param_3 + 0x95a0;
  lVar3 = *(long *)pIVar2;
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *param_2;
  if (((uVar7 & 1) != 0) &&
     (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x40)) {
    IncrementalStringBuilder::IncrementalStringBuilder(aIStack_68,param_3);
    lVar8 = (long)local_54;
    local_54 = local_54 + 1;
    if (local_60 == 0) {
      *(undefined1 *)(*local_48 + lVar8 + 0xb) = 0x53;
      if (local_54 == local_58) {
        IncrementalStringBuilder::Extend(aIStack_68);
      }
      iVar1 = local_54 + 1;
      *(undefined1 *)(*local_48 + (long)local_54 + 0xb) = 0x79;
      local_54 = iVar1;
      if (iVar1 == local_58) {
        IncrementalStringBuilder::Extend(aIStack_68);
      }
      iVar1 = local_54 + 1;
      *(undefined1 *)(*local_48 + (long)local_54 + 0xb) = 0x6d;
      local_54 = iVar1;
      if (iVar1 == local_58) {
        IncrementalStringBuilder::Extend(aIStack_68);
      }
      iVar1 = local_54 + 1;
      *(undefined1 *)(*local_48 + (long)local_54 + 0xb) = 0x62;
      local_54 = iVar1;
      if (iVar1 == local_58) {
        IncrementalStringBuilder::Extend(aIStack_68);
      }
      iVar1 = local_54 + 1;
      *(undefined1 *)(*local_48 + (long)local_54 + 0xb) = 0x6f;
      local_54 = iVar1;
      if (iVar1 == local_58) {
        IncrementalStringBuilder::Extend(aIStack_68);
      }
      iVar1 = local_54 + 1;
      *(undefined1 *)(*local_48 + (long)local_54 + 0xb) = 0x6c;
      local_54 = iVar1;
      if (iVar1 == local_58) {
        IncrementalStringBuilder::Extend(aIStack_68);
      }
      *(undefined1 *)(*local_48 + (long)local_54 + 0xb) = 0x28;
    }
    else {
      *(undefined2 *)(*local_48 + lVar8 * 2 + 0xb) = 0x53;
      if (local_54 == local_58) {
        IncrementalStringBuilder::Extend(aIStack_68);
      }
      iVar1 = local_54 + 1;
      *(undefined2 *)(*local_48 + (long)local_54 * 2 + 0xb) = 0x79;
      local_54 = iVar1;
      if (iVar1 == local_58) {
        IncrementalStringBuilder::Extend(aIStack_68);
      }
      iVar1 = local_54 + 1;
      *(undefined2 *)(*local_48 + (long)local_54 * 2 + 0xb) = 0x6d;
      local_54 = iVar1;
      if (iVar1 == local_58) {
        IncrementalStringBuilder::Extend(aIStack_68);
      }
      iVar1 = local_54 + 1;
      *(undefined2 *)(*local_48 + (long)local_54 * 2 + 0xb) = 0x62;
      local_54 = iVar1;
      if (iVar1 == local_58) {
        IncrementalStringBuilder::Extend(aIStack_68);
      }
      iVar1 = local_54 + 1;
      *(undefined2 *)(*local_48 + (long)local_54 * 2 + 0xb) = 0x6f;
      local_54 = iVar1;
      if (iVar1 == local_58) {
        IncrementalStringBuilder::Extend(aIStack_68);
      }
      iVar1 = local_54 + 1;
      *(undefined2 *)(*local_48 + (long)local_54 * 2 + 0xb) = 0x6c;
      local_54 = iVar1;
      if (iVar1 == local_58) {
        IncrementalStringBuilder::Extend(aIStack_68);
      }
      *(undefined2 *)(*local_48 + (long)local_54 * 2 + 0xb) = 0x28;
    }
    local_54 = local_54 + 1;
    if (local_54 == local_58) {
      IncrementalStringBuilder::Extend(aIStack_68);
    }
    uVar7 = *param_2 & 0xffffffff00000000;
    uVar9 = uVar7 | *(uint *)(*param_2 + 0xb);
    if (*(ushort *)((uVar7 | 7) + (ulong)*(uint *)(uVar9 - 1)) < 0x40) {
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)pIVar2;
        if (puVar5 == *(ulong **)(param_3 + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar2 = puVar5 + 1;
        *puVar5 = uVar9;
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar9);
      }
      IncrementalStringBuilder::AppendString(aIStack_68,puVar5);
    }
    lVar8 = (long)local_54;
    local_54 = local_54 + 1;
    if (local_60 == 0) {
      *(undefined1 *)(*local_48 + lVar8 + 0xb) = 0x29;
    }
    else {
      *(undefined2 *)(*local_48 + lVar8 * 2 + 0xb) = 0x29;
    }
    if (local_54 == local_58) {
      IncrementalStringBuilder::Extend(aIStack_68);
    }
    puVar6 = (undefined8 *)IncrementalStringBuilder::Finish(aIStack_68);
    if (puVar6 == (undefined8 *)0x0) {
      uVar10 = *(undefined8 *)(param_3 + 0x180);
    }
    else {
      uVar10 = *puVar6;
    }
    *(long *)pIVar2 = lVar3;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar4) {
      *(long *)(param_3 + 0x95a8) = lVar4;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsSymbol()");
}

