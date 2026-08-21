
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitPopContext(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitPopContext
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  Zone *this_00;
  undefined8 *puVar6;
  int local_40 [2];
  int local_38 [2];
  
  lVar5 = *(long *)(this + 0x28);
  local_40[0] = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                          ((BytecodeArrayAccessor *)param_1,0);
  uVar2 = interpreter::Register::is_function_closure((Register *)local_40);
  if ((uVar2 & 1) == 0) {
    uVar2 = interpreter::Register::is_current_context((Register *)local_40);
    puVar6 = (undefined8 *)(lVar5 + 0x28);
    if ((uVar2 & 1) == 0) {
      local_38[0] = local_40[0];
      if (local_40[0] < 0) {
        uVar1 = interpreter::Register::ToParameterIndex((Register *)local_38,*(int *)(lVar5 + 0x18))
        ;
        lVar4 = *(long *)(lVar5 + 0x30);
      }
      else {
        uVar1 = *(int *)(lVar5 + 0x18) + local_40[0];
        lVar4 = *(long *)(lVar5 + 0x30);
      }
      if ((-1 < (int)uVar1) && ((ulong)(*(long *)(lVar5 + 0x38) - lVar4 >> 3) <= (ulong)uVar1)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","local_index < ephemeral_hints_.size()");
      }
      puVar6 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8);
    }
    this_00 = *(Zone **)(this + 0x20);
  }
  else {
    puVar6 = (undefined8 *)(lVar5 + 0x20);
    this_00 = *(Zone **)(this + 0x20);
  }
  if (this_00 == (Zone *)0x0) {
    this_00 = (Zone *)ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
    *(Zone **)(this + 0x20) = this_00;
    puVar3 = (undefined8 *)*puVar6;
  }
  else {
    puVar3 = (undefined8 *)*puVar6;
  }
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar3) < 0x30) {
      puVar3 = (undefined8 *)Zone::NewExpand(this_00,0x30);
    }
    else {
      *(undefined8 **)(this_00 + 0x10) = puVar3 + 6;
    }
    puVar3[4] = 0;
    puVar3[5] = this_00;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    *puVar6 = puVar3;
  }
  *(undefined8 *)(lVar5 + 0x28) = puVar3;
  return;
}

