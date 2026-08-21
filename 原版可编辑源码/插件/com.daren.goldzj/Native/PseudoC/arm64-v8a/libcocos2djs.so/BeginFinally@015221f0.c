
/* v8::internal::interpreter::TryFinallyBuilder::BeginFinally() */

void __thiscall v8::internal::interpreter::TryFinallyBuilder::BeginFinally(TryFinallyBuilder *this)

{
  int iVar1;
  BlockCoverageBuilder *pBVar2;
  
  BytecodeLabels::Bind((BytecodeLabels *)(this + 0x28),*(BytecodeArrayBuilder **)(this + 8));
  pBVar2 = *(BlockCoverageBuilder **)(this + 0x50);
  if ((pBVar2 != (BlockCoverageBuilder *)0x0) &&
     (iVar1 = BlockCoverageBuilder::AllocateBlockCoverageSlot(pBVar2,*(undefined8 *)(this + 0x58),4)
     , iVar1 != -1)) {
    BytecodeArrayBuilder::IncBlockCounter(*(BytecodeArrayBuilder **)(pBVar2 + 0x20),iVar1);
    return;
  }
  return;
}

