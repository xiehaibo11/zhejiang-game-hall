
undefined8 FUN_00f4d738(Isolate *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  Isolate *pIVar1;
  undefined4 uVar2;
  long lVar3;
  BuiltinExitFrame *pBVar4;
  FrameSummary *pFVar5;
  FrameSummary *pFVar6;
  long *plVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  ulong uVar11;
  ulong *puVar12;
  CanonicalHandleScope *this;
  undefined8 uVar13;
  int iVar14;
  undefined4 uVar15;
  ulong uVar16;
  ulong uVar17;
  uint *puVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  FrameSummary *local_690;
  FrameSummary *local_688;
  undefined8 uStack_680;
  Isolate *local_678;
  uint local_670;
  int local_66c;
  undefined8 local_668;
  ushort local_660;
  undefined1 local_65e;
  long *local_658;
  StackFrameIterator aSStack_650 [1416];
  BuiltinExitFrame *local_c8;
  WasmCodeRefScope aWStack_b0 [48];
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> aPStack_80 [16];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
  PerIsolateAssertScope(aPStack_80,param_1);
  v8::internal::wasm::WasmCodeRefScope::WasmCodeRefScope(aWStack_b0);
  local_65e = (int)param_4 == 1;
  local_660 = 1;
  local_670 = (uint)((ulong)param_3 >> 0x20);
  local_66c = (int)param_3;
  local_658 = (long *)0x0;
  if (local_670 < 3) {
    local_660 = (ushort)(byte)(0x101 >> (ulong)((local_670 & 3) << 3));
  }
  iVar14 = local_66c;
  if (9 < local_66c) {
    iVar14 = 10;
  }
  local_678 = param_1;
  local_668 = param_2;
  local_658 = (long *)v8::internal::Factory::NewFrameArray((Factory *)param_1,iVar14);
  v8::internal::StackFrameIterator::StackFrameIterator(aSStack_650,param_1);
  pBVar4 = local_c8;
  while ((pBVar4 != (BuiltinExitFrame *)0x0 && (*(int *)(*local_658 + 7) >> 1 < local_66c))) {
    local_c8 = pBVar4;
    uVar8 = (**(code **)(*(long *)pBVar4 + 8))(pBVar4);
    if (uVar8 < 0x16) {
      if ((1 << (ulong)(uVar8 & 0x1f) & 0x119130U) == 0) {
        if ((uVar8 == 0x15) && ((param_4 >> 0x20 & 1) != 0)) {
          v8::internal::FrameArrayBuilder::AppendBuiltinExitFrame
                    ((FrameArrayBuilder *)&local_678,pBVar4);
        }
      }
      else {
        local_688 = (FrameSummary *)0x0;
        uStack_680 = 0;
        local_690 = (FrameSummary *)0x0;
        (**(code **)(*(long *)pBVar4 + 0x88))(pBVar4,&local_690);
        lVar21 = (long)local_688 - (long)local_690;
        if (lVar21 != 0) {
          lVar20 = (lVar21 >> 3) * 0x6db6db6db6db6db7;
          do {
            pFVar5 = local_690;
            if (local_66c <= *(int *)(*local_658 + 7) >> 1) break;
            lVar20 = lVar20 + -1;
            if (((param_4 >> 0x28 & 1) == 0) ||
               (uVar11 = v8::internal::FrameSummary::is_subject_to_debugging
                                   (local_690 + lVar21 + -0x38), (uVar11 & 1) != 0)) {
              plVar7 = local_658;
              iVar14 = *(int *)(pFVar5 + lVar21 + -0x30);
              if (iVar14 == 2) {
                puVar12 = *(ulong **)(pFVar5 + lVar21 + -0x28);
                uVar9 = *(undefined4 *)(pFVar5 + lVar21 + -0x1c);
                uVar2 = *(undefined4 *)(pFVar5 + lVar21 + -0x18);
                uVar15 = 2;
                uVar13 = 0;
LAB_00f4d8c4:
                local_658 = (long *)v8::internal::FrameArray::AppendWasmFrame
                                              (plVar7,puVar12,uVar9,uVar13,uVar2,uVar15);
              }
              else if (iVar14 == 1) {
                if (*(int *)(*(long *)(pFVar5 + lVar21 + -0x18) + 0x3c) == 0) {
                  puVar12 = *(ulong **)(pFVar5 + lVar21 + -0x28);
                  uVar11 = *puVar12 & 0xffffffff00000000;
                  if (*(char *)(*(long *)(**(long **)(*(long *)((uVar11 | *(uint *)((uVar11 | *(uint
                                                                                                *)(*
                                                  puVar12 + 0x6f)) + 0xb)) + 3) + 0x18) + 200) +
                               0x178) == '\0') {
                    uVar15 = 1;
                  }
                  else {
                    uVar15 = 4;
                    if (pFVar5[lVar21 + -0x20] != (FrameSummary)0x0) {
                      uVar15 = 0x24;
                    }
                  }
                  uVar9 = v8::internal::FrameSummary::WasmCompiledFrameSummary::function_index
                                    ((WasmCompiledFrameSummary *)(pFVar5 + lVar21 + -0x38));
                  uVar13 = *(undefined8 *)(pFVar5 + lVar21 + -0x18);
                  uVar2 = *(undefined4 *)(pFVar5 + lVar21 + -0x10);
                  goto LAB_00f4d8c4;
                }
              }
              else if (iVar14 == 0) {
                v8::internal::FrameArrayBuilder::AppendJavaScriptFrame
                          ((FrameArrayBuilder *)&local_678,
                           (JavaScriptFrameSummary *)(pFVar5 + lVar21 + -0x38));
              }
            }
            lVar21 = lVar21 + -0x38;
          } while (lVar20 != 0);
        }
        pFVar6 = local_690;
        pFVar5 = local_688;
        if (local_690 != (FrameSummary *)0x0) {
          while (pFVar5 != pFVar6) {
            v8::internal::FrameSummary::~FrameSummary(pFVar5 + -0x38);
            pFVar5 = pFVar5 + -0x38;
          }
          local_688 = pFVar6;
          operator_delete(local_690);
        }
      }
    }
    v8::internal::StackFrameIterator::Advance(aSStack_650);
    pBVar4 = local_c8;
  }
  if (((param_4 >> 0x30 & 1) == 0) || (uVar11 = *(ulong *)(param_1 + 4000), (uVar11 & 1) == 0))
  goto LAB_00f4dcd8;
  uVar16 = uVar11 & 0xffffffff00000000;
  uVar17 = uVar16 | 7;
  if (1 < *(ushort *)(uVar17 + *(uint *)(uVar11 - 1)) - 0x47) goto LAB_00f4dcd8;
  puVar18 = (uint *)(uVar11 + 0xb);
  pIVar1 = param_1 + 0x95a0;
  if (*(short *)(uVar17 + *(uint *)((uVar16 | *puVar18) - 1)) == 0x439) {
    iVar14 = *(int *)((uVar16 | *puVar18) + 0x17);
    iVar10 = v8::internal::Builtins::builtin((Builtins *)(param_1 + 0x9e00),0xd6);
    if (iVar14 != iVar10) {
      uVar11 = *(ulong *)(param_1 + 4000);
      uVar16 = uVar11 & 0xffffffff00000000;
      puVar18 = (uint *)(uVar11 + 0xb);
      uVar17 = uVar16 | 7;
      goto LAB_00f4da8c;
    }
LAB_00f4db04:
    uVar11 = *(ulong *)(param_1 + 4000) & 0xffffffff00000000;
    uVar11 = uVar11 | *(uint *)((uVar11 | *(uint *)(*(ulong *)(param_1 + 4000) + 0xb)) + 0xf);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar12 = *(ulong **)pIVar1;
      if (puVar12 == *(ulong **)(param_1 + 0x95a8)) {
        puVar12 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar12 + 1;
      *puVar12 = uVar11;
    }
    else {
      puVar12 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11);
      uVar11 = *puVar12;
    }
    uVar11 = uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 + 0xf);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar12 = *(ulong **)pIVar1;
      if (puVar12 == *(ulong **)(param_1 + 0x95a8)) {
        puVar12 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar12 + 1;
      *puVar12 = uVar11;
    }
    else {
      puVar12 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11);
      uVar11 = *puVar12;
    }
    if ((*(uint *)(uVar11 + 0x1f) & 0xfffffffe) != 0xfffffffc) goto LAB_00f4dcd8;
    this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
    uVar8 = *(uint *)(uVar11 + 0x27);
    uVar16 = uVar11 & 0xffffffff00000000 | (ulong)uVar8;
    if (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x418) {
      if (this == (CanonicalHandleScope *)0x0) {
        puVar12 = *(ulong **)pIVar1;
        if (puVar12 == *(ulong **)(param_1 + 0x95a8)) {
          puVar12 = (ulong *)v8::internal::HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar12 + 1;
        *puVar12 = uVar16;
        if ((uVar8 & 1) != 0) goto LAB_00f4dc88;
      }
      else {
        puVar12 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(this,uVar16);
        uVar16 = *puVar12;
        if ((uVar16 & 1) != 0) {
LAB_00f4dc88:
          if ((int)uVar16 == *(int *)(param_1 + 0xa0)) goto LAB_00f4dcd8;
        }
      }
      this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
      uVar16 = uVar16 & 0xffffffff00000000 | (ulong)*(uint *)(uVar16 + 0xf);
    }
    if (this == (CanonicalHandleScope *)0x0) {
      puVar12 = *(ulong **)pIVar1;
      if (puVar12 == *(ulong **)(param_1 + 0x95a8)) {
        puVar12 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar12 + 1;
      *puVar12 = uVar16;
    }
    else {
      puVar12 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(this,uVar16);
    }
  }
  else {
LAB_00f4da8c:
    uVar19 = uVar16 | *(uint *)(uVar11 + 0xb);
    if (*(short *)(uVar17 + *(uint *)(uVar19 - 1)) == 0x439) {
      iVar14 = *(int *)(uVar19 + 0x17);
      iVar10 = v8::internal::Builtins::builtin((Builtins *)(param_1 + 0x9e00),0x26b);
      if (iVar14 == iVar10) goto LAB_00f4db04;
      uVar11 = *(ulong *)(param_1 + 4000);
      uVar16 = uVar11 & 0xffffffff00000000;
      puVar18 = (uint *)(uVar11 + 0xb);
      uVar17 = uVar16 | 7;
    }
    if (*(short *)(uVar17 + *(uint *)((uVar16 | *puVar18) - 1)) == 0x439) {
      iVar14 = *(int *)((uVar16 | *puVar18) + 0x17);
      iVar10 = v8::internal::Builtins::builtin((Builtins *)(param_1 + 0x9e00),0x26d);
      if (iVar14 == iVar10) goto LAB_00f4db04;
      uVar11 = *(ulong *)(param_1 + 4000);
      uVar16 = uVar11 & 0xffffffff00000000;
    }
    uVar16 = uVar16 | *(uint *)(uVar11 + 0xf);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar12 = *(ulong **)pIVar1;
      if (puVar12 == *(ulong **)(param_1 + 0x95a8)) {
        puVar12 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar12 + 1;
      *puVar12 = uVar16;
    }
    else {
      puVar12 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar16);
      uVar16 = *puVar12;
    }
    if (*(short *)((uVar16 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar16 - 1)) != 0x42d)
    goto LAB_00f4dcd8;
  }
  v8::internal::CaptureAsyncStackTrace(param_1,puVar12,&local_678);
LAB_00f4dcd8:
  uVar13 = v8::internal::FrameArrayBuilder::GetElementsAsStackTraceFrameArray
                     ((FrameArrayBuilder *)&local_678,(bool)((byte)(param_4 >> 0x38) & 1));
  v8::internal::wasm::WasmCodeRefScope::~WasmCodeRefScope(aWStack_b0);
  v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
  ~PerIsolateAssertScope(aPStack_80);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
}

