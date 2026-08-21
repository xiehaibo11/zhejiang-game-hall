
/* v8::internal::interpreter::ConditionalControlFlowBuilder::~ConditionalControlFlowBuilder() */

void __thiscall
v8::internal::interpreter::ConditionalControlFlowBuilder::~ConditionalControlFlowBuilder
          (ConditionalControlFlowBuilder *this)

{
  long lVar1;
  int iVar2;
  BytecodeLabels *pBVar3;
  ConditionalControlFlowBuilder *pCVar4;
  BlockCoverageBuilder *pBVar5;
  
  *(undefined ***)this = &PTR__ConditionalControlFlowBuilder_01cc71a8;
  if (this[0x80] == (ConditionalControlFlowBuilder)0x0) {
    BytecodeLabels::Bind((BytecodeLabels *)(this + 0x60),*(BytecodeArrayBuilder **)(this + 8));
  }
  BytecodeLabels::Bind((BytecodeLabels *)(this + 0x10),*(BytecodeArrayBuilder **)(this + 8));
  pBVar5 = *(BlockCoverageBuilder **)(this + 0x98);
  if (((pBVar5 != (BlockCoverageBuilder *)0x0) &&
      ((*(uint *)(*(long *)(this + 0x88) + 4) & 0x3f) == 0xc)) &&
     (iVar2 = BlockCoverageBuilder::AllocateBlockCoverageSlot(pBVar5,*(long *)(this + 0x88),2),
     iVar2 != -1)) {
    BytecodeArrayBuilder::IncBlockCounter(*(BytecodeArrayBuilder **)(pBVar5 + 0x20),iVar2);
  }
  if (*(long *)(this + 0x70) != 0) {
    lVar1 = *(long *)(this + 0x60);
    pBVar3 = *(BytecodeLabels **)(this + 0x68);
    *(undefined8 *)(*(long *)pBVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(undefined8 **)(lVar1 + 8) = *(undefined8 *)pBVar3;
    *(undefined8 *)(this + 0x70) = 0;
    for (; pBVar3 != (BytecodeLabels *)(this + 0x60); pBVar3 = *(BytecodeLabels **)(pBVar3 + 8)) {
    }
  }
  if (*(long *)(this + 0x48) != 0) {
    lVar1 = *(long *)(this + 0x38);
    pCVar4 = *(ConditionalControlFlowBuilder **)(this + 0x40);
    *(undefined8 *)(*(long *)pCVar4 + 8) = *(undefined8 *)(lVar1 + 8);
    **(undefined8 **)(lVar1 + 8) = *(undefined8 *)pCVar4;
    *(undefined8 *)(this + 0x48) = 0;
    for (; pCVar4 != this + 0x38; pCVar4 = *(ConditionalControlFlowBuilder **)(pCVar4 + 8)) {
    }
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

