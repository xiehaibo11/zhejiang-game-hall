
/* v8::internal::Debug::ClearSideEffectChecks(v8::internal::Handle<v8::internal::DebugInfo>) */

void __thiscall v8::internal::Debug::ClearSideEffectChecks(Debug *this,ulong *param_2)

{
  long lVar1;
  long *plVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  long *local_60;
  int local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pIVar3 = *(Isolate **)(this + 0x88);
  uVar6 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x13);
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar6;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar6);
  }
  pIVar3 = *(Isolate **)(this + 0x88);
  uVar6 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xf);
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar6;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar6);
  }
  interpreter::BytecodeArrayIterator::BytecodeArrayIterator
            ((BytecodeArrayIterator *)&local_60,puVar4);
  while (uVar6 = interpreter::BytecodeArrayIterator::done((BytecodeArrayIterator *)&local_60),
        plVar2 = local_60, (uVar6 & 1) == 0) {
    *(undefined1 *)((long)local_58 + 0x21 + *puVar4) =
         *(undefined1 *)((long)local_58 + 0x21 + *puVar5);
    interpreter::BytecodeArrayIterator::Advance((BytecodeArrayIterator *)&local_60);
  }
  local_60 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x48))();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

