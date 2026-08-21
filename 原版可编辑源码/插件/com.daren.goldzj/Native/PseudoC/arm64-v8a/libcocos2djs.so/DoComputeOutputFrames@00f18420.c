
/* v8::internal::Deoptimizer::DoComputeOutputFrames() */

void __thiscall v8::internal::Deoptimizer::DoComputeOutputFrames(Deoptimizer *this)

{
  long lVar1;
  TranslatedFrame *pTVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined2 uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  __sFILE *p_Var21;
  ulong uVar22;
  undefined8 uVar23;
  long lVar24;
  int *piVar25;
  undefined4 uVar26;
  long local_a8;
  long local_98 [2];
  ulong local_88;
  int local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  uVar22 = *(ulong *)(this + 0x10);
  uVar8 = *(uint *)(uVar22 + 7);
  uVar10 = JavaScriptFrame::fp_register();
  piVar25 = *(int **)(this + 0x38);
  lVar24 = *(long *)(piVar25 + (uVar10 & 0xffffffff) * 2 + 4);
  uVar10 = *(ulong *)(this + 8);
  *(long *)(this + 0x78) = lVar24;
  if ((uVar10 & 1) == 0) {
    uVar10 = 0x10;
  }
  else {
    uVar7 = *(ushort *)((uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 0xb)) + 0x15) + 1 &
            0xffff;
    uVar6 = ShouldPadArguments(uVar7);
    piVar25 = *(int **)(this + 0x38);
    uVar10 = (ulong)(((uVar6 & 1) + uVar7) * 8 + 0x10);
  }
  *(ulong *)(this + 0x50) = lVar24 + uVar10;
  iVar9 = piVar25[2];
  uVar7 = ShouldPadArguments(iVar9);
  lVar24 = *(long *)this;
  uVar7 = (*piVar25 + (iVar9 + (uVar7 & 1)) * -8) - 0x10;
  *(undefined8 *)(this + 0x58) = *(undefined8 *)((long)piVar25 + (ulong)uVar7 + 0x240);
  *(undefined8 *)(this + 0x60) = *(undefined8 *)((long)piVar25 + (ulong)uVar7 + 0x248);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)((long)piVar25 + (ulong)uVar7 + 0x238);
  if (*(ulong *)(this + 0x50) <= *(ulong *)(lVar24 + 0x50)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "static_cast<uintptr_t>(caller_frame_top_) > stack_guard->real_jslimit()");
  }
  uVar22 = uVar22 & 0xffffffff00000000;
  uVar10 = uVar22 | uVar8;
  if (*(long *)(this + 0x110) == 0) {
    local_a8 = 0;
  }
  else {
    local_a8 = base::TimeTicks::HighResolutionNow();
    if (2 < (ulong)(long)(char)this[0x1c]) goto LAB_00f18ae8;
    PrintF(*(__sFILE **)(**(long **)(this + 0x110) + 0x90),"[deoptimizing (DEOPT %s): begin ",
           (&PTR_s_eager_01ca49d8)[(char)this[0x1c]]);
    uVar14 = *(ulong *)(this + 8);
    if (((uVar14 & 1) == 0) ||
       (*(short *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)) != 0x439)) {
      p_Var21 = *(__sFILE **)(**(long **)(this + 0x110) + 0x90);
      uVar23 = Code::Kind2String(*(uint *)(*(long *)(this + 0x10) + 0x17) >> 1 & 0x1f);
      PrintF(p_Var21,"%s",uVar23);
    }
    else {
      Object::ShortPrint((Object *)(this + 8),*(__sFILE **)(**(long **)(this + 0x110) + 0x90));
    }
    PrintF(*(__sFILE **)(**(long **)(this + 0x110) + 0x90),
           " (opt #%d) @%d, FP to SP delta: %d, caller sp: 0x%012lx]\n",
           (ulong)(uint)(*(int *)(uVar10 + 0x1b) >> 1),(ulong)*(uint *)(this + 0x18),
           (ulong)*(uint *)(this + 0x28),*(undefined8 *)(this + 0x50));
    if ((byte)this[0x1c] < 2) {
      Code::PrintDeoptLocation
                ((Code *)(this + 0x10),*(__sFILE **)(**(long **)(this + 0x110) + 0x90),
                 "            ;;; deoptimize at ",*(ulong *)(this + 0x20));
    }
  }
  iVar3 = *(int *)(uVar10 + 7 + (long)(*(int *)(this + 0x18) * 0xc + 0x24));
  local_88 = uVar22 | *(uint *)(uVar10 + 7);
  local_80 = *(int *)(uVar10 + 7 + (long)(*(int *)(this + 0x18) * 0xc + 0x28)) >> 1;
  piVar25 = *(int **)(this + 0x38);
  uVar23 = *(undefined8 *)this;
  iVar9 = piVar25[2];
  uVar8 = ShouldPadArguments(iVar9);
  if (*(long **)(this + 0x110) == (long *)0x0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(**(long **)(this + 0x110) + 0x90);
  }
  uVar14 = *(ulong *)(this + 8);
  if ((uVar14 & 1) == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined2 *)((uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 + 0xb)) + 0x15);
  }
  TranslatedState::Init
            ((TranslatedState *)(this + 0x80),uVar23,
             (long)piVar25 + (ulong)((*piVar25 + (iVar9 + (uVar8 & 1)) * -8) - 0x10) + 0x240,
             &local_88,uVar22 | *(uint *)(uVar10 + 0xf),*(long *)(this + 0x38) + 0x10,uVar12,uVar13)
  ;
  lVar15 = *(long *)(this + 0x88) - *(long *)(this + 0x80) >> 3;
  uVar10 = lVar15 * 0x2e8ba2e8ba2e8ba3;
  if (this[0x2c] != (Deoptimizer)0x0) {
    lVar15 = lVar15 * 8;
    uVar22 = uVar10;
    do {
      uVar14 = uVar22;
      if (uVar14 == 0) goto LAB_00f18ab4;
      lVar17 = *(long *)(this + 0x80) + lVar15;
      if (*(int *)(lVar17 + -0x58) == 0) {
        uVar22 = *(ulong *)(lVar17 + -0x50);
        if ((int)uVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","!raw_shared_info_.is_null()");
        }
        iVar9 = *(int *)(lVar17 + -0x54);
        uVar16 = uVar22 & 0xffffffff00000000;
        uVar19 = uVar16 | *(uint *)(uVar22 + 0xf);
        uVar18 = uVar16 | 7;
        if ((*(short *)(uVar18 + *(uint *)(uVar19 - 1)) == 0x5b) &&
           (*(short *)(uVar18 + *(uint *)((uVar16 | *(uint *)(uVar19 + 0x13)) - 1)) == 0x86)) {
          uVar8 = *(uint *)(uVar19 + 0xf);
        }
        else {
          uVar8 = *(uint *)(uVar22 + 3);
          if (((uVar8 & 1) == 0) || (*(short *)(uVar18 + *(uint *)((uVar16 | uVar8) - 1)) != 0x86))
          {
            uVar8 = *(uint *)((uVar16 | *(uint *)(uVar22 + 3)) + 3);
          }
          else {
            uVar8 = *(uint *)(uVar22 + 3);
          }
        }
        HandlerTable::HandlerTable((HandlerTable *)local_98,uVar16 | uVar8);
        iVar9 = HandlerTable::LookupRange
                          ((HandlerTable *)local_98,iVar9,(int *)(this + 0x30),
                           (CatchPrediction *)0x0);
      }
      else {
        if (*(int *)(lVar17 + -0x58) == 5) {
          *(undefined4 *)(this + 0x34) = 0;
          break;
        }
        iVar9 = -1;
      }
      lVar15 = lVar15 + -0x58;
      *(int *)(this + 0x34) = iVar9;
      uVar22 = uVar14 - 1;
    } while (iVar9 < 0);
    bVar5 = uVar10 <= uVar14 - 1;
    uVar10 = uVar14;
    if (bVar5) {
LAB_00f18ab4:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","catch_handler_frame_index < count");
    }
  }
  uVar22 = uVar10 << 3;
  if (uVar10 >> 0x3d != 0) {
    uVar22 = 0xffffffffffffffff;
  }
  puVar11 = operator_new__(uVar22);
  *(undefined8 **)(this + 0x48) = puVar11;
  if (uVar10 == 0) {
    *(undefined4 *)(this + 0x40) = 0;
LAB_00f18950:
    lVar17 = *(long *)(this + 0x48);
    lVar15 = 0;
    uVar22 = 0xffffffffffffffff;
  }
  else {
    uVar22 = uVar10 - 1;
    *puVar11 = 0;
    if (uVar22 != 0) {
      uVar14 = 1;
      do {
        *(undefined8 *)(*(long *)(this + 0x48) + uVar14 * 8) = 0;
        uVar14 = uVar14 + 1;
      } while (uVar10 != uVar14);
    }
    *(int *)(this + 0x40) = (int)uVar10;
    if (uVar10 == 0) goto LAB_00f18950;
    lVar20 = 0;
    uVar14 = 0;
    lVar15 = 0;
    do {
      pTVar2 = (TranslatedFrame *)(*(long *)(this + 0x80) + lVar20);
      if (6 < *(uint *)pTVar2) goto switchD_00f188e8_default;
      iVar9 = (int)uVar14;
      switch(*(uint *)pTVar2) {
      case 0:
        DoComputeInterpretedFrame
                  (this,pTVar2,iVar9,uVar22 == uVar14 && this[0x2c] != (Deoptimizer)0x0);
        *(int *)(this + 0x44) = *(int *)(this + 0x44) + 1;
        break;
      case 1:
        DoComputeArgumentsAdaptorFrame(this,pTVar2,iVar9);
        break;
      case 2:
        DoComputeConstructStubFrame(this,pTVar2,iVar9);
        break;
      case 3:
        DoComputeBuiltinContinuation(this,pTVar2,uVar14 & 0xffffffff,0);
        break;
      case 4:
        uVar26 = 1;
        goto LAB_00f1893c;
      case 5:
        uVar26 = 2;
        if (uVar22 == uVar14 && this[0x2c] != (Deoptimizer)0x0) {
          uVar26 = 3;
        }
LAB_00f1893c:
        DoComputeBuiltinContinuation(this,pTVar2,uVar14 & 0xffffffff,uVar26);
        break;
      case 6:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("invalid frame");
      }
switchD_00f188e8_default:
      lVar17 = *(long *)(this + 0x48);
      lVar20 = lVar20 + 0x58;
      lVar1 = uVar14 * 8;
      uVar14 = uVar14 + 1;
      lVar15 = (ulong)**(uint **)(lVar17 + lVar1) + lVar15;
    } while (uVar10 != uVar14);
  }
  *(undefined8 *)(*(long *)(lVar17 + uVar22 * 8) + 0xe0) = *(undefined8 *)this;
  if (*(long *)(this + 0x110) != 0) {
    local_98[0] = base::TimeTicks::HighResolutionNow();
    local_98[0] = local_98[0] - local_a8;
    uVar23 = base::TimeDelta::InMillisecondsF((TimeDelta *)local_98);
    if (2 < (ulong)(long)(char)this[0x1c]) {
LAB_00f18ae8:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Unsupported deopt kind");
    }
    iVar9 = *(int *)(this + 0x40);
    PrintF(*(__sFILE **)(**(long **)(this + 0x110) + 0x90),"[deoptimizing (%s): end ",
           (&PTR_s_eager_01ca49d8)[(char)this[0x1c]]);
    uVar10 = *(ulong *)(this + 8);
    if (((uVar10 & 1) == 0) ||
       (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x439)) {
      p_Var21 = *(__sFILE **)(**(long **)(this + 0x110) + 0x90);
      uVar12 = Code::Kind2String(*(uint *)(*(long *)(this + 0x10) + 0x17) >> 1 & 0x1f);
      PrintF(p_Var21,"%s",uVar12);
    }
    else {
      Object::ShortPrint((Object *)(this + 8),*(__sFILE **)(**(long **)(this + 0x110) + 0x90));
    }
    PrintF(*(__sFILE **)(**(long **)(this + 0x110) + 0x90),
           " @%d => node=%d, pc=0x%012lx, caller sp=0x%012lx, took %0.3f ms]\n",uVar23,
           (ulong)*(uint *)(this + 0x18),(ulong)(uint)(iVar3 >> 1),
           *(undefined8 *)(*(long *)(*(long *)(this + 0x48) + ((long)iVar9 + -1) * 8) + 0x218),
           *(undefined8 *)(this + 0x50));
  }
  if ((ulong)(*(long *)(this + 0x50) - lVar15) <= *(long *)(lVar24 + 0x50) - 0x100U) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "static_cast<uintptr_t>(caller_frame_top_) - total_output_frame_size > stack_guard->real_jslimit() - kStackLimitSlackForDeoptimizationInBytes"
            );
  }
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

