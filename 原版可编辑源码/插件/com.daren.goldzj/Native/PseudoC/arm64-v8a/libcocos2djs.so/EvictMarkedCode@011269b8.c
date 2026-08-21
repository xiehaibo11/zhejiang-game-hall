
/* v8::internal::OSROptimizedCodeCache::EvictMarkedCode(v8::internal::Isolate*) */

void __thiscall
v8::internal::OSROptimizedCodeCache::EvictMarkedCode(OSROptimizedCodeCache *this,Isolate *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  
  uVar2 = *(ulong *)this;
  if (1 < *(int *)(uVar2 + 3)) {
    lVar3 = 0;
    iVar4 = 4;
    do {
      uVar1 = *(uint *)(uVar2 + (long)iVar4 + 7);
      if (((uVar1 != 3) && ((uVar1 & 1) != 0)) &&
         ((*(uint *)((uVar2 & 0xffffffff00000000 |
                     (ulong)*(uint *)(((ulong)uVar1 & 0xfffffffffffffffd |
                                      uVar2 & 0xffffffff00000000) + 0xf)) + 7) & 1) != 0)) {
        ClearEntry(this,(int)lVar3,param_1);
      }
      uVar2 = *(ulong *)this;
      lVar3 = lVar3 + 3;
      iVar4 = iVar4 + 0xc;
    } while (lVar3 < *(int *)(uVar2 + 3) >> 1);
  }
  return;
}

