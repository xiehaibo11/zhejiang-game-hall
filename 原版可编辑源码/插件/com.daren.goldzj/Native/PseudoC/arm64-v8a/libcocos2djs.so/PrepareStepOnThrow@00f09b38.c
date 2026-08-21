
/* v8::internal::Debug::PrepareStepOnThrow() */

void __thiscall v8::internal::Debug::PrepareStepOnThrow(Debug *this)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  Debug *pDVar8;
  Isolate *pIVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  FrameSummary *pFVar16;
  FrameSummary *pFVar17;
  CatchPrediction aCStack_63c [4];
  HandlerTable aHStack_638 [16];
  FrameSummary *local_628;
  FrameSummary *local_620;
  undefined8 uStack_618;
  StackFrameIterator aSStack_610 [1416];
  long *local_88;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if (((((this[0x4c] != (Debug)0xff) && (this[10] == (Debug)0x0)) && (this[8] != (Debug)0x0)) &&
      ((*(int *)(*(long *)(this + 0x88) + 0xb80c) != 0x20 && (*(long *)(this + 0x40) == 0)))) &&
     (this[0xc] == (Debug)0x0)) {
    pDVar8 = this;
    for (puVar15 = *(undefined8 **)(this + 0x18); puVar15 != (undefined8 *)0x0;
        puVar15 = (undefined8 *)puVar15[1]) {
      uVar14 = *puVar15;
      ClearBreakPoints(pDVar8,uVar14);
      pDVar8 = (Debug *)ApplyBreakPoints(this,uVar14);
    }
    iVar5 = CurrentFrameCount(this);
    StackFrameIterator::StackFrameIterator(aSStack_610,*(Isolate **)(this + 0x88));
    if (local_88 != (long *)0x0) {
      JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_610);
LAB_00f09c2c:
      if (local_88 != (long *)0x0) {
        do {
          plVar4 = local_88;
          iVar6 = (**(code **)(*local_88 + 0xa8))(local_88,0,0);
          if (0 < iVar6) {
            if (local_88 != (long *)0x0) {
              bVar2 = false;
              do {
                plVar4 = local_88;
                if (this[0x4c] == (Debug)0x2) {
                  uVar14 = (**(code **)(*local_88 + 0x98))(local_88);
                  Deoptimizer::DeoptimizeFunction(uVar14,0);
                }
                local_620 = (FrameSummary *)0x0;
                uStack_618 = 0;
                local_628 = (FrameSummary *)0x0;
                (**(code **)(*plVar4 + 0x88))(plVar4,&local_628);
                pFVar17 = local_628;
                if ((long)local_620 - (long)local_628 != 0) {
                  lVar12 = (long)local_620 - (long)local_628 >> 3;
                  lVar13 = lVar12 * 0x6db6db6db6db6db7;
                  iVar6 = iVar5 - (int)lVar13;
                  lVar13 = lVar13 + -1;
                  lVar12 = lVar12 * 8;
                  if (bVar2) goto LAB_00f09db0;
                  do {
                    pFVar17 = local_628;
                    if ((ulong)(((long)local_620 - (long)local_628 >> 3) * 0x6db6db6db6db6db7) < 2)
                    goto LAB_00f09db0;
                    uVar11 = **(ulong **)(local_628 + lVar12 + -0x18);
                    if ((*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)
                                   ) == 0x9a) && ((*(uint *)(uVar11 + 0x17) & 0x3e) != 0x18)) {
                    /* WARNING: Subroutine does not return */
                      V8_Fatal("Check failed: %s.",
                               "AbstractCode::INTERPRETED_FUNCTION == code->kind()");
                    }
                    pFVar16 = local_628 + lVar12 + -0x38;
                    HandlerTable::HandlerTable(aHStack_638);
                    iVar7 = FrameSummary::code_offset(pFVar16);
                    iVar7 = HandlerTable::LookupRange(aHStack_638,iVar7,(int *)0x0,aCStack_63c);
                    if (0 < iVar7) goto LAB_00f09db0;
                    bVar2 = false;
                    pFVar17 = local_628;
                    while( true ) {
                      if (lVar13 == 0) {
                        bVar3 = false;
                        iVar5 = iVar6;
                        goto joined_r0x00f09e98;
                      }
                      iVar5 = iVar5 + -1;
                      lVar13 = lVar13 + -1;
                      lVar12 = lVar12 + -0x38;
                      local_628 = pFVar17;
                      if (!bVar2) break;
LAB_00f09db0:
                      if ((1 < (byte)this[0x4c]) || (iVar5 <= *(int *)(this + 100))) {
                        pIVar9 = *(Isolate **)(this + 0x88);
                        uVar11 = **(ulong **)(pFVar17 + lVar12 + -0x20) & 0xffffffff00000000 |
                                 (ulong)*(uint *)(**(ulong **)(pFVar17 + lVar12 + -0x20) + 0xb);
                        if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) ==
                            (CanonicalHandleScope *)0x0) {
                          puVar10 = *(ulong **)(pIVar9 + 0x95a0);
                          if (puVar10 == *(ulong **)(pIVar9 + 0x95a8)) {
                            puVar10 = (ulong *)HandleScope::Extend(pIVar9);
                          }
                          *(ulong **)(pIVar9 + 0x95a0) = puVar10 + 1;
                          *puVar10 = uVar11;
                        }
                        else {
                          puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                                       (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),
                                                        uVar11);
                        }
                        uVar11 = IsBlackboxed(this,puVar10);
                        if ((uVar11 & 1) == 0) {
                          FloodWithOneShot(this,puVar10,0);
                          bVar2 = true;
                          bVar3 = true;
                          pFVar17 = local_628;
                          goto joined_r0x00f09e98;
                        }
                      }
                      bVar2 = true;
                      pFVar17 = local_628;
                    }
                  } while( true );
                }
                bVar3 = false;
joined_r0x00f09e98:
                local_628 = pFVar17;
                pFVar16 = local_620;
                if (pFVar17 != (FrameSummary *)0x0) {
                  while (pFVar16 != pFVar17) {
                    FrameSummary::~FrameSummary(pFVar16 + -0x38);
                    pFVar16 = pFVar16 + -0x38;
                  }
                  local_620 = pFVar17;
                  operator_delete(local_628);
                }
              } while ((!bVar3) &&
                      (JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_610),
                      local_88 != (long *)0x0));
            }
            break;
          }
          local_620 = (FrameSummary *)0x0;
          uStack_618 = 0;
          local_628 = (FrameSummary *)0x0;
          (**(code **)(*plVar4 + 0xa0))(plVar4,&local_628);
          iVar5 = iVar5 - (int)((ulong)((long)local_620 - (long)local_628) >> 3);
          JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_610);
          if (local_628 == (FrameSummary *)0x0) goto LAB_00f09c2c;
          local_620 = local_628;
          operator_delete(local_628);
          if (local_88 == (long *)0x0) break;
        } while( true );
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

