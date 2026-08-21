
/* v8::internal::OSROptimizedCodeCache::NeedsTrimming(int, int) */

bool v8::internal::OSROptimizedCodeCache::NeedsTrimming(int param_1,int param_2)

{
  return 0xc < param_2 && param_1 * 3 < param_2;
}

