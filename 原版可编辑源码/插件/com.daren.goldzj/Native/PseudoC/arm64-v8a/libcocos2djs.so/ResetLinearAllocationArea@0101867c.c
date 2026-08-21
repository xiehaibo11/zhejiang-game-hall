
/* v8::internal::NewSpace::ResetLinearAllocationArea() */

void __thiscall v8::internal::NewSpace::ResetLinearAllocationArea(NewSpace *this)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  MemoryChunk *pMVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  uVar11 = *(ulong *)(this + 0x68);
  uVar5 = uVar11;
  if ((*(char *)(*(long *)(this + 0x40) + 0x1a0) == '\0') &&
     (uVar9 = *(ulong *)(this + 0x78), uVar9 != 0)) {
    if (uVar11 < uVar9) {
      *(ulong *)(this + 0x78) = uVar11;
      uVar9 = uVar11;
    }
    if ((this[0x38] == (NewSpace)0x0) && (*(long *)(this + 8) != *(long *)(this + 0x10))) {
      *(undefined1 *)(*(long *)(this + 0x40) + 0x1a0) = 1;
      Heap::CreateFillerObjectAt(*(Heap **)(this + 0x40),0,0,1,1);
      puVar1 = *(undefined8 **)(this + 0x10);
      if (*(undefined8 **)(this + 8) != puVar1) {
        puVar12 = *(undefined8 **)(this + 8);
        do {
          puVar13 = puVar12 + 1;
          AllocationObserver::AllocationStep
                    ((int)*puVar12,(ulong)(uint)((int)uVar11 - (int)uVar9),0);
          puVar12 = puVar13;
        } while (puVar1 != puVar13);
      }
      *(undefined1 *)(*(long *)(this + 0x40) + 0x1a0) = 0;
      uVar5 = *(ulong *)(this + 0x68);
    }
    *(ulong *)(this + 0x78) = uVar11;
  }
  lVar6 = *(long *)(this + 0xf0);
  *(undefined4 *)(this + 0x168) = 0;
  *(long *)(this + 0x160) = lVar6;
  uVar4 = *(undefined8 *)(lVar6 + 0x20);
  if (uVar5 != 0) {
    uVar11 = uVar5 - 1 & 0xfffffffffffc0000;
    lVar6 = uVar5 - uVar11;
    plVar8 = (long *)(uVar11 | 0x98);
    do {
      while( true ) {
        if (lVar6 <= *plVar8) goto LAB_01018788;
        if (*plVar8 == *plVar8) break;
        ClearExclusiveLocal();
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01018788:
    lVar6 = *(long *)(this + 0x160);
  }
  uVar7 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(this + 0x68) = uVar4;
  *(undefined8 *)(this + 0x70) = uVar7;
  *(undefined8 *)(this + 200) = uVar7;
  *(undefined8 *)(this + 0xc0) = uVar4;
  (**(code **)(*(long *)this + 0x30))(this);
  for (pMVar10 = *(MemoryChunk **)(this + 0xf0); pMVar10 != (MemoryChunk *)0x0;
      pMVar10 = *(MemoryChunk **)(pMVar10 + 0xe0)) {
    memset(*(void **)(pMVar10 + 0x10),0,0x2000);
    *(undefined8 *)(pMVar10 + 0x68) = 0;
    ConcurrentMarking::ClearMemoryChunkData
              (*(ConcurrentMarking **)(*(long *)(this + 0x40) + 0x830),pMVar10);
  }
  return;
}

