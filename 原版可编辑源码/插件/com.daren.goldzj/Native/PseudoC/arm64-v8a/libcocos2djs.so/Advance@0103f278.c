
/* v8::internal::interpreter::BytecodeArrayIterator::Advance() */

void __thiscall
v8::internal::interpreter::BytecodeArrayIterator::Advance(BytecodeArrayIterator *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 8);
  iVar2 = BytecodeArrayAccessor::current_bytecode_size((BytecodeArrayAccessor *)this);
  BytecodeArrayAccessor::SetOffset((BytecodeArrayAccessor *)this,iVar2 + iVar1);
  return;
}

