
/* v8::internal::PagedSpace::SetLinearAllocationArea(unsigned long, unsigned long) */

void __thiscall
v8::internal::PagedSpace::SetLinearAllocationArea(PagedSpace *this,ulong param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  lVar3 = *(long *)(this + 0x68);
  if (lVar3 != 0) {
    uVar4 = lVar3 - 1U & 0xfffffffffffc0000;
    lVar3 = lVar3 - uVar4;
    plVar5 = (long *)(uVar4 | 0x98);
    do {
      while( true ) {
        if (lVar3 <= *plVar5) goto LAB_01016f9c;
        if (*plVar5 == *plVar5) break;
        ClearExclusiveLocal();
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
LAB_01016f9c:
  *(ulong *)(this + 0x68) = param_1;
  *(ulong *)(this + 0x70) = param_2;
  if (((param_1 != 0) && (param_1 != param_2)) &&
     (*(char *)(*(long *)(*(long *)(this + 0x40) + 0x828) + 0x5f) != '\0')) {
    Page::CreateBlackArea((Page *)(param_1 - 4 & 0xfffffffffffc0000),param_1,param_2);
    return;
  }
  return;
}

