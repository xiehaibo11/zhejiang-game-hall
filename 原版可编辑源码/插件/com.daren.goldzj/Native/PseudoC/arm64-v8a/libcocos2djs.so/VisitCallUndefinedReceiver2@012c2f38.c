
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitCallUndefinedReceiver2(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitCallUndefinedReceiver2
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  Hints *pHVar6;
  undefined8 *puVar7;
  long local_68 [4];
  long local_48;
  
  lVar5 = *(long *)(this + 0x28);
  uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand((BytecodeArrayAccessor *)param_1,0)
  ;
  local_48 = CONCAT44(local_48._4_4_,uVar1);
  uVar3 = interpreter::Register::is_function_closure((Register *)&local_48);
  if ((uVar3 & 1) == 0) {
    uVar3 = interpreter::Register::is_current_context((Register *)&local_48);
    if ((uVar3 & 1) == 0) {
      local_68[0] = CONCAT44(local_68[0]._4_4_,(int)local_48);
      if ((int)local_48 < 0) {
        uVar2 = interpreter::Register::ToParameterIndex((Register *)local_68,*(int *)(lVar5 + 0x18))
        ;
        lVar4 = *(long *)(lVar5 + 0x30);
      }
      else {
        uVar2 = *(int *)(lVar5 + 0x18) + (int)local_48;
        lVar4 = *(long *)(lVar5 + 0x30);
      }
      if ((-1 < (int)uVar2) && ((ulong)(*(long *)(lVar5 + 0x38) - lVar4 >> 3) <= (ulong)uVar2))
      goto LAB_012c3198;
      puVar7 = (undefined8 *)(lVar4 + (long)(int)uVar2 * 8);
    }
    else {
      puVar7 = (undefined8 *)(lVar5 + 0x28);
    }
  }
  else {
    puVar7 = (undefined8 *)(lVar5 + 0x20);
  }
  lVar5 = *(long *)(this + 0x28);
  uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand((BytecodeArrayAccessor *)param_1,1)
  ;
  local_48 = CONCAT44(local_48._4_4_,uVar1);
  uVar3 = interpreter::Register::is_function_closure((Register *)&local_48);
  if ((uVar3 & 1) == 0) {
    uVar3 = interpreter::Register::is_current_context((Register *)&local_48);
    if ((uVar3 & 1) == 0) {
      local_68[0] = CONCAT44(local_68[0]._4_4_,(int)local_48);
      if ((int)local_48 < 0) {
        uVar2 = interpreter::Register::ToParameterIndex((Register *)local_68,*(int *)(lVar5 + 0x18))
        ;
        lVar4 = *(long *)(lVar5 + 0x30);
      }
      else {
        uVar2 = *(int *)(lVar5 + 0x18) + (int)local_48;
        lVar4 = *(long *)(lVar5 + 0x30);
      }
      if ((-1 < (int)uVar2) && ((ulong)(*(long *)(lVar5 + 0x38) - lVar4 >> 3) <= (ulong)uVar2))
      goto LAB_012c3198;
      pHVar6 = (Hints *)(lVar4 + (long)(int)uVar2 * 8);
    }
    else {
      pHVar6 = (Hints *)(lVar5 + 0x28);
    }
  }
  else {
    pHVar6 = (Hints *)(lVar5 + 0x20);
  }
  lVar5 = *(long *)(this + 0x28);
  uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand((BytecodeArrayAccessor *)param_1,2)
  ;
  local_48 = CONCAT44(local_48._4_4_,uVar1);
  uVar3 = interpreter::Register::is_function_closure((Register *)&local_48);
  if (((uVar3 & 1) == 0) &&
     (uVar3 = interpreter::Register::is_current_context((Register *)&local_48), (uVar3 & 1) == 0)) {
    local_68[0] = CONCAT44(local_68[0]._4_4_,(int)local_48);
    if ((int)local_48 < 0) {
      uVar2 = interpreter::Register::ToParameterIndex((Register *)local_68,*(int *)(lVar5 + 0x18));
      lVar4 = *(long *)(lVar5 + 0x30);
    }
    else {
      uVar2 = *(int *)(lVar5 + 0x18) + (int)local_48;
      lVar4 = *(long *)(lVar5 + 0x30);
    }
    if ((-1 < (int)uVar2) && ((ulong)(*(long *)(lVar5 + 0x38) - lVar4 >> 3) <= (ulong)uVar2)) {
LAB_012c3198:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","local_index < ephemeral_hints_.size()");
    }
  }
  uVar1 = interpreter::BytecodeArrayAccessor::GetSlotOperand((BytecodeArrayAccessor *)param_1,3);
  lVar5 = *(long *)(this + 0x20);
  lVar4 = **(long **)this;
  if (lVar5 == 0) {
    lVar5 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
    *(long *)(this + 0x20) = lVar5;
  }
  local_68[0] = 0;
  Hints::AddConstant((Hints *)local_68,lVar4 + 0xa0,lVar5);
  local_48 = local_68[0];
  PrepareArgumentsHints<v8::internal::compiler::Hints*,v8::internal::compiler::Hints*>
            ((Hints *)this,(Hints *)&local_48,pHVar6);
  ProcessCallOrConstruct(this,*puVar7,0,0,local_68,uVar1,0);
  return;
}

