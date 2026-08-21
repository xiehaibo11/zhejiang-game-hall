
/* v8::internal::NewSpace::UpdateLinearAllocationArea() */

void __thiscall v8::internal::NewSpace::UpdateLinearAllocationArea(NewSpace *this)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  lVar4 = *(long *)(this + 0x160);
  lVar6 = *(long *)(this + 0x68);
  uVar3 = *(undefined8 *)(lVar4 + 0x20);
  if (lVar6 != 0) {
    uVar8 = lVar6 - 1U & 0xfffffffffffc0000;
    lVar6 = lVar6 - uVar8;
    plVar7 = (long *)(uVar8 | 0x98);
    do {
      while( true ) {
        if (lVar6 <= *plVar7) goto LAB_01019258;
        if (*plVar7 == *plVar7) break;
        ClearExclusiveLocal();
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_01019258:
    lVar4 = *(long *)(this + 0x160);
  }
  uVar5 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(this + 0x68) = uVar3;
  *(undefined8 *)(this + 0x70) = uVar5;
  *(undefined8 *)(this + 200) = uVar5;
  *(undefined8 *)(this + 0xc0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x01019278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x30))();
  return;
}

