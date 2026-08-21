
/* v8::internal::PagedSpace::DecreaseLimit(unsigned long) */

void __thiscall v8::internal::PagedSpace::DecreaseLimit(PagedSpace *this,ulong param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(this + 0x70);
  if (uVar7 != param_1) {
    lVar3 = *(long *)(this + 0x68);
    if (lVar3 != 0) {
      uVar6 = lVar3 - 1U & 0xfffffffffffc0000;
      lVar4 = lVar3 - uVar6;
      plVar5 = (long *)(uVar6 | 0x98);
      do {
        while( true ) {
          if (lVar4 <= *plVar5) goto LAB_01017034;
          if (*plVar5 == *plVar5) break;
          ClearExclusiveLocal();
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar4;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
LAB_01017034:
    uVar6 = uVar7 - param_1;
    *(long *)(this + 0x68) = lVar3;
    *(ulong *)(this + 0x70) = param_1;
    if (uVar6 != 0) {
      Heap::CreateFillerObjectAt(*(Heap **)(this + 0x40),param_1,uVar6 & 0xffffffff,1,1);
      (**(code **)(**(long **)(this + 0x60) + 0x18))(*(long **)(this + 0x60),param_1,uVar6,0);
      *(ulong *)(this + 0xb8) = *(long *)(this + 0xb8) - uVar6;
    }
    if (*(char *)(*(long *)(*(long *)(this + 0x40) + 0x828) + 0x5f) != '\0') {
      Page::DestroyBlackArea((Page *)(param_1 - 4 & 0xfffffffffffc0000),param_1,uVar7);
      return;
    }
  }
  return;
}

