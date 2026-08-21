
/* v8::internal::MemoryController<v8::internal::V8HeapTrait>::GrowingFactor(v8::internal::Heap*,
   unsigned long, double, double) */

undefined1  [16]
v8::internal::MemoryController<v8::internal::V8HeapTrait>::GrowingFactor
          (Heap *param_1,ulong param_2,double param_3,double param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  
  if (param_2 < 0x8000001) {
    param_2 = 0x8000000;
  }
  if (param_2 >> 0x1e == 0) {
    dVar4 = ((double)(param_2 - 0x8000000) * 0.7) / 939524096.0 + 1.3;
  }
  else {
    dVar4 = 4.0;
  }
  if ((param_3 != 0.0) && (param_4 != 0.0)) {
    dVar1 = (param_3 / param_4) * 0.030000000000000027;
    dVar3 = dVar1 / (dVar1 + -0.97);
    if ((dVar1 + -0.97) * dVar4 <= dVar1) {
      dVar3 = dVar4;
    }
    if (dVar4 <= dVar3) {
      dVar3 = dVar4;
    }
    dVar4 = dVar3;
    if (dVar3 <= 1.1) {
      dVar4 = 1.1;
    }
  }
  uVar5 = 0;
  if (FLAG_trace_gc_verbose != '\0') {
    Isolate::PrintWithTimestamp
              ((char *)(param_1 + -0x8850),dVar4,0x3fef0a3d70a3d70a,
               "[%s] factor %.1f based on mu=%.3f, speed_ratio=%.f (gc=%.f, mutator=%.f)\n",
               V8HeapTrait::kName);
  }
  auVar2._8_8_ = uVar5;
  auVar2._0_8_ = dVar4;
  return auVar2;
}

