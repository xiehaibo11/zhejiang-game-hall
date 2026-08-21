
/* v8::internal::SemiSpace::RemovePage(v8::internal::Page*) */

void __thiscall v8::internal::SemiSpace::RemovePage(SemiSpace *this,Page *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if ((*(Page **)(this + 0x90) == param_1) && (*(long *)(param_1 + 0xe8) != 0)) {
    *(long *)(this + 0x90) = *(long *)(param_1 + 0xe8);
  }
  if (*(Page **)(this + 0x28) == param_1) {
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0xe8);
  }
  if (*(Page **)(this + 0x20) == param_1) {
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0xe0);
  }
  lVar3 = *(long *)(param_1 + 0xe0);
  lVar5 = *(long *)(param_1 + 0xe8);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0xe8) = lVar5;
  }
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0xe0) = lVar3;
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  lVar3 = *(long *)(param_1 + 200);
  plVar4 = *(long **)(this + 0x30);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 - lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar4 = (long *)(*(long *)(this + 0x40) + 0xa0);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 - lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar3 = *(long *)(param_1 + 0xd0);
  plVar4 = (long *)(*(long *)(this + 0x30) + 8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 - lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar4 = (long *)(*(long *)(this + 0x40) + 0xa0);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 - lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return;
}

