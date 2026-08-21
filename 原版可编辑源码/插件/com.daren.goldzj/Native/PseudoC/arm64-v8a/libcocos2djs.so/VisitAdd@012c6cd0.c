
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitAdd(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitAdd
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  undefined4 uVar1;
  
  uVar1 = interpreter::BytecodeArrayAccessor::GetSlotOperand((BytecodeArrayAccessor *)param_1,1);
  ProcessUnaryOrBinaryOperation(this,uVar1,1);
  return;
}

