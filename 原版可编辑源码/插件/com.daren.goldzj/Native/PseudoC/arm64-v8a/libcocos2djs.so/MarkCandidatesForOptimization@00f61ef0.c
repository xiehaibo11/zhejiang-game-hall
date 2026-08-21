
/* v8::internal::RuntimeProfiler::MarkCandidatesForOptimization() */

void __thiscall v8::internal::RuntimeProfiler::MarkCandidatesForOptimization(RuntimeProfiler *this)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  Isolate *pIVar12;
  ulong uVar13;
  int iVar14;
  byte **local_630;
  byte *local_628;
  char *local_620;
  undefined8 local_618;
  long *local_610;
  long *local_608;
  long *local_88;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  pIVar12 = *(Isolate **)this;
  uVar3 = *(undefined8 *)(pIVar12 + 0x95a0);
  lVar4 = *(long *)(pIVar12 + 0x95a8);
  *(int *)(pIVar12 + 0x95b0) = *(int *)(pIVar12 + 0x95b0) + 1;
  uVar9 = Isolate::use_optimizer(*(Isolate **)this);
  if ((uVar9 & 1) != 0) {
    if (DAT_01d3ed60 == (byte *)0x0) {
      plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
      DAT_01d3ed60 = (byte *)(**(code **)(*plVar10 + 0x10))
                                       (plVar10,"disabled-by-default-v8.compile");
    }
    pbVar7 = DAT_01d3ed60;
    local_630 = (byte **)0x0;
    if ((*DAT_01d3ed60 & 5) != 0) {
      local_610 = (long *)0x0;
      local_608 = (long *)0x0;
      plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
      uVar11 = (**(code **)(*plVar10 + 0x18))
                         (plVar10,0x58,pbVar7,"V8.MarkCandidatesForOptimization",0,0,0,0,0,0,0,
                          &local_610,0);
      plVar10 = local_608;
      local_608 = (long *)0x0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 8))();
      }
      plVar10 = local_610;
      local_610 = (long *)0x0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 8))();
      }
      local_630 = &local_628;
      local_620 = "V8.MarkCandidatesForOptimization";
      local_628 = pbVar7;
      local_618 = uVar11;
    }
    iVar6 = FLAG_frame_count;
    StackFrameIterator::StackFrameIterator((StackFrameIterator *)&local_610,*(Isolate **)this);
    if (((local_88 != (long *)0x0) &&
        (JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)&local_610), 0 < iVar6)) &&
       (local_88 != (long *)0x0)) {
      iVar14 = 1;
      do {
        plVar10 = local_88;
        iVar8 = (**(code **)(*local_88 + 8))(local_88);
        if (iVar8 == 0xc) {
          uVar9 = (**(code **)(*plVar10 + 0x98))(plVar10);
          uVar13 = uVar9 & 0xffffffff00000000;
          puVar1 = (uint *)((uVar13 | *(uint *)(uVar9 + 0xb)) + 3);
          uVar2 = *puVar1;
          if ((((uVar2 & 1) != 0) &&
              (*(short *)((uVar13 | 7) + (ulong)*(uint *)((uVar13 | uVar2) - 1)) == 0x86)) ||
             ((uVar2 = *puVar1, (uVar2 & 1) != 0 &&
              (*(short *)((uVar13 | 7) + (ulong)*(uint *)((uVar13 | uVar2) - 1)) == 0x61)))) {
            uVar2 = *(uint *)((uVar13 | *(uint *)(uVar9 + 0xb)) + 3);
            if (((uVar2 != 0x84) &&
                (((uVar2 & 1) == 0 ||
                 (1 < *(ushort *)((uVar13 | 7) + (ulong)*(uint *)((uVar13 | uVar2) - 1)) - 0x95))))
               && (*(short *)((uVar13 | 7) +
                             (ulong)*(uint *)((uVar13 | *(uint *)((uVar13 | *(uint *)(uVar9 + 0x13))
                                                                 + 3)) - 1)) == 0x9f)) {
              MaybeOptimize(this,uVar9,plVar10);
              uVar13 = uVar13 | *(uint *)((uVar13 | *(uint *)(uVar9 + 0x13)) + 3);
              iVar8 = *(int *)(uVar13 + 0x17);
              if (iVar8 < 0x3fffffff) {
                *(int *)(uVar13 + 0x17) = iVar8 + 1;
              }
            }
          }
        }
        JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)&local_610);
      } while ((iVar14 < iVar6) && (iVar14 = iVar14 + 1, local_88 != (long *)0x0));
    }
    this[8] = (RuntimeProfiler)0x0;
    if ((local_630 != (byte **)0x0) && (*local_628 != 0)) {
      plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar10 + 0x28))(plVar10,local_628,local_620,local_618);
    }
  }
  if (pIVar12 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar12 + 0x95a0) = uVar3;
    *(int *)(pIVar12 + 0x95b0) = *(int *)(pIVar12 + 0x95b0) + -1;
    if (*(long *)(pIVar12 + 0x95a8) != lVar4) {
      *(long *)(pIVar12 + 0x95a8) = lVar4;
      HandleScope::DeleteExtensions(pIVar12);
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

