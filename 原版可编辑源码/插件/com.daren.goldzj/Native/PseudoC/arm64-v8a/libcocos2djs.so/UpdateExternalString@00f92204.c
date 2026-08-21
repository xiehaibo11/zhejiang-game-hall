
/* v8::internal::Heap::UpdateExternalString(v8::internal::String, unsigned long, unsigned long) */

void __thiscall
v8::internal::Heap::UpdateExternalString
          (undefined8 param_1,ulong param_2,ulong param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = param_3 - param_4;
  param_2 = param_2 & 0xfffffffffffc0000;
  if (param_3 < param_4 || lVar4 == 0) {
    lVar4 = param_4 - param_3;
    plVar1 = (long *)(param_2 + 0xd0);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar5 = *(long *)(param_2 + 0x58);
    plVar1 = (long *)(*(long *)(lVar5 + 0x30) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = (long *)(*(long *)(lVar5 + 0x40) + 0xa0);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    plVar1 = (long *)(param_2 + 0xd0);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 - lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar5 = *(long *)(param_2 + 0x58);
    plVar1 = (long *)(*(long *)(lVar5 + 0x30) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 - lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = (long *)(*(long *)(lVar5 + 0x40) + 0xa0);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 - lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

