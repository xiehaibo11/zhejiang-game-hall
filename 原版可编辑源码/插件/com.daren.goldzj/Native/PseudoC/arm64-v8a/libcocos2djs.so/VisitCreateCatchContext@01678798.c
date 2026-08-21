
/* v8::internal::compiler::BytecodeGraphBuilder::VisitCreateCatchContext() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitCreateCatchContext(BytecodeGraphBuilder *this)

{
  undefined4 uVar1;
  Node *pNVar2;
  undefined8 uVar3;
  ulong uVar4;
  Operator *pOVar5;
  long lVar6;
  JSOperatorBuilder *this_00;
  undefined8 uVar7;
  ObjectRef aOStack_48 [16];
  Node *local_38;
  
  uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0);
  pNVar2 = (Node *)Environment::LookupRegister(*(Environment **)(this + 0xa8),uVar1);
  uVar7 = *(undefined8 *)this;
  uVar3 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),1,
                     *(Isolate **)(*(long *)(this + 0x10) + 0x168));
  ObjectRef::ObjectRef(aOStack_48,uVar7,uVar3,0);
  uVar4 = ObjectRef::IsScopeInfo(aOStack_48);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsScopeInfo()");
  }
  this_00 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
  local_38 = (Node *)ScopeInfoRef::object((ScopeInfoRef *)aOStack_48);
  pOVar5 = (Operator *)JSOperatorBuilder::CreateCatchContext(this_00,(Handle *)&local_38);
  local_38 = pNVar2;
  uVar3 = MakeNode(this,pOVar5,1,&local_38,false);
  lVar6 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar6 + 0x5c) <
      (ulong)(*(long *)(lVar6 + 0x30) - *(long *)(lVar6 + 0x28) >> 3)) {
    *(undefined8 *)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x5c) * 8) = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

