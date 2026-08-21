
/* v8::internal::compiler::BytecodeGraphBuilder::VisitCreateBlockContext() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitCreateBlockContext(BytecodeGraphBuilder *this)

{
  undefined8 uVar1;
  ulong uVar2;
  Operator *pOVar3;
  long lVar4;
  undefined8 uVar5;
  JSOperatorBuilder *this_00;
  undefined8 local_38;
  ObjectRef aOStack_30 [16];
  
  uVar5 = *(undefined8 *)this;
  uVar1 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0,
                     *(Isolate **)(*(long *)(this + 0x10) + 0x168));
  ObjectRef::ObjectRef(aOStack_30,uVar5,uVar1,0);
  uVar2 = ObjectRef::IsScopeInfo(aOStack_30);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsScopeInfo()");
  }
  this_00 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
  local_38 = ScopeInfoRef::object((ScopeInfoRef *)aOStack_30);
  pOVar3 = (Operator *)JSOperatorBuilder::CreateBlockContext(this_00,(Handle *)&local_38);
  uVar1 = MakeNode(this,pOVar3,0,(Node **)0x0,false);
  lVar4 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar4 + 0x5c) <
      (ulong)(*(long *)(lVar4 + 0x30) - *(long *)(lVar4 + 0x28) >> 3)) {
    *(undefined8 *)(*(long *)(lVar4 + 0x28) + (long)*(int *)(lVar4 + 0x5c) * 8) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

