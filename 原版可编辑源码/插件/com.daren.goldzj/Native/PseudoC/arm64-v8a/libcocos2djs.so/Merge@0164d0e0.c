
/* v8::internal::compiler::LiveRangeMerger::Merge() */

void __thiscall v8::internal::compiler::LiveRangeMerger::Merge(LiveRangeMerger *this)

{
  long lVar1;
  long lVar2;
  int iVar3;
  TopLevelLiveRange *pTVar4;
  undefined8 *puVar5;
  long lVar6;
  
  MarkRangesSpilledInDeferredBlocks(this);
  puVar5 = *(undefined8 **)this;
  lVar1 = puVar5[0x11];
  lVar2 = puVar5[0x12];
  if (0 < (int)((ulong)(lVar2 - lVar1) >> 3)) {
    lVar6 = 0;
    while( true ) {
      pTVar4 = *(TopLevelLiveRange **)(puVar5[0x11] + lVar6);
      if (((pTVar4 != (TopLevelLiveRange *)0x0) && (*(long *)(pTVar4 + 0x10) != 0)) &&
         (*(TopLevelLiveRange **)(pTVar4 + 0x68) != (TopLevelLiveRange *)0x0)) {
        iVar3 = *(int *)(pTVar4 + 0x5c);
        TopLevelLiveRange::Merge(*(TopLevelLiveRange **)(pTVar4 + 0x68),pTVar4,(Zone *)*puVar5);
        *(undefined8 *)(*(long *)(*(long *)this + 0x88) + (long)iVar3 * 8) = 0;
      }
      if (((ulong)(lVar2 - lVar1) >> 3 & 0xffffffff) * 8 + -8 == lVar6) break;
      puVar5 = *(undefined8 **)this;
      lVar6 = lVar6 + 8;
    }
  }
  return;
}

