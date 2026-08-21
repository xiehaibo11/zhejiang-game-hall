
/* v8::internal::compiler::MoveOptimizer::CompressBlock(v8::internal::compiler::InstructionBlock*)
    */

void __thiscall
v8::internal::compiler::MoveOptimizer::CompressBlock(MoveOptimizer *this,InstructionBlock *param_1)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  Instruction *pIVar4;
  Instruction *pIVar5;
  long lVar6;
  
  iVar2 = *(int *)(param_1 + 0x70);
  iVar3 = *(int *)(param_1 + 0x74);
  lVar6 = (long)iVar2;
  uVar1 = *(long *)(*(long *)(this + 8) + 0xb0) + lVar6;
  pIVar4 = *(Instruction **)
            (*(long *)(*(long *)(*(long *)(this + 8) + 0x88) + (uVar1 >> 6 & 0x3fffffffffffff8)) +
            (uVar1 & 0x1ff) * 8);
  RemoveClobberedDestinations(this,pIVar4);
  if (iVar2 < iVar3 + -1) {
    do {
      uVar1 = lVar6 + *(long *)(*(long *)(this + 8) + 0xb0) + 1;
      lVar6 = lVar6 + 1;
      pIVar5 = *(Instruction **)
                (*(long *)(*(long *)(*(long *)(this + 8) + 0x88) + (uVar1 >> 6 & 0x3fffffffffffff8))
                + (uVar1 & 0x1ff) * 8);
      MigrateMoves(this,pIVar5,pIVar4);
      RemoveClobberedDestinations(this,pIVar5);
      pIVar4 = pIVar5;
    } while (iVar3 + -1 != lVar6);
  }
  return;
}

