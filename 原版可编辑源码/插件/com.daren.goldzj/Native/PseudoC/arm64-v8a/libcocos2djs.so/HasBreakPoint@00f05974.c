
/* v8::internal::BreakLocation::HasBreakPoint(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::DebugInfo>) const */

byte __thiscall
v8::internal::BreakLocation::HasBreakPoint(BreakLocation *this,Isolate *param_1,undefined8 *param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 local_98 [7];
  int local_60;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_98[0] = *param_3;
  uVar3 = DebugInfo::HasBreakPoint((DebugInfo *)local_98,param_1,*(int *)(this + 0x10));
  if ((uVar3 & 1) == 0) {
    bVar2 = 0;
  }
  else {
    local_98[0] = *param_3;
    uVar3 = DebugInfo::CanBreakAtEntry((DebugInfo *)local_98);
    if ((uVar3 & 1) == 0) {
      BreakIterator::BreakIterator((BreakIterator *)local_98,param_3);
      BreakIterator::SkipToPosition((BreakIterator *)local_98,*(int *)(this + 0x10));
      bVar2 = local_60 == *(int *)(this + 8);
    }
    else {
      local_98[0] = *param_3;
      bVar2 = DebugInfo::BreakAtEntry((DebugInfo *)local_98);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

