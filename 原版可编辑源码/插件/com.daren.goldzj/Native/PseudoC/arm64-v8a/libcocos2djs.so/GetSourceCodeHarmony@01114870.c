
/* v8::internal::SharedFunctionInfo::GetSourceCodeHarmony(v8::internal::Handle<v8::internal::SharedFunctionInfo>)
    */

Isolate * v8::internal::SharedFunctionInfo::GetSourceCodeHarmony(ulong *param_1)

{
  Isolate *pIVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  Isolate *pIVar5;
  ulong *puVar6;
  ulong *puVar7;
  ushort uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  Isolate *pIVar14;
  ulong local_90;
  int local_88;
  int local_80;
  int local_7c;
  long *local_70;
  ulong local_68;
  
  pIVar14 = (Isolate *)(*param_1 & 0xffffffff00000000);
  uVar9 = (ulong)pIVar14 | (ulong)*(uint *)(*param_1 + 0xf);
  uVar10 = (ulong)pIVar14 | 7;
  uVar11 = uVar9;
  if (*(short *)(uVar10 + *(uint *)(uVar9 - 1)) == 0x5b) {
    uVar11 = (ulong)*(uint *)(uVar9 + 0xb);
  }
  if ((uint)uVar11 == *(uint *)(pIVar14 + 0xa0)) {
LAB_011148fc:
    return pIVar14 + 0xa0;
  }
  uVar11 = uVar9;
  if (*(short *)(uVar10 + *(uint *)(uVar9 - 1)) == 0x5b) {
    uVar11 = (ulong)pIVar14 | (ulong)*(uint *)(uVar9 + 0xb);
  }
  if ((*(uint *)(uVar11 + 3) == *(uint *)(pIVar14 + 0xa0)) && ((*(uint *)(uVar11 + 3) & 1) != 0))
  goto LAB_011148fc;
  if (*(short *)(uVar10 + *(uint *)(uVar9 - 1)) == 0x5b) {
    uVar9 = (ulong)pIVar14 | (ulong)*(uint *)(uVar9 + 0xb);
  }
  pIVar1 = pIVar14 + 0x95b8;
  uVar11 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 3);
  if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
    pIVar5 = *(Isolate **)(pIVar14 + 0x95a0);
    if (pIVar5 == *(Isolate **)(pIVar14 + 0x95a8)) {
      pIVar5 = (Isolate *)HandleScope::Extend(pIVar14);
    }
    *(Isolate **)(pIVar14 + 0x95a0) = pIVar5 + 8;
    *(ulong *)pIVar5 = uVar11;
  }
  else {
    pIVar5 = (Isolate *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar1,uVar11);
  }
  local_90 = *param_1;
  uVar8 = *(ushort *)(local_90 + 0x19);
  if (uVar8 == 0xffff) {
    iVar3 = -1;
  }
  else {
    iVar3 = StartPosition((SharedFunctionInfo *)&local_90);
    iVar3 = iVar3 - (uint)uVar8;
  }
  local_90 = *param_1;
  iVar4 = EndPosition((SharedFunctionInfo *)&local_90);
  if ((iVar3 != 0) || (*(int *)(*(ulong *)pIVar5 + 7) != iVar4)) {
    pIVar5 = (Isolate *)Factory::NewProperSubString((Factory *)pIVar14,pIVar5,iVar3);
  }
  if ((*(uint *)(*param_1 + 0x1b) & 0x380) != 0x200) {
    return pIVar5;
  }
  IncrementalStringBuilder::IncrementalStringBuilder((IncrementalStringBuilder *)&local_90,pIVar14);
  if (local_88 == 0) {
    lVar13 = (long)local_7c;
    local_7c = local_7c + 1;
    *(undefined1 *)(*local_70 + lVar13 + 0xb) = 0x66;
    if (local_7c == local_80) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_90);
    }
    iVar3 = local_7c + 1;
    *(undefined1 *)(*local_70 + (long)local_7c + 0xb) = 0x75;
    local_7c = iVar3;
    if (iVar3 == local_80) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_90);
    }
    iVar3 = local_7c + 1;
    *(undefined1 *)(*local_70 + (long)local_7c + 0xb) = 0x6e;
    local_7c = iVar3;
    if (iVar3 == local_80) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_90);
    }
    iVar3 = local_7c + 1;
    *(undefined1 *)(*local_70 + (long)local_7c + 0xb) = 99;
    local_7c = iVar3;
    if (iVar3 == local_80) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_90);
    }
    iVar3 = local_7c + 1;
    *(undefined1 *)(*local_70 + (long)local_7c + 0xb) = 0x74;
    local_7c = iVar3;
    if (iVar3 == local_80) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_90);
    }
    iVar3 = local_7c + 1;
    *(undefined1 *)(*local_70 + (long)local_7c + 0xb) = 0x69;
    local_7c = iVar3;
    if (iVar3 == local_80) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_90);
    }
    iVar3 = local_7c + 1;
    *(undefined1 *)(*local_70 + (long)local_7c + 0xb) = 0x6f;
    local_7c = iVar3;
    if (iVar3 == local_80) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_90);
    }
    iVar3 = local_7c + 1;
    *(undefined1 *)(*local_70 + (long)local_7c + 0xb) = 0x6e;
    local_7c = iVar3;
    if (iVar3 == local_80) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_90);
    }
    iVar3 = local_7c + 1;
    *(undefined1 *)(*local_70 + (long)local_7c + 0xb) = 0x20;
    local_7c = iVar3;
    if (iVar3 == local_80) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_90);
    }
  }
  else {
    uVar8 = 0x66;
    lVar13 = 1;
    do {
      lVar12 = (long)local_7c;
      local_7c = local_7c + 1;
      *(ushort *)(*local_70 + lVar12 * 2 + 0xb) = uVar8;
      if (local_7c == local_80) {
        IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_90);
      }
      uVar8 = (ushort)(byte)"  virtual bound function "[lVar13 + 0x10];
      lVar13 = lVar13 + 1;
    } while (lVar13 != 10);
  }
  uVar10 = *param_1;
  uVar2 = *(uint *)(uVar10 + 7);
  uVar9 = uVar10 & 0xffffffff00000000;
  uVar11 = uVar9 | uVar2;
  if (((uVar2 & 1) == 0) || (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x83)) {
    if (uVar2 != 0) goto joined_r0x01114cac;
  }
  else {
    local_68 = uVar11;
    uVar11 = ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_68);
    if ((uVar11 & 1) != 0) {
      uVar2 = *(uint *)(uVar10 + 7);
      uVar11 = uVar9 | uVar2;
joined_r0x01114cac:
      if (((uVar2 & 1) == 0) || (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x83))
      goto LAB_01114cec;
      local_68 = uVar11;
      uVar10 = ScopeInfo::HasFunctionName((ScopeInfo *)&local_68);
      if ((uVar10 & 1) != 0) {
        local_68 = uVar11;
        uVar11 = ScopeInfo::FunctionName((ScopeInfo *)&local_68);
        goto LAB_01114cec;
      }
    }
  }
  uVar11 = *(ulong *)(uVar9 + 200);
