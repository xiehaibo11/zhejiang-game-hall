
/* v8::internal::compiler::BytecodeGraphBuilder::VisitStaContextSlot() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitStaContextSlot(BytecodeGraphBuilder *this)

{
  BytecodeArrayAccessor *this_00;
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  Operator *pOVar4;
  Node *pNVar5;
  Node *pNVar6;
  long lVar7;
  Environment *pEVar8;
  JSOperatorBuilder *this_01;
  Node *local_38;
  
  this_00 = (BytecodeArrayAccessor *)(this + 0x88);
  this_01 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
  uVar2 = interpreter::BytecodeArrayAccessor::GetUnsignedImmediateOperand(this_00,2);
  uVar3 = interpreter::BytecodeArrayAccessor::GetIndexOperand(this_00,1);
  pOVar4 = (Operator *)
           JSOperatorBuilder::StoreContext(this_01,uVar2 & 0xffffffff,uVar3 & 0xffffffff);
  lVar7 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar7 + 0x5c) <
      (ulong)(*(long *)(lVar7 + 0x30) - *(long *)(lVar7 + 0x28) >> 3)) {
    local_38 = *(Node **)(*(long *)(lVar7 + 0x28) + (long)*(int *)(lVar7 + 0x5c) * 8);
    pNVar5 = (Node *)MakeNode(this,pOVar4,1,&local_38,false);
    pEVar8 = *(Environment **)(this + 0xa8);
    uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,0);
    pNVar6 = (Node *)Environment::LookupRegister(pEVar8,uVar1);
    NodeProperties::ReplaceContextInput(pNVar5,pNVar6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

