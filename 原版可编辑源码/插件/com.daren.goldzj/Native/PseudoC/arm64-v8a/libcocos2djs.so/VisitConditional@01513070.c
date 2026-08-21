
/* v8::internal::interpreter::BytecodeGenerator::VisitConditional(v8::internal::Conditional*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitConditional
          (BytecodeGenerator *this,Conditional *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  AstNode *pAVar5;
  BlockCoverageBuilder *pBVar6;
  undefined **local_118;
  BytecodeGenerator *pBStack_110;
  undefined8 **local_108;
  undefined8 **ppuStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8;
  undefined8 **local_e0;
  undefined8 **ppuStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined8 **local_b8;
  undefined8 **ppuStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  Conditional *local_90;
  undefined4 local_88;
  undefined4 local_84;
  BlockCoverageBuilder *local_80;
  undefined8 local_78;
  BytecodeGenerator *pBStack_70;
  int local_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pBStack_110 = this + 0x18;
  local_118 = &PTR__ConditionalControlFlowBuilder_01cc71a8;
  pBVar6 = *(BlockCoverageBuilder **)(this + 0x208);
  uStack_f0 = *(undefined8 *)(this + 0x18);
  local_108 = &local_108;
  local_e8 = 0;
  local_c0 = 0;
  local_98 = 0;
  local_f8 = 0;
  local_d0 = 0;
  local_a8 = 0;
  ppuStack_100 = local_108;
  local_e0 = &local_e0;
  ppuStack_d8 = &local_e0;
  uStack_c8 = uStack_f0;
  local_b8 = &local_b8;
  ppuStack_b0 = &local_b8;
  uStack_a0 = uStack_f0;
  local_90 = param_1;
  local_80 = pBVar6;
  if (pBVar6 != (BlockCoverageBuilder *)0x0) {
    local_88 = BlockCoverageBuilder::AllocateBlockCoverageSlot(pBVar6,param_1,6);
    local_84 = BlockCoverageBuilder::AllocateBlockCoverageSlot(pBVar6,param_1,3);
  }
  uVar3 = Expression::ToBooleanIsTrue(*(Expression **)(param_1 + 8));
  pBStack_70 = this;
  if ((uVar3 & 1) == 0) {
    uVar3 = Expression::ToBooleanIsFalse(*(Expression **)(param_1 + 8));
    if ((uVar3 & 1) == 0) {
      VisitForTest(this,*(undefined8 *)(param_1 + 8),&local_e0,&local_b8,0);
      ConditionalControlFlowBuilder::Then((ConditionalControlFlowBuilder *)&local_118);
      local_78 = *(undefined8 *)(this + 0x300);
      pAVar5 = *(AstNode **)(param_1 + 0x10);
      local_68 = *(int *)(this + 0x118);
      local_60 = 2;
      *(undefined8 **)(this + 0x300) = &local_78;
      if (this[8] == (BytecodeGenerator)0x0) {
        uVar3 = GetCurrentStackPosition();
        if (uVar3 < *(ulong *)this) {
          this[8] = (BytecodeGenerator)0x1;
        }
        else {
          VisitNoStackOverflowCheck(this,pAVar5);
        }
      }
      *(undefined8 *)(pBStack_70 + 0x300) = local_78;
      plVar4 = *(long **)(pBStack_70 + 0x120);
      iVar1 = *(int *)(pBStack_70 + 0x118);
      *(int *)(pBStack_70 + 0x118) = local_68;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))(plVar4,CONCAT44(iVar1 - local_68,local_68));
      }
      ConditionalControlFlowBuilder::JumpToEnd((ConditionalControlFlowBuilder *)&local_118);
      ConditionalControlFlowBuilder::Else((ConditionalControlFlowBuilder *)&local_118);
      local_78 = *(undefined8 *)(this + 0x300);
      pAVar5 = *(AstNode **)(param_1 + 0x18);
      local_68 = *(int *)(this + 0x118);
      goto LAB_01513250;
    }
    ConditionalControlFlowBuilder::Else((ConditionalControlFlowBuilder *)&local_118);
    local_78 = *(undefined8 *)(this + 0x300);
    pAVar5 = *(AstNode **)(param_1 + 0x18);
  }
  else {
    ConditionalControlFlowBuilder::Then((ConditionalControlFlowBuilder *)&local_118);
    local_78 = *(undefined8 *)(this + 0x300);
    pAVar5 = *(AstNode **)(param_1 + 0x10);
  }
  local_68 = *(int *)(this + 0x118);
LAB_01513250:
  local_60 = 2;
  *(undefined8 **)(this + 0x300) = &local_78;
  pBStack_70 = this;
  if (this[8] == (BytecodeGenerator)0x0) {
    uVar3 = GetCurrentStackPosition();
    if (uVar3 < *(ulong *)this) {
      this[8] = (BytecodeGenerator)0x1;
    }
    else {
      VisitNoStackOverflowCheck(this,pAVar5);
    }
  }
  *(undefined8 *)(pBStack_70 + 0x300) = local_78;
  plVar4 = *(long **)(pBStack_70 + 0x120);
  iVar1 = *(int *)(pBStack_70 + 0x118);
  *(int *)(pBStack_70 + 0x118) = local_68;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4,CONCAT44(iVar1 - local_68,local_68));
  }
  ConditionalControlFlowBuilder::~ConditionalControlFlowBuilder
            ((ConditionalControlFlowBuilder *)&local_118);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

