
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitNegate(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitNegate
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  undefined4 uVar1;
  
  uVar1 = interpreter::BytecodeArrayAccessor::GetSlotOperand((BytecodeArrayAccessor *)param_1,0);
  ProcessUnaryOrBinaryOperation(this,uVar1,1);
  return;
}

