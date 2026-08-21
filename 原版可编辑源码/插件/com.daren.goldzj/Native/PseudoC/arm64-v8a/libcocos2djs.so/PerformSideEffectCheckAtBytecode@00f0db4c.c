
/* v8::internal::Debug::PerformSideEffectCheckAtBytecode(v8::internal::InterpretedFrame*) */

undefined8 __thiscall
v8::internal::Debug::PerformSideEffectCheckAtBytecode(Debug *this,InterpretedFrame *param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  Isolate *pIVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *local_60 [3];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar5 = (**(code **)(*(long *)param_1 + 0x98))(param_1);
  uVar7 = uVar5 & 0xffffffff00000000;
  uVar5 = uVar7 | *(uint *)(uVar5 + 0xb);
  uVar11 = uVar7 | *(uint *)(uVar5 + 0xf);
  uVar10 = uVar7 | 7;
  if ((*(short *)(uVar10 + *(uint *)(uVar11 - 1)) == 0x5b) &&
     (*(short *)(uVar10 + *(uint *)((uVar7 | *(uint *)(uVar11 + 0x13)) - 1)) == 0x86)) {
    uVar9 = *(uint *)(uVar11 + 0xf);
  }
  else {
    uVar9 = *(uint *)(uVar5 + 3);
    if (((uVar9 & 1) == 0) || (*(short *)(uVar10 + *(uint *)((uVar7 | uVar9) - 1)) != 0x86)) {
      uVar9 = *(uint *)((uVar7 | *(uint *)(uVar5 + 3)) + 3);
    }
    else {
      uVar9 = *(uint *)(uVar5 + 3);
    }
  }
  uVar4 = InterpretedFrame::GetBytecodeOffset(param_1);
  pIVar8 = *(Isolate **)(this + 0x88);
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar7 | uVar9;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar7 | uVar9);
  }
  interpreter::BytecodeArrayAccessor::BytecodeArrayAccessor
            ((BytecodeArrayAccessor *)local_60,puVar6,uVar4);
  cVar3 = interpreter::BytecodeArrayAccessor::current_bytecode((BytecodeArrayAccessor *)local_60);
  if (cVar3 == '\x1d') {
    interpreter::Register::current_context();
  }
  else {
    interpreter::BytecodeArrayAccessor::GetRegisterOperand((BytecodeArrayAccessor *)local_60,0);
  }
  uVar5 = InterpretedFrame::ReadInterpreterRegister((int)param_1);
  pIVar8 = *(Isolate **)(this + 0x88);
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar5;
    uVar5 = *puVar6;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar5);
    uVar5 = *puVar6;
  }
  if (((((uVar5 & 1) == 0) ||
       (uVar7 = uVar5 & 0xffffffff00000000 | 7, *(short *)(uVar7 + *(uint *)(uVar5 - 1)) == 0x42))
      || (*(ushort *)(uVar7 + *(uint *)(uVar5 - 1)) < 0x41)) ||
     (uVar5 = TemporaryObjectsTracker::HasObject(*(TemporaryObjectsTracker **)(this + 0x20)),
     (uVar5 & 1) != 0)) {
    uVar12 = 1;
  }
  else {
    if (FLAG_trace_side_effect_free_debug_evaluate != '\0') {
      PrintF("[debug-evaluate] failed runtime side effect check.\n");
    }
    this[0x10] = (Debug)0x1;
    Isolate::TerminateExecution(*(Isolate **)(this + 0x88));
    uVar12 = 0;
  }
  plVar2 = local_60[0];
  local_60[0] = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x48))();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

