
/* v8::internal::compiler::BytecodeGraphBuilder::VisitLdar() */

void __thiscall v8::internal::compiler::BytecodeGraphBuilder::VisitLdar(BytecodeGraphBuilder *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  Environment *pEVar4;
  
  pEVar4 = *(Environment **)(this + 0xa8);
  uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0);
  uVar2 = Environment::LookupRegister(pEVar4,uVar1);
  lVar3 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar3 + 0x5c) <
      (ulong)(*(long *)(lVar3 + 0x30) - *(long *)(lVar3 + 0x28) >> 3)) {
    *(undefined8 *)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x5c) * 8) = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

