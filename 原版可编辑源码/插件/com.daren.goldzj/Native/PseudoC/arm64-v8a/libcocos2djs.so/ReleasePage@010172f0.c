
/* v8::internal::PagedSpace::ReleasePage(v8::internal::Page*) */

void __thiscall v8::internal::PagedSpace::ReleasePage(PagedSpace *this,Page *param_1)

{
  uint *puVar1;
  PagedSpace *pPVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  MemoryAllocator *this_00;
  long *plVar7;
  Logger *this_01;
  int *piVar8;
  long lVar9;
  
  plVar7 = *(long **)(this + 0x60);
  if (0 < *(int *)(*(long *)(*(long *)(param_1 + 0x58) + 0x60) + 8)) {
    lVar9 = 0;
    do {
      piVar8 = *(int **)(*(long *)(param_1 + 0xf0) + lVar9 * 8);
      puVar1 = (uint *)(piVar8 + 1);
      (**(code **)(*plVar7 + 0x40))(plVar7,piVar8);
      if ((((*(long *)(piVar8 + 4) != 0) || (*(long *)(piVar8 + 6) != 0)) ||
          (*(int **)(plVar7[4] + (long)*piVar8 * 8) == piVar8)) && (piVar8[2] != 0)) {
        plVar7[5] = plVar7[5] - (ulong)*puVar1;
      }
      puVar1[0] = 0;
      puVar1[1] = 0;
      piVar8[3] = 0;
      piVar8[4] = 0;
      piVar8[7] = 0;
      piVar8[5] = 0;
      piVar8[6] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(*(long *)(*(long *)(param_1 + 0x58) + 0x60) + 8));
  }
  if ((Page *)(*(long *)(this + 0x68) - 4U & 0xfffffffffffc0000) == param_1) {
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x70) = 0;
  }
  *(long *)(this + 0x50) = *(long *)(this + 0x50) - *(long *)param_1;
  lVar9 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0x28);
  pPVar2 = this + 0xa8;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pPVar2,0x10);
    if (bVar5) {
      *(long *)pPVar2 = *(long *)pPVar2 - (lVar3 - lVar9);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  this_00 = *(MemoryAllocator **)(*(long *)(this + 0x40) + 0x820);
  this_01 = *(Logger **)(*(long *)this_00 + 0x9558);
  uVar6 = Logger::is_logging(this_01);
  if ((uVar6 & 1) != 0) {
    Logger::DeleteEvent(this_01,"MemoryChunk",param_1);
  }
  MemoryAllocator::UnregisterMemory(this_00,(MemoryChunk *)param_1);
  Heap::RememberUnmappedPage
            ((Heap *)(*(long *)this_00 + 0x8850),(ulong)param_1,
             (bool)((byte)(*(ulong *)(param_1 + 8) >> 6) & 1));
  *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) | 0x2000;
  MemoryAllocator::Unmapper::AddMemoryChunkSafe((Unmapper *)(this_00 + 0x88),(MemoryChunk *)param_1)
  ;
  return;
}

