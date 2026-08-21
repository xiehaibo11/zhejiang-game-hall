
/* v8::internal::compiler::BytecodeGraphBuilder::VisitThrowReferenceErrorIfHole() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitThrowReferenceErrorIfHole
          (BytecodeGraphBuilder *this)

{
  Operator *pOVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  Node *pNVar5;
  JSGraph *this_00;
  undefined8 uVar6;
  Node *local_40;
  undefined8 uStack_38;
  
  lVar4 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar4 + 0x5c) <
      (ulong)(*(long *)(lVar4 + 0x30) - *(long *)(lVar4 + 0x28) >> 3)) {
    pNVar5 = *(Node **)(*(long *)(lVar4 + 0x28) + (long)*(int *)(lVar4 + 0x5c) * 8);
    pOVar1 = (Operator *)
             SimplifiedOperatorBuilder::ReferenceEqual
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    uStack_38 = JSGraph::TheHoleConstant(*(JSGraph **)(this + 0x10));
    local_40 = pNVar5;
    uVar2 = MakeNode(this,pOVar1,2,&local_40,false);
    this_00 = *(JSGraph **)(this + 0x10);
    uVar6 = *(undefined8 *)this;
    uVar3 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                      ((BytecodeArrayAccessor *)(this + 0x88),0,*(Isolate **)(this_00 + 0x168));
    ObjectRef::ObjectRef((ObjectRef *)&local_40,uVar6,uVar3,1);
    uVar3 = JSGraph::Constant(this_00,(ObjectRef *)&local_40);
    BuildHoleCheckAndThrow(this,uVar2,0xb1,uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

