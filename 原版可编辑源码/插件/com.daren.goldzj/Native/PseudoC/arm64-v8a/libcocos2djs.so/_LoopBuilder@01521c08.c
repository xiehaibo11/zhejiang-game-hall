
/* v8::internal::interpreter::LoopBuilder::~LoopBuilder() */

void __thiscall v8::internal::interpreter::LoopBuilder::~LoopBuilder(LoopBuilder *this)

{
  long lVar1;
  int iVar2;
  LoopBuilder *pLVar3;
  BytecodeLabels *pBVar4;
  BlockCoverageBuilder *pBVar5;
  
  *(undefined ***)this = &PTR__LoopBuilder_01cc7128;
  if (*(long *)(this + 0x60) != 0) {
    lVar1 = *(long *)(this + 0x50);
    pLVar3 = *(LoopBuilder **)(this + 0x58);
    *(undefined8 *)(*(long *)pLVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(undefined8 **)(lVar1 + 8) = *(undefined8 *)pLVar3;
    *(undefined8 *)(this + 0x60) = 0;
    for (; pLVar3 != this + 0x50; pLVar3 = *(LoopBuilder **)(pLVar3 + 8)) {
    }
  }
  *(undefined ***)this = &PTR__BreakableControlFlowBuilder_01cc7108;
  BytecodeLabels::Bind((BytecodeLabels *)(this + 0x10),*(BytecodeArrayBuilder **)(this + 8));
  pBVar5 = *(BlockCoverageBuilder **)(this + 0x40);
  if ((pBVar5 != (BlockCoverageBuilder *)0x0) &&
     (iVar2 = BlockCoverageBuilder::AllocateBlockCoverageSlot(pBVar5,*(undefined8 *)(this + 0x38),2)
     , iVar2 != -1)) {
    BytecodeArrayBuilder::IncBlockCounter(*(BytecodeArrayBuilder **)(pBVar5 + 0x20),iVar2);
  }
  if (*(long *)(this + 0x20) != 0) {
    lVar1 = *(long *)(this + 0x10);
    pBVar4 = *(BytecodeLabels **)(this + 0x18);
    *(undefined8 *)(*(long *)pBVar4 + 8) = *(undefined8 *)(lVar1 + 8);
    **(undefined8 **)(lVar1 + 8) = *(undefined8 *)pBVar4;
    *(undefined8 *)(this + 0x20) = 0;
    for (; pBVar4 != (BytecodeLabels *)(this + 0x10); pBVar4 = *(BytecodeLabels **)(pBVar4 + 8)) {
    }
  }
  return;
}

