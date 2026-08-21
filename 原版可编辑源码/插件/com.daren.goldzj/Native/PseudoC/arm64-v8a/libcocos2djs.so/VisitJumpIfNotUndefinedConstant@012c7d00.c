
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitJumpIfNotUndefinedConstant(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitJumpIfNotUndefinedConstant
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  int iVar1;
  
  iVar1 = interpreter::BytecodeArrayAccessor::GetJumpTargetOffset((BytecodeArrayAccessor *)param_1);
  if (*(int *)(param_1 + 8) < iVar1) {
    ContributeToJumpTargetEnvironment(this,iVar1);
    return;
  }
  return;
}

