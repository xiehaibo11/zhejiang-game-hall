
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitLdaLookupGlobalSlot(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitLdaLookupGlobalSlot
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  int iVar1;
  
  iVar1 = interpreter::BytecodeArrayAccessor::GetUnsignedImmediateOperand
                    ((BytecodeArrayAccessor *)param_1,2);
  ProcessCheckContextExtensions(this,iVar1);
  VisitLdaGlobal(this,param_1);
  return;
}

