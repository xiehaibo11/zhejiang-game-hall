
/* v8::internal::OSROptimizedCodeCache::GetSFIFromEntry(int) */

ulong __thiscall
v8::internal::OSROptimizedCodeCache::GetSFIFromEntry(OSROptimizedCodeCache *this,int param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(*(ulong *)this + (long)(param_1 << 2) + 7);
  if (uVar2 == 3 || (uVar2 & 1) == 0) {
    return 0;
  }
  uVar1 = 0;
  if ((uVar2 & 0xfffffffd) != 0) {
    uVar1 = (ulong)uVar2 & 0xfffffffffffffffd | *(ulong *)this & 0xffffffff00000000;
  }
  return uVar1;
}

