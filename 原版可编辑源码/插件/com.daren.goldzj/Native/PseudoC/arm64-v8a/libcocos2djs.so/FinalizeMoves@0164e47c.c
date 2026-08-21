
/* v8::internal::compiler::MoveOptimizer::FinalizeMoves(v8::internal::compiler::Instruction*) */

void __thiscall
v8::internal::compiler::MoveOptimizer::FinalizeMoves(MoveOptimizer *this,Instruction *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ParallelMove *this_00;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  Zone *pZVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  long lVar16;
  ulong *puVar17;
  ulong *puVar18;
  code *local_68;
  
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar3 = (undefined8 *)plVar4[1];
  for (puVar14 = (undefined8 *)*plVar4; puVar14 != puVar3; puVar14 = puVar14 + 1) {
    puVar15 = (ulong *)*puVar14;
    uVar5 = *puVar15;
    if ((uVar5 & 7) != 0) {
      if (((uint)uVar5 >> 2 & 1) == 0) {
        uVar12 = puVar15[1];
        uVar11 = (uint)uVar12;
        uVar10 = uVar5;
      }
      else {
        uVar10 = 0x180;
        if (((uint)uVar5 >> 5 & 0xff) < 0xb || (uVar5 & 0x1c) != 4) {
          uVar10 = 0;
        }
        uVar12 = puVar15[1];
        uVar11 = (uint)uVar12;
        uVar10 = uVar5 & 0xffffffffffffe018 | uVar10 | 4;
      }
      if ((uVar11 >> 2 & 1) != 0) {
        uVar1 = 0x180;
        if (((uint)uVar12 >> 5 & 0xff) < 0xb || (uVar12 & 0x1c) != 4) {
          uVar1 = 0;
        }
        uVar12 = uVar12 & 0xffffffffffffe018 | uVar1 | 4;
      }
      if ((uVar10 != uVar12) && (((uVar5 & 7) == 2 || ((uVar5 & 0x1c) == 0xc)))) {
        puVar8 = *(undefined8 **)(this + 0x18);
        if (puVar8 == *(undefined8 **)(this + 0x20)) {
          lVar16 = (long)puVar8 - *(long *)(this + 0x10) >> 3;
          uVar5 = lVar16 + 1;
          if (uVar5 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          lVar6 = (long)*(undefined8 **)(this + 0x20) - *(long *)(this + 0x10);
          uVar10 = lVar6 >> 2;
          if (uVar5 <= uVar10) {
            uVar5 = uVar10;
          }
          if (0x7fffffe < (ulong)(lVar6 >> 3)) {
            uVar5 = 0xfffffff;
          }
          if (uVar5 == 0) {
            lVar6 = 0;
          }
          else {
            pZVar7 = *(Zone **)(this + 0x28);
            uVar10 = uVar5 * 8;
            lVar6 = *(long *)(pZVar7 + 0x10);
            if (uVar10 < (ulong)(*(long *)(pZVar7 + 0x18) - lVar6) ||
                uVar10 - (*(long *)(pZVar7 + 0x18) - lVar6) == 0) {
              *(ulong *)(pZVar7 + 0x10) = lVar6 + uVar10;
            }
            else {
              lVar6 = Zone::NewExpand(pZVar7,uVar10);
            }
          }
          puVar8 = (undefined8 *)(lVar6 + lVar16 * 8);
          puVar9 = puVar8 + 1;
          *puVar8 = puVar15;
          puVar2 = *(undefined8 **)(this + 0x10);
          puVar13 = *(undefined8 **)(this + 0x18);
          while (puVar13 != puVar2) {
            puVar13 = puVar13 + -1;
            puVar8 = puVar8 + -1;
            *puVar8 = *puVar13;
          }
          *(undefined8 **)(this + 0x10) = puVar8;
          *(undefined8 **)(this + 0x18) = puVar9;
          *(ulong *)(this + 0x20) = lVar6 + uVar5 * 8;
        }
        else {
          *puVar8 = puVar15;
          *(long *)(this + 0x18) = *(long *)(this + 0x18) + 8;
        }
      }
    }
  }
  if (*(MoveOperands ***)(this + 0x10) == *(MoveOperands ***)(this + 0x18)) {
    return;
  }
  local_68 = FUN_0164faf8;
  std::__ndk1::
  __sort<bool(*&)(v8::internal::compiler::MoveOperands_const*,v8::internal::compiler::MoveOperands_const*),v8::internal::compiler::MoveOperands**>
            (*(MoveOperands ***)(this + 0x10),*(MoveOperands ***)(this + 0x18),
             (_func_bool_MoveOperands_ptr_MoveOperands_ptr *)&local_68);
  puVar14 = *(undefined8 **)(this + 0x10);
  puVar3 = *(undefined8 **)(this + 0x18);
  if (puVar14 != puVar3) {
    puVar15 = (ulong *)*puVar14;
LAB_0164e664:
    do {
      puVar17 = puVar15;
      puVar14 = puVar14 + 1;
      if (puVar3 == puVar14) goto LAB_0164e754;
      puVar18 = (ulong *)*puVar14;
      puVar15 = puVar18;
      if (puVar17 != (ulong *)0x0) {
        uVar5 = *puVar18;
        if (((uint)uVar5 >> 2 & 1) == 0) {
          uVar10 = *puVar17;
          if (((uint)uVar10 >> 2 & 1) != 0) goto LAB_0164e6bc;
LAB_0164e688:
          if (uVar5 != uVar10) goto LAB_0164e664;
        }
        else {
          uVar10 = 0x180;
          if (((uint)uVar5 >> 5 & 0xff) < 0xb || (uVar5 & 0x1c) != 4) {
            uVar10 = 0;
          }
          uVar5 = uVar5 & 0xffffffffffffe018 | uVar10 | 4;
          uVar10 = *puVar17;
          if (((uint)uVar10 >> 2 & 1) == 0) goto LAB_0164e688;
LAB_0164e6bc:
          uVar12 = 0x180;
          if (((uint)uVar10 >> 5 & 0xff) < 0xb || (uVar10 & 0x1c) != 4) {
            uVar12 = 0;
          }
          if (uVar5 != (uVar10 & 0xffffffffffffe018 | uVar12 | 4)) goto LAB_0164e664;
        }
        puVar15 = puVar17;
        if ((puVar17[1] & 0x1c) != 0xc) {
          this_00 = *(ParallelMove **)(param_1 + 0x10);
          if (this_00 == (ParallelMove *)0x0) {
            pZVar7 = *(Zone **)(*(long *)(this + 8) + 8);
            this_00 = *(ParallelMove **)(pZVar7 + 0x10);
            if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)this_00) < 0x20) {
              this_00 = (ParallelMove *)Zone::NewExpand(pZVar7,0x20);
            }
            else {
              *(ParallelMove **)(pZVar7 + 0x10) = this_00 + 0x20;
            }
            *(undefined8 *)this_00 = 0;
            *(undefined8 *)(this_00 + 8) = 0;
            *(undefined8 *)(this_00 + 0x10) = 0;
            *(Zone **)(this_00 + 0x18) = pZVar7;
            *(ParallelMove **)(param_1 + 0x10) = this_00;
          }
          ParallelMove::AddMove
                    (this_00,(InstructionOperand *)(puVar17 + 1),(InstructionOperand *)(puVar18 + 1)
                     ,*(Zone **)(this_00 + 0x18));
          *puVar18 = 0;
          puVar18[1] = 0;
        }
      }
    } while( true );
  }
LAB_0164e758:
  *(undefined8 **)(this + 0x18) = puVar14;
  return;
LAB_0164e754:
  puVar14 = *(undefined8 **)(this + 0x10);
  goto LAB_0164e758;
}

