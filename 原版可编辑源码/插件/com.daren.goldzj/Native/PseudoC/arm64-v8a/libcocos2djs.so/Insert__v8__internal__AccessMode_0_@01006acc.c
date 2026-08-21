
/* void 
   v8::internal::RememberedSet<(v8::internal::RememberedSetType)0>::Insert<(v8::internal::AccessMode)0>(v8::internal::MemoryChunk*,
   unsigned long) */

void v8::internal::RememberedSet<(v8::internal::RememberedSetType)0>::
     Insert<(v8::internal::AccessMode)0>(MemoryChunk *param_1,ulong param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  SlotSet *pSVar4;
  Malloced *pMVar5;
  ulong extraout_x1;
  ulong uVar6;
  void *extraout_x1_00;
  ulong uVar7;
  uint uVar8;
  
  pSVar4 = *(SlotSet **)(param_1 + 0x30);
  uVar6 = param_2;
  if (pSVar4 == (SlotSet *)0x0) {
    pSVar4 = MemoryChunk::AllocateSlotSet<(v8::internal::RememberedSetType)0>(param_1);
    uVar6 = extraout_x1;
  }
  uVar7 = param_2 - (long)param_1;
  pSVar4 = pSVar4 + (uVar7 >> 9 & 0x7ffffffffffff8);
  pMVar5 = *(Malloced **)pSVar4;
  if (pMVar5 == (Malloced *)0x0) {
    pMVar5 = Malloced::operator_new((Malloced *)0x80,uVar6);
    *(undefined8 *)(pMVar5 + 8) = 0;
    *(undefined8 *)pMVar5 = 0;
    *(undefined8 *)(pMVar5 + 0x18) = 0;
    *(undefined8 *)(pMVar5 + 0x10) = 0;
    *(undefined8 *)(pMVar5 + 0x28) = 0;
    *(undefined8 *)(pMVar5 + 0x20) = 0;
    *(undefined8 *)(pMVar5 + 0x38) = 0;
    *(undefined8 *)(pMVar5 + 0x30) = 0;
    *(undefined8 *)(pMVar5 + 0x48) = 0;
    *(undefined8 *)(pMVar5 + 0x40) = 0;
    *(undefined8 *)(pMVar5 + 0x58) = 0;
    *(undefined8 *)(pMVar5 + 0x50) = 0;
    *(undefined8 *)(pMVar5 + 0x68) = 0;
    *(undefined8 *)(pMVar5 + 0x60) = 0;
    *(undefined8 *)(pMVar5 + 0x78) = 0;
    *(undefined8 *)(pMVar5 + 0x70) = 0;
    do {
      if (*(long *)pSVar4 != 0) {
        ClearExclusiveLocal();
        if (pMVar5 != (Malloced *)0x0) {
          Malloced::operator_delete(pMVar5,extraout_x1_00);
        }
        pMVar5 = *(Malloced **)pSVar4;
        break;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pSVar4,0x10);
      if (bVar3) {
        *(Malloced **)pSVar4 = pMVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pMVar5 = pMVar5 + (uVar7 >> 7 & 0x1f) * 4;
  uVar8 = (uint)(1L << (uVar7 >> 2 & 0x1f));
  if ((*(uint *)pMVar5 & uVar8) == 0) {
    while (uVar1 = *(uint *)pMVar5, (uVar8 & (uVar1 ^ 0xffffffff)) != 0) {
      while (*(uint *)pMVar5 == uVar1) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pMVar5,0x10);
        if (bVar3) {
          *(uint *)pMVar5 = uVar1 | uVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          return;
        }
      }
      ClearExclusiveLocal();
    }
  }
  return;
}

