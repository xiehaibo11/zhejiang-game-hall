
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitLdaGlobal(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitLdaGlobal
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ObjectRef aOStack_40 [16];
  
  puVar4 = *(undefined8 **)this;
  uVar2 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                    ((BytecodeArrayAccessor *)param_1,0,(Isolate *)*puVar4);
  ObjectRef::ObjectRef(aOStack_40,puVar4,uVar2,0);
  uVar3 = ObjectRef::IsName(aOStack_40);
  if ((uVar3 & 1) != 0) {
    uVar1 = interpreter::BytecodeArrayAccessor::GetSlotOperand((BytecodeArrayAccessor *)param_1,1);
    ProcessGlobalAccess(this,uVar1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsName()");
}

