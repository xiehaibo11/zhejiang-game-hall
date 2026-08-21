
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitStaNamedPropertyNoFeedback(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitStaNamedPropertyNoFeedback
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ObjectRef aOStack_30 [16];
  
  puVar3 = *(undefined8 **)this;
  uVar1 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                    ((BytecodeArrayAccessor *)param_1,1,(Isolate *)*puVar3);
  ObjectRef::ObjectRef(aOStack_30,puVar3,uVar1,0);
  uVar2 = ObjectRef::IsName(aOStack_30);
  if ((uVar2 & 1) != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsName()");
}

