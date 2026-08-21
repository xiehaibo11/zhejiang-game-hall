
/* v8::internal::OSROptimizedCodeCache::GetBailoutIdFromEntry(int) */

int __thiscall
v8::internal::OSROptimizedCodeCache::GetBailoutIdFromEntry(OSROptimizedCodeCache *this,int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(*(long *)this + (long)(param_1 * 4 + 8) + 7);
  iVar1 = (int)uVar2 >> 1;
  if ((uVar2 & 1) != 0) {
    iVar1 = 0;
  }
  return iVar1;
}

