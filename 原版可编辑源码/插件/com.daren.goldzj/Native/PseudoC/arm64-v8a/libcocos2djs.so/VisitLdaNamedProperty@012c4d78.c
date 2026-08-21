
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitLdaNamedProperty(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitLdaNamedProperty
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  int local_48 [4];
  int local_38 [2];
  
  lVar6 = *(long *)(this + 0x28);
  local_38[0] = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                          ((BytecodeArrayAccessor *)param_1,0);
  uVar3 = interpreter::Register::is_function_closure((Register *)local_38);
  if ((uVar3 & 1) == 0) {
    uVar3 = interpreter::Register::is_current_context((Register *)local_38);
    if ((uVar3 & 1) == 0) {
      local_48[0] = local_38[0];
      if (local_38[0] < 0) {
        uVar1 = interpreter::Register::ToParameterIndex((Register *)local_48,*(int *)(lVar6 + 0x18))
        ;
        lVar5 = *(long *)(lVar6 + 0x30);
      }
      else {
        uVar1 = *(int *)(lVar6 + 0x18) + local_38[0];
        lVar5 = *(long *)(lVar6 + 0x30);
      }
      if ((-1 < (int)uVar1) && ((ulong)(*(long *)(lVar6 + 0x38) - lVar5 >> 3) <= (ulong)uVar1)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","local_index < ephemeral_hints_.size()");
      }
      lVar6 = lVar5 + (long)(int)uVar1 * 8;
    }
    else {
      lVar6 = lVar6 + 0x28;
    }
  }
  else {
    lVar6 = lVar6 + 0x20;
  }
  puVar7 = *(undefined8 **)this;
  uVar4 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                    ((BytecodeArrayAccessor *)param_1,1,(Isolate *)*puVar7);
  ObjectRef::ObjectRef((ObjectRef *)local_48,puVar7,uVar4,0);
  uVar3 = ObjectRef::IsName((ObjectRef *)local_48);
  if ((uVar3 & 1) != 0) {
    uVar2 = interpreter::BytecodeArrayAccessor::GetSlotOperand((BytecodeArrayAccessor *)param_1,2);
    ProcessNamedPropertyAccess(this,lVar6,local_48,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsName()");
}

