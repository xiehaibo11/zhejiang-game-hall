
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitThrowReferenceErrorIfHole(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitThrowReferenceErrorIfHole
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ObjectRef aOStack_30 [16];
  
  puVar2 = *(undefined8 **)this;
  uVar1 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                    ((BytecodeArrayAccessor *)param_1,0,(Isolate *)*puVar2);
  ObjectRef::ObjectRef(aOStack_30,puVar2,uVar1,1);
  return;
}

