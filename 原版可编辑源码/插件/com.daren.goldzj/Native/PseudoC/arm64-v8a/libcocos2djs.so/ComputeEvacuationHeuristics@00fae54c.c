
/* v8::internal::MarkCompactCollector::ComputeEvacuationHeuristics(unsigned long, int*, unsigned
   long*) */

void __thiscall
v8::internal::MarkCompactCollector::ComputeEvacuationHeuristics
          (MarkCompactCollector *this,ulong param_1,int *param_2,ulong *param_3)

{
  ulong uVar1;
  int iVar2;
  double dVar3;
  
  if (((byte)(*(Heap **)(this + 8))[0xad4] & 1) == 0) {
    uVar1 = Heap::ShouldOptimizeForMemoryUsage(*(Heap **)(this + 8));
    if ((uVar1 & 1) == 0) {
      dVar3 = (double)GCTracer::CompactionSpeedInBytesPerMillisecond
                                (*(GCTracer **)(*(long *)(this + 8) + 0x7f8));
      if (dVar3 == 0.0) {
        iVar2 = 0x46;
      }
      else {
        iVar2 = (int)(-50.0 / ((double)param_1 / dVar3 + 1.0) + 100.0);
        if (iVar2 < 0x15) {
          iVar2 = 0x14;
        }
      }
      uVar1 = 0x400000;
    }
    else {
      iVar2 = 0x14;
      uVar1 = 0x600000;
    }
  }
  else {
    iVar2 = 0x14;
    uVar1 = 0xc00000;
  }
  *param_2 = iVar2;
  *param_3 = uVar1;
  return;
}

