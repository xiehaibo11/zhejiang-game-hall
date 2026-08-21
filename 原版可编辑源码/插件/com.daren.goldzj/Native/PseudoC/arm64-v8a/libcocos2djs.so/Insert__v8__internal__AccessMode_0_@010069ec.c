
/* void 
   v8::internal::RememberedSetSweeping::Insert<(v8::internal::AccessMode)0>(v8::internal::MemoryChunk*,
   unsigned long) */

void v8::internal::RememberedSetSweeping::Insert<(v8::internal::AccessMode)0>
               (MemoryChunk *param_1,ulong param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  Malloced *pMVar6;
  ulong uVar7;
  void *extraout_x1;
  ulong uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  
  lVar5 = *(long *)(param_1 + 0x70);
  uVar7 = param_2;
  if (lVar5 == 0) {
    auVar10 = MemoryChunk::AllocateSweepingSlotSet(param_1);
    uVar7 = auVar10._8_8_;
    lVar5 = auVar10._0_8_;
  }
  uVar8 = param_2 - (long)param_1;
  plVar1 = (long *)(lVar5 + (uVar8 >> 9 & 0x7ffffffffffff8));
  pMVar6 = (Malloced *)*plVar1;
  if (pMVar6 == (Malloced *)0x0) {
    pMVar6 = Malloced::operator_new((Malloced *)0x80,uVar7);
    *(undefined8 *)(pMVar6 + 8) = 0;
    *(undefined8 *)pMVar6 = 0;
    *(undefined8 *)(pMVar6 + 0x18) = 0;
    *(undefined8 *)(pMVar6 + 0x10) = 0;
    *(undefined8 *)(pMVar6 + 0x28) = 0;
    *(undefined8 *)(pMVar6 + 0x20) = 0;
    *(undefined8 *)(pMVar6 + 0x38) = 0;
    *(undefined8 *)(pMVar6 + 0x30) = 0;
    *(undefined8 *)(pMVar6 + 0x48) = 0;
    *(undefined8 *)(pMVar6 + 0x40) = 0;
    *(undefined8 *)(pMVar6 + 0x58) = 0;
    *(undefined8 *)(pMVar6 + 0x50) = 0;
    *(undefined8 *)(pMVar6 + 0x68) = 0;
    *(undefined8 *)(pMVar6 + 0x60) = 0;
    *(undefined8 *)(pMVar6 + 0x78) = 0;
    *(undefined8 *)(pMVar6 + 0x70) = 0;
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        if (pMVar6 != (Malloced *)0x0) {
          Malloced::operator_delete(pMVar6,extraout_x1);
        }
        pMVar6 = (Malloced *)*plVar1;
        break;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = (long)pMVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  pMVar6 = pMVar6 + (uVar8 >> 7 & 0x1f) * 4;
  uVar9 = (uint)(1L << (uVar8 >> 2 & 0x1f));
  if ((*(uint *)pMVar6 & uVar9) == 0) {
    while (uVar2 = *(uint *)pMVar6, (uVar9 & (uVar2 ^ 0xffffffff)) != 0) {
      while (*(uint *)pMVar6 == uVar2) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pMVar6,0x10);
        if (bVar4) {
          *(uint *)pMVar6 = uVar2 | uVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          return;
        }
      }
      ClearExclusiveLocal();
    }
  }
  return;
}

