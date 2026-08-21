
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitLdar(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitLdar
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  Zone *this_00;
  long lVar8;
  int local_48 [2];
  int local_28 [2];
  
  lVar7 = *(long *)(this + 0x28);
  lVar8 = *(long *)(lVar7 + 0x30);
  uVar2 = (long)*(int *)(lVar7 + 0x1c) + (long)*(int *)(lVar7 + 0x18);
  if ((-1 < (int)uVar2) && ((ulong)(*(long *)(lVar7 + 0x38) - lVar8 >> 3) <= (uVar2 & 0xffffffff)))
  {
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
        uVar3 = interpreter::Register::ToParameterIndex((Register *)local_28,*(int *)(lVar7 + 0x18))
        ;
        lVar6 = *(long *)(lVar7 + 0x30);
      }
      else {
        uVar3 = *(int *)(lVar7 + 0x18) + local_48[0];
        lVar6 = *(long *)(lVar7 + 0x30);
      }
      if ((-1 < (int)uVar3) && ((ulong)(*(long *)(lVar7 + 0x38) - lVar6 >> 3) <= (ulong)uVar3)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","local_index < ephemeral_hints_.size()");
      }
      puVar1 = (undefined8 *)(lVar6 + (long)(int)uVar3 * 8);
      this_00 = *(Zone **)(this + 0x20);
    }
    else {
      puVar1 = (undefined8 *)(lVar7 + 0x28);
      this_00 = *(Zone **)(this + 0x20);
    }
  }
  else {
    puVar1 = (undefined8 *)(lVar7 + 0x20);
    this_00 = *(Zone **)(this + 0x20);
  }
  if (this_00 == (Zone *)0x0) {
    this_00 = (Zone *)ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
    *(Zone **)(this + 0x20) = this_00;
  }
  puVar5 = (undefined8 *)*puVar1;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar5) < 0x30) {
      puVar5 = (undefined8 *)Zone::NewExpand(this_00,0x30);
    }
    else {
      *(undefined8 **)(this_00 + 0x10) = puVar5 + 6;
    }
    puVar5[4] = 0;
    puVar5[5] = this_00;
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    *puVar1 = puVar5;
  }
  *(undefined8 **)(lVar8 + uVar2 * 8) = puVar5;
  return;
}

