
/* v8::internal::compiler::SerializerForBackgroundCompilation::Environment::RegisterToLocalIndex(v8::internal::interpreter::Register)
   const */

ulong __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::Environment::RegisterToLocalIndex
          (Environment *this,int param_2)

{
  ulong uVar1;
  int local_18 [2];
  
  if (param_2 < 0) {
    local_18[0] = param_2;
    uVar1 = interpreter::Register::ToParameterIndex((Register *)local_18,*(int *)(this + 0x18));
  }
  else {
    uVar1 = (ulong)(uint)(*(int *)(this + 0x18) + param_2);
  }
  return uVar1;
}

