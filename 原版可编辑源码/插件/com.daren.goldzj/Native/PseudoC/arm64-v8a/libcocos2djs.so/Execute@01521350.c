
/* v8::internal::interpreter::BytecodeGenerator::ControlScopeForTryCatch::Execute(v8::internal::interpreter::BytecodeGenerator::ControlScope::Command,
   v8::internal::Statement*, int) */

undefined8
v8::internal::interpreter::BytecodeGenerator::ControlScopeForTryCatch::Execute
          (long param_1,int param_2)

{
  if (param_2 == 4) {
    BytecodeArrayBuilder::ReThrow((BytecodeArrayBuilder *)(*(long *)(param_1 + 8) + 0x18));
    return 1;
  }
  return 0;
}

