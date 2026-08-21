
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitCallUndefinedReceiver1(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitCallUndefinedReceiver1
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long local_60 [4];
  long local_28;
  
  lVar6 = *(long *)(this + 0x28);
  uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand((BytecodeArrayAccessor *)param_1,0)
  ;
  local_28 = CONCAT44(local_28._4_4_,uVar1);
  uVar3 = interpreter::Register::is_function_closure((Register *)&local_28);
  if ((uVar3 & 1) == 0) {
    uVar3 = interpreter::Register::is_current_context((Register *)&local_28);
    if ((uVar3 & 1) == 0) {
      local_60[0] = CONCAT44(local_60[0]._4_4_,(int)local_28);
      if ((int)local_28 < 0) {
        uVar2 = interpreter::Register::ToParameterIndex((Register *)local_60,*(int *)(lVar6 + 0x18))
        ;
        lVar4 = *(long *)(lVar6 + 0x30);
      }
      else {
        uVar2 = *(int *)(lVar6 + 0x18) + (int)local_28;
        lVar4 = *(long *)(lVar6 + 0x30);
      }
      if ((-1 < (int)uVar2) && ((ulong)(*(long *)(lVar6 + 0x38) - lVar4 >> 3) <= (ulong)uVar2))
      goto LAB_012c2f24;
      puVar7 = (undefined8 *)(lVar4 + (long)(int)uVar2 * 8);
    }
    else {
      puVar7 = (undefined8 *)(lVar6 + 0x28);
    }
  }
  else {
    puVar7 = (undefined8 *)(lVar6 + 0x20);
  }
  lVar6 = *(long *)(this + 0x28);
  uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand((BytecodeArrayAccessor *)param_1,1)
  ;
  local_28 = CONCAT44(local_28._4_4_,uVar1);
  uVar3 = interpreter::Register::is_function_closure((Register *)&local_28);
  if ((uVar3 & 1) == 0) {
    uVar3 = interpreter::Register::is_current_context((Register *)&local_28);
    if ((uVar3 & 1) == 0) {
      local_60[0] = CONCAT44(local_60[0]._4_4_,(int)local_28);
      if ((int)local_28 < 0) {
        uVar2 = interpreter::Register::ToParameterIndex((Register *)local_60,*(int *)(lVar6 + 0x18))
        ;
        lVar4 = *(long *)(lVar6 + 0x30);
      }
      else {
        uVar2 = *(int *)(lVar6 + 0x18) + (int)local_28;
        lVar4 = *(long *)(lVar6 + 0x30);
      }
      if ((-1 < (int)uVar2) && ((ulong)(*(long *)(lVar6 + 0x38) - lVar4 >> 3) <= (ulong)uVar2)) {
LAB_012c2f24:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","local_index < ephemeral_hints_.size()");
      }
      lVar6 = lVar4 + (long)(int)uVar2 * 8;
    }
    else {
      lVar6 = lVar6 + 0x28;
    }
  }
  else {
    lVar6 = lVar6 + 0x20;
  }
  uVar1 = interpreter::BytecodeArrayAccessor::GetSlotOperand((BytecodeArrayAccessor *)param_1,2);
  lVar4 = *(long *)(this + 0x20);
  lVar5 = **(long **)this;
  if (lVar4 == 0) {
    lVar4 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
    *(long *)(this + 0x20) = lVar4;
  }
  local_60[0] = 0;
  Hints::AddConstant((Hints *)local_60,lVar5 + 0xa0,lVar4);
  local_28 = local_60[0];
  lVar4 = *(long *)(this + 0x20);
  if (lVar4 == 0) {
    lVar4 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
    *(long *)(this + 0x20) = lVar4;
    local_60[2] = 0;
    local_60[0] = 0;
    local_60[1] = 0;
    local_60[3] = lVar4;
    if (lVar4 == 0) {
      lVar4 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
      *(long *)(this + 0x20) = lVar4;
    }
  }
  else {
    local_60[0] = 0;
    local_60[1] = 0;
    local_60[2] = 0;
    local_60[3] = lVar4;
  }
  FUN_012cf738(lVar4,local_60,&local_28,lVar6);
  ProcessCallOrConstruct(this,*puVar7,0,0,local_60,uVar1,0);
  return;
}

