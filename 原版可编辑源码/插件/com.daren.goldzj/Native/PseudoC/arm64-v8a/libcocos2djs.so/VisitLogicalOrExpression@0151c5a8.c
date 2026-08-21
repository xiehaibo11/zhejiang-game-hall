
/* v8::internal::interpreter::BytecodeGenerator::VisitLogicalOrExpression(v8::internal::BinaryOperation*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitLogicalOrExpression
          (BytecodeGenerator *this,BinaryOperation *param_1)

{
  long *plVar1;
  Expression *this_00;
  undefined8 uVar2;
  Expression *this_01;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  BytecodeLabels *this_02;
  BytecodeLabel *pBVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined1 *local_b0;
  long *local_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 local_88;
  BytecodeGenerator *pBStack_80;
  int local_78;
  undefined8 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  this_00 = *(Expression **)(param_1 + 8);
  this_01 = *(Expression **)(param_1 + 0x10);
  if (*(BlockCoverageBuilder **)(this + 0x208) == (BlockCoverageBuilder *)0x0) {
    iVar6 = -1;
  }
  else {
    iVar6 = BlockCoverageBuilder::AllocateBlockCoverageSlot
                      (*(BlockCoverageBuilder **)(this + 0x208),param_1,5);
  }
  lVar11 = *(long *)(this + 0x300);
  if (*(int *)(lVar11 + 0x18) != 3) {
    uStack_98 = *(undefined8 *)(this + 0x10);
    local_a0 = 0;
    local_90 = 0;
    local_b0 = (undefined1 *)&local_b0;
    local_a8 = (long *)&local_b0;
    uVar7 = VisitLogicalOrSubExpression(this,this_00,(BytecodeLabels *)&local_b0,iVar6);
    if ((uVar7 & 1) == 0) {
      local_88 = *(undefined8 *)(this + 0x300);
      local_78 = *(int *)(this + 0x118);
      local_70 = 2;
      *(undefined8 **)(this + 0x300) = &local_88;
      pBStack_80 = this;
      if (this[8] == (BytecodeGenerator)0x0) {
        uVar7 = GetCurrentStackPosition();
        if (uVar7 < *(ulong *)this) {
          this[8] = (BytecodeGenerator)0x1;
        }
        else {
          VisitNoStackOverflowCheck(this,(AstNode *)this_01);
        }
      }
      *(undefined8 *)(pBStack_80 + 0x300) = local_88;
      plVar9 = *(long **)(pBStack_80 + 0x120);
      iVar6 = *(int *)(pBStack_80 + 0x118);
      *(int *)(pBStack_80 + 0x118) = local_78;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))(plVar9,CONCAT44(iVar6 - local_78,local_78));
      }
      BytecodeLabels::Bind((BytecodeLabels *)&local_b0,(BytecodeArrayBuilder *)(this + 0x18));
      if (local_a0 != 0) {
        *(undefined8 *)(*local_a8 + 8) = *(undefined8 *)(local_b0 + 8);
        **(long **)(local_b0 + 8) = *local_a8;
        local_a0 = 0;
        plVar9 = local_a8;
        if ((undefined1 **)local_a8 != &local_b0) {
          do {
            plVar1 = plVar9 + 1;
            plVar9 = (long *)*plVar1;
          } while ((undefined1 **)*plVar1 != &local_b0);
        }
      }
    }
    else if (local_a0 != 0) {
      *(undefined8 *)(*local_a8 + 8) = *(undefined8 *)(local_b0 + 8);
      **(long **)(local_b0 + 8) = *local_a8;
      local_a0 = 0;
      plVar9 = local_a8;
      if ((undefined1 **)local_a8 != &local_b0) {
        do {
          plVar9 = (long *)plVar9[1];
        } while ((undefined1 **)plVar9 != &local_b0);
      }
    }
    goto LAB_0151c76c;
  }
  uVar7 = Expression::ToBooleanIsTrue(this_00);
  if ((uVar7 & 1) == 0) {
    uVar7 = Expression::ToBooleanIsFalse(this_00);
    if (((uVar7 & 1) != 0) && (uVar7 = Expression::ToBooleanIsFalse(this_01), (uVar7 & 1) != 0)) {
      if ((iVar6 != -1) && (*(long *)(this + 0x208) != 0)) {
        BytecodeArrayBuilder::IncBlockCounter
                  (*(BytecodeArrayBuilder **)(*(long *)(this + 0x208) + 0x20),iVar6);
      }
      this_02 = *(BytecodeLabels **)(lVar11 + 0x30);
      goto LAB_0151c618;
    }
    lVar10 = *(long *)(this + 0x300);
    uVar2 = *(undefined8 *)(lVar10 + 0x28);
    uVar3 = *(undefined8 *)(lVar10 + 0x30);
    uVar4 = *(undefined4 *)(lVar10 + 0x24);
    VisitLogicalTestSubExpression(this,0x20,this_00,uVar2,uVar3,iVar6);
    VisitForTest(this,this_01,uVar2,uVar3,uVar4);
  }
  else {
    this_02 = *(BytecodeLabels **)(lVar11 + 0x28);
LAB_0151c618:
    pBVar8 = (BytecodeLabel *)BytecodeLabels::New(this_02);
    BytecodeArrayBuilder::Jump((BytecodeArrayBuilder *)(this + 0x18),pBVar8);
  }
  *(undefined1 *)(lVar11 + 0x20) = 1;
LAB_0151c76c:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

