
/* v8::internal::interpreter::BytecodeArrayAccessor::current_bytecode() const */

void __thiscall
v8::internal::interpreter::BytecodeArrayAccessor::current_bytecode(BytecodeArrayAccessor *this)

{
                    /* WARNING: Could not recover jumptable at 0x0103dea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)this + 0x10))(*(long **)this,*(int *)(this + 0x10) + *(int *)(this + 8));
  return;
}

