
/* v8::internal::PagedSpace::AddPage(v8::internal::Page*) */

long __thiscall v8::internal::PagedSpace::AddPage(PagedSpace *this,Page *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  PagedSpace *pPVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)(param_1 + 0xa8) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","page->SweepingDone()");
  }
  *(PagedSpace **)(param_1 + 0x58) = this;
  pPVar4 = this + 0x28;
  lVar5 = *(long *)pPVar4;
  if (lVar5 == 0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(Page **)(this + 0x20) = param_1;
  }
  else {
    lVar7 = *(long *)(lVar5 + 0xe0);
    *(long *)(param_1 + 0xe0) = lVar7;
    *(long *)(param_1 + 0xe8) = lVar5;
    *(Page **)(lVar5 + 0xe0) = param_1;
    if (lVar7 != 0) {
      pPVar4 = (PagedSpace *)(lVar7 + 0xe8);
    }
  }
  *(Page **)pPVar4 = param_1;
  uVar1 = *(long *)(this + 0x50) + *(long *)param_1;
  *(ulong *)(this + 0x50) = uVar1;
  if (*(ulong *)(this + 0x58) < uVar1) {
    *(ulong *)(this + 0x58) = uVar1;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  lVar7 = *(long *)(param_1 + 0x28);
  pPVar4 = this + 0xa8;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pPVar4,0x10);
    if (bVar3) {
      *(long *)pPVar4 = *(long *)pPVar4 + (lVar7 - lVar5);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (*(ulong *)(this + 0xb0) < *(ulong *)(this + 0xa8)) {
    *(undefined8 *)(this + 0xb0) = *(undefined8 *)(this + 0xa8);
  }
  *(long *)(this + 0xb8) = *(long *)(this + 0xb8) + *(long *)(param_1 + 0xc0);
  lVar5 = *(long *)(param_1 + 200);
  plVar6 = *(long **)(this + 0x30);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar6 = (long *)(*(long *)(this + 0x40) + 0xa0);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar5 = *(long *)(param_1 + 0xd0);
  plVar6 = (long *)(*(long *)(this + 0x30) + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar6 = (long *)(*(long *)(this + 0x40) + 0xa0);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x58) + 0x60) + 8) < 1) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    lVar7 = 0;
    do {
      lVar5 = lVar5 + (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 0xf0) + lVar7 * 8) + 4);
      (**(code **)(**(long **)(this + 0x60) + 0x38))();
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(*(long *)(*(long *)(param_1 + 0x58) + 0x60) + 8));
  }
  return lVar5;
}

