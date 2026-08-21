
/* v8::internal::Debug::PrepareStep(v8::internal::StepAction) */

void __thiscall v8::internal::Debug::PrepareStep(Debug *this,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  WasmInterpreterEntryFrame *pWVar8;
  undefined8 *puVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  Isolate *pIVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  StandardFrame *extraout_x1;
  undefined8 uVar18;
  Debug DVar19;
  Isolate *pIVar20;
  ulong *puVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 *local_648;
  undefined8 local_640;
  undefined8 uStack_638;
  ulong *local_630;
  undefined8 *puStack_628;
  int local_620;
  StackTraceFrameIterator aSStack_610 [1416];
  WasmInterpreterEntryFrame *local_88;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  pIVar20 = *(Isolate **)(this + 0x88);
  uVar2 = *(undefined8 *)(pIVar20 + 0x95a0);
  lVar3 = *(long *)(pIVar20 + 0x95a8);
  *(int *)(pIVar20 + 0x95b0) = *(int *)(pIVar20 + 0x95b0) + 1;
  iVar11 = *(int *)(this + 0x48);
  if (iVar11 != 0) {
    if (((byte)this[0x38] >> 3 & 1) == 0) {
      Histogram::AddSample((int)*(undefined8 *)(*(long *)(this + 0x30) + 0x9520) + 0xf8);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 8;
    }
    this[0x4c] = SUB41(param_2,0);
    StackTraceFrameIterator::StackTraceFrameIterator
              (aSStack_610,*(undefined8 *)(this + 0x88),iVar11);
    pWVar8 = local_88;
    iVar11 = (**(code **)(*(long *)local_88 + 8))(local_88);
    if ((iVar11 == 8) &&
       (iVar11 = WasmInterpreterEntryFrame::NumberOfActiveFrames(pWVar8), 0 < iVar11)) {
      local_648 = (undefined8 *)WasmInterpreterEntryFrame::debug_info(pWVar8);
      WasmDebugInfo::PrepareStep((WasmDebugInfo *)&local_648,param_2);
    }
    else {
      iVar11 = (**(code **)(*(long *)pWVar8 + 8))(pWVar8);
      uVar1 = 0;
      if (iVar11 != 8 && iVar11 != 5) {
        uVar1 = param_2;
      }
      bVar10 = (byte)uVar1;
      iVar11 = CurrentFrameCount(this);
      uVar12 = (**(code **)(*(long *)pWVar8 + 8))(pWVar8);
      iVar14 = 0;
      puVar21 = (ulong *)0x0;
      if ((uVar12 < 0x15) && ((1 << (ulong)(uVar12 & 0x1f) & 0x119010U) != 0)) {
        FrameSummary::GetTop((FrameSummary *)pWVar8,extraout_x1);
        FrameSummary::~FrameSummary((FrameSummary *)&local_648);
        pIVar15 = *(Isolate **)(this + 0x88);
        uVar23 = *local_630 & 0xffffffff00000000 | (ulong)*(uint *)(*local_630 + 0xb);
        if (*(CanonicalHandleScope **)(pIVar15 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar21 = *(ulong **)(pIVar15 + 0x95a0);
          if (puVar21 == *(ulong **)(pIVar15 + 0x95a8)) {
            puVar21 = (ulong *)HandleScope::Extend(pIVar15);
          }
          *(ulong **)(pIVar15 + 0x95a0) = puVar21 + 1;
          *puVar21 = uVar23;
        }
        else {
          puVar21 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar15 + 0x95b8),uVar23);
        }
        uVar23 = EnsureBreakInfo(this,puVar21);
        if ((uVar23 & 1) == 0) goto switchD_00f065b8_default;
        PrepareFunctionForDebugExecution(this,puVar21);
        pIVar15 = *(Isolate **)(this + 0x88);
        uVar23 = *puVar21 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar21 + 0xf);
        if (*(CanonicalHandleScope **)(pIVar15 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar16 = *(ulong **)(pIVar15 + 0x95a0);
          if (puVar16 == *(ulong **)(pIVar15 + 0x95a8)) {
            puVar16 = (ulong *)HandleScope::Extend(pIVar15);
          }
          *(ulong **)(pIVar15 + 0x95a0) = puVar16 + 1;
          *puVar16 = uVar23;
        }
        else {
          puVar16 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar15 + 0x95b8),uVar23);
        }
        BreakLocation::FromFrame((BreakLocation *)&local_648,puVar16,pWVar8);
        iVar14 = local_640._4_4_;
        if ((local_640._4_4_ == 4) || (((uVar1 & 0xff) == 0 && (local_640._4_4_ == 5)))) {
          if (this[0x4c] == (Debug)0x0) {
            *(ulong *)(this + 0x50) = *local_630;
          }
          bVar10 = 0;
          this[0x4c] = (Debug)0x2;
          this[9] = (Debug)0x1;
        }
        else {
          if (this[0x4c] == (Debug)0x2) {
            DVar19 = (Debug)0x1;
          }
          else if (*(int *)(*(long *)(this + 0x88) + 0xb80c) == 0x20) {
            DVar19 = (Debug)0x1;
          }
          else {
            DVar19 = this[0x84];
          }
          this[9] = DVar19;
          if ((uVar1 & 0xff) == 1) {
            bVar10 = IsBlackboxed(this,puVar21);
            bVar10 = ~bVar10 & 1;
          }
        }
        local_648 = (undefined8 *)*puStack_628;
        uVar13 = AbstractCode::SourceStatementPosition((AbstractCode *)&local_648,local_620);
        *(undefined4 *)(this + 0x5c) = uVar13;
        *(int *)(this + 0x60) = iVar11;
        *(undefined8 *)(this + 0x70) = 0;
      }
      switch(bVar10) {
      case 0:
        *(undefined8 *)(this + 0x5c) = 0xffffffffffffffff;
        if (((puVar21 == (ulong *)0x0) || (3 < iVar14)) ||
           (uVar23 = IsBlackboxed(this,puVar21), (uVar23 & 1) != 0)) {
          if (local_88 != (WasmInterpreterEntryFrame *)0x0) {
            bVar6 = true;
            do {
              iVar14 = (**(code **)(*(long *)local_88 + 8))();
              pWVar8 = local_88;
              if ((iVar14 == 5) || (iVar14 == 8)) {
                bVar6 = false;
              }
              else {
                if (this[0x4c] == (Debug)0x2) {
                  uVar18 = (**(code **)(*(long *)local_88 + 0x98))(local_88);
                  Deoptimizer::DeoptimizeFunction(uVar18,0);
                }
                pIVar15 = *(Isolate **)(this + 0x88);
                uVar18 = *(undefined8 *)(pIVar15 + 0x95a0);
                lVar4 = *(long *)(pIVar15 + 0x95a8);
                *(int *)(pIVar15 + 0x95b0) = *(int *)(pIVar15 + 0x95b0) + 1;
                local_640 = (undefined8 *)0x0;
                uStack_638 = 0;
                local_648 = (undefined8 *)0x0;
                JavaScriptFrame::GetFunctions((JavaScriptFrame *)pWVar8,(vector *)&local_648);
                puVar17 = local_648;
                if (local_648 != local_640) {
                  do {
                    local_640 = local_640 + -1;
                    uVar22 = *local_640;
                    if ((!bVar6) &&
                       (uVar23 = IsBlackboxed(this,uVar22), puVar17 = local_648, (uVar23 & 1) == 0))
                    {
                      FloodWithOneShot(this,uVar22,0);
                      *(int *)(this + 100) = iVar11;
                      bVar6 = false;
                      bVar7 = true;
                      puVar17 = local_648;
                      puVar9 = local_640;
                      goto joined_r0x00f066e4;
                    }
                    bVar6 = false;
                    iVar11 = iVar11 + -1;
                  } while (puVar17 != local_640);
                  bVar6 = false;
                  puVar17 = local_640;
                }
                bVar7 = false;
                puVar9 = local_640;
joined_r0x00f066e4:
                local_640 = puVar17;
                if (local_640 != (undefined8 *)0x0) {
                  operator_delete(local_640);
                  puVar9 = local_640;
                }
                local_640 = puVar9;
                if (pIVar15 != (Isolate *)0x0) {
                  *(undefined8 *)(pIVar15 + 0x95a0) = uVar18;
                  *(int *)(pIVar15 + 0x95b0) = *(int *)(pIVar15 + 0x95b0) + -1;
                  if (*(long *)(pIVar15 + 0x95a8) != lVar4) {
                    *(long *)(pIVar15 + 0x95a8) = lVar4;
                    HandleScope::DeleteExtensions(pIVar15);
                  }
                }
                if (bVar7) break;
              }
              StackTraceFrameIterator::Advance(aSStack_610);
            } while (local_88 != (WasmInterpreterEntryFrame *)0x0);
          }
          goto switchD_00f065b8_default;
        }
        *(int *)(this + 100) = iVar11;
        this[0x58] = (Debug)0x1;
        uVar18 = 1;
        break;
      case 1:
        *(int *)(this + 100) = iVar11;
      case 2:
        uVar18 = 0;
        break;
      case 0xffffffff:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      default:
        goto switchD_00f065b8_default;
      }
      FloodWithOneShot(this,puVar21,uVar18);
    }
  }
switchD_00f065b8_default:
  if (pIVar20 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar20 + 0x95a0) = uVar2;
    *(int *)(pIVar20 + 0x95b0) = *(int *)(pIVar20 + 0x95b0) + -1;
    if (*(long *)(pIVar20 + 0x95a8) != lVar3) {
      *(long *)(pIVar20 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(pIVar20);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

