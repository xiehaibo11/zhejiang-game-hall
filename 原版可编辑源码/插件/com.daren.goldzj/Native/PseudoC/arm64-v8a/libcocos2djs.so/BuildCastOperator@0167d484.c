
/* v8::internal::compiler::BytecodeGraphBuilder::BuildCastOperator(v8::internal::compiler::Operator
   const*) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::BuildCastOperator
          (BytecodeGraphBuilder *this,Operator *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  Environment *pEVar4;
  Node *local_18;
  
  lVar3 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar3 + 0x5c) <
      (ulong)(*(long *)(lVar3 + 0x30) - *(long *)(lVar3 + 0x28) >> 3)) {
    local_18 = *(Node **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x5c) * 8);
    uVar2 = MakeNode(this,param_1,1,&local_18,false);
    pEVar4 = *(Environment **)(this + 0xa8);
    uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                      ((BytecodeArrayAccessor *)(this + 0x88),0);
    Environment::BindRegister(pEVar4,uVar1,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

