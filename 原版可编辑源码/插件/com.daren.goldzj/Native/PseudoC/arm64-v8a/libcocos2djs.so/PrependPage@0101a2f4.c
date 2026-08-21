
/* v8::internal::SemiSpace::PrependPage(v8::internal::Page*) */

void __thiscall v8::internal::SemiSpace::PrependPage(SemiSpace *this,Page *param_1)

{
  char cVar1;
  bool bVar2;
  SemiSpace *pSVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)(this + 0x90) + 8);
  *(SemiSpace **)(param_1 + 0x58) = this;
  lVar4 = *(long *)(this + 0x20);
  if (lVar4 == 0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(Page **)(this + 0x20) = param_1;
    pSVar3 = this + 0x28;
  }
  else {
    lVar6 = *(long *)(lVar4 + 0xe8);
    *(long *)(param_1 + 0xe0) = lVar4;
    *(long *)(param_1 + 0xe8) = lVar6;
    *(Page **)(lVar4 + 0xe8) = param_1;
    pSVar3 = this + 0x20;
    if (lVar6 != 0) {
      pSVar3 = (SemiSpace *)(lVar6 + 0xe0);
    }
  }
  *(Page **)pSVar3 = param_1;
  *(int *)(this + 0x98) = *(int *)(this + 0x98) + 1;
  lVar4 = *(long *)(param_1 + 200);
  plVar5 = *(long **)(this + 0x30);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar5 = (long *)(*(long *)(this + 0x40) + 0xa0);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar4 = *(long *)(param_1 + 0xd0);
  plVar5 = (long *)(*(long *)(this + 0x30) + 8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar5 = (long *)(*(long *)(this + 0x40) + 0xa0);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return;
}

