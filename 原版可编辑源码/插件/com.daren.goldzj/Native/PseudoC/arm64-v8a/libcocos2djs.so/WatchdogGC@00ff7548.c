
/* v8::internal::MemoryReducer::WatchdogGC(v8::internal::MemoryReducer::State const&,
   v8::internal::MemoryReducer::Event const&) */

bool v8::internal::MemoryReducer::WatchdogGC(State *param_1,Event *param_2)

{
  return *(double *)(param_1 + 0x10) != 0.0 &&
         *(double *)(param_1 + 0x10) + 100000.0 < *(double *)(param_2 + 8);
}

