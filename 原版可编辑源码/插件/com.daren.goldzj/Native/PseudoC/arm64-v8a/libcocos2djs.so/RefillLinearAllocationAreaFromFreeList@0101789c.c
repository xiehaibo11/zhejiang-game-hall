
/* v8::internal::PagedSpace::RefillLinearAllocationAreaFromFreeList(unsigned long,
   v8::internal::AllocationOrigin) */

undefined8 __thiscall
v8::internal::PagedSpace::RefillLinearAllocationAreaFromFreeList
          (PagedSpace *this,long param_1,undefined4 param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  Heap *this_00;
  ulong uVar13;
  long local_28;
  
  FreeLinearAllocationArea(this);
  if (*(int *)(this + 0x9c) == 0) {
    this_00 = *(Heap **)(this + 0x40);
    uVar4 = Heap::ShouldOptimizeForMemoryUsage(this_00);
    Heap::StartIncrementalMarkingIfAllocationLimitIsReached(this_00,uVar4 & 1,0x40);
  }
  local_28 = 0;
  uVar6 = (**(code **)(**(long **)(this + 0x60) + 0x20))
                    (*(long **)(this + 0x60),param_1,&local_28,param_3);
  if ((int)uVar6 == 0) {
    return 0;
  }
  uVar13 = uVar6 - 1;
  uVar10 = local_28 + uVar13;
  *(long *)(this + 0xb8) = *(long *)(this + 0xb8) + local_28;
  if (*(char *)(*(long *)(this + 0x40) + 0x5e0) == '\0') {
    uVar7 = (**(code **)(*(long *)this + 0x80))(this);
    if (((uVar7 & 1) != 0) && (this[0x38] == (PagedSpace)0x0)) {
      if (*(long **)(this + 8) != *(long **)(this + 0x10)) {
        lVar8 = 0;
        plVar11 = *(long **)(this + 8);
        do {
          plVar9 = plVar11 + 1;
          lVar12 = *(long *)(*plVar11 + 0x10);
          lVar1 = lVar8;
          if (lVar12 <= lVar8) {
            lVar1 = lVar12;
          }
          bVar3 = lVar8 != 0;
          lVar8 = lVar12;
          if (bVar3) {
            lVar8 = lVar1;
          }
          plVar11 = plVar9;
        } while (*(long **)(this + 0x10) != plVar9);
        iVar5 = (**(code **)(*(long *)this + 0x68))(this,(int)lVar8 + -1);
        uVar7 = uVar13 + param_1 + (long)iVar5;
        if (uVar10 <= uVar7) {
          uVar7 = uVar10;
        }
        goto joined_r0x01017abc;
      }
    }
  }
  else {
    uVar7 = uVar13 + param_1;
joined_r0x01017abc:
    if (uVar10 != uVar7) {
      if (*(int *)(this + 0x48) == 3) {
        Heap::UnprotectAndRegisterMemoryChunk
                  (*(Heap **)(this + 0x40),(MemoryChunk *)(uVar6 & 0xfffffffffffc0000));
      }
      uVar10 = uVar10 - uVar7;
      if (uVar10 != 0) {
        Heap::CreateFillerObjectAt(*(Heap **)(this + 0x40),uVar7,uVar10 & 0xffffffff,1,1);
        (**(code **)(**(long **)(this + 0x60) + 0x18))(*(long **)(this + 0x60),uVar7,uVar10,0);
        *(ulong *)(this + 0xb8) = *(long *)(this + 0xb8) - uVar10;
      }
      lVar8 = *(long *)(this + 0x68);
      goto joined_r0x010179d4;
    }
  }
  lVar8 = *(long *)(this + 0x68);
  uVar7 = uVar10;
joined_r0x010179d4:
  if (lVar8 != 0) {
    uVar10 = lVar8 - 1U & 0xfffffffffffc0000;
    lVar8 = lVar8 - uVar10;
    plVar11 = (long *)(uVar10 | 0x98);
    do {
      while( true ) {
        if (lVar8 <= *plVar11) goto LAB_01017a14;
        if (*plVar11 == *plVar11) break;
        ClearExclusiveLocal();
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
LAB_01017a14:
  *(ulong *)(this + 0x68) = uVar13;
  *(ulong *)(this + 0x70) = uVar7;
  if (((uVar13 != 0) && (uVar13 != uVar7)) &&
     (*(char *)(*(long *)(*(long *)(this + 0x40) + 0x828) + 0x5f) != '\0')) {
    Page::CreateBlackArea((Page *)(uVar6 - 5 & 0xfffffffffffc0000),uVar13,uVar7);
  }
  return 1;
}

