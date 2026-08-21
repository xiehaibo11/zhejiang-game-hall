
/* v8::internal::interpreter::BytecodeArrayAccessor::GetImmediateOperand(int) const */

void __thiscall
v8::internal::interpreter::BytecodeArrayAccessor::GetImmediateOperand
          (BytecodeArrayAccessor *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = (**(code **)(**(long **)this + 0x20))();
  iVar1 = *(int *)(this + 8);
  iVar2 = *(int *)(this + 0x10);
  uVar5 = (**(code **)(**(long **)this + 0x10))(*(long **)this,iVar2 + iVar1);
  iVar3 = Bytecodes::GetOperandOffset(uVar5,param_1,this[0xc]);
  BytecodeDecoder::DecodeSignedOperand(lVar4 + iVar1 + (long)iVar2 + (long)iVar3,8,this[0xc]);
  return;
}

