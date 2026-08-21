
/* v8::internal::compiler::RegisterAllocatorVerifier::VerifyAssignment(char const*) */

void __thiscall
v8::internal::compiler::RegisterAllocatorVerifier::VerifyAssignment
          (RegisterAllocatorVerifier *this,char *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  OperandConstraint *pOVar9;
  InstructionOperand *pIVar10;
  OperandConstraint *pOVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  
  lVar5 = *(long *)(this + 0x10);
  plVar13 = *(long **)(this + 0x18);
  plVar3 = *(long **)(this + 0x20);
  *(char **)(this + 0x78) = param_1;
  if (*(long *)(lVar5 + 0xb8) != ((long)plVar3 - (long)plVar13 >> 3) * -0x5555555555555555) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","sequence()->instructions().size() == constraints()->size()");
  }
  plVar15 = (long *)(*(long *)(lVar5 + 0x88) + (*(ulong *)(lVar5 + 0xb0) >> 6 & 0x3fffffffffffff8));
  if (*(long *)(lVar5 + 0x90) == *(long *)(lVar5 + 0x88)) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = (long *)(*plVar15 + (*(ulong *)(lVar5 + 0xb0) & 0x1ff) * 8);
  }
  if (plVar13 == plVar3) {
    return;
  }
  do {
    lVar5 = *plVar13;
    plVar6 = *(long **)(lVar5 + 8);
    if (plVar6 != (long *)0x0) {
      for (puVar2 = (undefined8 *)*plVar6; puVar2 != (undefined8 *)plVar6[1]; puVar2 = puVar2 + 1) {
        uVar14 = *(ulong *)*puVar2;
        uVar12 = uVar14 & 7;
        if (uVar12 != 0) {
          if (((uint)uVar14 >> 2 & 1) != 0) {
            uVar1 = 0x180;
            if (((uint)uVar14 >> 5 & 0xff) < 0xb || (uVar14 & 0x1c) != 4) {
              uVar1 = 0;
            }
            uVar14 = uVar14 & 0xffffffffffffe018 | uVar1 | 4;
          }
          uVar7 = ((ulong *)*puVar2)[1];
          uVar1 = uVar7;
          if (((uint)uVar7 >> 2 & 1) != 0) {
            uVar1 = 0x180;
            if (((uint)uVar7 >> 5 & 0xff) < 0xb || (uVar7 & 0x1c) != 4) {
              uVar1 = 0;
            }
            uVar1 = uVar7 & 0xffffffffffffe018 | uVar1 | 4;
          }
          if ((uVar14 != uVar1) && (((uVar12 != 4 && (uVar12 != 2)) || ((uVar7 & 7) != 4))))
          goto LAB_01651208;
        }
      }
    }
    plVar6 = *(long **)(lVar5 + 0x10);
    if (plVar6 != (long *)0x0) {
      for (puVar2 = (undefined8 *)*plVar6; puVar2 != (undefined8 *)plVar6[1]; puVar2 = puVar2 + 1) {
        uVar14 = *(ulong *)*puVar2;
        uVar12 = uVar14 & 7;
        if (uVar12 != 0) {
          if (((uint)uVar14 >> 2 & 1) != 0) {
            uVar1 = 0x180;
            if (((uint)uVar14 >> 5 & 0xff) < 0xb || (uVar14 & 0x1c) != 4) {
              uVar1 = 0;
            }
            uVar14 = uVar14 & 0xffffffffffffe018 | uVar1 | 4;
          }
          uVar7 = ((ulong *)*puVar2)[1];
          uVar1 = uVar7;
          if (((uint)uVar7 >> 2 & 1) != 0) {
            uVar1 = 0x180;
            if (((uint)uVar7 >> 5 & 0xff) < 0xb || (uVar7 & 0x1c) != 4) {
              uVar1 = 0;
            }
            uVar1 = uVar7 & 0xffffffffffffe018 | uVar1 | 4;
          }
          if ((uVar14 != uVar1) && (((uVar12 != 4 && (uVar12 != 2)) || ((uVar7 & 7) != 4)))) {
LAB_01651208:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.",param_1);
          }
        }
      }
    }
    if (lVar5 != *plVar8) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","instr == *instr_it");
    }
    uVar4 = *(uint *)(lVar5 + 4);
    if (plVar13[1] !=
        ((ulong)(uVar4 >> 8) & 0xffff) + (ulong)(byte)uVar4 + ((ulong)(uVar4 >> 0x18) & 0x3f)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","operand_count == OperandCount(instr)");
    }
    pOVar11 = (OperandConstraint *)plVar13[2];
    if ((uVar4 & 0xffff00) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      pOVar9 = pOVar11;
      do {
        CheckConstraint(this,(InstructionOperand *)(lVar5 + (uVar12 + (uVar4 & 0xff)) * 8 + 0x28),
                        pOVar9);
        uVar4 = *(uint *)(lVar5 + 4);
        uVar12 = uVar12 + 1;
        pOVar9 = pOVar9 + 0x10;
      } while (uVar12 < (ushort)(uVar4 >> 8));
    }
    if ((uVar4 & 0x3f000000) != 0) {
      uVar14 = 0;
      pOVar9 = pOVar11 + uVar12 * 0x10;
      do {
        CheckConstraint(this,(InstructionOperand *)
                             (lVar5 + (uVar14 + ((uVar4 >> 8 & 0xffff) + (uVar4 & 0xff))) * 8 + 0x28
                             ),pOVar9);
        uVar4 = *(uint *)(lVar5 + 4);
        uVar14 = uVar14 + 1;
        pOVar9 = pOVar9 + 0x10;
      } while (uVar14 < ((ulong)(uVar4 >> 0x18) & 0x3f));
      uVar12 = uVar12 + uVar14;
    }
    if ((uVar4 & 0xff) != 0) {
      uVar14 = 0;
      pIVar10 = (InstructionOperand *)(lVar5 + 0x28);
      pOVar11 = pOVar11 + uVar12 * 0x10;
      do {
        CheckConstraint(this,pIVar10,pOVar11);
        uVar14 = uVar14 + 1;
        pIVar10 = pIVar10 + 8;
        pOVar11 = pOVar11 + 0x10;
      } while (uVar14 < *(byte *)(lVar5 + 4));
    }
    plVar8 = plVar8 + 1;
    if ((long)plVar8 - *plVar15 == 0x1000) {
      plVar15 = plVar15 + 1;
      plVar8 = (long *)*plVar15;
    }
    plVar13 = plVar13 + 3;
    if (plVar13 == plVar3) {
      return;
    }
    param_1 = *(char **)(this + 0x78);
  } while( true );
}

