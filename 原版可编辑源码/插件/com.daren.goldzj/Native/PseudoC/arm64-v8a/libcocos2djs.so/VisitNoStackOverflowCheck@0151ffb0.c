
/* v8::internal::interpreter::BytecodeGenerator::VisitNoStackOverflowCheck(v8::internal::AstNode*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitNoStackOverflowCheck
          (BytecodeGenerator *this,AstNode *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  AstNode *pAVar11;
  AstRawString *pAVar12;
  AstNode *local_58;
  BytecodeGenerator *pBStack_50;
  int local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar8 = *(uint *)(param_1 + 4);
  switch(uVar8 & 0x3f) {
  case 0:
    VisitVariableDeclaration(this,(VariableDeclaration *)param_1);
    break;
  case 1:
    VisitFunctionDeclaration(this,(FunctionDeclaration *)param_1);
    break;
  case 2:
    VisitDoWhileStatement(this,(DoWhileStatement *)param_1);
    break;
  case 3:
    VisitWhileStatement(this,(WhileStatement *)param_1);
    break;
  case 4:
    VisitForStatement(this,(ForStatement *)param_1);
    break;
  case 5:
    VisitForInStatement(this,(ForInStatement *)param_1);
    break;
  case 6:
    VisitForOfStatement(this,(ForOfStatement *)param_1);
    break;
  case 7:
    VisitBlock(this,(Block *)param_1);
    break;
  case 8:
    VisitSwitchStatement(this,(SwitchStatement *)param_1);
    break;
  case 9:
    iVar2 = *(int *)param_1;
    if (iVar2 != -1) {
      this[0x1c0] = (BytecodeGenerator)0x2;
      *(int *)(this + 0x1c4) = iVar2;
    }
    local_58 = *(AstNode **)(this + 0x300);
    pAVar11 = *(AstNode **)(param_1 + 8);
    local_48 = *(int *)(this + 0x118);
    local_40 = 1;
    *(AstNode ***)(this + 0x300) = &local_58;
    pBStack_50 = this;
    if (this[8] == (BytecodeGenerator)0x0) {
      uVar4 = GetCurrentStackPosition();
      if (uVar4 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar11);
      }
    }
    *(AstNode **)(pBStack_50 + 0x300) = local_58;
    plVar6 = *(long **)(pBStack_50 + 0x120);
    iVar2 = *(int *)(pBStack_50 + 0x118);
    *(int *)(pBStack_50 + 0x118) = local_48;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6,CONCAT44(iVar2 - local_48,local_48));
    }
    break;
  case 0xb:
  case 0x2d:
    if (this[8] == (BytecodeGenerator)0x0) {
      pAVar11 = *(AstNode **)(param_1 + 0x10);
      uVar4 = GetCurrentStackPosition();
      if (uVar4 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar11);
      }
    }
    break;
  case 0xc:
    VisitIfStatement(this,(IfStatement *)param_1);
    break;
  case 0xd:
    if (*(BlockCoverageBuilder **)(this + 0x208) != (BlockCoverageBuilder *)0x0) {
      BlockCoverageBuilder::AllocateBlockCoverageSlot
                (*(BlockCoverageBuilder **)(this + 0x208),param_1,2);
    }
    iVar2 = *(int *)param_1;
    if (iVar2 != -1) {
      this[0x1c0] = (BytecodeGenerator)0x2;
      *(int *)(this + 0x1c4) = iVar2;
    }
    plVar6 = *(long **)(this + 0x2f0);
    uVar7 = *(undefined8 *)(param_1 + 8);
    do {
      uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,1,uVar7,0xffffffff);
      if ((uVar4 & 1) != 0) goto switchD_01520000_caseD_a;
      plVar6 = (long *)plVar6[2];
    } while (plVar6 != (long *)0x0);
  case 0x25:
  case 0x2f:
  case 0x38:
switchD_01520000_caseD_25:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0xe:
    if (*(BlockCoverageBuilder **)(this + 0x208) != (BlockCoverageBuilder *)0x0) {
      BlockCoverageBuilder::AllocateBlockCoverageSlot
                (*(BlockCoverageBuilder **)(this + 0x208),param_1,2);
    }
    iVar2 = *(int *)param_1;
    if (iVar2 != -1) {
      this[0x1c0] = (BytecodeGenerator)0x2;
      *(int *)(this + 0x1c4) = iVar2;
    }
    plVar6 = *(long **)(this + 0x2f0);
    uVar7 = *(undefined8 *)(param_1 + 8);
    do {
      uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,0,uVar7,0xffffffff);
      if ((uVar4 & 1) != 0) goto switchD_01520000_caseD_a;
      plVar6 = (long *)plVar6[2];
    } while (plVar6 != (long *)0x0);
    goto switchD_01520000_caseD_25;
  case 0xf:
    VisitReturnStatement(this,(ReturnStatement *)param_1);
    break;
  case 0x10:
    VisitWithStatement(this,(WithStatement *)param_1);
    break;
  case 0x11:
    VisitTryCatchStatement(this,(TryCatchStatement *)param_1);
    break;
  case 0x12:
    VisitTryFinallyStatement(this,(TryFinallyStatement *)param_1);
    break;
  case 0x13:
    iVar2 = *(int *)param_1;
    if (iVar2 != -1) {
      this[0x1c0] = (BytecodeGenerator)0x2;
      *(int *)(this + 0x1c4) = iVar2;
    }
    BytecodeArrayBuilder::Debugger((BytecodeArrayBuilder *)(this + 0x18));
    break;
  case 0x14:
    VisitInitializeClassMembersStatement(this,(InitializeClassMembersStatement *)param_1);
    break;
  case 0x15:
    pAVar12 = *(AstRawString **)(param_1 + 0x10);
    iVar2 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),0x13)
    ;
    BytecodeArrayBuilder::CreateRegExpLiteral
              ((BytecodeArrayBuilder *)(this + 0x18),pAVar12,iVar2,*(int *)(param_1 + 8));
    break;
  case 0x16:
    VisitObjectLiteral(this,(ObjectLiteral *)param_1);
    break;
  case 0x17:
    ArrayLiteral::InitDepthAndFlags((ArrayLiteral *)param_1);
    BuildCreateArrayLiteral(this,(ZoneList *)(param_1 + 0x18),(ArrayLiteral *)param_1);
    break;
  case 0x18:
    VisitAssignment(this,(Assignment *)param_1);
    break;
  case 0x19:
    VisitAwait(this,(Await *)param_1);
    break;
  case 0x1a:
    VisitBinaryOperation(this,(BinaryOperation *)param_1);
    break;
  case 0x1b:
    VisitNaryOperation(this,(NaryOperation *)param_1);
    break;
  case 0x1c:
    VisitCall(this,(Call *)param_1);
    break;
  case 0x1d:
    VisitCallNew(this,(CallNew *)param_1);
    break;
  case 0x1e:
    puVar10 = *(undefined4 **)(param_1 + 0x10);
    if (puVar10 == (undefined4 *)0x0) {
      local_58 = (AstNode *)(ulong)*(uint *)(this + 0x118);
      if (0 < *(int *)(param_1 + 0x24)) {
        lVar5 = 0;
        do {
          VisitAndPushIntoRegisterList
                    (this,*(Expression **)(*(long *)(param_1 + 0x18) + lVar5 * 8),
                     (RegisterList *)&local_58);
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(param_1 + 0x24));
      }
      BytecodeArrayBuilder::CallJSRuntime
                ((BytecodeArrayBuilder *)(this + 0x18),*(undefined4 *)(param_1 + 8),local_58);
    }
    else {
      local_58 = (AstNode *)(ulong)*(uint *)(this + 0x118);
      if (0 < *(int *)(param_1 + 0x24)) {
        lVar5 = 0;
        do {
          VisitAndPushIntoRegisterList
                    (this,*(Expression **)(*(long *)(param_1 + 0x18) + lVar5 * 8),
                     (RegisterList *)&local_58);
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(param_1 + 0x24));
        puVar10 = *(undefined4 **)(param_1 + 0x10);
      }
      BytecodeArrayBuilder::CallRuntime((BytecodeArrayBuilder *)(this + 0x18),*puVar10,local_58);
    }
    break;
  case 0x1f:
    VisitClassLiteral(this,param_1,0x7fffffff);
    break;
  case 0x20:
    VisitCompareOperation(this,(CompareOperation *)param_1);
    break;
  case 0x21:
    VisitCompoundAssignment(this,(CompoundAssignment *)param_1);
    break;
  case 0x22:
    VisitConditional(this,(Conditional *)param_1);
    break;
  case 0x23:
    VisitCountOperation(this,(CountOperation *)param_1);
    break;
  case 0x24:
    VisitBlock(this,*(Block **)(param_1 + 8));
    piVar9 = *(int **)(param_1 + 0x10);
    iVar2 = *piVar9;
    if ((iVar2 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
      this[0x1c0] = (BytecodeGenerator)0x1;
      *(int *)(this + 0x1c4) = iVar2;
    }
    uVar7 = *(undefined8 *)(piVar9 + 2);
    uVar8 = (uint)piVar9[1] >> 0xb & 1;
    goto LAB_01520584;
  case 0x26:
    VisitFunctionLiteral(this,(FunctionLiteral *)param_1);
    break;
  case 0x27:
    VisitGetTemplateObject(this,(GetTemplateObject *)param_1);
    break;
  case 0x28:
    VisitImportCallExpression((ImportCallExpression *)this);
    break;
  case 0x29:
    VisitLiteral(this,(Literal *)param_1);
    break;
  case 0x2a:
    VisitNativeFunctionLiteral(this,(NativeFunctionLiteral *)param_1);
    break;
  case 0x2b:
    local_58 = param_1;
    FUN_015198e0(this,this,&local_58);
    break;
  case 0x2c:
    iVar2 = Property::GetAssignType((Property *)param_1);
    if (iVar2 - 3U < 2) {
      uVar3 = 0x7fffffff;
    }
    else {
      uVar3 = VisitForRegisterValue(this,*(Expression **)(param_1 + 8));
    }
    VisitPropertyLoad(this,uVar3,param_1);
    break;
  case 0x2e:
    VisitStoreInArrayLiteral(this,(StoreInArrayLiteral *)param_1);
    break;
  case 0x30:
    BytecodeArrayBuilder::CallRuntime((BytecodeArrayBuilder *)(this + 0x18),0x2d);
    break;
  case 0x31:
    VisitTemplateLiteral(this,(TemplateLiteral *)param_1);
    break;
  case 0x32:
    lVar5 = Scope::GetReceiverScope(*(Scope **)(this + 0x1e0));
    uVar7 = *(undefined8 *)(lVar5 + 0xb0);
    uVar8 = (uint)(1 < *(byte *)(lVar5 + 0x85) - 5);
    goto LAB_01520584;
  case 0x33:
    if (*(BlockCoverageBuilder **)(this + 0x208) != (BlockCoverageBuilder *)0x0) {
      BlockCoverageBuilder::AllocateBlockCoverageSlot
                (*(BlockCoverageBuilder **)(this + 0x208),param_1,2);
    }
    local_58 = *(AstNode **)(this + 0x300);
    pAVar11 = *(AstNode **)(param_1 + 8);
    local_48 = *(int *)(this + 0x118);
    local_40 = 2;
    *(AstNode ***)(this + 0x300) = &local_58;
    pBStack_50 = this;
    if (this[8] == (BytecodeGenerator)0x0) {
      uVar4 = GetCurrentStackPosition();
      if (uVar4 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar11);
      }
    }
    *(AstNode **)(pBStack_50 + 0x300) = local_58;
    plVar6 = *(long **)(pBStack_50 + 0x120);
    iVar2 = *(int *)(pBStack_50 + 0x118);
    *(int *)(pBStack_50 + 0x118) = local_48;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6,CONCAT44(iVar2 - local_48,local_48));
    }
    iVar2 = *(int *)param_1;
    if ((iVar2 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
      this[0x1c0] = (BytecodeGenerator)0x1;
      *(int *)(this + 0x1c4) = iVar2;
    }
    BytecodeArrayBuilder::Throw((BytecodeArrayBuilder *)(this + 0x18));
    break;
  case 0x34:
    VisitUnaryOperation(this,(UnaryOperation *)param_1);
    break;
  case 0x35:
    iVar2 = *(int *)param_1;
    if ((iVar2 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
      this[0x1c0] = (BytecodeGenerator)0x1;
      *(int *)(this + 0x1c4) = iVar2;
      uVar8 = *(uint *)(param_1 + 4);
    }
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar8 = uVar8 >> 0xb & 1;
LAB_01520584:
    BuildVariableLoad(this,uVar7,uVar8,1);
    break;
  case 0x36:
    VisitYield(this,(Yield *)param_1);
    break;
  case 0x37:
    VisitYieldStar(this,(YieldStar *)param_1);
  }
switchD_01520000_caseD_a:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