LAB_01114cec:
  if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar14 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar14 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar14);
    }
    *(ulong **)(pIVar14 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar11;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar1,uVar11);
  }
  IncrementalStringBuilder::AppendString((IncrementalStringBuilder *)&local_90,puVar6);
  lVar13 = (long)local_7c;
  local_7c = local_7c + 1;
  if (local_88 == 0) {
    *(undefined1 *)(*local_70 + lVar13 + 0xb) = 0x28;
  }
  else {
    *(undefined2 *)(*local_70 + lVar13 * 2 + 0xb) = 0x28;
  }
  if (local_7c == local_80) {
    IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_90);
  }
  uVar9 = *param_1 & 0xffffffff00000000;
  uVar11 = uVar9 | *(uint *)(*param_1 + 0xf);
  if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0x5b) {
    uVar11 = uVar9 | *(uint *)(uVar11 + 0xb);
  }
  uVar11 = uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 + 0x23);
  if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar14 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar14 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar14);
    }
    *(ulong **)(pIVar14 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar11;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar1,uVar11);
    uVar11 = *puVar6;
  }
  uVar2 = *(uint *)(uVar11 + 3);
  if (1 < (int)uVar2) {
    iVar3 = 0;
    uVar11 = 0;
    while( true ) {
      uVar9 = *puVar6 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar6 + (long)iVar3 + 7);
      if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)(pIVar14 + 0x95a0);
        if (puVar7 == *(ulong **)(pIVar14 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(pIVar14);
        }
        *(ulong **)(pIVar14 + 0x95a0) = puVar7 + 1;
        *puVar7 = uVar9;
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar1,uVar9);
      }
      IncrementalStringBuilder::AppendString((IncrementalStringBuilder *)&local_90,puVar7);
      uVar11 = uVar11 + 1;
      iVar3 = iVar3 + 4;
      if (uVar2 >> 1 <= uVar11) break;
      if (uVar11 != 0) {
        lVar13 = (long)local_7c;
        local_7c = local_7c + 1;
        if (local_88 == 0) {
          *(undefined1 *)(*local_70 + lVar13 + 0xb) = 0x2c;
          if (local_7c == local_80) {
            IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_90);
          }
          *(undefined1 *)(*local_70 + (long)local_7c + 0xb) = 0x20;
        }
        else {
          *(undefined2 *)(*local_70 + lVar13 * 2 + 0xb) = 0x2c;
          if (local_7c == local_80) {
            IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_90);
          }
          *(undefined2 *)(*local_70 + (long)local_7c * 2 + 0xb) = 0x20;
        }
        local_7c = local_7c + 1;
        if (local_7c == local_80) {
          IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_90);
        }
      }
    }
  }
  lVar13 = (long)local_7c;
  local_7c = local_7c + 1;
  if (local_88 == 0) {
    *(undefined1 *)(*local_70 + lVar13 + 0xb) = 0x29;
    if (local_7c == local_80) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_90);
    }
    iVar3 = local_7c + 1;
    *(undefined1 *)(*local_70 + (long)local_7c + 0xb) = 0x20;
    local_7c = iVar3;
    if (iVar3 == local_80) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_90);
    }
    iVar3 = local_7c + 1;
    *(undefined1 *)(*local_70 + (long)local_7c + 0xb) = 0x7b;
    local_7c = iVar3;
    if (iVar3 == local_80) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_90);
    }
    *(undefined1 *)(*local_70 + (long)local_7c + 0xb) = 10;
  }
  else {
    *(undefined2 *)(*local_70 + lVar13 * 2 + 0xb) = 0x29;
    if (local_7c == local_80) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_90);
    }
    iVar3 = local_7c + 1;
    *(undefined2 *)(*local_70 + (long)local_7c * 2 + 0xb) = 0x20;
    local_7c = iVar3;
    if (iVar3 == local_80) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_90);
    }
    iVar3 = local_7c + 1;
    *(undefined2 *)(*local_70 + (long)local_7c * 2 + 0xb) = 0x7b;
    local_7c = iVar3;
    if (iVar3 == local_80) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_90);
    }
    *(undefined2 *)(*local_70 + (long)local_7c * 2 + 0xb) = 10;
  }
  local_7c = local_7c + 1;
  if (local_7c == local_80) {
    IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_90);
  }
  IncrementalStringBuilder::AppendString((IncrementalStringBuilder *)&local_90,pIVar5);
  lVar13 = (long)local_7c;
  local_7c = local_7c + 1;
  if (local_88 == 0) {
    *(undefined1 *)(*local_70 + lVar13 + 0xb) = 10;
    if (local_7c == local_80) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_90);
    }
    *(undefined1 *)(*local_70 + (long)local_7c + 0xb) = 0x7d;
  }
  else {
    *(undefined2 *)(*local_70 + lVar13 * 2 + 0xb) = 10;
    if (local_7c == local_80) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_90);
    }
    *(undefined2 *)(*local_70 + (long)local_7c * 2 + 0xb) = 0x7d;
  }
  local_7c = local_7c + 1;
  if (local_7c == local_80) {
    IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_90);
  }
  pIVar14 = (Isolate *)IncrementalStringBuilder::Finish((IncrementalStringBuilder *)&local_90);
  if (pIVar14 != (Isolate *)0x0) {
    return pIVar14;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

