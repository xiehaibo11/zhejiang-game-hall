
/* v8::internal::Debug::UpdateDebugInfosForExecutionMode() */

void __thiscall v8::internal::Debug::UpdateDebugInfosForExecutionMode(Debug *this)

{
  Debug *pDVar1;
  ulong *puVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong local_58;
  
  puVar6 = *(undefined8 **)(this + 0x18);
  do {
    while( true ) {
      if (puVar6 == (undefined8 *)0x0) {
        return;
      }
      puVar4 = (ulong *)*puVar6;
      local_58 = *puVar4;
      if (*(short *)((local_58 & 0xffffffff00000000 | 7) +
                    (ulong)*(uint *)((local_58 & 0xffffffff00000000 |
                                     (ulong)*(uint *)(local_58 + 0x13)) - 1)) == 0x86) break;
LAB_00f0cf08:
      puVar6 = (undefined8 *)puVar6[1];
    }
    pDVar1 = (Debug *)DebugInfo::DebugExecutionMode((DebugInfo *)&local_58);
    if ((int)pDVar1 == *(int *)(*(long *)(this + 0x88) + 0xb80c)) goto LAB_00f0cf08;
    if (*(int *)(*(long *)(this + 0x88) + 0xb80c) == 0) {
      ClearSideEffectChecks(this,puVar4);
      ApplyBreakPoints(this,puVar4);
      goto LAB_00f0cf08;
    }
    ClearBreakPoints(pDVar1,puVar4);
    pIVar3 = *(Isolate **)(this + 0x88);
    uVar5 = *puVar4 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar4 + 0x13);
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar5;
    }
    else {
      CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar5);
    }
    DebugEvaluate::ApplySideEffectChecks();
    local_58 = *puVar4;
    DebugInfo::SetDebugExecutionMode((DebugInfo *)&local_58,0x20);
    puVar6 = (undefined8 *)puVar6[1];
  } while( true );
}

