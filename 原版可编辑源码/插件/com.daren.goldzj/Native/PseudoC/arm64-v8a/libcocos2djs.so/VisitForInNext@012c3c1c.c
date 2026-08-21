
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitForInNext(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitForInNext
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  undefined4 uVar1;
  
  uVar1 = interpreter::BytecodeArrayAccessor::GetSlotOperand((BytecodeArrayAccessor *)param_1,3);
  ProcessForIn(this,uVar1);
  return;
}

