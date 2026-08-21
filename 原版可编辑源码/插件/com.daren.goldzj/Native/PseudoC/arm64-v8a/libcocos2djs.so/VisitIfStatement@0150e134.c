
/* v8::internal::interpreter::BytecodeGenerator::VisitIfStatement(v8::internal::IfStatement*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitIfStatement
          (BytecodeGenerator *this,IfStatement *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  AstNode *pAVar4;
  BlockCoverageBuilder *pBVar5;
  undefined **local_e8;
  BytecodeGenerator *pBStack_e0;
  undefined8 ***local_d8;
  undefined8 ***pppuStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined8 ***local_b0;
  undefined8 ***pppuStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 ***local_88;
  undefined8 ***pppuStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  IfStatement *local_60;
  undefined4 local_58;
  undefined4 local_54;
  BlockCoverageBuilder *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pBStack_e0 = this + 0x18;
  local_e8 = &PTR__ConditionalControlFlowBuilder_01cc71a8;
  pBVar5 = *(BlockCoverageBuilder **)(this + 0x208);
  uStack_c0 = *(undefined8 *)(this + 0x18);
  local_d8 = &local_d8;
  local_b8 = 0;
  local_90 = 0;
  local_68 = 0;
  local_c8 = 0;
  local_a0 = 0;
  local_78 = 0;
  pppuStack_d0 = local_d8;
  local_b0 = &local_b0;
  pppuStack_a8 = &local_b0;
  uStack_98 = uStack_c0;
  local_88 = &local_88;
  pppuStack_80 = &local_88;
  uStack_70 = uStack_c0;
  local_60 = param_1;
  local_50 = pBVar5;
  if (pBVar5 != (BlockCoverageBuilder *)0x0) {
    local_58 = BlockCoverageBuilder::AllocateBlockCoverageSlot(pBVar5,param_1,6);
    local_54 = BlockCoverageBuilder::AllocateBlockCoverageSlot(pBVar5,param_1,3);
  }
  iVar1 = *(int *)param_1;
  if (iVar1 != -1) {
    this[0x1c0] = (BytecodeGenerator)0x2;
    *(int *)(this + 0x1c4) = iVar1;
  }
  uVar3 = Expression::ToBooleanIsTrue(*(Expression **)(param_1 + 8));
  if ((uVar3 & 1) == 0) {
    uVar3 = Expression::ToBooleanIsFalse(*(Expression **)(param_1 + 8));
    if ((uVar3 & 1) == 0) {
      VisitForTest(this,*(undefined8 *)(param_1 + 8),&local_b0,&local_88,0);
      ConditionalControlFlowBuilder::Then((ConditionalControlFlowBuilder *)&local_e8);
      if (this[8] == (BytecodeGenerator)0x0) {
        pAVar4 = *(AstNode **)(param_1 + 0x10);
        uVar3 = GetCurrentStackPosition();
        if (uVar3 < *(ulong *)this) {
          this[8] = (BytecodeGenerator)0x1;
        }
        else {
          VisitNoStackOverflowCheck(this,pAVar4);
        }
      }
      if ((*(uint *)(*(long *)(param_1 + 0x18) + 4) & 0x3f) == 10) goto LAB_0150e2f0;
      ConditionalControlFlowBuilder::JumpToEnd((ConditionalControlFlowBuilder *)&local_e8);
    }
    else if ((*(uint *)(*(long *)(param_1 + 0x18) + 4) & 0x3f) == 10) goto LAB_0150e2f0;
    ConditionalControlFlowBuilder::Else((ConditionalControlFlowBuilder *)&local_e8);
    if (this[8] != (BytecodeGenerator)0x0) goto LAB_0150e2f0;
    pAVar4 = *(AstNode **)(param_1 + 0x18);
  }
  else {
    ConditionalControlFlowBuilder::Then((ConditionalControlFlowBuilder *)&local_e8);
    if (this[8] != (BytecodeGenerator)0x0) goto LAB_0150e2f0;
    pAVar4 = *(AstNode **)(param_1 + 0x10);
  }
  uVar3 = GetCurrentStackPosition();
  if (uVar3 < *(ulong *)this) {
    this[8] = (BytecodeGenerator)0x1;
  }
  else {
    VisitNoStackOverflowCheck(this,pAVar4);
  }
LAB_0150e2f0:
  ConditionalControlFlowBuilder::~ConditionalControlFlowBuilder
            ((ConditionalControlFlowBuilder *)&local_e8);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

