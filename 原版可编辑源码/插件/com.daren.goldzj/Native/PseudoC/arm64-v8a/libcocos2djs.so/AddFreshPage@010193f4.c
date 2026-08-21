
/* v8::internal::NewSpace::AddFreshPage() */

undefined8 __thiscall v8::internal::NewSpace::AddFreshPage(NewSpace *this)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  uVar9 = *(ulong *)(this + 0x68);
  if ((*(char *)(*(long *)(this + 0x40) + 0x1a0) == '\0') &&
     (uVar10 = *(ulong *)(this + 0x78), uVar10 != 0)) {
    if (uVar9 < uVar10) {
      *(ulong *)(this + 0x78) = uVar9;
      uVar10 = uVar9;
    }
    if ((this[0x38] == (NewSpace)0x0) && (*(long *)(this + 8) != *(long *)(this + 0x10))) {
      *(undefined1 *)(*(long *)(this + 0x40) + 0x1a0) = 1;
      Heap::CreateFillerObjectAt(*(Heap **)(this + 0x40),0,0,1,1);
      puVar1 = *(undefined8 **)(this + 0x10);
      if (*(undefined8 **)(this + 8) != puVar1) {
        puVar11 = *(undefined8 **)(this + 8);
        do {
          puVar12 = puVar11 + 1;
          AllocationObserver::AllocationStep
                    ((int)*puVar11,(ulong)(uint)((int)uVar9 - (int)uVar10),0);
          puVar11 = puVar12;
        } while (puVar1 != puVar12);
      }
      *(undefined1 *)(*(long *)(this + 0x40) + 0x1a0) = 0;
    }
    *(ulong *)(this + 0x78) = uVar9;
  }
  uVar4 = 0;
  if ((*(long *)(*(long *)(this + 0x160) + 0xe0) != 0) &&
     (*(int *)(this + 0x168) + 1 != (int)(*(ulong *)(this + 0x138) >> 0x12))) {
    *(long *)(this + 0x160) = *(long *)(*(long *)(this + 0x160) + 0xe0);
    *(int *)(this + 0x168) = *(int *)(this + 0x168) + 1;
    Heap::CreateFillerObjectAt
              (*(Heap **)(this + 0x40),uVar9,
               *(int *)((uVar9 - 4 & 0xfffffffffffc0000) + 0x28) - (int)uVar9,1,1);
    lVar5 = *(long *)(this + 0x160);
    lVar7 = *(long *)(this + 0x68);
    uVar4 = *(undefined8 *)(lVar5 + 0x20);
    if (lVar7 != 0) {
      uVar9 = lVar7 - 1U & 0xfffffffffffc0000;
      lVar7 = lVar7 - uVar9;
      plVar8 = (long *)(uVar9 | 0x98);
      do {
        while( true ) {
          if (lVar7 <= *plVar8) goto LAB_01019540;
          if (*plVar8 == *plVar8) break;
          ClearExclusiveLocal();
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_01019540:
      lVar5 = *(long *)(this + 0x160);
    }
    uVar6 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(this + 0x68) = uVar4;
    *(undefined8 *)(this + 0x70) = uVar6;
    *(undefined8 *)(this + 200) = uVar6;
    *(undefined8 *)(this + 0xc0) = uVar4;
    (**(code **)(*(long *)this + 0x30))(this);
    uVar4 = 1;
  }
  return uVar4;
}

