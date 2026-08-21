
/* v8::internal::HeapProfiler::StartSamplingHeapProfiler(unsigned long, int,
   v8::HeapProfiler::SamplingFlags) */

undefined8 __thiscall
v8::internal::HeapProfiler::StartSamplingHeapProfiler
          (HeapProfiler *this,undefined8 param_1,undefined4 param_2,undefined4 param_4)

{
  undefined8 uVar1;
  SamplingHeapProfiler *pSVar2;
  SamplingHeapProfiler *this_00;
  
  if (*(long *)(this + 0x68) == 0) {
    pSVar2 = operator_new(0xf0);
    SamplingHeapProfiler::SamplingHeapProfiler
              (pSVar2,*(undefined8 *)(*(long *)(this + 8) + 0x78),*(undefined8 *)(this + 0x28),
               param_1,param_2,param_4);
    this_00 = *(SamplingHeapProfiler **)(this + 0x68);
    *(SamplingHeapProfiler **)(this + 0x68) = pSVar2;
    if (this_00 != (SamplingHeapProfiler *)0x0) {
      SamplingHeapProfiler::~SamplingHeapProfiler(this_00);
      operator_delete(this_00);
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

