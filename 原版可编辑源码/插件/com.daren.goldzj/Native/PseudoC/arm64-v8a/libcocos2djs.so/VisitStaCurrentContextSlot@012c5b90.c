
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitStaCurrentContextSlot(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitStaCurrentContextSlot
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  undefined4 uVar1;
  
  uVar1 = interpreter::BytecodeArrayAccessor::GetIndexOperand((BytecodeArrayAccessor *)param_1,0);
  ProcessContextAccess(this,*(long *)(this + 0x28) + 0x28,uVar1,0,0,0);
  return;
}

