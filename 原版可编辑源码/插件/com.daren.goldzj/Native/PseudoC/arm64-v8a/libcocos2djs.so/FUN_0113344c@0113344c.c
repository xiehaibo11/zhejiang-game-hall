
void FUN_0113344c(ulong *param_1,IncrementalStringBuilder *param_2)

{
  internal *piVar16;
  byte bVar1;
  long lVar2;
  ulong *puVar3;
  Isolate *pIVar4;
  long *plVar5;
  ulong *puVar6;
  undefined8 uVar7;
  byte *pbVar8;
  char cVar9;
  ushort uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_ac [100];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar3 = (ulong *)v8::internal::StackTraceFrame::GetScriptNameOrSourceUrl();
  uVar12 = *puVar3;
  if (((uVar12 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)))) {
    pIVar4 = (Isolate *)(*param_1 & 0xffffffff00000000);
    uVar13 = *(uint *)(*param_1 + 0xb);
    if (uVar13 == *(uint *)(pIVar4 + 0xa0)) {
      v8::internal::StackTraceFrame::InitializeFrameInfo(param_1);
      uVar13 = *(uint *)(*param_1 + 0xb);
      pIVar4 = (Isolate *)(*param_1 & 0xffffffff00000000);
    }
    uVar12 = (ulong)pIVar4 | (ulong)uVar13;
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar6 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar6 = (ulong *)v8::internal::HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar12;
      bVar1 = *(byte *)(uVar12 + 0x37);
    }
    else {
      plVar5 = (long *)v8::internal::CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar12);
      bVar1 = *(byte *)(*plVar5 + 0x37);
    }
    if ((bVar1 >> 1 & 1) != 0) {
      uVar7 = v8::internal::StackTraceFrame::GetEvalOrigin(param_1);
      v8::internal::IncrementalStringBuilder::AppendString(param_2,uVar7);
      iVar11 = *(int *)(param_2 + 0x14);
      lVar15 = **(long **)(param_2 + 0x20);
      *(int *)(param_2 + 0x14) = iVar11 + 1;
      if (*(int *)(param_2 + 8) == 0) {
        *(undefined1 *)(lVar15 + iVar11 + 0xb) = 0x2c;
        iVar11 = *(int *)(param_2 + 0x14);
        if (iVar11 == *(int *)(param_2 + 0x10)) {
          v8::internal::IncrementalStringBuilder::Extend(param_2);
          iVar11 = *(int *)(param_2 + 0x14);
        }
        lVar15 = **(long **)(param_2 + 0x20);
        *(int *)(param_2 + 0x14) = iVar11 + 1;
        *(undefined1 *)(lVar15 + iVar11 + 0xb) = 0x20;
      }
      else {
        *(undefined2 *)(lVar15 + (long)iVar11 * 2 + 0xb) = 0x2c;
        iVar11 = *(int *)(param_2 + 0x14);
        if (iVar11 == *(int *)(param_2 + 0x10)) {
          v8::internal::IncrementalStringBuilder::Extend(param_2);
          iVar11 = *(int *)(param_2 + 0x14);
        }
        lVar15 = **(long **)(param_2 + 0x20);
        *(int *)(param_2 + 0x14) = iVar11 + 1;
        *(undefined2 *)(lVar15 + (long)iVar11 * 2 + 0xb) = 0x20;
      }
      if (*(int *)(param_2 + 0x14) == *(int *)(param_2 + 0x10)) {
        v8::internal::IncrementalStringBuilder::Extend(param_2);
      }
    }
  }
  uVar12 = *puVar3;
  if ((((uVar12 & 1) == 0) ||
      (0x3f < *(ushort *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)))) ||
     (*(int *)(uVar12 + 7) < 1)) {
    if (*(int *)(param_2 + 8) == 0) {
      cVar9 = '<';
      lVar15 = 1;
      do {
        iVar11 = *(int *)(param_2 + 0x14);
        lVar14 = **(long **)(param_2 + 0x20);
        *(int *)(param_2 + 0x14) = iVar11 + 1;
        *(char *)(lVar14 + iVar11 + 0xb) = cVar9;
        if (*(int *)(param_2 + 0x14) == *(int *)(param_2 + 0x10)) {
          v8::internal::IncrementalStringBuilder::Extend(param_2);
        }
        cVar9 = "<anonymous>"[lVar15];
        lVar15 = lVar15 + 1;
      } while (lVar15 != 0xc);
    }
    else {
      uVar10 = 0x3c;
      lVar15 = 1;
      do {
        iVar11 = *(int *)(param_2 + 0x14);
        lVar14 = **(long **)(param_2 + 0x20);
        *(int *)(param_2 + 0x14) = iVar11 + 1;
        *(ushort *)(lVar14 + (long)iVar11 * 2 + 0xb) = uVar10;
        if (*(int *)(param_2 + 0x14) == *(int *)(param_2 + 0x10)) {
          v8::internal::IncrementalStringBuilder::Extend(param_2);
        }
        uVar10 = (ushort)(byte)"<anonymous>"[lVar15];
        lVar15 = lVar15 + 1;
      } while (lVar15 != 0xc);
    }
  }
  else {
    v8::internal::IncrementalStringBuilder::AppendString(param_2,puVar3);
  }
  pIVar4 = (Isolate *)(*param_1 & 0xffffffff00000000);
  uVar13 = *(uint *)(*param_1 + 0xb);
  if (uVar13 == *(uint *)(pIVar4 + 0xa0)) {
    v8::internal::StackTraceFrame::InitializeFrameInfo(param_1);
    uVar13 = *(uint *)(*param_1 + 0xb);
    pIVar4 = (Isolate *)(*param_1 & 0xffffffff00000000);
  }
  uVar12 = (ulong)pIVar4 | (ulong)uVar13;
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar3 = (ulong *)v8::internal::HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar12;
  }
  else {
    puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar12);
    uVar12 = *puVar3;
  }
  piVar16._0_4_ = (internal *)(*(int *)(uVar12 + 3) >> 1);
  if (1 < (uint)(piVar16._0_4_ + 1)) {
    iVar11 = *(int *)(param_2 + 0x14);
    lVar15 = **(long **)(param_2 + 0x20);
    *(int *)(param_2 + 0x14) = iVar11 + 1;
    if (*(int *)(param_2 + 8) == 0) {
      *(undefined1 *)(lVar15 + iVar11 + 0xb) = 0x3a;
    }
    else {
      *(undefined2 *)(lVar15 + (long)iVar11 * 2 + 0xb) = 0x3a;
    }
    if (*(int *)(param_2 + 0x14) == *(int *)(param_2 + 0x10)) {
      v8::internal::IncrementalStringBuilder::Extend(param_2);
    }
    pbVar8 = (byte *)v8::internal::IntToCString(piVar16._0_4_,auStack_ac,100);
    uVar10 = (ushort)*pbVar8;
    if (*(int *)(param_2 + 8) == 0) {
      while (uVar10 != 0) {
        pbVar8 = pbVar8 + 1;
        iVar11 = *(int *)(param_2 + 0x14);
        lVar15 = **(long **)(param_2 + 0x20);
        *(int *)(param_2 + 0x14) = iVar11 + 1;
        *(char *)(lVar15 + iVar11 + 0xb) = (char)uVar10;
        if (*(int *)(param_2 + 0x14) == *(int *)(param_2 + 0x10)) {
          v8::internal::IncrementalStringBuilder::Extend(param_2);
        }
        uVar10 = (ushort)*pbVar8;
      }
    }
    else if (uVar10 != 0) {
      do {
        pbVar8 = pbVar8 + 1;
        iVar11 = *(int *)(param_2 + 0x14);
        lVar15 = **(long **)(param_2 + 0x20);
        *(int *)(param_2 + 0x14) = iVar11 + 1;
        *(ushort *)(lVar15 + (long)iVar11 * 2 + 0xb) = uVar10;
        if (*(int *)(param_2 + 0x14) == *(int *)(param_2 + 0x10)) {
          v8::internal::IncrementalStringBuilder::Extend(param_2);
        }
        uVar10 = (ushort)*pbVar8;
      } while (*pbVar8 != 0);
    }
    pIVar4 = (Isolate *)(*param_1 & 0xffffffff00000000);
    uVar13 = *(uint *)(*param_1 + 0xb);
    if (uVar13 == *(uint *)(pIVar4 + 0xa0)) {
      v8::internal::StackTraceFrame::InitializeFrameInfo(param_1);
      uVar13 = *(uint *)(*param_1 + 0xb);
      pIVar4 = (Isolate *)(*param_1 & 0xffffffff00000000);
    }
    uVar12 = (ulong)pIVar4 | (ulong)uVar13;
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar3 = (ulong *)v8::internal::HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar12;
    }
    else {
      puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar12);
      uVar12 = *puVar3;
    }
    piVar16._0_4_ = (internal *)(*(int *)(uVar12 + 7) >> 1);
    if (1 < (uint)(piVar16._0_4_ + 1)) {
      iVar11 = *(int *)(param_2 + 0x14);
      lVar15 = **(long **)(param_2 + 0x20);
      *(int *)(param_2 + 0x14) = iVar11 + 1;
      if (*(int *)(param_2 + 8) == 0) {
        *(undefined1 *)(lVar15 + iVar11 + 0xb) = 0x3a;
      }
      else {
        *(undefined2 *)(lVar15 + (long)iVar11 * 2 + 0xb) = 0x3a;
      }
      if (*(int *)(param_2 + 0x14) == *(int *)(param_2 + 0x10)) {
        v8::internal::IncrementalStringBuilder::Extend(param_2);
      }
      pbVar8 = (byte *)v8::internal::IntToCString(piVar16._0_4_,auStack_ac,100);
      uVar10 = (ushort)*pbVar8;
      if (*(int *)(param_2 + 8) == 0) {
        while (uVar10 != 0) {
          pbVar8 = pbVar8 + 1;
          iVar11 = *(int *)(param_2 + 0x14);
          lVar15 = **(long **)(param_2 + 0x20);
          *(int *)(param_2 + 0x14) = iVar11 + 1;
          *(char *)(lVar15 + iVar11 + 0xb) = (char)uVar10;
          if (*(int *)(param_2 + 0x14) == *(int *)(param_2 + 0x10)) {
            v8::internal::IncrementalStringBuilder::Extend(param_2);
          }
          uVar10 = (ushort)*pbVar8;
        }
      }
      else if (uVar10 != 0) {
        do {
          pbVar8 = pbVar8 + 1;
          iVar11 = *(int *)(param_2 + 0x14);
          lVar15 = **(long **)(param_2 + 0x20);
          *(int *)(param_2 + 0x14) = iVar11 + 1;
          *(ushort *)(lVar15 + (long)iVar11 * 2 + 0xb) = uVar10;
          if (*(int *)(param_2 + 0x14) == *(int *)(param_2 + 0x10)) {
            v8::internal::IncrementalStringBuilder::Extend(param_2);
          }
          uVar10 = (ushort)*pbVar8;
        } while (*pbVar8 != 0);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

