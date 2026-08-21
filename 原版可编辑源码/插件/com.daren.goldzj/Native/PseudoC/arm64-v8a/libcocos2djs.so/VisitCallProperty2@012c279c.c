
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitCallProperty2(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitCallProperty2
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  Hints *pHVar6;
  Hints *pHVar7;
  undefined8 *puVar8;
  int local_68 [8];
  int local_48 [2];
  
  lVar5 = *(long *)(this + 0x28);
  local_48[0] = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                          ((BytecodeArrayAccessor *)param_1,0);
  uVar3 = interpreter::Register::is_function_closure((Register *)local_48);
  if ((uVar3 & 1) == 0) {
    uVar3 = interpreter::Register::is_current_context((Register *)local_48);
    if ((uVar3 & 1) == 0) {
      local_68[0] = local_48[0];
      if (local_48[0] < 0) {
        uVar1 = interpreter::Register::ToParameterIndex((Register *)local_68,*(int *)(lVar5 + 0x18))
        ;
        lVar4 = *(long *)(lVar5 + 0x30);
      }
      else {
        uVar1 = *(int *)(lVar5 + 0x18) + local_48[0];
        lVar4 = *(long *)(lVar5 + 0x30);
      }
      if ((-1 < (int)uVar1) && ((ulong)(*(long *)(lVar5 + 0x38) - lVar4 >> 3) <= (ulong)uVar1))
      goto LAB_012c2a48;
      puVar8 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8);
    }
    else {
      puVar8 = (undefined8 *)(lVar5 + 0x28);
    }
  }
  else {
    puVar8 = (undefined8 *)(lVar5 + 0x20);
  }
  lVar5 = *(long *)(this + 0x28);
  local_48[0] = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                          ((BytecodeArrayAccessor *)param_1,1);
  uVar3 = interpreter::Register::is_function_closure((Register *)local_48);
  if ((uVar3 & 1) == 0) {
    uVar3 = interpreter::Register::is_current_context((Register *)local_48);
    if ((uVar3 & 1) == 0) {
      local_68[0] = local_48[0];
      if (local_48[0] < 0) {
        uVar1 = interpreter::Register::ToParameterIndex((Register *)local_68,*(int *)(lVar5 + 0x18))
        ;
        lVar4 = *(long *)(lVar5 + 0x30);
      }
      else {
        uVar1 = *(int *)(lVar5 + 0x18) + local_48[0];
        lVar4 = *(long *)(lVar5 + 0x30);
      }
      if ((-1 < (int)uVar1) && ((ulong)(*(long *)(lVar5 + 0x38) - lVar4 >> 3) <= (ulong)uVar1))
      goto LAB_012c2a48;
      pHVar6 = (Hints *)(lVar4 + (long)(int)uVar1 * 8);
    }
    else {
      pHVar6 = (Hints *)(lVar5 + 0x28);
    }
  }
  else {
    pHVar6 = (Hints *)(lVar5 + 0x20);
  }
  lVar5 = *(long *)(this + 0x28);
  local_48[0] = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                          ((BytecodeArrayAccessor *)param_1,2);
  uVar3 = interpreter::Register::is_function_closure((Register *)local_48);
  if ((uVar3 & 1) == 0) {
    uVar3 = interpreter::Register::is_current_context((Register *)local_48);
    if ((uVar3 & 1) == 0) {
      local_68[0] = local_48[0];
      if (local_48[0] < 0) {
        uVar1 = interpreter::Register::ToParameterIndex((Register *)local_68,*(int *)(lVar5 + 0x18))
        ;
        lVar4 = *(long *)(lVar5 + 0x30);
      }
      else {
        uVar1 = *(int *)(lVar5 + 0x18) + local_48[0];
        lVar4 = *(long *)(lVar5 + 0x30);
      }
      if ((-1 < (int)uVar1) && ((ulong)(*(long *)(lVar5 + 0x38) - lVar4 >> 3) <= (ulong)uVar1))
      goto LAB_012c2a48;
      pHVar7 = (Hints *)(lVar4 + (long)(int)uVar1 * 8);
    }
    else {
      pHVar7 = (Hints *)(lVar5 + 0x28);
    }
  }
  else {
    pHVar7 = (Hints *)(lVar5 + 0x20);
  }
  lVar5 = *(long *)(this + 0x28);
  local_48[0] = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                          ((BytecodeArrayAccessor *)param_1,3);
  uVar3 = interpreter::Register::is_function_closure((Register *)local_48);
  if (((uVar3 & 1) == 0) &&
     (uVar3 = interpreter::Register::is_current_context((Register *)local_48), (uVar3 & 1) == 0)) {
    local_68[0] = local_48[0];
    if (local_48[0] < 0) {
      uVar1 = interpreter::Register::ToParameterIndex((Register *)local_68,*(int *)(lVar5 + 0x18));
      lVar4 = *(long *)(lVar5 + 0x30);
    }
    else {
      uVar1 = *(int *)(lVar5 + 0x18) + local_48[0];
      lVar4 = *(long *)(lVar5 + 0x30);
    }
    if ((-1 < (int)uVar1) && ((ulong)(*(long *)(lVar5 + 0x38) - lVar4 >> 3) <= (ulong)uVar1)) {
LAB_012c2a48:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","local_index < ephemeral_hints_.size()");
    }
  }
  uVar2 = interpreter::BytecodeArrayAccessor::GetSlotOperand((BytecodeArrayAccessor *)param_1,4);
  PrepareArgumentsHints<v8::internal::compiler::Hints*,v8::internal::compiler::Hints*>
            ((Hints *)this,pHVar6,pHVar7);
  ProcessCallOrConstruct(this,*puVar8,0,0,local_68,uVar2,0);
  return;
}

