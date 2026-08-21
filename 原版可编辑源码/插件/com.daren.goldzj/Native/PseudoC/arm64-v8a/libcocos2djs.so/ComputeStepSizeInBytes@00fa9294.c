
/* v8::internal::IncrementalMarking::ComputeStepSizeInBytes(v8::internal::StepOrigin) */

long __thiscall
v8::internal::IncrementalMarking::ComputeStepSizeInBytes(IncrementalMarking *this,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  
  if (FLAG_concurrent_marking != '\0') {
    uVar2 = ConcurrentMarking::TotalMarkedBytes(*(ConcurrentMarking **)(*(long *)this + 0x830));
    lVar4 = uVar2 - *(ulong *)(this + 0x50);
    if (*(ulong *)(this + 0x50) <= uVar2 && lVar4 != 0) {
      *(ulong *)(this + 0x50) = uVar2;
      *(long *)(this + 0x38) = lVar4 + *(long *)(this + 0x38);
    }
    if (FLAG_trace_incremental_marking == '\0') goto LAB_00fa9360;
    lVar4 = *(long *)this;
    uVar2 = ConcurrentMarking::TotalMarkedBytes(*(ConcurrentMarking **)(lVar4 + 0x830));
    Isolate::PrintWithTimestamp
              ((char *)(lVar4 + -0x8850),"[IncrementalMarking] Marked %zuKB on background threads\n"
               ,uVar2 >> 10);
  }
  if (FLAG_trace_incremental_marking != '\0') {
    uVar2 = *(ulong *)(this + 0x38);
    uVar1 = *(ulong *)(this + 0x40);
    uVar5 = uVar1 - uVar2;
    if (uVar1 < uVar2 || uVar5 == 0) {
      uVar5 = uVar2 - uVar1;
      pcVar3 = "[IncrementalMarking] Marker is %zuKB ahead of schedule\n";
    }
    else {
      pcVar3 = "[IncrementalMarking] Marker is %zuKB behind schedule\n";
    }
    Isolate::PrintWithTimestamp((char *)(*(long *)this + -0x8850),pcVar3,uVar5 >> 10);
  }
LAB_00fa9360:
  uVar2 = *(long *)(this + 0x38) + (ulong)(param_2 == 0) * 0x100000;
  lVar4 = 0;
  if (uVar2 <= *(ulong *)(this + 0x40)) {
    lVar4 = *(ulong *)(this + 0x40) - uVar2;
  }
  return lVar4;
}

