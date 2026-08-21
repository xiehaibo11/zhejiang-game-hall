
/* v8::internal::Debug::FindBreakablePosition(v8::internal::Handle<v8::internal::DebugInfo>, int) */

void __thiscall
v8::internal::Debug::FindBreakablePosition(undefined8 param_1,undefined8 *param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_98;
  undefined4 local_8c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_98 = *param_2;
  uVar2 = DebugInfo::CanBreakAtEntry((DebugInfo *)&local_98);
  if ((uVar2 & 1) == 0) {
    BreakIterator::BreakIterator((BreakIterator *)&local_98,param_2);
    BreakIterator::SkipToPosition((BreakIterator *)&local_98,param_3);
  }
  else {
    local_8c = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8c);
}

