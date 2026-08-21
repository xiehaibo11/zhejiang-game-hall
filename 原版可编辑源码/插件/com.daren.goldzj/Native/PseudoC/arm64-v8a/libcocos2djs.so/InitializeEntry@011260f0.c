
/* v8::internal::OSROptimizedCodeCache::InitializeEntry(int, v8::internal::SharedFunctionInfo,
   v8::internal::Code, v8::internal::BailoutId) */

void __thiscall
v8::internal::OSROptimizedCodeCache::InitializeEntry
          (OSROptimizedCodeCache *this,int param_1,ulong param_3,ulong param_4,int param_5)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  param_1 = param_1 * 4;
  lVar1 = (long)param_1 + 7;
  uVar2 = (uint)param_3 | 2;
  *(uint *)(*(long *)this + lVar1) = uVar2;
  uVar3 = *(ulong *)this;
  if (((param_3 & 1) != 0) && (uVar2 != 3)) {
    uVar5 = *(ulong *)((param_3 & 0xfffffffffffc0000) + 8);
    lVar4 = uVar3 + lVar1;
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar3,lVar4,param_3 & 0xfffffffffffffffd);
      uVar3 = *(ulong *)this;
      uVar5 = *(ulong *)(param_3 & 0xfffffffffffc0000 | 8);
      lVar4 = uVar3 + lVar1;
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar3,lVar4,param_3 & 0xfffffffffffffffd);
      uVar3 = *(ulong *)this;
    }
  }
  lVar1 = (long)(param_1 + 4) + 7;
  uVar2 = (uint)param_4 | 2;
  *(uint *)(uVar3 + lVar1) = uVar2;
  uVar3 = *(ulong *)this;
  if (((param_4 & 1) != 0) && (uVar2 != 3)) {
    uVar5 = *(ulong *)((param_4 & 0xfffffffffffc0000) + 8);
    lVar4 = uVar3 + lVar1;
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar3,lVar4,param_4 & 0xfffffffffffffffd);
      uVar3 = *(ulong *)this;
      uVar5 = *(ulong *)(param_4 & 0xfffffffffffc0000 | 8);
      lVar4 = uVar3 + lVar1;
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar3,lVar4,param_4 & 0xfffffffffffffffd);
      uVar3 = *(ulong *)this;
    }
  }
  *(int *)(uVar3 + (long)(param_1 + 8) + 7) = param_5 << 1;
  return;
}

