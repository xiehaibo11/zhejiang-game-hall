
/* v8::internal::IncrementalMarking::AddScheduledBytesToMark(unsigned long) */

void __thiscall
v8::internal::IncrementalMarking::AddScheduledBytesToMark(IncrementalMarking *this,ulong param_1)

{
  long lVar1;
  
  lVar1 = *(ulong *)(this + 0x40) + param_1;
  if (CARRY8(*(ulong *)(this + 0x40),param_1)) {
    lVar1 = -1;
  }
  *(long *)(this + 0x40) = lVar1;
  return;
}

