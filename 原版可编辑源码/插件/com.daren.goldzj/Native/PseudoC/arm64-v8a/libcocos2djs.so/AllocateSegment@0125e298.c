
/* v8::internal::AccountingAllocator::AllocateSegment(unsigned long) */

void __thiscall
v8::internal::AccountingAllocator::AllocateSegment(AccountingAllocator *this,ulong param_1)

{
  AccountingAllocator *pAVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar5 = (undefined8 *)AllocWithRetry(param_1);
  if (puVar5 != (undefined8 *)0x0) {
    pAVar1 = this + 8;
    do {
      uVar2 = *(ulong *)pAVar1 + param_1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pAVar1,0x10);
      if (bVar4) {
        *(ulong *)pAVar1 = uVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (*(ulong *)(this + 0x10) < uVar2) {
      pAVar1 = this + 0x10;
      uVar6 = *(ulong *)(this + 0x10);
      do {
        uVar7 = *(ulong *)pAVar1;
        if (uVar7 == uVar6) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pAVar1,0x10);
          if (bVar4) {
            *(ulong *)pAVar1 = uVar2;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        uVar6 = uVar7;
      } while (uVar7 < uVar2);
    }
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = param_1;
  }
  return;
}

