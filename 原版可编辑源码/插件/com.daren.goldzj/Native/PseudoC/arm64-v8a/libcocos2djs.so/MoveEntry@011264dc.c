
/* v8::internal::OSROptimizedCodeCache::MoveEntry(int, int, v8::internal::Isolate*) */

void __thiscall
v8::internal::OSROptimizedCodeCache::MoveEntry
          (OSROptimizedCodeCache *this,int param_1,int param_2,Isolate *param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar7 = *(ulong *)this;
  iVar3 = param_1 * 4;
  iVar4 = param_2 * 4;
  uVar2 = *(uint *)(uVar7 + (long)iVar3 + 7);
  lVar1 = (long)iVar4 + 7;
  *(uint *)(uVar7 + lVar1) = uVar2;
  uVar6 = *(ulong *)this;
  if ((uVar2 != 3) && ((uVar2 & 1) != 0)) {
    uVar9 = uVar7 & 0xffffffff00000000 | (ulong)uVar2 & 0xfffffffffffc0000;
    uVar8 = *(ulong *)(uVar9 + 8);
    lVar5 = uVar6 + lVar1;
    uVar7 = uVar7 & 0xffffffff00000000 | (ulong)uVar2 & 0xfffffffffffffffd;
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,lVar5,uVar7);
      uVar6 = *(ulong *)this;
      uVar8 = *(ulong *)(uVar9 | 8);
      lVar5 = uVar6 + lVar1;
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,lVar5,uVar7);
      uVar6 = *(ulong *)this;
    }
  }
  uVar2 = *(uint *)(uVar6 + (long)(iVar3 + 4) + 7);
  lVar1 = (long)(iVar4 + 4) + 7;
  *(uint *)(uVar6 + lVar1) = uVar2;
  uVar7 = *(ulong *)this;
  if ((uVar2 != 3) && ((uVar2 & 1) != 0)) {
    uVar9 = uVar6 & 0xffffffff00000000 | (ulong)uVar2 & 0xfffffffffffc0000;
    uVar8 = *(ulong *)(uVar9 + 8);
    lVar5 = uVar7 + lVar1;
    uVar6 = uVar6 & 0xffffffff00000000 | (ulong)uVar2 & 0xfffffffffffffffd;
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,lVar5,uVar6);
      uVar7 = *(ulong *)this;
      uVar8 = *(ulong *)(uVar9 | 8);
      lVar5 = uVar7 + lVar1;
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,lVar5,uVar6);
      uVar7 = *(ulong *)this;
    }
  }
  uVar2 = *(uint *)(uVar7 + (long)(iVar3 + 8) + 7);
  lVar1 = (long)(iVar4 + 8) + 7;
  *(uint *)(uVar7 + lVar1) = uVar2;
  if ((uVar2 != 3) && ((uVar2 & 1) != 0)) {
    uVar6 = *(ulong *)this;
    uVar9 = uVar7 & 0xffffffff00000000 | (ulong)uVar2 & 0xfffffffffffc0000;
    uVar8 = *(ulong *)(uVar9 + 8);
    uVar7 = uVar7 & 0xffffffff00000000 | (ulong)uVar2 & 0xfffffffffffffffd;
    lVar5 = uVar6 + lVar1;
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,lVar5,uVar7);
      uVar6 = *(ulong *)this;
      uVar8 = *(ulong *)(uVar9 | 8);
      lVar5 = uVar6 + lVar1;
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,lVar5,uVar7);
    }
  }
  ClearEntry(this,param_1,param_3);
  return;
}

