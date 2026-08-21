
/* v8::internal::interpreter::BreakableControlFlowBuilder::~BreakableControlFlowBuilder() */

void __thiscall
v8::internal::interpreter::BreakableControlFlowBuilder::~BreakableControlFlowBuilder
          (BreakableControlFlowBuilder *this)

{
  long lVar1;
  int iVar2;
  BytecodeLabels *pBVar3;
  BlockCoverageBuilder *pBVar4;
  
  *(undefined ***)this = &PTR__BreakableControlFlowBuilder_01cc7108;
  BytecodeLabels::Bind((BytecodeLabels *)(this + 0x10),*(BytecodeArrayBuilder **)(this + 8));
  pBVar4 = *(BlockCoverageBuilder **)(this + 0x40);
  if ((pBVar4 != (BlockCoverageBuilder *)0x0) &&
     (iVar2 = BlockCoverageBuilder::AllocateBlockCoverageSlot(pBVar4,*(undefined8 *)(this + 0x38),2)
     , iVar2 != -1)) {
    BytecodeArrayBuilder::IncBlockCounter(*(BytecodeArrayBuilder **)(pBVar4 + 0x20),iVar2);
  }
  if (*(long *)(this + 0x20) != 0) {
    lVar1 = *(long *)(this + 0x10);
    pBVar3 = *(BytecodeLabels **)(this + 0x18);
    *(undefined8 *)(*(long *)pBVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(undefined8 **)(lVar1 + 8) = *(undefined8 *)pBVar3;
    *(undefined8 *)(this + 0x20) = 0;
    for (; pBVar3 != (BytecodeLabels *)(this + 0x10); pBVar3 = *(BytecodeLabels **)(pBVar3 + 8)) {
    }
  }
  return;
}

