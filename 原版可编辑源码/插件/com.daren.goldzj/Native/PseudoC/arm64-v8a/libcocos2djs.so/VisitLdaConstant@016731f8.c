
/* v8::internal::compiler::BytecodeGraphBuilder::VisitLdaConstant() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitLdaConstant(BytecodeGraphBuilder *this)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ObjectRef aOStack_30 [16];
  
  uVar3 = *(undefined8 *)this;
  uVar1 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0,
                     *(Isolate **)(*(long *)(this + 0x10) + 0x168));
  ObjectRef::ObjectRef(aOStack_30,uVar3,uVar1,1);
  uVar1 = JSGraph::Constant(*(JSGraph **)(this + 0x10),aOStack_30);
  lVar2 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar2 + 0x5c) <
      (ulong)(*(long *)(lVar2 + 0x30) - *(long *)(lVar2 + 0x28) >> 3)) {
    *(undefined8 *)(*(long *)(lVar2 + 0x28) + (long)*(int *)(lVar2 + 0x5c) * 8) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

