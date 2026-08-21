
/* WARNING: Removing unreachable block (ram,0x01015924) */
/* v8::internal::MemoryChunk::AllocateSlotSet(v8::internal::SlotSet**) */

SlotSet * __thiscall v8::internal::MemoryChunk::AllocateSlotSet(MemoryChunk *this,SlotSet **param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  Malloced *this_00;
  void *pvVar4;
  void *extraout_x1;
  ulong *puVar5;
  ulong uVar6;
  SlotSet *pSVar7;
  ulong uVar8;
  SlotSet *pSVar9;
  undefined1 auVar10 [16];
  
  uVar8 = *(long *)this + 0xfffU >> 0xc;
  uVar6 = uVar8 + 7 & 0x1ffffffffffff8;
  auVar10 = AlignedAlloc(uVar6 + uVar8 * 8 + 8,8);
  pvVar4 = auVar10._8_8_;
  puVar1 = (ulong *)(auVar10._0_8_ + uVar6);
  pSVar7 = (SlotSet *)(puVar1 + 1);
  *puVar1 = uVar8;
  puVar5 = puVar1;
  pSVar9 = pSVar7;
  for (; uVar8 != 0; uVar8 = uVar8 - 1) {
    puVar5 = (ulong *)((long)puVar5 + -1);
    *(undefined8 *)pSVar9 = 0;
    *(undefined1 *)puVar5 = 1;
    pSVar9 = pSVar9 + 8;
  }
  do {
    pSVar9 = *param_1;
    if (pSVar9 != (SlotSet *)0x0) {
      ClearExclusiveLocal();
      for (uVar8 = *(long *)this + 0xfffU >> 0xc; uVar8 != 0; uVar8 = uVar8 - 1) {
        this_00 = *(Malloced **)pSVar7;
        *(undefined8 *)pSVar7 = 0;
        if (this_00 != (Malloced *)0x0) {
          Malloced::operator_delete(this_00,pvVar4);
          pvVar4 = extraout_x1;
        }
        pSVar7 = pSVar7 + 8;
      }
      AlignedFree((void *)((long)puVar1 - (*puVar1 + 7 & 0xfffffffffffffff8)));
      return pSVar9;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = pSVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return pSVar7;
}

