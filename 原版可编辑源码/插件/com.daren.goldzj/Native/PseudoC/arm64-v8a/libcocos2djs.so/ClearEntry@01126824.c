
/* v8::internal::OSROptimizedCodeCache::ClearEntry(int, v8::internal::Isolate*) */

void __thiscall
v8::internal::OSROptimizedCodeCache::ClearEntry
          (OSROptimizedCodeCache *this,int param_1,Isolate *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  
  iVar2 = param_1 * 4;
  uVar7 = (ulong)param_2 | 3;
  lVar1 = (long)iVar2 + 7;
  iVar6 = (int)uVar7;
  *(int *)(*(long *)this + lVar1) = iVar6;
  uVar3 = *(ulong *)this;
  if (iVar6 != 3) {
    uVar5 = *(ulong *)(((ulong)param_2 & 0xfffffffffffc0000) + 8);
    lVar4 = uVar3 + lVar1;
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar3,lVar4,uVar7 & 0xfffffffffffffffd);
      uVar3 = *(ulong *)this;
      uVar5 = *(ulong *)((ulong)param_2 & 0xfffffffffffc0000 | 8);
      lVar4 = uVar3 + lVar1;
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar3,lVar4,uVar7 & 0xfffffffffffffffd);
      uVar3 = *(ulong *)this;
    }
  }
  lVar1 = (long)(iVar2 + 4) + 7;
  *(int *)(uVar3 + lVar1) = iVar6;
  uVar3 = *(ulong *)this;
  if (iVar6 != 3) {
    uVar5 = *(ulong *)(((ulong)param_2 & 0xfffffffffffc0000) + 8);
    lVar4 = uVar3 + lVar1;
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar3,lVar4,uVar7 & 0xfffffffffffffffd);
      uVar3 = *(ulong *)this;
      uVar5 = *(ulong *)((ulong)param_2 & 0xfffffffffffc0000 | 8);
      lVar4 = uVar3 + lVar1;
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar3,lVar4,uVar7 & 0xfffffffffffffffd);
      uVar3 = *(ulong *)this;
    }
  }
  lVar1 = (long)(iVar2 + 8) + 7;
  *(int *)(uVar3 + lVar1) = iVar6;
  if (iVar6 != 3) {
    uVar3 = *(ulong *)this;
    uVar5 = *(ulong *)(((ulong)param_2 & 0xfffffffffffc0000) + 8);
    lVar4 = uVar3 + lVar1;
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar3,lVar4,uVar7 & 0xfffffffffffffffd);
      uVar3 = *(ulong *)this;
      uVar5 = *(ulong *)((ulong)param_2 & 0xfffffffffffc0000 | 8);
      lVar4 = uVar3 + lVar1;
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar3,lVar4,uVar7 & 0xfffffffffffffffd);
      return;
    }
  }
  return;
}

