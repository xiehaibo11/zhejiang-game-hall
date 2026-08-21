
/* v8::internal::OSROptimizedCodeCache::CapacityForLength(int) */

int v8::internal::OSROptimizedCodeCache::CapacityForLength(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = 0xc00;
    if (param_1 < 0x601) {
      iVar1 = param_1 << 1;
    }
    return iVar1;
  }
  return 0xc;
}

