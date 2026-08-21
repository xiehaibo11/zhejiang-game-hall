
/* v8::internal::interpreter::BytecodeArrayAccessor::GetAbsoluteOffset(int) const */

int __thiscall
v8::internal::interpreter::BytecodeArrayAccessor::GetAbsoluteOffset
          (BytecodeArrayAccessor *this,int param_1)

{
  return *(int *)(this + 8) + param_1 + *(int *)(this + 0x10);
}

