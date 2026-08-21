
/* v8::internal::DebugInfo::ClearBreakInfo(v8::internal::Isolate*) */

void __thiscall v8::internal::DebugInfo::ClearBreakInfo(DebugInfo *this,Isolate *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_48 [3];
  
  uVar1 = *(ulong *)this;
  uVar3 = uVar1 & 0xffffffff00000000;
  if (*(short *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | *(uint *)(uVar1 + 0x13)) - 1)) == 0x86) {
    local_48[0] = uVar3 | *(uint *)(uVar1 + 3);
    SharedFunctionInfo::SetDebugBytecodeArray
              ((SharedFunctionInfo *)local_48,uVar3 | *(uint *)(uVar1 + 0xf));
    RedirectActiveFunctions::RedirectActiveFunctions
              ((RedirectActiveFunctions *)local_48,
               *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 3),0);
    RedirectActiveFunctions::VisitThread
              ((RedirectActiveFunctions *)local_48,param_1,(ThreadLocalTop *)(param_1 + 0x2bb8));
    ThreadManager::IterateArchivedThreads
              (*(ThreadManager **)(param_1 + 0x95f0),(ThreadVisitor *)local_48);
    uVar3 = *(ulong *)(param_1 + 0xa0);
    *(int *)(*(long *)this + 0xf) = (int)uVar3;
    uVar1 = *(ulong *)this;
    if ((uVar3 & 1) != 0) {
      uVar4 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
      lVar2 = uVar1 + 0xf;
      if (((uint)uVar4 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar1,lVar2,uVar3);
        uVar1 = *(ulong *)this;
        uVar4 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
        lVar2 = uVar1 + 0xf;
      }
      if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar1 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar1,lVar2,uVar3);
        uVar1 = *(ulong *)this;
      }
    }
    uVar3 = *(ulong *)(param_1 + 0xa0);
    *(int *)(uVar1 + 0x13) = (int)uVar3;
    uVar1 = *(ulong *)this;
    if ((uVar3 & 1) != 0) {
      uVar4 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
      lVar2 = uVar1 + 0x13;
      if (((uint)uVar4 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar1,lVar2,uVar3);
        uVar1 = *(ulong *)this;
        uVar4 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
        lVar2 = uVar1 + 0x13;
      }
      if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar1 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar1,lVar2,uVar3);
        uVar1 = *(ulong *)this;
      }
    }
  }
  uVar3 = *(ulong *)(param_1 + 0x168);
  *(int *)(uVar1 + 0x17) = (int)uVar3;
  uVar1 = *(ulong *)this;
  if ((uVar3 & 1) != 0) {
    uVar4 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    lVar2 = uVar1 + 0x17;
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar1,lVar2,uVar3);
      uVar1 = *(ulong *)this;
      uVar4 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
      lVar2 = uVar1 + 0x17;
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar1 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar1,lVar2,uVar3);
      uVar1 = *(ulong *)this;
    }
  }
  *(uint *)(uVar1 + 0x1b) = *(uint *)(uVar1 + 0x1b) & 0xffffff88;
  return;
}

