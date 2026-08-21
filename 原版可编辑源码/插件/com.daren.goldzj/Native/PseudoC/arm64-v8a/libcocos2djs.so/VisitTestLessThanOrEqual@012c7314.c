
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitTestLessThanOrEqual(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitTestLessThanOrEqual
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  undefined4 uVar1;
  
  uVar1 = interpreter::BytecodeArrayAccessor::GetSlotOperand((BytecodeArrayAccessor *)param_1,1);
  ProcessCompareOperation(this,uVar1);
  return;
}

