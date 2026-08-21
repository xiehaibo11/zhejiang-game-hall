
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* v8::internal::CpuProfiler::CollectSample(v8::internal::Isolate*) */

void v8::internal::CpuProfiler::CollectSample(Isolate *param_1)

{
  int iVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  Isolate *local_28;
  
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
  local_28 = param_1;
  base::Mutex::Lock((Mutex *)&DAT_01d3f870);
  auVar3 = std::__ndk1::
           __hash_table<std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::__unordered_map_hasher<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::hash<v8::internal::Isolate*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::equal_to<v8::internal::Isolate*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>>>
           ::__equal_range_multi<v8::internal::Isolate*>
                     ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::__unordered_map_hasher<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::hash<v8::internal::Isolate*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::equal_to<v8::internal::Isolate*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>>>
                       *)&DAT_01d3f848,&local_28);
  for (plVar2 = auVar3._0_8_; plVar2 != (long *)auVar3._8_8_; plVar2 = (long *)*plVar2) {
    if (*(ProfilerEventsProcessor **)(plVar2[3] + 0x30) != (ProfilerEventsProcessor *)0x0) {
      ProfilerEventsProcessor::AddCurrentStack
                (*(ProfilerEventsProcessor **)(plVar2[3] + 0x30),false);
    }
  }
  base::Mutex::Unlock((Mutex *)&DAT_01d3f870);
  return;
}

