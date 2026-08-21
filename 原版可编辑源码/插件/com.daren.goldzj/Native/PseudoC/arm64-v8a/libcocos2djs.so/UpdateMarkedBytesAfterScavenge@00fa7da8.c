
/* v8::internal::IncrementalMarking::UpdateMarkedBytesAfterScavenge(unsigned long) */

void __thiscall
v8::internal::IncrementalMarking::UpdateMarkedBytesAfterScavenge
          (IncrementalMarking *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (1 < *(int *)(this + 0x58)) {
    uVar2 = *(ulong *)(this + 0x38);
    uVar1 = uVar2;
    if (param_1 <= uVar2) {
      uVar1 = param_1;
    }
    *(ulong *)(this + 0x38) = uVar2 - uVar1;
  }
  return;
}

