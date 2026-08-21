
/* v8::internal::compiler::BytecodeGraphBuilder::Environment::RegisterToValuesIndex(v8::internal::interpreter::Register)
   const */

ulong __thiscall
v8::internal::compiler::BytecodeGraphBuilder::Environment::RegisterToValuesIndex
          (Environment *this,int param_2)

{
  ulong uVar1;
  int local_18 [2];
  
  if (param_2 < 0) {
    local_18[0] = param_2;
    uVar1 = interpreter::Register::ToParameterIndex((Register *)local_18,*(int *)(this + 0xc));
  }
  else {
    uVar1 = (ulong)(uint)(*(int *)(this + 0x58) + param_2);
  }
  return uVar1;
}

