
/* v8::internal::MemoryController<v8::internal::V8HeapTrait>::CalculateAllocationLimit(v8::internal::Heap*,
   unsigned long, unsigned long, unsigned long, unsigned long, double,
   v8::internal::Heap::HeapGrowingMode) */

ulong v8::internal::MemoryController<v8::internal::V8HeapTrait>::CalculateAllocationLimit
                (double param_6,long param_1,ulong param_2,ulong param_3,long param_4,long param_5,
                uint param_7)

{
  long lVar1;
  ulong uVar2;
  
  if (param_7 < 2) {
    param_6 = (double)NEON_fminnm(param_6,0x3ff4cccccccccccd);
  }
  else if (param_7 == 2) {
    param_6 = 1.1;
  }
  if (0 < FLAG_heap_growing_percent) {
    param_6 = (double)FLAG_heap_growing_percent / 100.0 + 1.0;
  }
  if (1.0 < param_6) {
    if (param_2 != 0) {
      lVar1 = 0x200000;
      if (param_7 != 1) {
        lVar1 = 0x800000;
      }
      uVar2 = lVar1 + param_2;
      if (lVar1 + param_2 <= (ulong)(long)(param_6 * (double)param_2)) {
        uVar2 = (long)(param_6 * (double)param_2);
      }
      if (param_3 <= uVar2 + param_5) {
        param_3 = uVar2 + param_5;
      }
      uVar2 = param_4 + param_2 >> 1;
      if (uVar2 <= param_3) {
        param_3 = uVar2;
      }
      if (FLAG_trace_gc_verbose != '\0') {
        Isolate::PrintWithTimestamp
                  ((char *)(param_1 + -0x8850),
                   "[%s] Limit: old size: %zu KB, new limit: %zu KB (%.1f)\n",V8HeapTrait::kName,
                   param_2 >> 10,param_3 >> 10);
      }
      return param_3;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","0 < current_size");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","1.0 < factor");
}

