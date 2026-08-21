
/* v8::internal::compiler::BytecodeGraphBuilder::VisitSingleBytecode() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitSingleBytecode(BytecodeGraphBuilder *this)

{
  BytecodeArrayAccessor *this_00;
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  BytecodeLivenessState *pBVar5;
  Operator *pOVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined8 uVar11;
  long lVar12;
  BytecodeGraphBuilder *pBVar13;
  BytecodeGraphBuilder *pBVar14;
  Environment *pEVar15;
  Node *pNVar16;
  JSOperatorBuilder *pJVar17;
  JSGraph *this_01;
  Environment *this_02;
  BytecodeGraphBuilder *pBVar18;
  Node *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  TickCounter::DoTick(*(TickCounter **)(this + 0x1e8));
  lVar12 = *(long *)(this + 0x80);
  iVar3 = *(int *)(this + 0x90);
  if ((*(int *)(lVar12 + 0x18) != -1) && (*(int *)(lVar12 + 0x20) == iVar3)) {
    *(ulong *)(*(long *)(this + 0x1d8) + 0x10) =
         *(ulong *)(this + 0x1e0) & 0x7fff80000000 | *(ulong *)(lVar12 + 0x28) & 0x7ffffffe;
    SourcePositionTableIterator::Advance(*(SourcePositionTableIterator **)(this + 0x80));
  }
  ExitThenEnterExceptionHandlers(this,iVar3);
  pBVar13 = this + 200;
  pBVar14 = *(BytecodeGraphBuilder **)pBVar13;
  pBVar18 = pBVar13;
  if (pBVar14 != (BytecodeGraphBuilder *)0x0) {
    do {
      if (iVar3 <= *(int *)(pBVar14 + 0x20)) {
        pBVar18 = pBVar14;
      }
      pBVar14 = *(BytecodeGraphBuilder **)(pBVar14 + (ulong)(*(int *)(pBVar14 + 0x20) < iVar3) * 8);
    } while (pBVar14 != (BytecodeGraphBuilder *)0x0);
    if ((pBVar18 != pBVar13) && (*(int *)(pBVar18 + 0x20) <= iVar3)) {
      pEVar15 = *(Environment **)(this + 0xa8);
      this[0x160] = (BytecodeGraphBuilder)0x1;
      if (pEVar15 != (Environment *)0x0) {
        this_02 = *(Environment **)(pBVar18 + 0x28);
        pBVar5 = (BytecodeLivenessState *)
                 BytecodeAnalysis::GetInLivenessFor(*(BytecodeAnalysis **)(this + 0xa0),iVar3);
        Environment::Merge(this_02,pEVar15,pBVar5);
      }
      *(undefined8 *)(this + 0xa8) = *(undefined8 *)(pBVar18 + 0x28);
    }
  }
  if (*(long *)(this + 0xa8) == 0) goto switchD_01671dd0_default;
  this_00 = (BytecodeArrayAccessor *)(this + 0x88);
  BuildLoopHeaderEnvironment(this,iVar3);
  uVar2 = interpreter::BytecodeArrayAccessor::current_bytecode(this_00);
  switch(uVar2) {
  case 0:
    goto switchD_01671dd0_caseD_0;
  case 1:
    goto switchD_01671dd0_caseD_1;
  case 2:
    goto switchD_01671dd0_caseD_2;
  case 3:
    goto switchD_01671dd0_caseD_3;
  case 4:
    goto switchD_01671dd0_caseD_4;
  case 5:
    goto switchD_01671dd0_caseD_5;
  case 6:
    goto switchD_01671dd0_caseD_6;
  case 7:
    goto switchD_01671dd0_caseD_7;
  case 8:
    goto switchD_01671dd0_caseD_8;
  case 9:
    goto switchD_01671dd0_caseD_9;
  case 10:
    goto switchD_01671dd0_caseD_a;
  case 0xb:
    uVar9 = JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
    goto LAB_01672b14;
  case 0xc:
    this_01 = *(JSGraph **)(this + 0x10);
    iVar3 = interpreter::BytecodeArrayAccessor::GetImmediateOperand(this_00,0);
    uVar9 = JSGraph::Constant(this_01,(double)iVar3);
    goto LAB_01672b14;
  case 0xd:
    uVar9 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
    goto LAB_01672b14;
  case 0xe:
    uVar9 = JSGraph::NullConstant(*(JSGraph **)(this + 0x10));
    goto LAB_01672b14;
  case 0xf:
    uVar9 = JSGraph::TheHoleConstant(*(JSGraph **)(this + 0x10));
    goto LAB_01672b14;
  case 0x10:
    uVar9 = JSGraph::TrueConstant(*(JSGraph **)(this + 0x10));
    goto LAB_01672b14;
  case 0x11:
    uVar9 = JSGraph::FalseConstant(*(JSGraph **)(this + 0x10));
    goto LAB_01672b14;
  case 0x12:
    uVar8 = *(undefined8 *)this;
    uVar9 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                      (this_00,0,*(Isolate **)(*(long *)(this + 0x10) + 0x168));
    ObjectRef::ObjectRef((ObjectRef *)&local_60,uVar8,uVar9,1);
    uVar9 = JSGraph::Constant(*(JSGraph **)(this + 0x10),(ObjectRef *)&local_60);
    goto LAB_01672b14;
  case 0x13:
    VisitLdaGlobal(this);
    break;
  case 0x14:
    VisitLdaGlobalInsideTypeof(this);
    break;
  case 0x15:
    VisitStaGlobal(this);
    break;
  case 0x16:
    VisitPushContext(this);
    break;
  case 0x17:
    pEVar15 = *(Environment **)(this + 0xa8);
    uVar4 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,0);
    uVar9 = Environment::LookupRegister(pEVar15,uVar4);
    *(undefined8 *)(*(long *)(this + 0xa8) + 0x10) = uVar9;
    break;
  case 0x18:
    VisitLdaContextSlot(this);
    break;
  case 0x19:
    VisitLdaImmutableContextSlot(this);
    break;
  case 0x1a:
    pJVar17 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
    uVar7 = interpreter::BytecodeArrayAccessor::GetIndexOperand(this_00,0);
    bVar10 = false;
    goto LAB_01672978;
  case 0x1b:
    pJVar17 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
    uVar7 = interpreter::BytecodeArrayAccessor::GetIndexOperand(this_00,0);
    bVar10 = true;
LAB_01672978:
    pOVar6 = (Operator *)JSOperatorBuilder::LoadContext(pJVar17,0,uVar7 & 0xffffffff,bVar10);
    uVar9 = MakeNode(this,pOVar6,0,(Node **)0x0,false);
    goto LAB_01672b14;
  case 0x1c:
    VisitStaContextSlot(this);
    break;
  case 0x1d:
    pJVar17 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
    uVar7 = interpreter::BytecodeArrayAccessor::GetIndexOperand(this_00,0);
    pOVar6 = (Operator *)JSOperatorBuilder::StoreContext(pJVar17,0,uVar7 & 0xffffffff);
    lVar12 = *(long *)(this + 0xa8);
    if ((ulong)(long)*(int *)(lVar12 + 0x5c) <
        (ulong)(*(long *)(lVar12 + 0x30) - *(long *)(lVar12 + 0x28) >> 3)) {
      local_60 = *(Node **)(*(long *)(lVar12 + 0x28) + (long)*(int *)(lVar12 + 0x5c) * 8);
      MakeNode(this,pOVar6,1,&local_60,false);
      break;
    }
    goto LAB_01672b8c;
  case 0x1e:
    BuildLdaLookupSlot(this,1);
    break;
  case 0x1f:
    BuildLdaLookupContextSlot(this,1);
    break;
  case 0x20:
    BuildLdaLookupGlobalSlot(this,1);
    break;
  case 0x21:
    BuildLdaLookupSlot(this,0);
    break;
  case 0x22:
    BuildLdaLookupContextSlot(this,0);
    break;
  case 0x23:
    BuildLdaLookupGlobalSlot(this,0);
    break;
  case 0x24:
    VisitStaLookupSlot(this);
    break;
  case 0x25:
    pEVar15 = *(Environment **)(this + 0xa8);
    uVar4 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,0);
    uVar9 = Environment::LookupRegister(pEVar15,uVar4);
LAB_01672b14:
    lVar12 = *(long *)(this + 0xa8);
    if ((ulong)(*(long *)(lVar12 + 0x30) - *(long *)(lVar12 + 0x28) >> 3) <=
        (ulong)(long)*(int *)(lVar12 + 0x5c)) {
LAB_01672b8c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(*(long *)(lVar12 + 0x28) + (long)*(int *)(lVar12 + 0x5c) * 8) = uVar9;
    break;
  case 0x26:
    VisitStar(this);
    break;
  case 0x27:
    VisitMov(this);
    break;
  case 0x28:
    VisitLdaNamedProperty(this);
    break;
  case 0x29:
    VisitLdaNamedPropertyNoFeedback(this);
    break;
  case 0x2a:
    VisitLdaKeyedProperty(this);
    break;
  case 0x2b:
    VisitLdaModuleVariable(this);
    break;
  case 0x2c:
    VisitStaModuleVariable(this);
    break;
  case 0x2d:
    BuildNamedStore(this,0);
    break;
  case 0x2e:
    VisitStaNamedPropertyNoFeedback(this);
    break;
  case 0x2f:
    BuildNamedStore(this,1);
    break;
  case 0x30:
    VisitStaKeyedProperty(this);
    break;
  case 0x31:
    VisitStaInArrayLiteral(this);
    break;
  case 0x32:
    VisitStaDataPropertyInLiteral(this);
    break;
  case 0x33:
    VisitCollectTypeProfile(this);
    break;
  case 0x34:
    pJVar17 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
    uVar4 = interpreter::BytecodeArrayAccessor::GetSlotOperand(this_00,1);
    FeedbackSource::FeedbackSource
              ((FeedbackSource *)&local_60,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40)
               ,uVar4);
    uVar4 = JSHeapBroker::GetFeedbackForBinaryOperation
                      (*(JSHeapBroker **)this,(FeedbackSource *)&local_60);
    pOVar6 = (Operator *)JSOperatorBuilder::Add(pJVar17,uVar4);
    goto LAB_01672850;
  case 0x35:
    pOVar6 = (Operator *)
             JSOperatorBuilder::Subtract(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    goto LAB_01672850;
  case 0x36:
    pOVar6 = (Operator *)
             JSOperatorBuilder::Multiply(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    goto LAB_01672850;
  case 0x37:
    pOVar6 = (Operator *)
             JSOperatorBuilder::Divide(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    goto LAB_01672850;
  case 0x38:
    pOVar6 = (Operator *)
             JSOperatorBuilder::Modulus(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    goto LAB_01672850;
  case 0x39:
    pOVar6 = (Operator *)
             JSOperatorBuilder::Exponentiate
                       (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    goto LAB_01672850;
  case 0x3a:
    pOVar6 = (Operator *)
             JSOperatorBuilder::BitwiseOr(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    goto LAB_01672850;
  case 0x3b:
    pOVar6 = (Operator *)
             JSOperatorBuilder::BitwiseXor(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    goto LAB_01672850;
  case 0x3c:
    pOVar6 = (Operator *)
             JSOperatorBuilder::BitwiseAnd(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    goto LAB_01672850;
  case 0x3d:
    pOVar6 = (Operator *)
             JSOperatorBuilder::ShiftLeft(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    goto LAB_01672850;
  case 0x3e:
    pOVar6 = (Operator *)
             JSOperatorBuilder::ShiftRight(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    goto LAB_01672850;
  case 0x3f:
    pOVar6 = (Operator *)
             JSOperatorBuilder::ShiftRightLogical
                       (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
LAB_01672850:
    BuildBinaryOp(this,pOVar6);
    break;
  case 0x40:
    pJVar17 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
    uVar4 = interpreter::BytecodeArrayAccessor::GetSlotOperand(this_00,1);
    FeedbackSource::FeedbackSource
              ((FeedbackSource *)&local_60,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40)
               ,uVar4);
    uVar4 = JSHeapBroker::GetFeedbackForBinaryOperation
                      (*(JSHeapBroker **)this,(FeedbackSource *)&local_60);
    pOVar6 = (Operator *)JSOperatorBuilder::Add(pJVar17,uVar4);
    goto LAB_016727a8;
  case 0x41:
    pOVar6 = (Operator *)
             JSOperatorBuilder::Subtract(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    goto LAB_016727a8;
  case 0x42:
    pOVar6 = (Operator *)
             JSOperatorBuilder::Multiply(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    goto LAB_016727a8;
  case 0x43:
    pOVar6 = (Operator *)
             JSOperatorBuilder::Divide(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    goto LAB_016727a8;
  case 0x44:
    pOVar6 = (Operator *)
             JSOperatorBuilder::Modulus(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    goto LAB_016727a8;
  case 0x45:
    pOVar6 = (Operator *)
             JSOperatorBuilder::Exponentiate
                       (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    goto LAB_016727a8;
  case 0x46:
    pOVar6 = (Operator *)
             JSOperatorBuilder::BitwiseOr(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    goto LAB_016727a8;
  case 0x47:
    pOVar6 = (Operator *)
             JSOperatorBuilder::BitwiseXor(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    goto LAB_016727a8;
  case 0x48:
    pOVar6 = (Operator *)
             JSOperatorBuilder::BitwiseAnd(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    goto LAB_016727a8;
  case 0x49:
    pOVar6 = (Operator *)
             JSOperatorBuilder::ShiftLeft(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    goto LAB_016727a8;
  case 0x4a:
    pOVar6 = (Operator *)
             JSOperatorBuilder::ShiftRight(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    goto LAB_016727a8;
  case 0x4b:
    pOVar6 = (Operator *)
             JSOperatorBuilder::ShiftRightLogical
                       (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
LAB_016727a8:
    BuildBinaryOpWithImmediate(this,pOVar6);
    break;
  case 0x4c:
    pOVar6 = (Operator *)
             JSOperatorBuilder::Increment(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    goto LAB_016728d4;
  case 0x4d:
    pOVar6 = (Operator *)
             JSOperatorBuilder::Decrement(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    goto LAB_016728d4;
  case 0x4e:
    pOVar6 = (Operator *)
             JSOperatorBuilder::Negate(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    goto LAB_016728d4;
  case 0x4f:
    pOVar6 = (Operator *)
             JSOperatorBuilder::BitwiseNot(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
LAB_016728d4:
    BuildUnaryOp(this,pOVar6);
    break;
  case 0x50:
    VisitToBooleanLogicalNot(this);
    break;
  case 0x51:
    VisitLogicalNot(this);
    break;
  case 0x52:
    VisitTypeOf(this);
    break;
  case 0x53:
    BuildDelete(this,1);
    break;
  case 0x54:
    BuildDelete(this,0);
    break;
  case 0x55:
    VisitGetSuperConstructor(this);
    break;
  case 0x56:
    VisitCallAnyReceiver(this);
    break;
  case 0x57:
    VisitCallProperty(this);
    break;
  case 0x58:
    pEVar15 = *(Environment **)(this + 0xa8);
    uVar4 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,0);
    pNVar16 = (Node *)Environment::LookupRegister(pEVar15,uVar4);
    pEVar15 = *(Environment **)(this + 0xa8);
    uVar4 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,1);
    uVar9 = Environment::LookupRegister(pEVar15,uVar4);
    uVar4 = interpreter::BytecodeArrayAccessor::GetIndexOperand(this_00,2);
    local_60 = pNVar16;
    uStack_58 = uVar9;
    BuildCall(this,1,&local_60,2,uVar4);
    break;
  case 0x59:
    VisitCallProperty1(this);
    break;
  case 0x5a:
    VisitCallProperty2(this);
    break;
  case 0x5b:
    VisitCallUndefinedReceiver(this);
    break;
  case 0x5c:
    pEVar15 = *(Environment **)(this + 0xa8);
    uVar4 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,0);
    pNVar16 = (Node *)Environment::LookupRegister(pEVar15,uVar4);
    uVar9 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
    uVar4 = interpreter::BytecodeArrayAccessor::GetIndexOperand(this_00,1);
    uVar11 = 2;
    local_60 = pNVar16;
    uStack_58 = uVar9;
    goto LAB_01672a24;
  case 0x5d:
    pEVar15 = *(Environment **)(this + 0xa8);
    uVar4 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,0);
    pNVar16 = (Node *)Environment::LookupRegister(pEVar15,uVar4);
    uVar9 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
    pEVar15 = *(Environment **)(this + 0xa8);
    uVar4 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,1);
    uVar8 = Environment::LookupRegister(pEVar15,uVar4);
    uVar4 = interpreter::BytecodeArrayAccessor::GetIndexOperand(this_00,2);
    uVar11 = 3;
    local_60 = pNVar16;
    uStack_58 = uVar9;
    local_50 = uVar8;
LAB_01672a24:
    BuildCall(this,0,&local_60,uVar11,uVar4);
    break;
  case 0x5e:
    VisitCallUndefinedReceiver2(this);
    break;
  case 0x5f:
    VisitCallNoFeedback(this);
    break;
  case 0x60:
    VisitCallWithSpread(this);
    break;
  case 0x61:
    VisitCallRuntime(this);
    break;
  case 0x62:
    VisitCallRuntimeForPair(this);
    break;
  case 99:
    VisitCallJSRuntime(this);
    break;
  case 100:
    VisitInvokeIntrinsic(this);
    break;
  case 0x65:
    VisitConstruct(this);
    break;
  case 0x66:
    VisitConstructWithSpread(this);
    break;
  case 0x67:
    pJVar17 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
    uVar4 = interpreter::BytecodeArrayAccessor::GetSlotOperand(this_00,1);
    FeedbackSource::FeedbackSource
              ((FeedbackSource *)&local_60,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40)
               ,uVar4);
    uVar4 = JSHeapBroker::GetFeedbackForCompareOperation
                      (*(JSHeapBroker **)this,(FeedbackSource *)&local_60);
    pOVar6 = (Operator *)JSOperatorBuilder::Equal(pJVar17,uVar4);
    goto LAB_01672920;
  case 0x68:
    pJVar17 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
    uVar4 = interpreter::BytecodeArrayAccessor::GetSlotOperand(this_00,1);
    FeedbackSource::FeedbackSource
              ((FeedbackSource *)&local_60,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40)
               ,uVar4);
    uVar4 = JSHeapBroker::GetFeedbackForCompareOperation
                      (*(JSHeapBroker **)this,(FeedbackSource *)&local_60);
    pOVar6 = (Operator *)JSOperatorBuilder::StrictEqual(pJVar17,uVar4);
    goto LAB_01672920;
  case 0x69:
    pJVar17 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
    uVar4 = interpreter::BytecodeArrayAccessor::GetSlotOperand(this_00,1);
    FeedbackSource::FeedbackSource
              ((FeedbackSource *)&local_60,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40)
               ,uVar4);
    uVar4 = JSHeapBroker::GetFeedbackForCompareOperation
                      (*(JSHeapBroker **)this,(FeedbackSource *)&local_60);
    pOVar6 = (Operator *)JSOperatorBuilder::LessThan(pJVar17,uVar4);
    goto LAB_01672920;
  case 0x6a:
    pJVar17 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
    uVar4 = interpreter::BytecodeArrayAccessor::GetSlotOperand(this_00,1);
    FeedbackSource::FeedbackSource
              ((FeedbackSource *)&local_60,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40)
               ,uVar4);
    uVar4 = JSHeapBroker::GetFeedbackForCompareOperation
                      (*(JSHeapBroker **)this,(FeedbackSource *)&local_60);
    pOVar6 = (Operator *)JSOperatorBuilder::GreaterThan(pJVar17,uVar4);
    goto LAB_01672920;
  case 0x6b:
    pJVar17 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
    uVar4 = interpreter::BytecodeArrayAccessor::GetSlotOperand(this_00,1);
    FeedbackSource::FeedbackSource
              ((FeedbackSource *)&local_60,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40)
               ,uVar4);
    uVar4 = JSHeapBroker::GetFeedbackForCompareOperation
                      (*(JSHeapBroker **)this,(FeedbackSource *)&local_60);
    pOVar6 = (Operator *)JSOperatorBuilder::LessThanOrEqual(pJVar17,uVar4);
    goto LAB_01672920;
  case 0x6c:
    pJVar17 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
    uVar4 = interpreter::BytecodeArrayAccessor::GetSlotOperand(this_00,1);
    FeedbackSource::FeedbackSource
              ((FeedbackSource *)&local_60,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40)
               ,uVar4);
    uVar4 = JSHeapBroker::GetFeedbackForCompareOperation
                      (*(JSHeapBroker **)this,(FeedbackSource *)&local_60);
    pOVar6 = (Operator *)JSOperatorBuilder::GreaterThanOrEqual(pJVar17,uVar4);
    goto LAB_01672920;
  case 0x6d:
    VisitTestReferenceEqual(this);
    break;
  case 0x6e:
    uVar4 = interpreter::BytecodeArrayAccessor::GetIndexOperand(this_00,1);
    pJVar17 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
    FeedbackSource::FeedbackSource
              ((FeedbackSource *)&local_60,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40)
               ,uVar4);
    pOVar6 = (Operator *)JSOperatorBuilder::InstanceOf(pJVar17,(FeedbackSource *)&local_60);
LAB_01672920:
    BuildCompareOp(this,pOVar6);
    break;
  case 0x6f:
    VisitTestIn(this);
    break;
  case 0x70:
    VisitTestUndetectable(this);
    break;
  case 0x71:
    VisitTestNull(this);
    break;
  case 0x72:
    VisitTestUndefined(this);
    break;
  case 0x73:
    VisitTestTypeOf(this);
    break;
  case 0x74:
    VisitToName(this);
    break;
  case 0x75:
    VisitToNumber(this);
    break;
  case 0x76:
    VisitToNumeric(this);
    break;
  case 0x77:
    VisitToObject(this);
    break;
  case 0x78:
    VisitToString(this);
    break;
  case 0x79:
    VisitCreateRegExpLiteral(this);
    break;
  case 0x7a:
    VisitCreateArrayLiteral(this);
    break;
  case 0x7b:
    VisitCreateArrayFromIterable(this);
    break;
  case 0x7c:
    VisitCreateEmptyArrayLiteral(this);
    break;
  case 0x7d:
    VisitCreateObjectLiteral(this);
    break;
  case 0x7e:
    VisitCreateEmptyObjectLiteral(this);
    break;
  case 0x7f:
    VisitCloneObject(this);
    break;
  case 0x80:
    VisitGetTemplateObject(this);
    break;
  case 0x81:
    VisitCreateClosure(this);
    break;
  case 0x82:
    VisitCreateBlockContext(this);
    break;
  case 0x83:
    VisitCreateCatchContext(this);
    break;
  case 0x84:
    VisitCreateFunctionContext(this);
    break;
  case 0x85:
    VisitCreateEvalContext(this);
    break;
  case 0x86:
    VisitCreateWithContext(this);
    break;
  case 0x87:
    BuildCreateArguments(this,0);
    break;
  case 0x88:
    uVar9 = 1;
    goto LAB_01672600;
  case 0x89:
    uVar9 = 2;
LAB_01672600:
    BuildCreateArguments(this,uVar9);
    break;
  case 0x8a:
  case 0x8b:
  case 0x8c:
    iVar3 = interpreter::BytecodeArrayAccessor::GetJumpTargetOffset(this_00);
    MergeIntoSuccessorEnvironment(this,iVar3);
    break;
  case 0x8d:
    VisitJumpIfNullConstant(this);
    break;
  case 0x8e:
    VisitJumpIfNotNullConstant(this);
    break;
  case 0x8f:
    VisitJumpIfUndefinedConstant(this);
    break;
  case 0x90:
    VisitJumpIfNotUndefinedConstant(this);
    break;
  case 0x91:
    VisitJumpIfUndefinedOrNullConstant(this);
    break;
  case 0x92:
  case 0x99:
    BuildJumpIfTrue(this);
    break;
  case 0x93:
  case 0x9a:
    BuildJumpIfFalse(this);
    break;
  case 0x94:
  case 0xa0:
    lVar12 = *(long *)(this + 0xa8);
    if ((ulong)(*(long *)(lVar12 + 0x30) - *(long *)(lVar12 + 0x28) >> 3) <=
        (ulong)(long)*(int *)(lVar12 + 0x5c)) goto LAB_01672b8c;
    pNVar16 = *(Node **)(*(long *)(lVar12 + 0x28) + (long)*(int *)(lVar12 + 0x5c) * 8);
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::ObjectIsReceiver
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_01671ea0;
  case 0x95:
  case 0x97:
    lVar12 = *(long *)(this + 0xa8);
    if ((ulong)(*(long *)(lVar12 + 0x30) - *(long *)(lVar12 + 0x28) >> 3) <=
        (ulong)(long)*(int *)(lVar12 + 0x5c)) goto LAB_01672b8c;
    pNVar16 = *(Node **)(*(long *)(lVar12 + 0x28) + (long)*(int *)(lVar12 + 0x5c) * 8);
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::ToBoolean
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
LAB_01671ea0:
    local_60 = pNVar16;
    pNVar16 = (Node *)MakeNode(this,pOVar6,1,&local_60,false);
    BuildJumpIf(this,pNVar16);
    break;
  case 0x96:
  case 0x98:
    lVar12 = *(long *)(this + 0xa8);
    if ((ulong)(*(long *)(lVar12 + 0x30) - *(long *)(lVar12 + 0x28) >> 3) <=
        (ulong)(long)*(int *)(lVar12 + 0x5c)) goto LAB_01672b8c;
    pNVar16 = *(Node **)(*(long *)(lVar12 + 0x28) + (long)*(int *)(lVar12 + 0x5c) * 8);
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::ToBoolean
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    local_60 = pNVar16;
    pNVar16 = (Node *)MakeNode(this,pOVar6,1,&local_60,false);
    BuildJumpIfNot(this,pNVar16);
    break;
  case 0x9b:
    VisitJumpIfNull(this);
    break;
  case 0x9c:
    VisitJumpIfNotNull(this);
    break;
  case 0x9d:
    VisitJumpIfUndefined(this);
    break;
  case 0x9e:
    VisitJumpIfNotUndefined(this);
    break;
  case 0x9f:
    VisitJumpIfUndefinedOrNull(this);
    break;
  case 0xa1:
    VisitSwitchOnSmiNoFeedback(this);
    break;
  case 0xa2:
    VisitForInEnumerate(this);
    break;
  case 0xa3:
    VisitForInPrepare(this);
    break;
  case 0xa4:
    VisitForInContinue(this);
    break;
  case 0xa5:
    VisitForInNext(this);
    break;
  case 0xa6:
    VisitForInStep(this);
    break;
  case 0xa7:
    VisitStackCheck(this);
    break;
  case 0xa8:
    VisitSetPendingMessage(this);
    break;
  case 0xa9:
    VisitThrow(this);
    break;
  case 0xaa:
    VisitReThrow(this);
    break;
  case 0xab:
    pBVar5 = (BytecodeLivenessState *)
             BytecodeAnalysis::GetInLivenessFor
                       (*(BytecodeAnalysis **)(this + 0xa0),*(int *)(this + 0x90));
    BuildReturn(this,pBVar5);
    break;
  case 0xac:
    VisitThrowReferenceErrorIfHole(this);
    break;
  case 0xad:
    VisitThrowSuperNotCalledIfHole(this);
    break;
  case 0xae:
    VisitThrowSuperAlreadyCalledIfNotHole(this);
    break;
  case 0xaf:
    VisitSwitchOnGeneratorState(this);
    break;
  case 0xb0:
    VisitSuspendGenerator(this);
    break;
  case 0xb1:
    VisitResumeGenerator(this);
    break;
  case 0xb2:
    VisitGetIterator(this);
    break;
  case 0xb3:
    VisitDebugger(this);
    break;
  case 0xb4:
    VisitIncBlockCounter(this);
    break;
  case 0xb5:
    VisitAbort(this);
    break;
  case 0xb6:
    VisitIllegal();
    goto switchD_01671dd0_caseD_0;
  }
switchD_01671dd0_default:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
switchD_01671dd0_caseD_0:
  VisitWide();
switchD_01671dd0_caseD_1:
  VisitExtraWide();
switchD_01671dd0_caseD_2:
  VisitDebugBreakWide();
switchD_01671dd0_caseD_3:
  VisitDebugBreakExtraWide();
switchD_01671dd0_caseD_4:
  VisitDebugBreak0();
switchD_01671dd0_caseD_5:
  VisitDebugBreak1();
switchD_01671dd0_caseD_6:
  VisitDebugBreak2();
switchD_01671dd0_caseD_7:
  VisitDebugBreak3();
switchD_01671dd0_caseD_8:
  VisitDebugBreak4();
switchD_01671dd0_caseD_9:
  VisitDebugBreak5();
switchD_01671dd0_caseD_a:
  VisitDebugBreak6();
  goto LAB_01672b8c;
}

