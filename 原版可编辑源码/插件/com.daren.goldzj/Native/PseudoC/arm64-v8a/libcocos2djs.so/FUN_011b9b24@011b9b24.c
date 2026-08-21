
void FUN_011b9b24(undefined8 param_1,long param_2)

{
  CpuProfiler *this;
  
  v8::base::Mutex::Lock((Mutex *)(param_2 + 0x1c));
  if (*(CpuProfiler **)(param_2 + 0x10) != (CpuProfiler *)0x0) {
    v8::internal::CpuProfiler::StopProfiling(*(CpuProfiler **)(param_2 + 0x10),"");
    this = *(CpuProfiler **)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x10) = 0;
    if (this != (CpuProfiler *)0x0) {
      v8::internal::CpuProfiler::~CpuProfiler(this);
      operator_delete(this);
    }
  }
  v8::base::Mutex::Unlock((Mutex *)(param_2 + 0x1c));
  return;
}

