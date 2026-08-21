
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitCallUndefinedReceiver0(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitCallUndefinedReceiver0
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  Zone *pZStack_40;
  int local_38 [2];
  
  lVar7 = *(long *)(this + 0x28);
  local_38[0] = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                          ((BytecodeArrayAccessor *)param_1,0);
  uVar4 = interpreter::Register::is_function_closure((Register *)local_38);
  if ((uVar4 & 1) == 0) {
    uVar4 = interpreter::Register::is_current_context((Register *)local_38);
    if ((uVar4 & 1) == 0) {
      local_58 = (undefined8 *)CONCAT44(local_58._4_4_,local_38[0]);
      if (local_38[0] < 0) {
        uVar2 = interpreter::Register::ToParameterIndex
                          ((Register *)&local_58,*(int *)(lVar7 + 0x18));
        lVar6 = *(long *)(lVar7 + 0x30);
      }
      else {
        uVar2 = *(int *)(lVar7 + 0x18) + local_38[0];
        lVar6 = *(long *)(lVar7 + 0x30);
      }
      if ((-1 < (int)uVar2) && ((ulong)(*(long *)(lVar7 + 0x38) - lVar6 >> 3) <= (ulong)uVar2)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","local_index < ephemeral_hints_.size()");
      }
      puVar8 = (undefined8 *)(lVar6 + (long)(int)uVar2 * 8);
    }
    else {
      puVar8 = (undefined8 *)(lVar7 + 0x28);
    }
  }
  else {
    puVar8 = (undefined8 *)(lVar7 + 0x20);
  }
  uVar3 = interpreter::BytecodeArrayAccessor::GetSlotOperand((BytecodeArrayAccessor *)param_1,1);
  lVar7 = *(long *)(this + 0x20);
  lVar6 = **(long **)this;
  if (lVar7 == 0) {
    lVar7 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
    *(long *)(this + 0x20) = lVar7;
  }
  local_58 = (undefined8 *)0x0;
  Hints::AddConstant((Hints *)&local_58,lVar6 + 0xa0,lVar7);
  puVar1 = local_58;
  pZStack_40 = *(Zone **)(this + 0x20);
  if (pZStack_40 == (Zone *)0x0) {
    pZStack_40 = (Zone *)ZoneStats::NewEmptyZone
                                   (*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
    *(Zone **)(this + 0x20) = pZStack_40;
  }
  local_58 = (undefined8 *)0x0;
  local_50 = (undefined8 *)0x0;
  local_48 = (undefined8 *)0x0;
  puVar5 = *(undefined8 **)(pZStack_40 + 0x10);
  if ((ulong)(*(long *)(pZStack_40 + 0x18) - (long)puVar5) < 8) {
    puVar5 = (undefined8 *)Zone::NewExpand(pZStack_40,8);
  }
  else {
    *(undefined8 **)(pZStack_40 + 0x10) = puVar5 + 1;
  }
  local_48 = puVar5 + 1;
  *puVar5 = puVar1;
  local_50 = puVar5 + 1;
  local_58 = puVar5;
  ProcessCallOrConstruct(this,*puVar8,0,0,&local_58,uVar3,0);
  return;
}

