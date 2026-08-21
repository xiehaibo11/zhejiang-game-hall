
/* v8::internal::IncrementalMarking::ScheduleBytesToMarkBasedOnTime(double) */

void __thiscall
v8::internal::IncrementalMarking::ScheduleBytesToMarkBasedOnTime
          (IncrementalMarking *this,double param_1)

{
  long lVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = *(double *)(this + 0x48);
  if (dVar3 + 10.0 <= param_1) {
    *(double *)(this + 0x48) = param_1;
    dVar3 = (double)NEON_fminnm(param_1 - dVar3,0x407f400000000000);
    dVar4 = (double)NEON_ucvtf(*(undefined8 *)(this + 0x28));
    uVar2 = (ulong)((dVar3 / 500.0) * dVar4);
    lVar1 = *(ulong *)(this + 0x40) + uVar2;
    if (CARRY8(*(ulong *)(this + 0x40),uVar2)) {
      lVar1 = -1;
    }
    *(long *)(this + 0x40) = lVar1;
    if (FLAG_trace_incremental_marking != '\0') {
      Isolate::PrintWithTimestamp
                ((char *)(*(long *)this + -0x8850),
                 "[IncrementalMarking] Scheduled %zuKB to mark based on time delta %.1fms\n",
                 uVar2 >> 10);
      return;
    }
  }
  return;
}

