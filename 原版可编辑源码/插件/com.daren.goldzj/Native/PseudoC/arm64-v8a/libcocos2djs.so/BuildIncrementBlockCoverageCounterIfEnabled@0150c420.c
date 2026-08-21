
/* v8::internal::interpreter::BytecodeGenerator::BuildIncrementBlockCoverageCounterIfEnabled(v8::internal::AstNode*,
   v8::internal::SourceRangeKind) */

void v8::internal::interpreter::BytecodeGenerator::BuildIncrementBlockCoverageCounterIfEnabled
               (long param_1)

{
  int iVar1;
  BlockCoverageBuilder *pBVar2;
  
  pBVar2 = *(BlockCoverageBuilder **)(param_1 + 0x208);
  if ((pBVar2 != (BlockCoverageBuilder *)0x0) &&
     (iVar1 = BlockCoverageBuilder::AllocateBlockCoverageSlot(pBVar2), iVar1 != -1)) {
    BytecodeArrayBuilder::IncBlockCounter(*(BytecodeArrayBuilder **)(pBVar2 + 0x20),iVar1);
    return;
  }
  return;
}

