
/* v8::internal::interpreter::TryCatchBuilder::EndTry() */

void __thiscall v8::internal::interpreter::TryCatchBuilder::EndTry(TryCatchBuilder *this)

{
  int iVar1;
  BlockCoverageBuilder *pBVar2;
  
  BytecodeArrayBuilder::MarkTryEnd(*(BytecodeArrayBuilder **)(this + 8),*(int *)(this + 0x10));
  BytecodeArrayBuilder::Jump(*(BytecodeArrayBuilder **)(this + 8),(BytecodeLabel *)(this + 0x18));
  BytecodeArrayBuilder::MarkHandler
            (*(BytecodeArrayBuilder **)(this + 8),*(undefined4 *)(this + 0x10),
             *(undefined4 *)(this + 0x14));
  pBVar2 = *(BlockCoverageBuilder **)(this + 0x28);
  if ((pBVar2 != (BlockCoverageBuilder *)0x0) &&
     (iVar1 = BlockCoverageBuilder::AllocateBlockCoverageSlot(pBVar2,*(undefined8 *)(this + 0x30),1)
     , iVar1 != -1)) {
    BytecodeArrayBuilder::IncBlockCounter(*(BytecodeArrayBuilder **)(pBVar2 + 0x20),iVar1);
    return;
  }
  return;
}

