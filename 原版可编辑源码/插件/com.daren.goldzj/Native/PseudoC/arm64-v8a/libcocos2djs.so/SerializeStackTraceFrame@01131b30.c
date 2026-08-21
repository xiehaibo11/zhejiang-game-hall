
/* v8::internal::SerializeStackTraceFrame(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::StackTraceFrame>, v8::internal::IncrementalStringBuilder*) */

void v8::internal::SerializeStackTraceFrame
               (undefined8 param_1,ulong *param_2,IncrementalStringBuilder *param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  byte *pbVar10;
  undefined8 uVar11;
  char cVar12;
  ushort uVar13;
  Isolate *pIVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ushort uVar23;
  ulong uVar24;
  undefined **local_100;
  long local_f8;
  undefined8 uStack_f0;
  char local_e0;
  uint local_dc;
  long local_d8;
  undefined **local_d0;
  long local_c8;
  undefined8 uStack_c0;
  char local_b0;
  uint local_ac;
  long local_a8;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pIVar14 = (Isolate *)(*param_2 & 0xffffffff00000000);
  uVar15 = *(uint *)(*param_2 + 0xb);
  if (uVar15 == *(uint *)(pIVar14 + 0xa0)) {
    StackTraceFrame::InitializeFrameInfo(param_2);
    uVar15 = *(uint *)(*param_2 + 0xb);
    pIVar14 = (Isolate *)(*param_2 & 0xffffffff00000000);
  }
  uVar24 = (ulong)pIVar14 | (ulong)uVar15;
  if (*(CanonicalHandleScope **)(pIVar14 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(pIVar14 + 0x95a0);
    if (puVar7 == *(ulong **)(pIVar14 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(pIVar14);
    }
    *(ulong **)(pIVar14 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar24;
    if ((*(byte *)(uVar24 + 0x37) >> 4 & 1) == 0) goto LAB_01131bbc;
LAB_01131ca0:
    puVar7 = (ulong *)StackTraceFrame::GetFunctionName(param_2);
    uVar24 = *puVar7;
    if ((((uVar24 & 1) != 0) &&
        (*(ushort *)((uVar24 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar24 - 1)) < 0x40)) &&
       (0 < *(int *)(uVar24 + 7))) {
      IncrementalStringBuilder::AppendString(param_3,puVar7);
      iVar5 = *(int *)(param_3 + 0x14);
      lVar21 = **(long **)(param_3 + 0x20);
      *(int *)(param_3 + 0x14) = iVar5 + 1;
      if (*(int *)(param_3 + 8) == 0) {
        *(undefined1 *)(lVar21 + iVar5 + 0xb) = 0x20;
        iVar5 = *(int *)(param_3 + 0x14);
        if (iVar5 == *(int *)(param_3 + 0x10)) {
          IncrementalStringBuilder::Extend(param_3);
          iVar5 = *(int *)(param_3 + 0x14);
        }
        lVar21 = **(long **)(param_3 + 0x20);
        *(int *)(param_3 + 0x14) = iVar5 + 1;
        *(undefined1 *)(lVar21 + iVar5 + 0xb) = 0x28;
      }
      else {
        *(undefined2 *)(lVar21 + (long)iVar5 * 2 + 0xb) = 0x20;
        iVar5 = *(int *)(param_3 + 0x14);
        if (iVar5 == *(int *)(param_3 + 0x10)) {
          IncrementalStringBuilder::Extend(param_3);
          iVar5 = *(int *)(param_3 + 0x14);
        }
        lVar21 = **(long **)(param_3 + 0x20);
        *(int *)(param_3 + 0x14) = iVar5 + 1;
        *(undefined2 *)(lVar21 + (long)iVar5 * 2 + 0xb) = 0x28;
      }
      if (*(int *)(param_3 + 0x14) == *(int *)(param_3 + 0x10)) {
        IncrementalStringBuilder::Extend(param_3);
      }
    }
    FUN_0113344c(param_2,param_3);
    uVar24 = *puVar7;
    if ((((uVar24 & 1) == 0) ||
        (0x3f < *(ushort *)((uVar24 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar24 - 1)))) ||
       (*(int *)(uVar24 + 7) < 1)) goto LAB_011333cc;
LAB_01133380:
    iVar5 = *(int *)(param_3 + 0x14);
    lVar21 = **(long **)(param_3 + 0x20);
    *(int *)(param_3 + 0x14) = iVar5 + 1;
    if (*(int *)(param_3 + 8) == 0) {
      *(undefined1 *)(lVar21 + iVar5 + 0xb) = 0x29;
    }
    else {
      *(undefined2 *)(lVar21 + (long)iVar5 * 2 + 0xb) = 0x29;
    }
  }
  else {
    plVar6 = (long *)CanonicalHandleScope::Lookup
                               (*(CanonicalHandleScope **)(pIVar14 + 0x95b8),uVar24);
    if ((*(byte *)(*plVar6 + 0x37) >> 4 & 1) != 0) goto LAB_01131ca0;
LAB_01131bbc:
    pIVar14 = (Isolate *)(*param_2 & 0xffffffff00000000);
    uVar15 = *(uint *)(*param_2 + 0xb);
    if (uVar15 == *(uint *)(pIVar14 + 0xa0)) {
      StackTraceFrame::InitializeFrameInfo(param_2);
      uVar15 = *(uint *)(*param_2 + 0xb);
      pIVar14 = (Isolate *)(*param_2 & 0xffffffff00000000);
    }
    uVar24 = (ulong)pIVar14 | (ulong)uVar15;
    if (*(CanonicalHandleScope **)(pIVar14 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)(pIVar14 + 0x95a0);
      if (puVar7 == *(ulong **)(pIVar14 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(pIVar14);
      }
      *(ulong **)(pIVar14 + 0x95a0) = puVar7 + 1;
      *puVar7 = uVar24;
      bVar1 = *(byte *)(uVar24 + 0x37);
    }
    else {
      plVar6 = (long *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(pIVar14 + 0x95b8),uVar24);
      bVar1 = *(byte *)(*plVar6 + 0x37);
    }
    if ((bVar1 >> 3 & 1) != 0) {
      puVar7 = (ulong *)StackTraceFrame::GetWasmModuleName(param_2);
      puVar8 = (ulong *)StackTraceFrame::GetFunctionName(param_2);
      uVar24 = *puVar7;
      if (((uVar24 & 1) == 0) || ((int)uVar24 != *(int *)((uVar24 & 0xffffffff00000000) + 0xb0))) {
        IncrementalStringBuilder::AppendString(param_3,puVar7);
        uVar24 = *puVar8;
        if (((uVar24 & 1) == 0) || ((int)uVar24 != *(int *)((uVar24 & 0xffffffff00000000) + 0xb0)))
        {
          iVar5 = *(int *)(param_3 + 0x14);
          lVar21 = **(long **)(param_3 + 0x20);
          *(int *)(param_3 + 0x14) = iVar5 + 1;
          if (*(int *)(param_3 + 8) == 0) {
            *(undefined1 *)(lVar21 + iVar5 + 0xb) = 0x2e;
          }
          else {
            *(undefined2 *)(lVar21 + (long)iVar5 * 2 + 0xb) = 0x2e;
          }
          if (*(int *)(param_3 + 0x14) == *(int *)(param_3 + 0x10)) {
            IncrementalStringBuilder::Extend(param_3);
          }
          goto LAB_0113211c;
        }
LAB_01132128:
        iVar5 = *(int *)(param_3 + 0x14);
        lVar21 = **(long **)(param_3 + 0x20);
        *(int *)(param_3 + 0x14) = iVar5 + 1;
        if (*(int *)(param_3 + 8) == 0) {
          *(undefined1 *)(lVar21 + iVar5 + 0xb) = 0x20;
          iVar5 = *(int *)(param_3 + 0x14);
          if (iVar5 == *(int *)(param_3 + 0x10)) {
            IncrementalStringBuilder::Extend(param_3);
            iVar5 = *(int *)(param_3 + 0x14);
          }
          lVar21 = **(long **)(param_3 + 0x20);
          *(int *)(param_3 + 0x14) = iVar5 + 1;
          *(undefined1 *)(lVar21 + iVar5 + 0xb) = 0x28;
        }
        else {
          *(undefined2 *)(lVar21 + (long)iVar5 * 2 + 0xb) = 0x20;
          iVar5 = *(int *)(param_3 + 0x14);
          if (iVar5 == *(int *)(param_3 + 0x10)) {
            IncrementalStringBuilder::Extend(param_3);
            iVar5 = *(int *)(param_3 + 0x14);
          }
          lVar21 = **(long **)(param_3 + 0x20);
          *(int *)(param_3 + 0x14) = iVar5 + 1;
          *(undefined2 *)(lVar21 + (long)iVar5 * 2 + 0xb) = 0x28;
        }
        if (*(int *)(param_3 + 0x14) == *(int *)(param_3 + 0x10)) {
          IncrementalStringBuilder::Extend(param_3);
        }
        bVar4 = true;
      }
      else {
        uVar24 = *puVar8;
        if (((uVar24 & 1) == 0) || ((int)uVar24 != *(int *)((uVar24 & 0xffffffff00000000) + 0xb0)))
        {
LAB_0113211c:
          IncrementalStringBuilder::AppendString(param_3,puVar8);
          goto LAB_01132128;
        }
        bVar4 = false;
      }
      pIVar14 = (Isolate *)(*param_2 & 0xffffffff00000000);
      uVar15 = *(uint *)(*param_2 + 0xb);
      if (uVar15 == *(uint *)(pIVar14 + 0xa0)) {
        StackTraceFrame::InitializeFrameInfo(param_2);
        uVar15 = *(uint *)(*param_2 + 0xb);
        pIVar14 = (Isolate *)(*param_2 & 0xffffffff00000000);
      }
      uVar24 = (ulong)pIVar14 | (ulong)uVar15;
      if (*(CanonicalHandleScope **)(pIVar14 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)(pIVar14 + 0x95a0);
        if (puVar7 == *(ulong **)(pIVar14 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(pIVar14);
        }
        *(ulong **)(pIVar14 + 0x95a0) = puVar7 + 1;
        *puVar7 = uVar24;
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar14 + 0x95b8),uVar24);
        uVar24 = *puVar7;
      }
      iVar5 = *(int *)(uVar24 + 0x13);
      lVar21 = 1;
      uVar13 = 0x77;
      if (*(int *)(param_3 + 8) == 0) {
        do {
          iVar2 = *(int *)(param_3 + 0x14);
          lVar20 = **(long **)(param_3 + 0x20);
          *(int *)(param_3 + 0x14) = iVar2 + 1;
          *(char *)(lVar20 + iVar2 + 0xb) = (char)uVar13;
          if (*(int *)(param_3 + 0x14) == *(int *)(param_3 + 0x10)) {
            IncrementalStringBuilder::Extend(param_3);
          }
          uVar13 = (ushort)(byte)"wasm-function["[lVar21];
          lVar21 = lVar21 + 1;
        } while (lVar21 != 0xf);
      }
      else {
        do {
          iVar2 = *(int *)(param_3 + 0x14);
          lVar20 = **(long **)(param_3 + 0x20);
          *(int *)(param_3 + 0x14) = iVar2 + 1;
          *(ushort *)(lVar20 + (long)iVar2 * 2 + 0xb) = uVar13;
          if (*(int *)(param_3 + 0x14) == *(int *)(param_3 + 0x10)) {
            IncrementalStringBuilder::Extend(param_3);
          }
          uVar13 = (ushort)(byte)"wasm-function["[lVar21];
          lVar21 = lVar21 + 1;
        } while (lVar21 != 0xf);
      }
      pbVar10 = (byte *)IntToCString((internal *)(iVar5 >> 1),&local_d0,100);
      uVar13 = (ushort)*pbVar10;
      if (*(int *)(param_3 + 8) == 0) {
        if (uVar13 != 0) {
          do {
            pbVar10 = pbVar10 + 1;
            iVar5 = *(int *)(param_3 + 0x14);
            lVar21 = **(long **)(param_3 + 0x20);
            *(int *)(param_3 + 0x14) = iVar5 + 1;
            *(char *)(lVar21 + iVar5 + 0xb) = (char)uVar13;
            if (*(int *)(param_3 + 0x14) == *(int *)(param_3 + 0x10)) {
              IncrementalStringBuilder::Extend(param_3);
            }
            uVar13 = (ushort)*pbVar10;
          } while (uVar13 != 0);
          goto LAB_011323bc;
        }
LAB_0113241c:
        iVar5 = *(int *)(param_3 + 0x14);
        lVar21 = **(long **)(param_3 + 0x20);
        *(int *)(param_3 + 0x14) = iVar5 + 1;
        *(undefined1 *)(lVar21 + iVar5 + 0xb) = 0x5d;
        iVar5 = *(int *)(param_3 + 0x14);
        if (iVar5 == *(int *)(param_3 + 0x10)) {
          IncrementalStringBuilder::Extend(param_3);
          iVar5 = *(int *)(param_3 + 0x14);
        }
        lVar21 = **(long **)(param_3 + 0x20);
        *(int *)(param_3 + 0x14) = iVar5 + 1;
        *(undefined1 *)(lVar21 + iVar5 + 0xb) = 0x3a;
      }
      else {
        if (uVar13 != 0) {
          do {
            pbVar10 = pbVar10 + 1;
            iVar5 = *(int *)(param_3 + 0x14);
            lVar21 = **(long **)(param_3 + 0x20);
            *(int *)(param_3 + 0x14) = iVar5 + 1;
            *(ushort *)(lVar21 + (long)iVar5 * 2 + 0xb) = uVar13;
            if (*(int *)(param_3 + 0x14) == *(int *)(param_3 + 0x10)) {
              IncrementalStringBuilder::Extend(param_3);
            }
            uVar13 = (ushort)*pbVar10;
          } while (*pbVar10 != 0);
LAB_011323bc:
          if (*(int *)(param_3 + 8) == 0) goto LAB_0113241c;
        }
        iVar5 = *(int *)(param_3 + 0x14);
        lVar21 = **(long **)(param_3 + 0x20);
        *(int *)(param_3 + 0x14) = iVar5 + 1;
        *(undefined2 *)(lVar21 + (long)iVar5 * 2 + 0xb) = 0x5d;
        iVar5 = *(int *)(param_3 + 0x14);
        if (iVar5 == *(int *)(param_3 + 0x10)) {
          IncrementalStringBuilder::Extend(param_3);
          iVar5 = *(int *)(param_3 + 0x14);
        }
        lVar21 = **(long **)(param_3 + 0x20);
        *(int *)(param_3 + 0x14) = iVar5 + 1;
        *(undefined2 *)(lVar21 + (long)iVar5 * 2 + 0xb) = 0x3a;
      }
      if (*(int *)(param_3 + 0x14) == *(int *)(param_3 + 0x10)) {
        IncrementalStringBuilder::Extend(param_3);
      }
      pIVar14 = (Isolate *)(*param_2 & 0xffffffff00000000);
      uVar15 = *(uint *)(*param_2 + 0xb);
      if (uVar15 == *(uint *)(pIVar14 + 0xa0)) {
        StackTraceFrame::InitializeFrameInfo(param_2);
        uVar15 = *(uint *)(*param_2 + 0xb);
        pIVar14 = (Isolate *)(*param_2 & 0xffffffff00000000);
      }
      uVar24 = (ulong)pIVar14 | (ulong)uVar15;
      if (*(CanonicalHandleScope **)(pIVar14 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)(pIVar14 + 0x95a0);
        if (puVar7 == *(ulong **)(pIVar14 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(pIVar14);
        }
        *(ulong **)(pIVar14 + 0x95a0) = puVar7 + 1;
        *puVar7 = uVar24;
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar14 + 0x95b8),uVar24);
        uVar24 = *puVar7;
      }
      iVar5 = *(int *)(uVar24 + 7) >> 1;
      iVar2 = 0;
      if (iVar5 != -1) {
        iVar2 = iVar5;
      }
      SNPrintF(&local_d0,0x10,"0x%x",iVar2);
      uVar13 = (ushort)(byte)local_d0._0_1_;
      if (*(int *)(param_3 + 8) == 0) {
        if (uVar13 != 0) {
          pbVar10 = (byte *)((ulong)&local_d0 | 1);
          do {
            iVar5 = *(int *)(param_3 + 0x14);
            lVar21 = **(long **)(param_3 + 0x20);
            *(int *)(param_3 + 0x14) = iVar5 + 1;
            *(char *)(lVar21 + iVar5 + 0xb) = (char)uVar13;
            if (*(int *)(param_3 + 0x14) == *(int *)(param_3 + 0x10)) {
              IncrementalStringBuilder::Extend(param_3);
            }
            uVar13 = (ushort)*pbVar10;
            pbVar10 = pbVar10 + 1;
          } while (uVar13 != 0);
        }
      }
      else if (uVar13 != 0) {
        pbVar10 = (byte *)((ulong)&local_d0 | 1);
        do {
          iVar5 = *(int *)(param_3 + 0x14);
          lVar21 = **(long **)(param_3 + 0x20);
          *(int *)(param_3 + 0x14) = iVar5 + 1;
          *(ushort *)(lVar21 + (long)iVar5 * 2 + 0xb) = uVar13;
          if (*(int *)(param_3 + 0x14) == *(int *)(param_3 + 0x10)) {
            IncrementalStringBuilder::Extend(param_3);
          }
          bVar1 = *pbVar10;
          uVar13 = (ushort)bVar1;
          pbVar10 = pbVar10 + 1;
        } while (bVar1 != 0);
      }
      if (!bVar4) goto LAB_011333cc;
      goto LAB_01133380;
    }
    puVar7 = (ulong *)StackTraceFrame::GetFunctionName(param_2);
    pIVar14 = (Isolate *)(*param_2 & 0xffffffff00000000);
    uVar15 = *(uint *)(*param_2 + 0xb);
    if (uVar15 == *(uint *)(pIVar14 + 0xa0)) {
      StackTraceFrame::InitializeFrameInfo(param_2);
      uVar15 = *(uint *)(*param_2 + 0xb);
      pIVar14 = (Isolate *)(*param_2 & 0xffffffff00000000);
    }
    uVar24 = (ulong)pIVar14 | (ulong)uVar15;
    if (*(CanonicalHandleScope **)(pIVar14 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)(pIVar14 + 0x95a0);
      if (puVar8 == *(ulong **)(pIVar14 + 0x95a8)) {
        puVar8 = (ulong *)HandleScope::Extend(pIVar14);
      }
      *(ulong **)(pIVar14 + 0x95a0) = puVar8 + 1;
      *puVar8 = uVar24;
    }
    else {
      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar14 + 0x95b8),uVar24);
      uVar24 = *puVar8;
    }
    uVar15 = *(uint *)(uVar24 + 0x37);
    pIVar14 = (Isolate *)(*param_2 & 0xffffffff00000000);
    uVar16 = *(uint *)(*param_2 + 0xb);
    if (uVar16 == *(uint *)(pIVar14 + 0xa0)) {
      StackTraceFrame::InitializeFrameInfo(param_2);
      uVar16 = *(uint *)(*param_2 + 0xb);
      pIVar14 = (Isolate *)(*param_2 & 0xffffffff00000000);
    }
    uVar24 = (ulong)pIVar14 | (ulong)uVar16;
    if (*(CanonicalHandleScope **)(pIVar14 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)(pIVar14 + 0x95a0);
      if (puVar8 == *(ulong **)(pIVar14 + 0x95a8)) {
        puVar8 = (ulong *)HandleScope::Extend(pIVar14);
      }
      *(ulong **)(pIVar14 + 0x95a0) = puVar8 + 1;
      *puVar8 = uVar24;
    }
    else {
      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar14 + 0x95b8),uVar24);
      uVar24 = *puVar8;
    }
    uVar16 = *(uint *)(uVar24 + 0x37);
    pIVar14 = (Isolate *)(*param_2 & 0xffffffff00000000);
    uVar17 = *(uint *)(*param_2 + 0xb);
    if (uVar17 == *(uint *)(pIVar14 + 0xa0)) {
      StackTraceFrame::InitializeFrameInfo(param_2);
      uVar17 = *(uint *)(*param_2 + 0xb);
      pIVar14 = (Isolate *)(*param_2 & 0xffffffff00000000);
    }
    uVar24 = (ulong)pIVar14 | (ulong)uVar17;
    if (*(CanonicalHandleScope **)(pIVar14 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)(pIVar14 + 0x95a0);
      if (puVar8 == *(ulong **)(pIVar14 + 0x95a8)) {
        puVar8 = (ulong *)HandleScope::Extend(pIVar14);
      }
      *(ulong **)(pIVar14 + 0x95a0) = puVar8 + 1;
      *puVar8 = uVar24;
    }
    else {
      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar14 + 0x95b8),uVar24);
      uVar24 = *puVar8;
    }
    uVar17 = *(uint *)(uVar24 + 0x37);
    pIVar14 = (Isolate *)(*param_2 & 0xffffffff00000000);
    uVar18 = *(uint *)(*param_2 + 0xb);
    if (uVar18 == *(uint *)(pIVar14 + 0xa0)) {
      StackTraceFrame::InitializeFrameInfo(param_2);
      uVar18 = *(uint *)(*param_2 + 0xb);
      pIVar14 = (Isolate *)(*param_2 & 0xffffffff00000000);
    }
    uVar24 = (ulong)pIVar14 | (ulong)uVar18;
    if (*(CanonicalHandleScope **)(pIVar14 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)(pIVar14 + 0x95a0);
      if (puVar8 == *(ulong **)(pIVar14 + 0x95a8)) {
        puVar8 = (ulong *)HandleScope::Extend(pIVar14);
      }
      *(ulong **)(pIVar14 + 0x95a0) = puVar8 + 1;
      *puVar8 = uVar24;
      uVar18 = *(uint *)(uVar24 + 0x37);
    }
    else {
      plVar6 = (long *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(pIVar14 + 0x95b8),uVar24);
      uVar18 = *(uint *)(*plVar6 + 0x37);
    }
    if ((uVar16 >> 7 & 1) != 0) {
      iVar5 = *(int *)(param_3 + 0x14);
      lVar21 = **(long **)(param_3 + 0x20);
      *(int *)(param_3 + 0x14) = iVar5 + 1;
      if (*(int *)(param_3 + 8) == 0) {
        *(undefined1 *)(lVar21 + iVar5 + 0xb) = 0x61;
        iVar5 = *(int *)(param_3 + 0x14);
        if (iVar5 == *(int *)(param_3 + 0x10)) {
          IncrementalStringBuilder::Extend(param_3);
          iVar5 = *(int *)(param_3 + 0x14);
        }
        lVar21 = **(long **)(param_3 + 0x20);
        *(int *)(param_3 + 0x14) = iVar5 + 1;
        *(undefined1 *)(lVar21 + iVar5 + 0xb) = 0x73;
        iVar5 = *(int *)(param_3 + 0x14);
        if (iVar5 == *(int *)(param_3 + 0x10)) {
          IncrementalStringBuilder::Extend(param_3);
          iVar5 = *(int *)(param_3 + 0x14);
        }
        lVar21 = **(long **)(param_3 + 0x20);
        *(int *)(param_3 + 0x14) = iVar5 + 1;
        *(undefined1 *)(lVar21 + iVar5 + 0xb) = 0x79;
        iVar5 = *(int *)(param_3 + 0x14);
        if (iVar5 == *(int *)(param_3 + 0x10)) {
          IncrementalStringBuilder::Extend(param_3);
          iVar5 = *(int *)(param_3 + 0x14);
        }
        lVar21 = **(long **)(param_3 + 0x20);
        *(int *)(param_3 + 0x14) = iVar5 + 1;
        *(undefined1 *)(lVar21 + iVar5 + 0xb) = 0x6e;
        iVar5 = *(int *)(param_3 + 0x14);
        if (iVar5 == *(int *)(param_3 + 0x10)) {
          IncrementalStringBuilder::Extend(param_3);
          iVar5 = *(int *)(param_3 + 0x14);
        }
        lVar21 = **(long **)(param_3 + 0x20);
        *(int *)(param_3 + 0x14) = iVar5 + 1;
        *(undefined1 *)(lVar21 + iVar5 + 0xb) = 99;
        iVar5 = *(int *)(param_3 + 0x14);
        if (iVar5 == *(int *)(param_3 + 0x10)) {
          IncrementalStringBuilder::Extend(param_3);
          iVar5 = *(int *)(param_3 + 0x14);
        }
        lVar21 = **(long **)(param_3 + 0x20);
        *(int *)(param_3 + 0x14) = iVar5 + 1;
        *(undefined1 *)(lVar21 + iVar5 + 0xb) = 0x20;
      }
      else {
        *(undefined2 *)(lVar21 + (long)iVar5 * 2 + 0xb) = 0x61;
        iVar5 = *(int *)(param_3 + 0x14);
        if (iVar5 == *(int *)(param_3 + 0x10)) {
          IncrementalStringBuilder::Extend(param_3);
          iVar5 = *(int *)(param_3 + 0x14);
        }
        lVar21 = **(long **)(param_3 + 0x20);
        *(int *)(param_3 + 0x14) = iVar5 + 1;
        *(undefined2 *)(lVar21 + (long)iVar5 * 2 + 0xb) = 0x73;
        iVar5 = *(int *)(param_3 + 0x14);
        if (iVar5 == *(int *)(param_3 + 0x10)) {
          IncrementalStringBuilder::Extend(param_3);
          iVar5 = *(int *)(param_3 + 0x14);
        }
        lVar21 = **(long **)(param_3 + 0x20);
        *(int *)(param_3 + 0x14) = iVar5 + 1;
        *(undefined2 *)(lVar21 + (long)iVar5 * 2 + 0xb) = 0x79;
        iVar5 = *(int *)(param_3 + 0x14);
        if (iVar5 == *(int *)(param_3 + 0x10)) {
          IncrementalStringBuilder::Extend(param_3);
          iVar5 = *(int *)(param_3 + 0x14);
        }
        lVar21 = **(long **)(param_3 + 0x20);
        *(int *)(param_3 + 0x14) = iVar5 + 1;
        *(undefined2 *)(lVar21 + (long)iVar5 * 2 + 0xb) = 0x6e;
        iVar5 = *(int *)(param_3 + 0x14);
        if (iVar5 == *(int *)(param_3 + 0x10)) {
          IncrementalStringBuilder::Extend(param_3);
          iVar5 = *(int *)(param_3 + 0x14);
        }
        lVar21 = **(long **)(param_3 + 0x20);
        *(int *)(param_3 + 0x14) = iVar5 + 1;
        *(undefined2 *)(lVar21 + (long)iVar5 * 2 + 0xb) = 99;
        iVar5 = *(int *)(param_3 + 0x14);
        if (iVar5 == *(int *)(param_3 + 0x10)) {
          IncrementalStringBuilder::Extend(param_3);
          iVar5 = *(int *)(param_3 + 0x14);
        }
        lVar21 = **(long **)(param_3 + 0x20);
        *(int *)(param_3 + 0x14) = iVar5 + 1;
        *(undefined2 *)(lVar21 + (long)iVar5 * 2 + 0xb) = 0x20;
      }
      if (*(int *)(param_3 + 0x14) == *(int *)(param_3 + 0x10)) {
        IncrementalStringBuilder::Extend(param_3);
      }
    }
    if ((uVar17 >> 8 & 1) == 0) {
      if ((uVar18 & 4) == 0 && (uVar15 & 0x40) == 0) {
        puVar8 = (ulong *)StackTraceFrame::GetTypeName(param_2);
        puVar7 = (ulong *)StackTraceFrame::GetMethodName(param_2);
        puVar9 = (ulong *)StackTraceFrame::GetFunctionName(param_2);
        uVar24 = *puVar9;
        if ((((uVar24 & 1) == 0) ||
            (0x3f < *(ushort *)((uVar24 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar24 - 1))))
           || (*(int *)(uVar24 + 7) < 1)) {
          uVar24 = *puVar8;
          if ((((uVar24 & 1) != 0) &&
              (*(ushort *)((uVar24 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar24 - 1)) < 0x40)
              ) && (0 < *(int *)(uVar24 + 7))) {
            IncrementalStringBuilder::AppendString(param_3,puVar8);
            iVar5 = *(int *)(param_3 + 0x14);
            lVar21 = **(long **)(param_3 + 0x20);
            *(int *)(param_3 + 0x14) = iVar5 + 1;
            if (*(int *)(param_3 + 8) == 0) {
              *(undefined1 *)(lVar21 + iVar5 + 0xb) = 0x2e;
            }
            else {
              *(undefined2 *)(lVar21 + (long)iVar5 * 2 + 0xb) = 0x2e;
            }
            if (*(int *)(param_3 + 0x14) == *(int *)(param_3 + 0x10)) {
              IncrementalStringBuilder::Extend(param_3);
            }
          }
          uVar24 = *puVar7;
          if ((((uVar24 & 1) != 0) &&
              (*(ushort *)((uVar24 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar24 - 1)) < 0x40)
              ) && (0 < *(int *)(uVar24 + 7))) goto LAB_01132e08;
          if (*(int *)(param_3 + 8) == 0) {
            cVar12 = '<';
            lVar21 = 1;
            do {
              iVar5 = *(int *)(param_3 + 0x14);
              lVar20 = **(long **)(param_3 + 0x20);
              *(int *)(param_3 + 0x14) = iVar5 + 1;
              *(char *)(lVar20 + iVar5 + 0xb) = cVar12;
              if (*(int *)(param_3 + 0x14) == *(int *)(param_3 + 0x10)) {
                IncrementalStringBuilder::Extend(param_3);
              }
              cVar12 = "<anonymous>"[lVar21];
              lVar21 = lVar21 + 1;
            } while (lVar21 != 0xc);
          }
          else {
            uVar13 = 0x3c;
            lVar21 = 1;
            do {
              iVar5 = *(int *)(param_3 + 0x14);
              lVar20 = **(long **)(param_3 + 0x20);
              *(int *)(param_3 + 0x14) = iVar5 + 1;
              *(ushort *)(lVar20 + (long)iVar5 * 2 + 0xb) = uVar13;
              if (*(int *)(param_3 + 0x14) == *(int *)(param_3 + 0x10)) {
                IncrementalStringBuilder::Extend(param_3);
              }
              uVar13 = (ushort)(byte)"<anonymous>"[lVar21];
              lVar21 = lVar21 + 1;
            } while (lVar21 != 0xc);
          }
        }
        else {
          uVar19 = *puVar8;
          if (((((uVar19 & 1) != 0) &&
               (*(ushort *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) < 0x40
               )) && (0 < *(int *)(uVar19 + 7))) &&
             ((*(int *)(uVar24 + 7) < *(int *)(uVar19 + 7) ||
              (iVar5 = String::IndexOf(param_1,puVar9,puVar8,0), iVar5 != 0)))) {
            IncrementalStringBuilder::AppendString(param_3,puVar8);
            iVar5 = *(int *)(param_3 + 0x14);
            lVar21 = **(long **)(param_3 + 0x20);
            *(int *)(param_3 + 0x14) = iVar5 + 1;
            if (*(int *)(param_3 + 8) == 0) {
              *(undefined1 *)(lVar21 + iVar5 + 0xb) = 0x2e;
            }
            else {
              *(undefined2 *)(lVar21 + (long)iVar5 * 2 + 0xb) = 0x2e;
            }
            if (*(int *)(param_3 + 0x14) == *(int *)(param_3 + 0x10)) {
              IncrementalStringBuilder::Extend(param_3);
            }
          }
          IncrementalStringBuilder::AppendString(param_3,puVar9);
          uVar24 = *puVar7;
          if ((((uVar24 & 1) != 0) &&
              (uVar19 = uVar24 & 0xffffffff00000000 | 7,
              *(ushort *)(uVar19 + *(uint *)(uVar24 - 1)) < 0x40)) &&
             ((((puVar9 != puVar7 && (0 < *(int *)(uVar24 + 7))) &&
               (((uVar22 = *puVar9, puVar7 == (ulong *)0x0 || (puVar9 == (ulong *)0x0)) ||
                (uVar22 != uVar24)))) &&
              (((*(ushort *)((uVar22 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar22 - 1)) <
                 0x20 && (*(ushort *)(uVar19 + *(uint *)(uVar24 - 1)) < 0x20)) ||
               (uVar24 = String::SlowEquals(param_1,puVar9,puVar7), (uVar24 & 1) == 0)))))) {
            uVar11 = String::Flatten(param_1,puVar9,0);
            FlatStringReader::FlatStringReader((FlatStringReader *)&local_d0,param_1,uVar11);
            uVar11 = String::Flatten(param_1,puVar7,0);
            FlatStringReader::FlatStringReader((FlatStringReader *)&local_100,param_1,uVar11);
            uVar24 = (ulong)local_dc;
            if ((int)local_dc < 0) {
              bVar4 = true;
            }
            else {
              if (0 < (int)local_ac) {
                uVar19 = (ulong)local_ac;
                do {
                  uVar22 = (ulong)((int)uVar19 - 1);
                  if (local_b0 == '\0') {
                    uVar13 = *(ushort *)(local_a8 + uVar22 * 2);
                  }
                  else {
                    uVar13 = (ushort)*(byte *)(local_a8 + uVar22);
                  }
                  if ((int)uVar24 == 0) {
                    bVar4 = uVar13 == 0x2e;
                    goto LAB_01133050;
                  }
                  if (local_e0 == '\0') {
                    uVar23 = *(ushort *)(local_d8 + -2 + uVar24 * 2);
                  }
                  else {
                    uVar23 = (ushort)*(byte *)(local_d8 + uVar24 + -1);
                  }
                  if (uVar13 != uVar23) break;
                  uVar22 = uVar19 - 1;
                  uVar24 = uVar24 - 1;
                  bVar4 = 0 < (long)uVar19;
                  uVar19 = uVar22;
                } while (uVar22 != 0 && bVar4);
              }
              bVar4 = false;
            }
LAB_01133050:
            local_100 = &PTR__Relocatable_01cacc40;
            *(undefined8 *)(local_f8 + 0xb790) = uStack_f0;
            *(undefined8 *)(local_c8 + 0xb790) = uStack_c0;
            local_d0 = local_100;
            if (!bVar4) {
              iVar5 = *(int *)(param_3 + 0x14);
              lVar21 = **(long **)(param_3 + 0x20);
              *(int *)(param_3 + 0x14) = iVar5 + 1;
              if (*(int *)(param_3 + 8) == 0) {
                *(undefined1 *)(lVar21 + iVar5 + 0xb) = 0x20;
                iVar5 = *(int *)(param_3 + 0x14);
                if (iVar5 == *(int *)(param_3 + 0x10)) {
                  IncrementalStringBuilder::Extend(param_3);
                  iVar5 = *(int *)(param_3 + 0x14);
                }
                lVar21 = **(long **)(param_3 + 0x20);
                *(int *)(param_3 + 0x14) = iVar5 + 1;
                *(undefined1 *)(lVar21 + iVar5 + 0xb) = 0x5b;
                iVar5 = *(int *)(param_3 + 0x14);
                if (iVar5 == *(int *)(param_3 + 0x10)) {
                  IncrementalStringBuilder::Extend(param_3);
                  iVar5 = *(int *)(param_3 + 0x14);
                }
                lVar21 = **(long **)(param_3 + 0x20);
                *(int *)(param_3 + 0x14) = iVar5 + 1;
                *(undefined1 *)(lVar21 + iVar5 + 0xb) = 0x61;
                iVar5 = *(int *)(param_3 + 0x14);
                if (iVar5 == *(int *)(param_3 + 0x10)) {
                  IncrementalStringBuilder::Extend(param_3);
                  iVar5 = *(int *)(param_3 + 0x14);
                }
                lVar21 = **(long **)(param_3 + 0x20);
                *(int *)(param_3 + 0x14) = iVar5 + 1;
                *(undefined1 *)(lVar21 + iVar5 + 0xb) = 0x73;
                iVar5 = *(int *)(param_3 + 0x14);
                if (iVar5 == *(int *)(param_3 + 0x10)) {
                  IncrementalStringBuilder::Extend(param_3);
                  iVar5 = *(int *)(param_3 + 0x14);
                }
                lVar21 = **(long **)(param_3 + 0x20);
                *(int *)(param_3 + 0x14) = iVar5 + 1;
                *(undefined1 *)(lVar21 + iVar5 + 0xb) = 0x20;
              }
              else {
                *(undefined2 *)(lVar21 + (long)iVar5 * 2 + 0xb) = 0x20;
                iVar5 = *(int *)(param_3 + 0x14);
                if (iVar5 == *(int *)(param_3 + 0x10)) {
                  IncrementalStringBuilder::Extend(param_3);
                  iVar5 = *(int *)(param_3 + 0x14);
                }
                lVar21 = **(long **)(param_3 + 0x20);
                *(int *)(param_3 + 0x14) = iVar5 + 1;
                *(undefined2 *)(lVar21 + (long)iVar5 * 2 + 0xb) = 0x5b;
                iVar5 = *(int *)(param_3 + 0x14);
                if (iVar5 == *(int *)(param_3 + 0x10)) {
                  IncrementalStringBuilder::Extend(param_3);
                  iVar5 = *(int *)(param_3 + 0x14);
                }
                lVar21 = **(long **)(param_3 + 0x20);
                *(int *)(param_3 + 0x14) = iVar5 + 1;
                *(undefined2 *)(lVar21 + (long)iVar5 * 2 + 0xb) = 0x61;
                iVar5 = *(int *)(param_3 + 0x14);
                if (iVar5 == *(int *)(param_3 + 0x10)) {
                  IncrementalStringBuilder::Extend(param_3);
                  iVar5 = *(int *)(param_3 + 0x14);
                }
                lVar21 = **(long **)(param_3 + 0x20);
                *(int *)(param_3 + 0x14) = iVar5 + 1;
                *(undefined2 *)(lVar21 + (long)iVar5 * 2 + 0xb) = 0x73;
                iVar5 = *(int *)(param_3 + 0x14);
                if (iVar5 == *(int *)(param_3 + 0x10)) {
                  IncrementalStringBuilder::Extend(param_3);
                  iVar5 = *(int *)(param_3 + 0x14);
                }
                lVar21 = **(long **)(param_3 + 0x20);
                *(int *)(param_3 + 0x14) = iVar5 + 1;
                *(undefined2 *)(lVar21 + (long)iVar5 * 2 + 0xb) = 0x20;
              }
              if (*(int *)(param_3 + 0x14) == *(int *)(param_3 + 0x10)) {
                IncrementalStringBuilder::Extend(param_3);
              }
              IncrementalStringBuilder::AppendString(param_3,puVar7);
              iVar5 = *(int *)(param_3 + 0x14);
              lVar21 = **(long **)(param_3 + 0x20);
              *(int *)(param_3 + 0x14) = iVar5 + 1;
              if (*(int *)(param_3 + 8) == 0) {
                *(undefined1 *)(lVar21 + iVar5 + 0xb) = 0x5d;
              }
              else {
                *(undefined2 *)(lVar21 + (long)iVar5 * 2 + 0xb) = 0x5d;
              }
              if (*(int *)(param_3 + 0x14) == *(int *)(param_3 + 0x10)) {
                IncrementalStringBuilder::Extend(param_3);
              }
            }
          }
        }
      }
      else {
        if ((uVar18 & 4) == 0) {
          uVar24 = *puVar7;
          if ((((uVar24 & 1) == 0) ||
              (0x3f < *(ushort *)((uVar24 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar24 - 1)))
              ) || (*(int *)(uVar24 + 7) < 1)) {
            FUN_0113344c(param_2,param_3);
            goto LAB_011333cc;
          }
        }
        else {
          iVar5 = *(int *)(param_3 + 0x14);
          lVar21 = **(long **)(param_3 + 0x20);
          *(int *)(param_3 + 0x14) = iVar5 + 1;
          if (*(int *)(param_3 + 8) == 0) {
            *(undefined1 *)(lVar21 + iVar5 + 0xb) = 0x6e;
            iVar5 = *(int *)(param_3 + 0x14);
            if (iVar5 == *(int *)(param_3 + 0x10)) {
              IncrementalStringBuilder::Extend(param_3);
              iVar5 = *(int *)(param_3 + 0x14);
            }
            lVar21 = **(long **)(param_3 + 0x20);
            *(int *)(param_3 + 0x14) = iVar5 + 1;
            *(undefined1 *)(lVar21 + iVar5 + 0xb) = 0x65;
            iVar5 = *(int *)(param_3 + 0x14);
            if (iVar5 == *(int *)(param_3 + 0x10)) {
              IncrementalStringBuilder::Extend(param_3);
              iVar5 = *(int *)(param_3 + 0x14);
            }
            lVar21 = **(long **)(param_3 + 0x20);
            *(int *)(param_3 + 0x14) = iVar5 + 1;
            *(undefined1 *)(lVar21 + iVar5 + 0xb) = 0x77;
            iVar5 = *(int *)(param_3 + 0x14);
            if (iVar5 == *(int *)(param_3 + 0x10)) {
              IncrementalStringBuilder::Extend(param_3);
              iVar5 = *(int *)(param_3 + 0x14);
            }
            lVar21 = **(long **)(param_3 + 0x20);
            *(int *)(param_3 + 0x14) = iVar5 + 1;
            *(undefined1 *)(lVar21 + iVar5 + 0xb) = 0x20;
          }
          else {
            *(undefined2 *)(lVar21 + (long)iVar5 * 2 + 0xb) = 0x6e;
            iVar5 = *(int *)(param_3 + 0x14);
            if (iVar5 == *(int *)(param_3 + 0x10)) {
              IncrementalStringBuilder::Extend(param_3);
              iVar5 = *(int *)(param_3 + 0x14);
            }
            lVar21 = **(long **)(param_3 + 0x20);
            *(int *)(param_3 + 0x14) = iVar5 + 1;
            *(undefined2 *)(lVar21 + (long)iVar5 * 2 + 0xb) = 0x65;
            iVar5 = *(int *)(param_3 + 0x14);
            if (iVar5 == *(int *)(param_3 + 0x10)) {
              IncrementalStringBuilder::Extend(param_3);
              iVar5 = *(int *)(param_3 + 0x14);
            }
            lVar21 = **(long **)(param_3 + 0x20);
            *(int *)(param_3 + 0x14) = iVar5 + 1;
            *(undefined2 *)(lVar21 + (long)iVar5 * 2 + 0xb) = 0x77;
            iVar5 = *(int *)(param_3 + 0x14);
            if (iVar5 == *(int *)(param_3 + 0x10)) {
              IncrementalStringBuilder::Extend(param_3);
              iVar5 = *(int *)(param_3 + 0x14);
            }
            lVar21 = **(long **)(param_3 + 0x20);
            *(int *)(param_3 + 0x14) = iVar5 + 1;
            *(undefined2 *)(lVar21 + (long)iVar5 * 2 + 0xb) = 0x20;
          }
          if (*(int *)(param_3 + 0x14) == *(int *)(param_3 + 0x10)) {
            IncrementalStringBuilder::Extend(param_3);
          }
          uVar24 = *puVar7;
          if ((((uVar24 & 1) == 0) ||
              (0x3f < *(ushort *)((uVar24 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar24 - 1)))
              ) || (*(int *)(uVar24 + 7) < 1)) {
            if (*(int *)(param_3 + 8) == 0) {
              cVar12 = '<';
              lVar21 = 1;
              do {
                iVar5 = *(int *)(param_3 + 0x14);
                lVar20 = **(long **)(param_3 + 0x20);
                *(int *)(param_3 + 0x14) = iVar5 + 1;
                *(char *)(lVar20 + iVar5 + 0xb) = cVar12;
                if (*(int *)(param_3 + 0x14) == *(int *)(param_3 + 0x10)) {
                  IncrementalStringBuilder::Extend(param_3);
                }
                cVar12 = "<anonymous>"[lVar21];
                lVar21 = lVar21 + 1;
              } while (lVar21 != 0xc);
            }
            else {
              uVar13 = 0x3c;
              lVar21 = 1;
              do {
                iVar5 = *(int *)(param_3 + 0x14);
                lVar20 = **(long **)(param_3 + 0x20);
                *(int *)(param_3 + 0x14) = iVar5 + 1;
                *(ushort *)(lVar20 + (long)iVar5 * 2 + 0xb) = uVar13;
                if (*(int *)(param_3 + 0x14) == *(int *)(param_3 + 0x10)) {
                  IncrementalStringBuilder::Extend(param_3);
                }
                uVar13 = (ushort)(byte)"<anonymous>"[lVar21];
                lVar21 = lVar21 + 1;
              } while (lVar21 != 0xc);
            }
            goto LAB_011332c0;
          }
        }
LAB_01132e08:
        IncrementalStringBuilder::AppendString(param_3,puVar7);
      }
LAB_011332c0:
      iVar5 = *(int *)(param_3 + 0x14);
      lVar21 = **(long **)(param_3 + 0x20);
      *(int *)(param_3 + 0x14) = iVar5 + 1;
      if (*(int *)(param_3 + 8) == 0) {
        *(undefined1 *)(lVar21 + iVar5 + 0xb) = 0x20;
        iVar5 = *(int *)(param_3 + 0x14);
        if (iVar5 == *(int *)(param_3 + 0x10)) {
          IncrementalStringBuilder::Extend(param_3);
          iVar5 = *(int *)(param_3 + 0x14);
        }
        lVar21 = **(long **)(param_3 + 0x20);
        *(int *)(param_3 + 0x14) = iVar5 + 1;
        *(undefined1 *)(lVar21 + iVar5 + 0xb) = 0x28;
      }
      else {
        *(undefined2 *)(lVar21 + (long)iVar5 * 2 + 0xb) = 0x20;
        iVar5 = *(int *)(param_3 + 0x14);
        if (iVar5 == *(int *)(param_3 + 0x10)) {
          IncrementalStringBuilder::Extend(param_3);
          iVar5 = *(int *)(param_3 + 0x14);
        }
        lVar21 = **(long **)(param_3 + 0x20);
        *(int *)(param_3 + 0x14) = iVar5 + 1;
        *(undefined2 *)(lVar21 + (long)iVar5 * 2 + 0xb) = 0x28;
      }
      if (*(int *)(param_3 + 0x14) == *(int *)(param_3 + 0x10)) {
        IncrementalStringBuilder::Extend(param_3);
      }
      FUN_0113344c(param_2,param_3);
      goto LAB_01133380;
    }
    if (*(int *)(param_3 + 8) == 0) {
      cVar12 = 'P';
      lVar21 = 1;
      do {
        iVar5 = *(int *)(param_3 + 0x14);
        lVar20 = **(long **)(param_3 + 0x20);
        *(int *)(param_3 + 0x14) = iVar5 + 1;
        *(char *)(lVar20 + iVar5 + 0xb) = cVar12;
        if (*(int *)(param_3 + 0x14) == *(int *)(param_3 + 0x10)) {
          IncrementalStringBuilder::Extend(param_3);
        }
        cVar12 = "Promise.all (index "[lVar21];
        lVar21 = lVar21 + 1;
      } while (lVar21 != 0x14);
    }
    else {
      uVar13 = 0x50;
      lVar21 = 1;
      do {
        iVar5 = *(int *)(param_3 + 0x14);
        lVar20 = **(long **)(param_3 + 0x20);
        *(int *)(param_3 + 0x14) = iVar5 + 1;
        *(ushort *)(lVar20 + (long)iVar5 * 2 + 0xb) = uVar13;
        if (*(int *)(param_3 + 0x14) == *(int *)(param_3 + 0x10)) {
          IncrementalStringBuilder::Extend(param_3);
        }
        uVar13 = (ushort)(byte)"Promise.all (index "[lVar21];
        lVar21 = lVar21 + 1;
      } while (lVar21 != 0x14);
    }
    pIVar14 = (Isolate *)(*param_2 & 0xffffffff00000000);
    uVar15 = *(uint *)(*param_2 + 0xb);
    if (uVar15 == *(uint *)(pIVar14 + 0xa0)) {
      StackTraceFrame::InitializeFrameInfo(param_2);
      uVar15 = *(uint *)(*param_2 + 0xb);
      pIVar14 = (Isolate *)(*param_2 & 0xffffffff00000000);
    }
    uVar24 = (ulong)pIVar14 | (ulong)uVar15;
    if (*(CanonicalHandleScope **)(pIVar14 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)(pIVar14 + 0x95a0);
      if (puVar7 == *(ulong **)(pIVar14 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(pIVar14);
      }
      *(ulong **)(pIVar14 + 0x95a0) = puVar7 + 1;
      *puVar7 = uVar24;
    }
    else {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar14 + 0x95b8),uVar24);
      uVar24 = *puVar7;
    }
    pbVar10 = (byte *)IntToCString((internal *)(*(int *)(uVar24 + 0xb) >> 1),&local_d0,100);
    uVar13 = (ushort)*pbVar10;
    if (*(int *)(param_3 + 8) == 0) {
      if (uVar13 != 0) {
        do {
          pbVar10 = pbVar10 + 1;
          iVar5 = *(int *)(param_3 + 0x14);
          lVar21 = **(long **)(param_3 + 0x20);
          *(int *)(param_3 + 0x14) = iVar5 + 1;
          *(char *)(lVar21 + iVar5 + 0xb) = (char)uVar13;
          if (*(int *)(param_3 + 0x14) == *(int *)(param_3 + 0x10)) {
            IncrementalStringBuilder::Extend(param_3);
          }
          uVar13 = (ushort)*pbVar10;
        } while (uVar13 != 0);
        goto LAB_01132a0c;
      }
LAB_01132a38:
      iVar5 = *(int *)(param_3 + 0x14);
      lVar21 = **(long **)(param_3 + 0x20);
      *(int *)(param_3 + 0x14) = iVar5 + 1;
      *(undefined1 *)(lVar21 + iVar5 + 0xb) = 0x29;
    }
    else {
      if (uVar13 != 0) {
        do {
          pbVar10 = pbVar10 + 1;
          iVar5 = *(int *)(param_3 + 0x14);
          lVar21 = **(long **)(param_3 + 0x20);
          *(int *)(param_3 + 0x14) = iVar5 + 1;
          *(ushort *)(lVar21 + (long)iVar5 * 2 + 0xb) = uVar13;
          if (*(int *)(param_3 + 0x14) == *(int *)(param_3 + 0x10)) {
            IncrementalStringBuilder::Extend(param_3);
          }
          uVar13 = (ushort)*pbVar10;
        } while (*pbVar10 != 0);
LAB_01132a0c:
        if (*(int *)(param_3 + 8) == 0) goto LAB_01132a38;
      }
      iVar5 = *(int *)(param_3 + 0x14);
      lVar21 = **(long **)(param_3 + 0x20);
      *(int *)(param_3 + 0x14) = iVar5 + 1;
      *(undefined2 *)(lVar21 + (long)iVar5 * 2 + 0xb) = 0x29;
    }
  }
  if (*(int *)(param_3 + 0x14) == *(int *)(param_3 + 0x10)) {
    IncrementalStringBuilder::Extend(param_3);
  }
LAB_011333cc:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

