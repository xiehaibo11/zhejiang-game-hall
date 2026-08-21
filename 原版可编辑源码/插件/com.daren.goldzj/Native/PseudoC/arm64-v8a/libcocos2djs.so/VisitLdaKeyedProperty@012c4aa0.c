
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitLdaKeyedProperty(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitLdaKeyedProperty
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int local_48 [2];
  int local_28 [2];
  
  lVar6 = *(long *)(this + 0x28);
  lVar7 = *(long *)(lVar6 + 0x30);
  uVar1 = *(int *)(lVar6 + 0x1c) + *(int *)(lVar6 + 0x18);
  if ((-1 < (int)uVar1) && ((ulong)(*(long *)(lVar6 + 0x38) - lVar7 >> 3) <= (ulong)uVar1)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","accumulator_index() < ephemeral_hints_.size()");
  }
  local_48[0] = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                          ((BytecodeArrayAccessor *)param_1,0);
  uVar4 = interpreter::Register::is_function_closure((Register *)local_48);
  if ((uVar4 & 1) == 0) {
    uVar4 = interpreter::Register::is_current_context((Register *)local_48);
    if ((uVar4 & 1) == 0) {
      local_28[0] = local_48[0];
      if (local_48[0] < 0) {
        uVar2 = interpreter::Register::ToParameterIndex((Register *)local_28,*(int *)(lVar6 + 0x18))
        ;
        lVar5 = *(long *)(lVar6 + 0x30);
      }
      else {
        uVar2 = *(int *)(lVar6 + 0x18) + local_48[0];
        lVar5 = *(long *)(lVar6 + 0x30);
      }
      if ((-1 < (int)uVar2) && ((ulong)(*(long *)(lVar6 + 0x38) - lVar5 >> 3) <= (ulong)uVar2)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","local_index < ephemeral_hints_.size()");
      }
      lVar6 = lVar5 + (long)(int)uVar2 * 8;
    }
    else {
      lVar6 = lVar6 + 0x28;
    }
  }
  else {
    lVar6 = lVar6 + 0x20;
  }
  uVar3 = interpreter::BytecodeArrayAccessor::GetSlotOperand((BytecodeArrayAccessor *)param_1,1);
  ProcessKeyedPropertyAccess(this,lVar6,lVar7 + (long)(int)uVar1 * 8,uVar3,0,1);
  return;
}

