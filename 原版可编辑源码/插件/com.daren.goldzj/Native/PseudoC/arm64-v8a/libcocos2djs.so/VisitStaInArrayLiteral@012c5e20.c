
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitStaInArrayLiteral(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitStaInArrayLiteral
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int local_40 [2];
  int local_38 [2];
  
  lVar5 = *(long *)(this + 0x28);
  local_40[0] = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                          ((BytecodeArrayAccessor *)param_1,0);
  uVar3 = interpreter::Register::is_function_closure((Register *)local_40);
  if ((uVar3 & 1) == 0) {
    uVar3 = interpreter::Register::is_current_context((Register *)local_40);
    if ((uVar3 & 1) == 0) {
      local_38[0] = local_40[0];
      if (local_40[0] < 0) {
        uVar1 = interpreter::Register::ToParameterIndex((Register *)local_38,*(int *)(lVar5 + 0x18))
        ;
        lVar6 = *(long *)(lVar5 + 0x30);
      }
      else {
        uVar1 = *(int *)(lVar5 + 0x18) + local_40[0];
        lVar6 = *(long *)(lVar5 + 0x30);
      }
      if ((-1 < (int)uVar1) && ((ulong)(*(long *)(lVar5 + 0x38) - lVar6 >> 3) <= (ulong)uVar1))
      goto LAB_012c5f88;
      lVar5 = lVar6 + (long)(int)uVar1 * 8;
    }
    else {
      lVar5 = lVar5 + 0x28;
    }
  }
  else {
    lVar5 = lVar5 + 0x20;
  }
  lVar6 = *(long *)(this + 0x28);
  local_40[0] = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                          ((BytecodeArrayAccessor *)param_1,1);
  uVar3 = interpreter::Register::is_function_closure((Register *)local_40);
  if ((uVar3 & 1) == 0) {
    uVar3 = interpreter::Register::is_current_context((Register *)local_40);
    if ((uVar3 & 1) == 0) {
      local_38[0] = local_40[0];
      if (local_40[0] < 0) {
        uVar1 = interpreter::Register::ToParameterIndex((Register *)local_38,*(int *)(lVar6 + 0x18))
        ;
        lVar4 = *(long *)(lVar6 + 0x30);
      }
      else {
        uVar1 = *(int *)(lVar6 + 0x18) + local_40[0];
        lVar4 = *(long *)(lVar6 + 0x30);
      }
      if ((-1 < (int)uVar1) && ((ulong)(*(long *)(lVar6 + 0x38) - lVar4 >> 3) <= (ulong)uVar1)) {
LAB_012c5f88:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","local_index < ephemeral_hints_.size()");
      }
      lVar6 = lVar4 + (long)(int)uVar1 * 8;
    }
    else {
      lVar6 = lVar6 + 0x28;
    }
  }
  else {
    lVar6 = lVar6 + 0x20;
  }
  uVar2 = interpreter::BytecodeArrayAccessor::GetSlotOperand((BytecodeArrayAccessor *)param_1,2);
  ProcessKeyedPropertyAccess(this,lVar5,lVar6,uVar2,2,1);
  return;
}

