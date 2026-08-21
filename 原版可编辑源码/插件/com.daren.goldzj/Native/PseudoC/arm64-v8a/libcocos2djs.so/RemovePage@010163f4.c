
/* v8::internal::PagedSpace::RemovePage(v8::internal::Page*) */

void __thiscall v8::internal::PagedSpace::RemovePage(PagedSpace *this,Page *param_1)

{
  PagedSpace *pPVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0xa8) == 0) {
    if (*(Page **)(this + 0x28) == param_1) {
      *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0xe8);
    }
    if (*(Page **)(this + 0x20) == param_1) {
      *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0xe0);
    }
    lVar4 = *(long *)(param_1 + 0xe0);
    lVar6 = *(long *)(param_1 + 0xe8);
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0xe8) = lVar6;
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0xe0) = lVar4;
    }
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    if (0 < *(int *)(*(long *)(*(long *)(param_1 + 0x58) + 0x60) + 8)) {
      lVar4 = 0;
      do {
        (**(code **)(**(long **)(this + 0x60) + 0x40))
                  (*(long **)(this + 0x60),*(undefined8 *)(*(long *)(param_1 + 0xf0) + lVar4 * 8));
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(*(long *)(*(long *)(param_1 + 0x58) + 0x60) + 8));
    }
    *(long *)(this + 0xb8) = *(long *)(this + 0xb8) - *(long *)(param_1 + 0xc0);
    lVar4 = *(long *)(param_1 + 0x20);
    lVar6 = *(long *)(param_1 + 0x28);
    pPVar1 = this + 0xa8;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pPVar1,0x10);
      if (bVar3) {
        *(long *)pPVar1 = *(long *)pPVar1 - (lVar6 - lVar4);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(long *)(this + 0x50) = *(long *)(this + 0x50) - *(long *)param_1;
    lVar4 = *(long *)(param_1 + 200);
    plVar5 = *(long **)(this + 0x30);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 - lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar5 = (long *)(*(long *)(this + 0x40) + 0xa0);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 - lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar4 = *(long *)(param_1 + 0xd0);
    plVar5 = (long *)(*(long *)(this + 0x30) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 - lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar5 = (long *)(*(long *)(this + 0x40) + 0xa0);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 - lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","page->SweepingDone()");
}

