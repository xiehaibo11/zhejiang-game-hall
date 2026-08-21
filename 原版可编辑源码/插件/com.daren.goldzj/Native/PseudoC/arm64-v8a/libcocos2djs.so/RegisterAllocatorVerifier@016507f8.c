
/* v8::internal::compiler::RegisterAllocatorVerifier::RegisterAllocatorVerifier(v8::internal::Zone*,
   v8::internal::RegisterConfiguration const*, v8::internal::compiler::InstructionSequence const*)
    */

void __thiscall
v8::internal::compiler::RegisterAllocatorVerifier::RegisterAllocatorVerifier
          (RegisterAllocatorVerifier *this,Zone *param_1,RegisterConfiguration *param_2,
          InstructionSequence *param_3)

{
  long *plVar1;
  int iVar2;
  OperandConstraint *pOVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  OperandConstraint *pOVar11;
  InstructionOperand *pIVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long local_78;
  long lStack_70;
  OperandConstraint *local_68;
  
  *(Zone **)this = param_1;
  *(RegisterConfiguration **)(this + 8) = param_2;
  *(InstructionSequence **)(this + 0x10) = param_3;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(Zone **)(this + 0x30) = param_1;
  *(RegisterAllocatorVerifier **)(this + 0x38) = this + 0x40;
  *(Zone **)(this + 0x48) = param_1;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(Zone **)(this + 0x68) = param_1;
  *(RegisterAllocatorVerifier **)(this + 0x58) = this + 0x60;
  lVar10 = *(long *)(param_3 + 0xb8);
  if (lVar10 != 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    uVar5 = lVar10 * 0x18;
    if (uVar5 < (ulong)(*(long *)(param_1 + 0x18) - lVar4) ||
        uVar5 - (*(long *)(param_1 + 0x18) - lVar4) == 0) {
      *(ulong *)(param_1 + 0x10) = lVar4 + uVar5;
    }
    else {
      lVar4 = Zone::NewExpand(param_1,uVar5);
    }
    lVar16 = *(long *)(this + 0x18);
    lVar9 = lVar4;
    for (lVar8 = *(long *)(this + 0x20); lVar8 != lVar16; lVar8 = lVar8 + -0x18) {
      uVar18 = *(undefined8 *)(lVar8 + -0x10);
      uVar17 = *(undefined8 *)(lVar8 + -0x18);
      *(undefined8 *)(lVar9 + -8) = *(undefined8 *)(lVar8 + -8);
      *(undefined8 *)(lVar9 + -0x10) = uVar18;
      *(undefined8 *)(lVar9 + -0x18) = uVar17;
      lVar9 = lVar9 + -0x18;
    }
    *(long *)(this + 0x18) = lVar9;
    *(long *)(this + 0x20) = lVar4;
    *(long *)(this + 0x28) = lVar4 + lVar10 * 0x18;
  }
  lVar10 = *(long *)(param_3 + 0x88);
  if (*(long *)(param_3 + 0x90) != lVar10) {
    uVar5 = *(ulong *)(param_3 + 0xb0);
    lVar4 = *(long *)(param_3 + 0xb8);
    plVar13 = (long *)(lVar10 + (uVar5 >> 6 & 0x3fffffffffffff8));
    lVar10 = *(long *)(lVar10 + (lVar4 + uVar5 >> 6 & 0x3fffffffffffff8));
    plVar15 = (long *)(*plVar13 + (uVar5 & 0x1ff) * 8);
    while ((long *)(lVar10 + (lVar4 + uVar5 & 0x1ff) * 8) != plVar15) {
      lVar16 = *plVar15;
      if ((*(long *)(lVar16 + 8) != 0) || (*(long *)(lVar16 + 0x10) != 0)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(instr->GetParallelMove(inner_pos)) == nullptr");
      }
      uVar7 = *(uint *)(lVar16 + 4);
      pOVar3 = *(OperandConstraint **)(param_1 + 0x10);
      lVar8 = ((ulong)(uVar7 >> 8) & 0xffff) + (ulong)(byte)uVar7 + ((ulong)(uVar7 >> 0x18) & 0x3f);
      uVar6 = lVar8 * 0x10;
      if (uVar6 < (ulong)(*(long *)(param_1 + 0x18) - (long)pOVar3) ||
          uVar6 - (*(long *)(param_1 + 0x18) - (long)pOVar3) == 0) {
        *(OperandConstraint **)(param_1 + 0x10) = pOVar3 + uVar6;
      }
      else {
        pOVar3 = (OperandConstraint *)Zone::NewExpand(param_1,uVar6);
      }
      uVar7 = *(uint *)(lVar16 + 4);
      if ((uVar7 & 0xffff00) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        pOVar11 = pOVar3;
        do {
          BuildConstraint(this,(InstructionOperand *)(lVar16 + (uVar6 + (uVar7 & 0xff)) * 8 + 0x28),
                          pOVar11);
          if (*(int *)pOVar11 != 1) {
            if (*(int *)pOVar11 == 0xb) goto LAB_01650b50;
            if (*(int *)(pOVar11 + 0xc) == -1) goto LAB_01650b78;
          }
          uVar7 = *(uint *)(lVar16 + 4);
          uVar6 = uVar6 + 1;
          pOVar11 = pOVar11 + 0x10;
        } while (uVar6 < (ushort)(uVar7 >> 8));
      }
      if ((uVar7 & 0x3f000000) != 0) {
        uVar14 = 0;
        pOVar11 = pOVar3 + uVar6 * 0x10;
        do {
          BuildConstraint(this,(InstructionOperand *)
                               (lVar16 + (uVar14 + ((uVar7 >> 8 & 0xffff) + (uVar7 & 0xff))) * 8 +
                               0x28),pOVar11);
          iVar2 = *(int *)pOVar11;
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","kConstant != constraint.type_");
          }
          if (iVar2 == 1) goto LAB_01650b64;
          if (iVar2 == 0xb) {
LAB_01650b50:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","kSameAsFirst != constraint.type_");
          }
          uVar7 = *(uint *)(lVar16 + 4);
          uVar14 = uVar14 + 1;
          pOVar11 = pOVar11 + 0x10;
        } while (uVar14 < ((ulong)(uVar7 >> 0x18) & 0x3f));
        uVar6 = uVar6 + uVar14;
      }
      if ((uVar7 & 0xff) != 0) {
        uVar14 = 0;
        pIVar12 = (InstructionOperand *)(lVar16 + 0x28);
        pOVar11 = pOVar3 + uVar6 * 0x10;
        do {
          BuildConstraint(this,pIVar12,pOVar11);
          iVar2 = *(int *)pOVar11;
          if (iVar2 == 0xb) {
            if (*(short *)(lVar16 + 5) == 0) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","0 < instr->InputCount()");
            }
            iVar2 = (int)*(undefined8 *)pOVar3;
            *(undefined8 *)pOVar11 = *(undefined8 *)pOVar3;
          }
          if (iVar2 == 1) {
LAB_01650b64:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","kImmediate != constraint.type_");
          }
          if (*(int *)(pOVar11 + 0xc) == -1) {
LAB_01650b78:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.",
                     "InstructionOperand::kInvalidVirtualRegister != constraint.virtual_register_");
          }
          uVar14 = uVar14 + 1;
          pIVar12 = pIVar12 + 8;
          pOVar11 = pOVar11 + 0x10;
        } while (uVar14 < *(byte *)(lVar16 + 4));
      }
      plVar1 = *(long **)(this + 0x20);
      local_78 = lVar16;
      lStack_70 = lVar8;
      local_68 = pOVar3;
      if (plVar1 == *(long **)(this + 0x28)) {
        std::__ndk1::
        vector<v8::internal::compiler::RegisterAllocatorVerifier::InstructionConstraint,v8::internal::ZoneAllocator<v8::internal::compiler::RegisterAllocatorVerifier::InstructionConstraint>>
        ::
        __push_back_slow_path<v8::internal::compiler::RegisterAllocatorVerifier::InstructionConstraint_const&>
                  ((vector<v8::internal::compiler::RegisterAllocatorVerifier::InstructionConstraint,v8::internal::ZoneAllocator<v8::internal::compiler::RegisterAllocatorVerifier::InstructionConstraint>>
                    *)(this + 0x18),(InstructionConstraint *)&local_78);
      }
      else {
        plVar1[2] = (long)pOVar3;
        plVar1[1] = lVar8;
        *plVar1 = lVar16;
        *(long *)(this + 0x20) = *(long *)(this + 0x20) + 0x18;
      }
      plVar15 = plVar15 + 1;
      if ((long)plVar15 - *plVar13 == 0x1000) {
        plVar13 = plVar13 + 1;
        plVar15 = (long *)*plVar13;
      }
    }
  }
  return;
}

