
/* v8::internal::DebugInfo::ClearCoverageInfo(v8::internal::Isolate*) */

void __thiscall v8::internal::DebugInfo::ClearCoverageInfo(DebugInfo *this,Isolate *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((*(byte *)(*(long *)this + 0x1b) >> 3 & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 0xa0);
    *(int *)(*(long *)this + 0x1f) = (int)uVar4;
    uVar1 = *(ulong *)this;
    if ((uVar4 & 1) != 0) {
      uVar3 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
      lVar2 = uVar1 + 0x1f;
      if (((uint)uVar3 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar1,lVar2,uVar4);
        uVar1 = *(ulong *)this;
        uVar3 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
        lVar2 = uVar1 + 0x1f;
      }
      if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar1 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar1,lVar2,uVar4);
        uVar1 = *(ulong *)this;
      }
    }
    *(uint *)(uVar1 + 0x1b) = *(uint *)(uVar1 + 0x1b) & 0xfffffff6;
  }
  return;
}

