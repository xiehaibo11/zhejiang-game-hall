
/* v8::internal::compiler::BytecodeGraphBuilder::VisitMov() */

void __thiscall v8::internal::compiler::BytecodeGraphBuilder::VisitMov(BytecodeGraphBuilder *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  Environment *pEVar4;
  long lVar5;
  int local_18 [2];
  
  pEVar4 = *(Environment **)(this + 0xa8);
  uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0);
  uVar3 = Environment::LookupRegister(pEVar4,uVar1);
  lVar5 = *(long *)(this + 0xa8);
  local_18[0] = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                          ((BytecodeArrayAccessor *)(this + 0x88),1);
  if (local_18[0] < 0) {
    iVar2 = interpreter::Register::ToParameterIndex((Register *)local_18,*(int *)(lVar5 + 0xc));
  }
  else {
    iVar2 = *(int *)(lVar5 + 0x58) + local_18[0];
  }
  if ((ulong)(long)iVar2 < (ulong)(*(long *)(lVar5 + 0x30) - *(long *)(lVar5 + 0x28) >> 3)) {
    *(undefined8 *)(*(long *)(lVar5 + 0x28) + (long)iVar2 * 8) = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

