
/* v8::internal::DebugEvaluate::ApplySideEffectChecks(v8::internal::Handle<v8::internal::BytecodeArray>)
    */

void v8::internal::DebugEvaluate::ApplySideEffectChecks(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long *local_40 [3];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  interpreter::BytecodeArrayIterator::BytecodeArrayIterator
            ((BytecodeArrayIterator *)local_40,param_1);
  while (uVar4 = interpreter::BytecodeArrayIterator::done((BytecodeArrayIterator *)local_40),
        plVar2 = local_40[0], (uVar4 & 1) == 0) {
    uVar3 = interpreter::BytecodeArrayAccessor::current_bytecode((BytecodeArrayAccessor *)local_40);
    if (((uVar3 & 0xff) - 0x2d < 6) || ((uVar3 & 0xff) == 0x1d)) {
      interpreter::BytecodeArrayAccessor::ApplyDebugBreak((BytecodeArrayAccessor *)local_40);
    }
    interpreter::BytecodeArrayIterator::Advance((BytecodeArrayIterator *)local_40);
  }
  local_40[0] = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x48))();
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

