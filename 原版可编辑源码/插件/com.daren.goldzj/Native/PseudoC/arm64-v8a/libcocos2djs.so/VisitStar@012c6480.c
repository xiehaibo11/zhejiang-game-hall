
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitStar(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitStar
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  Zone *this_00;
  undefined8 *puVar5;
  long lVar6;
  int local_48 [2];
  int local_28 [2];
  
  local_48[0] = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                          ((BytecodeArrayAccessor *)param_1,0);
  lVar4 = *(long *)(this + 0x28);
  uVar2 = interpreter::Register::is_function_closure((Register *)local_48);
  if ((uVar2 & 1) == 0) {
    uVar2 = interpreter::Register::is_current_context((Register *)local_48);
    if ((uVar2 & 1) == 0) {
      local_28[0] = local_48[0];
      if (local_48[0] < 0) {
        uVar1 = interpreter::Register::ToParameterIndex((Register *)local_28,*(int *)(lVar4 + 0x18))
        ;
        lVar6 = *(long *)(lVar4 + 0x30);
      }
      else {
        uVar1 = *(int *)(lVar4 + 0x18) + local_48[0];
        lVar6 = *(long *)(lVar4 + 0x30);
      }
      if ((-1 < (int)uVar1) && ((ulong)(*(long *)(lVar4 + 0x38) - lVar6 >> 3) <= (ulong)uVar1)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","local_index < ephemeral_hints_.size()");
      }
      puVar5 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8);
    }
    else {
      puVar5 = (undefined8 *)(lVar4 + 0x28);
    }
  }
  else {
    puVar5 = (undefined8 *)(lVar4 + 0x20);
  }
  lVar4 = *(long *)(this + 0x28);
  lVar6 = *(long *)(lVar4 + 0x30);
  uVar2 = (long)*(int *)(lVar4 + 0x1c) + (long)*(int *)(lVar4 + 0x18);
  if ((-1 < (int)uVar2) && ((ulong)(*(long *)(lVar4 + 0x38) - lVar6 >> 3) <= (uVar2 & 0xffffffff)))
  {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","accumulator_index() < ephemeral_hints_.size()");
  }
  this_00 = *(Zone **)(this + 0x20);
  if (this_00 == (Zone *)0x0) {
    this_00 = (Zone *)ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
    *(Zone **)(this + 0x20) = this_00;
    puVar3 = *(undefined8 **)(lVar6 + uVar2 * 8);
  }
  else {
    puVar3 = *(undefined8 **)(lVar6 + uVar2 * 8);
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
    *(undefined8 **)(lVar6 + uVar2 * 8) = puVar3;
  }
  *puVar5 = puVar3;
  return;
}

