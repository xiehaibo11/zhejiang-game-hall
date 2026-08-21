
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::interpreter::BytecodeGenerator::VisitForStatement(v8::internal::ForStatement*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitForStatement
          (BytecodeGenerator *this,ForStatement *param_1)

{
  BytecodeArrayBuilder *this_00;
  int iVar1;
  long lVar2;
  Expression *this_01;
  ulong uVar3;
  int *piVar4;
  BytecodeGenerator *pBVar5;
  AstNode *pAVar6;
  undefined **local_108;
  BytecodeArrayBuilder *pBStack_100;
  undefined8 *******local_f8;
  undefined8 *******pppppppuStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  ForStatement *local_d0;
  BlockCoverageBuilder *pBStack_c8;
  undefined8 local_c0;
  undefined8 *******local_b8;
  undefined8 *******pppppppuStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined4 local_90;
  BytecodeGenerator *local_88;
  BytecodeGenerator *local_80;
  BytecodeGenerator *local_78;
  undefined8 uStack_70;
  ForStatement *local_68;
  undefined ***pppuStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  this_00 = (BytecodeArrayBuilder *)(this + 0x18);
  local_108 = &PTR__LoopBuilder_01cc7128;
  pBStack_c8 = *(BlockCoverageBuilder **)(this + 0x208);
  uStack_e0 = *(undefined8 *)(this + 0x18);
  local_b8 = &local_b8;
  local_d8 = 0;
  local_c0 = 0xffffffffffffffff;
  local_e8 = 0;
  local_a8 = 0;
  local_98 = 0;
  pBStack_100 = this_00;
  local_f8 = &local_f8;
  pppppppuStack_f0 = &local_f8;
  local_d0 = param_1;
  pppppppuStack_b0 = local_b8;
  uStack_a0 = uStack_e0;
  if (pBStack_c8 != (BlockCoverageBuilder *)0x0) {
    local_90 = BlockCoverageBuilder::AllocateBlockCoverageSlot(pBStack_c8,param_1,0);
  }
  pAVar6 = *(AstNode **)(param_1 + 0x20);
  if ((pAVar6 == (AstNode *)0x0) || (this[8] != (BytecodeGenerator)0x0)) {
    this_01 = *(Expression **)(param_1 + 0x28);
  }
  else {
    uVar3 = GetCurrentStackPosition();
    if (uVar3 < *(ulong *)this) {
      this[8] = (BytecodeGenerator)0x1;
      this_01 = *(Expression **)(param_1 + 0x28);
    }
    else {
      VisitNoStackOverflowCheck(this,pAVar6);
      this_01 = *(Expression **)(param_1 + 0x28);
    }
  }
  if ((this_01 == (Expression *)0x0) ||
     (uVar3 = Expression::ToBooleanIsFalse(this_01), (uVar3 & 1) == 0)) {
    LoopBuilder::LoopHeader((LoopBuilder *)&local_108);
    if ((*(Expression **)(param_1 + 0x28) != (Expression *)0x0) &&
       (uVar3 = Expression::ToBooleanIsTrue(*(Expression **)(param_1 + 0x28)), (uVar3 & 1) == 0)) {
      piVar4 = *(int **)(param_1 + 0x28);
      iVar1 = *piVar4;
      if (iVar1 != -1) {
        this[0x1c0] = (BytecodeGenerator)0x2;
        *(int *)(this + 0x1c4) = iVar1;
        piVar4 = *(int **)(param_1 + 0x28);
      }
      uStack_70 = *(undefined8 *)(this + 0x10);
      local_78 = (BytecodeGenerator *)0x0;
      local_68 = (ForStatement *)((ulong)local_68 & 0xffffffffffffff00);
      local_88 = (BytecodeGenerator *)&local_88;
      local_80 = (BytecodeGenerator *)&local_88;
      VisitForTest(this,piVar4,&local_88,&local_f8,0);
      BytecodeLabels::Bind((BytecodeLabels *)&local_88,this_00);
      if (local_78 != (BytecodeGenerator *)0x0) {
        *(undefined **)(*(BytecodeGenerator **)local_80 + 8) = *(undefined **)(local_88 + 8);
        **(undefined8 **)(local_88 + 8) = *(BytecodeGenerator **)local_80;
        local_78 = (BytecodeGenerator *)0x0;
        if (local_80 != (BytecodeGenerator *)&local_88) {
          pBVar5 = local_80;
          do {
            pBVar5 = *(BytecodeGenerator **)(pBVar5 + 8);
          } while (pBVar5 != (BytecodeGenerator *)&local_88);
        }
      }
    }
    LoopBuilder::LoopBody((LoopBuilder *)&local_108);
    uStack_70 = *(undefined8 *)(this + 0x2f8);
    local_78 = *(BytecodeGenerator **)(this + 0x2f0);
    local_88 = (BytecodeGenerator *)&PTR__ControlScopeForIteration_01cc7090;
    *(BytecodeGenerator ***)(this + 0x2f0) = &local_88;
    *(int *)(this + 0x334) = *(int *)(this + 0x334) + 1;
    local_80 = this;
    local_68 = param_1;
    pppuStack_60 = &local_108;
    BytecodeArrayBuilder::StackCheck(this_00,*(int *)param_1);
    if (this[8] == (BytecodeGenerator)0x0) {
      pAVar6 = *(AstNode **)(param_1 + 0x18);
      uVar3 = GetCurrentStackPosition();
      if (uVar3 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar6);
      }
    }
    LoopBuilder::BindContinueTarget((LoopBuilder *)&local_108);
    *(int *)(local_80 + 0x334) = *(int *)(local_80 + 0x334) + -1;
    local_88 = (BytecodeGenerator *)&PTR__ControlScope_01cc7020;
    *(BytecodeGenerator **)(local_80 + 0x2f0) = local_78;
    pAVar6 = *(AstNode **)(param_1 + 0x30);
    pBVar5 = (BytecodeGenerator *)&PTR__ControlScope_01cc7020;
    if (pAVar6 != (AstNode *)0x0) {
      iVar1 = *(int *)pAVar6;
      if (iVar1 != -1) {
        this[0x1c0] = (BytecodeGenerator)0x2;
        *(int *)(this + 0x1c4) = iVar1;
        pAVar6 = *(AstNode **)(param_1 + 0x30);
      }
      pBVar5 = local_88;
      if (this[8] == (BytecodeGenerator)0x0) {
        local_88 = (BytecodeGenerator *)&PTR__ControlScope_01cc7020;
        uVar3 = GetCurrentStackPosition();
        if (uVar3 < *(ulong *)this) {
          this[8] = (BytecodeGenerator)0x1;
          pBVar5 = local_88;
        }
        else {
          VisitNoStackOverflowCheck(this,pAVar6);
          pBVar5 = local_88;
        }
      }
    }
    local_88 = pBVar5;
    LoopBuilder::JumpToHeader((LoopBuilder *)&local_108,*(int *)(this + 0x334));
  }
  LoopBuilder::~LoopBuilder((LoopBuilder *)&local_108);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

