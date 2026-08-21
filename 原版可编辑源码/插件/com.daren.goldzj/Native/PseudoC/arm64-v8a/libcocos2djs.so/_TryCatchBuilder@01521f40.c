
/* v8::internal::interpreter::TryCatchBuilder::~TryCatchBuilder() */

void __thiscall v8::internal::interpreter::TryCatchBuilder::~TryCatchBuilder(TryCatchBuilder *this)

{
  int iVar1;
  BlockCoverageBuilder *pBVar2;
  
  pBVar2 = *(BlockCoverageBuilder **)(this + 0x28);
  *(undefined ***)this = &PTR__TryCatchBuilder_01cc7168;
  if ((pBVar2 != (BlockCoverageBuilder *)0x0) &&
     (iVar1 = BlockCoverageBuilder::AllocateBlockCoverageSlot(pBVar2,*(undefined8 *)(this + 0x30),2)
     , iVar1 != -1)) {
    BytecodeArrayBuilder::IncBlockCounter(*(BytecodeArrayBuilder **)(pBVar2 + 0x20),iVar1);
  }
  operator_delete(this);
  return;
}

