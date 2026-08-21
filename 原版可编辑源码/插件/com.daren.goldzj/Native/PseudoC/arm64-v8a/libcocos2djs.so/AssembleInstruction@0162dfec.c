
/* v8::internal::compiler::CodeGenerator::AssembleInstruction(int,
   v8::internal::compiler::InstructionBlock const*) */

int __thiscall
v8::internal::compiler::CodeGenerator::AssembleInstruction
          (CodeGenerator *this,int param_1,InstructionBlock *param_2)

{
  Instruction IVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  Instruction *this_00;
  long lVar11;
  undefined8 local_70;
  ulong uStack_68;
  undefined8 *puStack_60;
  undefined1 local_58;
  undefined8 local_38;
  
  lVar11 = (long)param_1;
  uVar7 = *(long *)(*(long *)(this + 0x28) + 0xb0) + lVar11;
  this_00 = *(Instruction **)
             (*(long *)(*(long *)(*(long *)(this + 0x28) + 0x88) + (uVar7 >> 6 & 0x3fffffffffffff8))
             + (uVar7 & 0x1ff) * 8);
  if ((*(byte *)(*(long *)(this + 0xa0) + 1) >> 5 & 1) != 0) {
    *(int *)(*(long *)(this + 0x4a0) + lVar11 * 0xc) = *(int *)(this + 0xf0) - *(int *)(this + 0xe0)
    ;
  }
  uVar6 = *(uint *)this_00;
  uVar2 = uVar6 >> 0xe & 7;
  if (uVar2 != 6) {
    local_70 = 0;
    if ((((*(uint *)this_00 & 0x1ff) != 0x11) ||
        (uVar7 = Instruction::AreMovesRedundant(this_00), (uVar7 & 1) == 0)) &&
       (uVar7 = InstructionSequence::GetSourcePosition
                          (*(InstructionSequence **)(this + 0x28),this_00,
                           (SourcePosition *)&local_70), (uVar7 & 1) != 0)) {
      AssembleSourcePosition(this,local_70);
    }
    uVar6 = *(uint *)this_00;
  }
  if (((uVar6 & 0x1ff) < 0xc) && ((1 << (ulong)(uVar6 & 0x1f) & 0x816U) != 0)) {
    uVar7 = *(ulong *)(this_00 +
                      (((ulong)*(uint *)(this_00 + 4) & 0xff) +
                      (ulong)(ushort)(*(uint *)(this_00 + 4) >> 8)) * 8 + 0x20);
    if ((uVar7 & 7) == 3) {
      if (((uint)uVar7 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_70,(int)(uVar7 >> 0x20));
      }
      else {
        puVar4 = (ulong *)(*(long *)(*(long *)(this + 0x28) + 0x60) + ((long)uVar7 >> 0x20) * 0x10);
        uStack_68 = puVar4[1];
        local_70 = *puVar4;
      }
      iVar5 = (int)uStack_68;
    }
    else {
      plVar8 = (long *)(*(long *)(this + 0x28) + 0x48);
      plVar10 = (long *)*plVar8;
      if (plVar10 == (long *)0x0) {
LAB_0162e14c:
        plVar9 = plVar8;
      }
      else {
        plVar9 = plVar8;
        do {
          iVar5 = (int)(uVar7 >> 3);
          if (iVar5 <= (int)plVar10[4]) {
            plVar9 = plVar10;
          }
          plVar10 = (long *)plVar10[(int)plVar10[4] < iVar5];
        } while (plVar10 != (long *)0x0);
        if ((plVar9 == plVar8) || (iVar5 < (int)plVar9[4])) goto LAB_0162e14c;
      }
      iVar5 = (int)plVar9[6];
    }
    AssembleTailCallBeforeGap(this,this_00,iVar5);
    if (*(ParallelMove **)(this_00 + 8) != (ParallelMove *)0x0) {
      GapResolver::Resolve((GapResolver *)(this + 0x288),*(ParallelMove **)(this_00 + 8));
    }
    if (*(ParallelMove **)(this_00 + 0x10) != (ParallelMove *)0x0) {
      GapResolver::Resolve((GapResolver *)(this + 0x288),*(ParallelMove **)(this_00 + 0x10));
    }
    AssembleTailCallAfterGap(this,this_00,iVar5);
  }
  else {
    if (*(ParallelMove **)(this_00 + 8) != (ParallelMove *)0x0) {
      GapResolver::Resolve((GapResolver *)(this + 0x288),*(ParallelMove **)(this_00 + 8));
    }
    if (*(ParallelMove **)(this_00 + 0x10) != (ParallelMove *)0x0) {
      GapResolver::Resolve((GapResolver *)(this + 0x288),*(ParallelMove **)(this_00 + 0x10));
    }
  }
  if (((*(uint *)this_00 & 0x1ff) == 0xd) && (param_2[0x7e] != (InstructionBlock)0x0)) {
    AssembleDeconstructFrame(this);
  }
  if ((*(byte *)(*(long *)(this + 0xa0) + 1) >> 5 & 1) != 0) {
    *(int *)(*(long *)(this + 0x4a0) + lVar11 * 0xc + 4) =
         *(int *)(this + 0xf0) - *(int *)(this + 0xe0);
  }
  iVar5 = AssembleArchInstruction(this,this_00);
  if (iVar5 != 0) {
    return iVar5;
  }
  if ((*(byte *)(*(long *)(this + 0xa0) + 1) >> 5 & 1) != 0) {
    *(int *)(*(long *)(this + 0x4a0) + lVar11 * 0xc + 8) =
         *(int *)(this + 0xf0) - *(int *)(this + 0xe0);
  }
  if (uVar2 - 1 < 6) {
    uVar6 = *(uint *)this_00 >> 0x11;
    uVar3 = uVar6 & 0x1f;
    switch(uVar2) {
    default:
      uVar6 = ComputeBranchInfo(this,(BranchInfo *)&local_70,this_00);
      if (-1 < (int)uVar6) {
        lVar11 = **(long **)(*(long *)(this + 0x28) + 0x10);
        uVar7 = (*(long **)(*(long *)(this + 0x28) + 0x10))[1] - lVar11 >> 3;
        if (((ulong)(long)*(int *)(this + 0xb8) < uVar7) && (uVar6 < uVar7)) {
          if (*(int *)(*(long *)(lVar11 + (long)*(int *)(this + 0xb8) * 8) + 0x60) + 1 ==
              *(int *)(*(long *)(lVar11 + (ulong)uVar6 * 8) + 0x60)) {
            return 0;
          }
          AssembleArchJump(this);
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        abort();
      }
      AssembleArchBranch(this,this_00,(BranchInfo *)&local_70);
      IVar1 = this_00[7];
      break;
    case 3:
    case 4:
      lVar11 = BuildTranslation(this,this_00,0xffffffff,*(uint *)this_00 >> 0x16,0xffffffffffffffff)
      ;
      uStack_68 = lVar11 + 0x10;
      puStack_60 = &local_38;
      local_38 = 0;
      local_70 = CONCAT44(local_70._4_4_,uVar6) & 0xffffffff0000001f;
      local_58 = 1;
      AssembleArchDeoptBranch((Instruction *)this,(BranchInfo *)this_00);
      Assembler::bind((Label *)(this + 0xd0));
      if (uVar2 == 4) {
        AssembleBranchPoisoning(this,(uint)local_70 ^ 1,this_00);
      }
      goto LAB_0162e37c;
    case 5:
      AssembleArchBoolean(this,this_00,uVar3);
      IVar1 = this_00[7];
      break;
    case 6:
      AssembleArchTrap(this,this_00,uVar3);
      IVar1 = this_00[7];
    }
  }
  else {
LAB_0162e37c:
    IVar1 = this_00[7];
  }
  if ((((byte)IVar1 >> 6 & 1) != 0) && (*(int *)(this + 0x45c) != 1)) {
    TurboAssembler::ResetSpeculationPoisonRegister((TurboAssembler *)(this + 0xd0));
  }
  return 0;
}

