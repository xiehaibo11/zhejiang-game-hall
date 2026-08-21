
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* v8::internal::CpuProfiler::CpuProfiler(v8::internal::Isolate*, v8::CpuProfilingNamingMode,
   v8::CpuProfilingLoggingMode, v8::internal::CpuProfilesCollection*,
   v8::internal::ProfileGenerator*, v8::internal::ProfilerEventsProcessor*) */

void __thiscall
v8::internal::CpuProfiler::CpuProfiler
          (CpuProfiler *this,Isolate *param_1,undefined4 param_3,int param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  CpuProfiler *local_40;
  Isolate *pIStack_38;
  
  *(Isolate **)this = param_1;
  *(undefined4 *)(this + 8) = param_3;
  *(int *)(this + 0xc) = param_4;
  this[0x10] = (CpuProfiler)0x1;
  lVar2 = (long)FLAG_cpu_profiler_sampling_interval;
  *(undefined8 *)(this + 0x28) = param_6;
  *(undefined8 *)(this + 0x30) = param_7;
  *(long *)(this + 0x18) = lVar2;
  *(undefined8 *)(this + 0x20) = param_5;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  ProfilerCodeObserver::ProfilerCodeObserver((ProfilerCodeObserver *)(this + 0x48),param_1);
  this[0xb0] = (CpuProfiler)0x0;
  *(CpuProfiler **)(*(long *)(this + 0x20) + 0x30) = this;
  if (((DAT_01d3f898 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d3f898), iVar1 != 0)) {
    uRam0000000001d3f880 = 0;
    _DAT_01d3f878 = 0;
    uRam0000000001d3f890 = 0;
    _DAT_01d3f888 = 0;
    uRam0000000001d3f860 = 0;
    _DAT_01d3f858 = 0;
    _DAT_01d3f870 = 0;
    uRam0000000001d3f850 = 0;
    _DAT_01d3f848 = 0;
    _DAT_01d3f868 = 0x3f800000;
    base::Mutex::Mutex((Mutex *)&DAT_01d3f870);
    __cxa_guard_release(&DAT_01d3f898);
  }
  local_40 = this;
  pIStack_38 = param_1;
  base::Mutex::Lock((Mutex *)&DAT_01d3f870);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::__unordered_map_hasher<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::hash<v8::internal::Isolate*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::equal_to<v8::internal::Isolate*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>>>
  ::__emplace_multi<v8::internal::Isolate*&,v8::internal::CpuProfiler*&>
            ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::__unordered_map_hasher<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::hash<v8::internal::Isolate*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::equal_to<v8::internal::Isolate*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>>>
              *)&DAT_01d3f848,&pIStack_38,&local_40);
  base::Mutex::Unlock((Mutex *)&DAT_01d3f870);
  if (param_4 == 1) {
    EnableLogging(this);
  }
  return;
}

