
/* v8::internal::DateCache::GetDaylightSavingsOffsetFromOS(long) */

int __thiscall v8::internal::DateCache::GetDaylightSavingsOffsetFromOS(DateCache *this,long param_1)

{
  double dVar1;
  
  dVar1 = (double)(**(code **)(**(long **)(this + 0x250) + 8))((double)(param_1 * 1000));
  return (int)dVar1;
}

