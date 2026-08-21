
/* v8::internal::interpreter::BytecodeArrayAccessor::OffsetWithinBytecode(int) const */

bool __thiscall
v8::internal::interpreter::BytecodeArrayAccessor::OffsetWithinBytecode
          (BytecodeArrayAccessor *this,int param_1)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  
  if (param_1 < *(int *)(this + 8)) {
    bVar2 = false;
  }
  else {
    iVar1 = *(int *)(this + 0x10) + *(int *)(this + 8);
    uVar3 = (**(code **)(**(long **)this + 0x10))(*(long **)this,iVar1);
    bVar2 = param_1 < iVar1 + *(int *)(Bytecodes::kBytecodeSizes +
                                      (uVar3 & 0xff) * 4 + (ulong)((byte)this[0xc] >> 1) * 0x2dc);
  }
  return bVar2;
}

