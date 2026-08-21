
/* v8::internal::interpreter::TryFinallyBuilder::~TryFinallyBuilder() */

void __thiscall
v8::internal::interpreter::TryFinallyBuilder::~TryFinallyBuilder(TryFinallyBuilder *this)

{
  long lVar1;
  int iVar2;
  TryFinallyBuilder *pTVar3;
  BlockCoverageBuilder *pBVar4;
  
  pBVar4 = *(BlockCoverageBuilder **)(this + 0x50);
  *(undefined ***)this = &PTR__TryFinallyBuilder_01cc7188;
  if ((pBVar4 != (BlockCoverageBuilder *)0x0) &&
     (iVar2 = BlockCoverageBuilder::AllocateBlockCoverageSlot(pBVar4,*(undefined8 *)(this + 0x58),2)
     , iVar2 != -1)) {
    BytecodeArrayBuilder::IncBlockCounter(*(BytecodeArrayBuilder **)(pBVar4 + 0x20),iVar2);
  }
  if (*(long *)(this + 0x38) != 0) {
    lVar1 = *(long *)(this + 0x28);
    pTVar3 = *(TryFinallyBuilder **)(this + 0x30);
    *(undefined8 *)(*(long *)pTVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(undefined8 **)(lVar1 + 8) = *(undefined8 *)pTVar3;
    *(undefined8 *)(this + 0x38) = 0;
    for (; pTVar3 != this + 0x28; pTVar3 = *(TryFinallyBuilder **)(pTVar3 + 8)) {
    }
  }
  return;
}

