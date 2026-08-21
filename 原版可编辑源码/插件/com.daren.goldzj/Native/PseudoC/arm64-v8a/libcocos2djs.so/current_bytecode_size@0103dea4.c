
/* v8::internal::interpreter::BytecodeArrayAccessor::current_bytecode_size() const */

int __thiscall
v8::internal::interpreter::BytecodeArrayAccessor::current_bytecode_size(BytecodeArrayAccessor *this)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *(int *)(this + 0x10);
  uVar2 = (**(code **)(**(long **)this + 0x10))(*(long **)this,*(int *)(this + 8) + iVar1);
  return *(int *)(Bytecodes::kBytecodeSizes +
                 (uVar2 & 0xff) * 4 + (ulong)((byte)this[0xc] >> 1) * 0x2dc) + iVar1;
}

