
/* v8::internal::PagedSpace::RawSlowRefillLinearAllocationArea(int, v8::internal::AllocationOrigin)
    */

undefined8 __thiscall
v8::internal::PagedSpace::RawSlowRefillLinearAllocationArea
          (PagedSpace *this,int param_1,undefined4 param_3)

{
  Mutex *this_00;
  Sweeper SVar1;
  int iVar2;
  ulong uVar3;
  Sweeper *pSVar4;
  Page *pPVar5;
  undefined8 uVar6;
  long lVar7;
  MarkCompactCollector *this_01;
  PagedSpace *this_02;
  
  lVar7 = (long)param_1;
  uVar3 = RefillLinearAllocationAreaFromFreeList(this,lVar7);
  if ((uVar3 & 1) == 0) {
    this_01 = *(MarkCompactCollector **)(*(long *)(this + 0x40) + 0x800);
    pSVar4 = *(Sweeper **)(this_01 + 0x26f8);
    if (pSVar4[0xf9] != (Sweeper)0x0) {
      if (((FLAG_concurrent_sweeping != '\0') && (2 < *(int *)(this + 0x9c) - 2U)) &&
         (uVar3 = Sweeper::AreSweeperTasksRunning(pSVar4), (uVar3 & 1) == 0)) {
        MarkCompactCollector::EnsureSweepingCompleted(this_01);
      }
      (**(code **)(*(long *)this + 0xa8))(this);
      uVar3 = RefillLinearAllocationAreaFromFreeList(this,lVar7,param_3);
      if ((uVar3 & 1) != 0) goto LAB_0101c7dc;
      pSVar4 = *(Sweeper **)(*(long *)(*(long *)(this + 0x40) + 0x800) + 0x26f8);
      if (pSVar4[0xf9] != (Sweeper)0x0) {
        iVar2 = Sweeper::ParallelSweepSpace
                          (pSVar4,*(undefined4 *)(this + 0x48),param_1,1,
                           2 < *(int *)(this + 0x9c) - 2U);
        (**(code **)(*(long *)this + 0xa8))(this);
        if ((param_1 <= iVar2) &&
           (uVar3 = RefillLinearAllocationAreaFromFreeList(this,lVar7,param_3), (uVar3 & 1) != 0))
        goto LAB_0101c7dc;
      }
    }
    if (*(int *)(this + 0x9c) - 2U < 3) {
      this_02 = *(PagedSpace **)(*(long *)(this + 0x40) + (long)*(int *)(this + 0x48) * 8 + 0x128);
      this_00 = (Mutex *)(this_02 + 0xc0);
      base::Mutex::Lock(this_00);
      pPVar5 = (Page *)(**(code **)(**(long **)(this_02 + 0x60) + 0x28))
                                 (*(long **)(this_02 + 0x60),lVar7);
      if (pPVar5 == (Page *)0x0) {
        base::Mutex::Unlock(this_00);
      }
      else {
        RemovePage(this_02,pPVar5);
        base::Mutex::Unlock(this_00);
        AddPage(this,pPVar5);
        uVar3 = RefillLinearAllocationAreaFromFreeList(this,lVar7,param_3);
        if ((uVar3 & 1) != 0) goto LAB_0101c7dc;
      }
    }
    uVar3 = Heap::ShouldExpandOldGenerationOnSlowAllocation(*(Heap **)(this + 0x40));
    if (((uVar3 & 1) != 0) && (uVar3 = Expand(this), (uVar3 & 1) != 0)) {
LAB_0101c880:
      uVar6 = RefillLinearAllocationAreaFromFreeList(this,lVar7,param_3);
      return uVar6;
    }
    pSVar4 = *(Sweeper **)(*(MarkCompactCollector **)(*(long *)(this + 0x40) + 0x800) + 0x26f8);
    SVar1 = pSVar4[0xf9];
    if (*(int *)(this + 0x9c) - 2U < 3) {
      if (SVar1 != (Sweeper)0x0) {
        iVar2 = Sweeper::ParallelSweepSpace(pSVar4,*(undefined4 *)(this + 0x48),0,0,0);
        (**(code **)(*(long *)this + 0xa8))(this);
        if (iVar2 < param_1) {
          return 0;
        }
        goto LAB_0101c880;
      }
    }
    else if (SVar1 != (Sweeper)0x0) {
      MarkCompactCollector::EnsureSweepingCompleted
                (*(MarkCompactCollector **)(*(long *)(this + 0x40) + 0x800));
      goto LAB_0101c880;
    }
    uVar6 = 0;
  }
  else {
LAB_0101c7dc:
    uVar6 = 1;
  }
  return uVar6;
}

