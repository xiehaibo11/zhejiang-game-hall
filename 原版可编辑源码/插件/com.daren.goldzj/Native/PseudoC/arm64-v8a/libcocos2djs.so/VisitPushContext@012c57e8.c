
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitPushContext(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitPushContext
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  uint uVar1;
  ulong uVar2;
  Zone *pZVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int local_48 [2];
  int local_28 [2];
  
  lVar6 = *(long *)(this + 0x28);
  local_48[0] = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                          ((BytecodeArrayAccessor *)param_1,0);
  uVar2 = interpreter::Register::is_function_closure((Register *)local_48);
  if ((uVar2 & 1) == 0) {
    uVar2 = interpreter::Register::is_current_context((Register *)local_48);
    if ((uVar2 & 1) == 0) {
      local_28[0] = local_48[0];
      if (local_48[0] < 0) {
        uVar1 = interpreter::Register::ToParameterIndex((Register *)local_28,*(int *)(lVar6 + 0x18))
        ;
        lVar7 = *(long *)(lVar6 + 0x30);
      }
      else {
        uVar1 = *(int *)(lVar6 + 0x18) + local_48[0];
        lVar7 = *(long *)(lVar6 + 0x30);
      }
      if ((-1 < (int)uVar1) && ((ulong)(*(long *)(lVar6 + 0x38) - lVar7 >> 3) <= (ulong)uVar1)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","local_index < ephemeral_hints_.size()");
      }
      puVar5 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8);
      pZVar3 = *(Zone **)(this + 0x20);
      lVar6 = *(long *)(this + 0x28);
    }
    else {
      puVar5 = (undefined8 *)(lVar6 + 0x28);
      pZVar3 = *(Zone **)(this + 0x20);
      lVar6 = *(long *)(this + 0x28);
    }
  }
  else {
    puVar5 = (undefined8 *)(lVar6 + 0x20);
    pZVar3 = *(Zone **)(this + 0x20);
    lVar6 = *(long *)(this + 0x28);
  }
  if (pZVar3 == (Zone *)0x0) {
    pZVar3 = (Zone *)ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
    *(Zone **)(this + 0x20) = pZVar3;
  }
  puVar4 = *(undefined8 **)(lVar6 + 0x28);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar4) < 0x30) {
      puVar4 = (undefined8 *)Zone::NewExpand(pZVar3,0x30);
    }
    else {
      *(undefined8 **)(pZVar3 + 0x10) = puVar4 + 6;
    }
    puVar4[4] = 0;
    puVar4[5] = pZVar3;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    *(undefined8 **)(lVar6 + 0x28) = puVar4;
  }
  *puVar5 = puVar4;
  lVar6 = *(long *)(this + 0x28);
  lVar7 = *(long *)(lVar6 + 0x30);
  uVar2 = (long)*(int *)(lVar6 + 0x1c) + (long)*(int *)(lVar6 + 0x18);
  if ((-1 < (int)uVar2) && ((ulong)(*(long *)(lVar6 + 0x38) - lVar7 >> 3) <= (uVar2 & 0xffffffff)))
  {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","accumulator_index() < ephemeral_hints_.size()");
  }
  pZVar3 = *(Zone **)(this + 0x20);
  if (pZVar3 == (Zone *)0x0) {
    pZVar3 = (Zone *)ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
    *(Zone **)(this + 0x20) = pZVar3;
    puVar5 = *(undefined8 **)(lVar7 + uVar2 * 8);
  }
  else {
    puVar5 = *(undefined8 **)(lVar7 + uVar2 * 8);
  }
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar5) < 0x30) {
      puVar5 = (undefined8 *)Zone::NewExpand(pZVar3,0x30);
    }
    else {
      *(undefined8 **)(pZVar3 + 0x10) = puVar5 + 6;
    }
    puVar5[4] = 0;
    puVar5[5] = pZVar3;
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    *(undefined8 **)(lVar7 + uVar2 * 8) = puVar5;
  }
  *(undefined8 **)(lVar6 + 0x28) = puVar5;
  return;
}

