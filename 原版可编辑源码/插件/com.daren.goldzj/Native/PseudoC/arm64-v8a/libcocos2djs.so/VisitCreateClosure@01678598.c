
/* v8::internal::compiler::BytecodeGraphBuilder::VisitCreateClosure() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitCreateClosure(BytecodeGraphBuilder *this)

{
  BytecodeArrayAccessor *this_00;
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  Operator *pOVar6;
  long lVar7;
  undefined8 uVar8;
  JSOperatorBuilder *pJVar9;
  FeedbackCellRef local_60 [16];
  ObjectRef aOStack_50 [16];
  
  uVar8 = *(undefined8 *)this;
  this_00 = (BytecodeArrayAccessor *)(this + 0x88);
  uVar3 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                    (this_00,0,*(Isolate **)(*(long *)(this + 0x10) + 0x168));
  ObjectRef::ObjectRef(aOStack_50,uVar8,uVar3,0);
  uVar4 = ObjectRef::IsSharedFunctionInfo(aOStack_50);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
  }
  uVar1 = interpreter::BytecodeArrayAccessor::GetFlagOperand(this_00,2);
  pJVar9 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
  uVar3 = SharedFunctionInfoRef::object((SharedFunctionInfoRef *)aOStack_50);
  iVar2 = interpreter::BytecodeArrayAccessor::GetIndexOperand(this_00,1);
  local_60 = (FeedbackCellRef  [16])
             FeedbackVectorRef::GetClosureFeedbackCell((FeedbackVectorRef *)(this + 0x38),iVar2);
  uVar8 = FeedbackCellRef::object(local_60);
  uVar5 = Builtins::builtin_handle
                    ((Builtins *)(*(long *)(*(long *)(this + 0x10) + 0x168) + 0x9e00),0x42);
  pOVar6 = (Operator *)JSOperatorBuilder::CreateClosure(pJVar9,uVar3,uVar8,uVar5,uVar1 & 1);
  uVar3 = MakeNode(this,pOVar6,0,(Node **)0x0,false);
  lVar7 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar7 + 0x5c) <
      (ulong)(*(long *)(lVar7 + 0x30) - *(long *)(lVar7 + 0x28) >> 3)) {
    *(undefined8 *)(*(long *)(lVar7 + 0x28) + (long)*(int *)(lVar7 + 0x5c) * 8) = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

