
/* v8::internal::compiler::BytecodeGraphBuilder::VisitCreateEvalContext() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitCreateEvalContext(BytecodeGraphBuilder *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  Operator *pOVar4;
  long lVar5;
  JSOperatorBuilder *pJVar6;
  undefined8 uVar7;
  ObjectRef aOStack_40 [16];
  
  uVar7 = *(undefined8 *)this;
  uVar2 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0,
                     *(Isolate **)(*(long *)(this + 0x10) + 0x168));
  ObjectRef::ObjectRef(aOStack_40,uVar7,uVar2,0);
  uVar3 = ObjectRef::IsScopeInfo(aOStack_40);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsScopeInfo()");
  }
  uVar1 = interpreter::BytecodeArrayAccessor::GetUnsignedImmediateOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),1);
  pJVar6 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
  uVar2 = ScopeInfoRef::object((ScopeInfoRef *)aOStack_40);
  pOVar4 = (Operator *)JSOperatorBuilder::CreateFunctionContext(pJVar6,uVar2,uVar1,1);
  uVar2 = MakeNode(this,pOVar4,0,(Node **)0x0,false);
  lVar5 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar5 + 0x5c) <
      (ulong)(*(long *)(lVar5 + 0x30) - *(long *)(lVar5 + 0x28) >> 3)) {
    *(undefined8 *)(*(long *)(lVar5 + 0x28) + (long)*(int *)(lVar5 + 0x5c) * 8) = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

