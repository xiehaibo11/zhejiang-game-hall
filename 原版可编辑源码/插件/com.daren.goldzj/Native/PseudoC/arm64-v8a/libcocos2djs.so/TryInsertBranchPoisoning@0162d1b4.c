
/* v8::internal::compiler::CodeGenerator::TryInsertBranchPoisoning(v8::internal::compiler::InstructionBlock
   const*) */

void __thiscall
v8::internal::compiler::CodeGenerator::TryInsertBranchPoisoning
          (CodeGenerator *this,InstructionBlock *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  Instruction *pIVar6;
  uint local_50 [4];
  long local_40;
  
  if (*(long *)(param_1 + 0x28) - (long)*(int **)(param_1 + 0x20) == 4) {
    lVar3 = *(long *)(this + 0x28);
    uVar4 = (ulong)**(int **)(param_1 + 0x20);
    lVar5 = **(long **)(lVar3 + 0x10);
    if ((ulong)((*(long **)(lVar3 + 0x10))[1] - lVar5 >> 3) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = *(long *)(lVar5 + uVar4 * 8);
    iVar2 = *(int *)(lVar5 + 0x74);
    if (*(int *)(lVar5 + 0x70) != iVar2) {
      uVar4 = ((long)iVar2 + *(long *)(lVar3 + 0xb0)) - 1;
      pIVar6 = *(Instruction **)
                (*(long *)(*(long *)(lVar3 + 0x88) + (uVar4 >> 6 & 0x3fffffffffffff8)) +
                (uVar4 & 0x1ff) * 8);
      uVar1 = *(uint *)pIVar6 >> 0xe & 7;
      if (uVar1 == 2) {
        iVar2 = ComputeBranchInfo(this,(BranchInfo *)local_50,pIVar6);
        if (iVar2 < 0) {
          AssembleBranchPoisoning
                    (this,local_50[0] ^
                          local_40 == *(long *)(this + 0xa8) + (long)*(int *)(param_1 + 100) * 8,
                     pIVar6);
        }
      }
      else if (uVar1 == 4) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
    }
  }
  return;
}

