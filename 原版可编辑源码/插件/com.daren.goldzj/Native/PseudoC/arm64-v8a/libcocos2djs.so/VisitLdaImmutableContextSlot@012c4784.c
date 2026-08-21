
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitLdaImmutableContextSlot(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitLdaImmutableContextSlot
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_48;
  int local_28 [2];
  
  uVar1 = interpreter::BytecodeArrayAccessor::GetIndexOperand((BytecodeArrayAccessor *)param_1,1);
  uVar2 = interpreter::BytecodeArrayAccessor::GetUnsignedImmediateOperand
                    ((BytecodeArrayAccessor *)param_1,2);
  lVar6 = *(long *)(this + 0x28);
  local_28[0] = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                          ((BytecodeArrayAccessor *)param_1,0);
  uVar4 = interpreter::Register::is_function_closure((Register *)local_28);
  if ((uVar4 & 1) == 0) {
    uVar4 = interpreter::Register::is_current_context((Register *)local_28);
    if ((uVar4 & 1) == 0) {
      local_48 = CONCAT44(local_48._4_4_,local_28[0]);
      if (local_28[0] < 0) {
        uVar3 = interpreter::Register::ToParameterIndex
                          ((Register *)&local_48,*(int *)(lVar6 + 0x18));
        lVar5 = *(long *)(lVar6 + 0x30);
      }
      else {
        uVar3 = *(int *)(lVar6 + 0x18) + local_28[0];
        lVar5 = *(long *)(lVar6 + 0x30);
      }
      if ((-1 < (int)uVar3) && ((ulong)(*(long *)(lVar6 + 0x38) - lVar5 >> 3) <= (ulong)uVar3)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","local_index < ephemeral_hints_.size()");
      }
      lVar6 = lVar5 + (long)(int)uVar3 * 8;
    }
    else {
      lVar6 = lVar6 + 0x28;
    }
  }
  else {
    lVar6 = lVar6 + 0x20;
  }
  local_48 = 0;
  ProcessContextAccess(this,lVar6,uVar1,uVar2,1,&local_48);
  lVar6 = *(long *)(this + 0x28);
  uVar3 = *(int *)(lVar6 + 0x1c) + *(int *)(lVar6 + 0x18);
  if ((-1 < (int)uVar3) &&
     ((ulong)(*(long *)(lVar6 + 0x38) - *(long *)(lVar6 + 0x30) >> 3) <= (ulong)uVar3)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","accumulator_index() < ephemeral_hints_.size()");
  }
  *(undefined8 *)(*(long *)(lVar6 + 0x30) + (long)(int)uVar3 * 8) = local_48;
  return;
}

