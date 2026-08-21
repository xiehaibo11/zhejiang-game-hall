
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitLdaModuleVariable(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void v8::internal::compiler::SerializerForBackgroundCompilation::VisitLdaModuleVariable
               (BytecodeArrayIterator *param_1)

{
  BytecodeArrayIterator *in_x1;
  
  ProcessModuleVariableAccess((SerializerForBackgroundCompilation *)param_1,in_x1);
  return;
}

