
/* v8::internal::HeapProfiler::StopSamplingHeapProfiler() */

void __thiscall v8::internal::HeapProfiler::StopSamplingHeapProfiler(HeapProfiler *this)

{
  StringsStorage *this_00;
  SamplingHeapProfiler *this_01;
  StringsStorage *this_02;
  
  this_01 = *(SamplingHeapProfiler **)(this + 0x68);
  *(undefined8 *)(this + 0x68) = 0;
  if (this_01 != (SamplingHeapProfiler *)0x0) {
    SamplingHeapProfiler::~SamplingHeapProfiler(this_01);
    operator_delete(this_01);
  }
  if (((*(long *)(this + 0x10) == *(long *)(this + 0x18)) && (*(long *)(this + 0x68) == 0)) &&
     (*(long *)(this + 0x30) == 0)) {
    this_00 = operator_new(0x18);
    StringsStorage::StringsStorage(this_00);
    this_02 = *(StringsStorage **)(this + 0x28);
    *(StringsStorage **)(this + 0x28) = this_00;
    if (this_02 != (StringsStorage *)0x0) {
      StringsStorage::~StringsStorage(this_02);
      operator_delete(this_02);
      return;
    }
  }
  return;
}

