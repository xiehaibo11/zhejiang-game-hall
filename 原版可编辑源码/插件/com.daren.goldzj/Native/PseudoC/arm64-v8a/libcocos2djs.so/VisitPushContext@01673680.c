
/* v8::internal::compiler::BytecodeGraphBuilder::VisitPushContext() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitPushContext(BytecodeGraphBuilder *this)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int local_38 [2];
  
  lVar2 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar2 + 0x5c) <
      (ulong)(*(long *)(lVar2 + 0x30) - *(long *)(lVar2 + 0x28) >> 3)) {
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x28) + (long)*(int *)(lVar2 + 0x5c) * 8);
    local_38[0] = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                            ((BytecodeArrayAccessor *)(this + 0x88),0);
    uVar4 = *(undefined8 *)(*(long *)(this + 0xa8) + 0x10);
    if (local_38[0] < 0) {
      iVar1 = interpreter::Register::ToParameterIndex((Register *)local_38,*(int *)(lVar2 + 0xc));
    }
    else {
      iVar1 = *(int *)(lVar2 + 0x58) + local_38[0];
    }
    if ((ulong)(long)iVar1 < (ulong)(*(long *)(lVar2 + 0x30) - *(long *)(lVar2 + 0x28) >> 3)) {
      *(undefined8 *)(*(long *)(lVar2 + 0x28) + (long)iVar1 * 8) = uVar4;
      *(undefined8 *)(*(long *)(this + 0xa8) + 0x10) = uVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

