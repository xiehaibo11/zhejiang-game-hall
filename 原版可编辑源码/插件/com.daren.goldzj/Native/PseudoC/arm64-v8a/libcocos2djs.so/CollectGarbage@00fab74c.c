
/* v8::internal::MarkCompactCollector::CollectGarbage() */

void __thiscall v8::internal::MarkCompactCollector::CollectGarbage(MarkCompactCollector *this)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = *(long *)(*(long *)(this + 8) + 0x808);
  plVar3 = *(long **)(lVar2 + 0x50);
  plVar1 = *(long **)(lVar2 + 0x58);
  if (plVar3 != plVar1) {
    do {
      lVar4 = *plVar3;
      if (((uint)*(ulong *)(lVar4 + 8) >> 0x11 & 1) != 0) {
        *(ulong *)(lVar4 + 8) = *(ulong *)(lVar4 + 8) & 0xfffffffffffdffff;
        memset(*(void **)(lVar4 + 0x108),0,0x2000);
        *(undefined8 *)(lVar4 + 0x100) = 0;
      }
      plVar3 = plVar3 + 1;
    } while (plVar1 != plVar3);
    plVar3 = *(long **)(lVar2 + 0x50);
  }
  *(long **)(lVar2 + 0x58) = plVar3;
  MarkLiveObjects(this);
  ClearNonLiveReferences(this);
  VerifyMarking(this);
  RecordObjectStats(this);
  StartSweepSpaces(this);
  Evacuate(this);
  Finish(this);
  return;
}

