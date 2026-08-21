
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitCallProperty0(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitCallProperty0
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  int local_58 [8];
  int local_38 [2];
  
  lVar5 = *(long *)(this + 0x28);
  local_38[0] = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                          ((BytecodeArrayAccessor *)param_1,0);
  uVar3 = interpreter::Register::is_function_closure((Register *)local_38);
  if ((uVar3 & 1) == 0) {
    uVar3 = interpreter::Register::is_current_context((Register *)local_38);
    if ((uVar3 & 1) == 0) {
      local_58[0] = local_38[0];
      if (local_38[0] < 0) {
        uVar1 = interpreter::Register::ToParameterIndex((Register *)local_58,*(int *)(lVar5 + 0x18))
        ;
        lVar4 = *(long *)(lVar5 + 0x30);
      }
      else {
        uVar1 = *(int *)(lVar5 + 0x18) + local_38[0];
        lVar4 = *(long *)(lVar5 + 0x30);
      }
      if ((-1 < (int)uVar1) && ((ulong)(*(long *)(lVar5 + 0x38) - lVar4 >> 3) <= (ulong)uVar1))
      goto LAB_012c2514;
      puVar6 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8);
    }
    else {
      puVar6 = (undefined8 *)(lVar5 + 0x28);
    }
  }
  else {
    puVar6 = (undefined8 *)(lVar5 + 0x20);
  }
  lVar5 = *(long *)(this + 0x28);
  local_38[0] = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                          ((BytecodeArrayAccessor *)param_1,1);
  uVar3 = interpreter::Register::is_function_closure((Register *)local_38);
  if (((uVar3 & 1) == 0) &&
     (uVar3 = interpreter::Register::is_current_context((Register *)local_38), (uVar3 & 1) == 0)) {
    local_58[0] = local_38[0];
    if (local_38[0] < 0) {
      uVar1 = interpreter::Register::ToParameterIndex((Register *)local_58,*(int *)(lVar5 + 0x18));
      lVar4 = *(long *)(lVar5 + 0x30);
    }
    else {
      uVar1 = *(int *)(lVar5 + 0x18) + local_38[0];
      lVar4 = *(long *)(lVar5 + 0x30);
    }
    if ((-1 < (int)uVar1) && ((ulong)(*(long *)(lVar5 + 0x38) - lVar4 >> 3) <= (ulong)uVar1)) {
LAB_012c2514:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","local_index < ephemeral_hints_.size()");
    }
  }
  uVar2 = interpreter::BytecodeArrayAccessor::GetSlotOperand((BytecodeArrayAccessor *)param_1,2);
  PrepareArgumentsHints<>((Hints *)this);
  ProcessCallOrConstruct(this,*puVar6,0,0,local_58,uVar2,0);
  return;
}

