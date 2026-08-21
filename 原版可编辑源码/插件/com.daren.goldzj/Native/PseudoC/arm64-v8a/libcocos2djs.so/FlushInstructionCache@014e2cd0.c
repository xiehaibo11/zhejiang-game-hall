
/* v8::internal::FlushInstructionCache(void*, unsigned long) */

void v8::internal::FlushInstructionCache(void *param_1,ulong param_2)

{
  if ((param_2 != 0) && (FLAG_jitless == '\0')) {
    CpuFeatures::FlushICache(param_1,param_2);
    return;
  }
  return;
}

