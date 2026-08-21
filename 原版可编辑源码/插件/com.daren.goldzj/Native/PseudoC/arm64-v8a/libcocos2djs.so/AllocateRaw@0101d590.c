
/* v8::internal::OldLargeObjectSpace::AllocateRaw(int, v8::internal::Executability) */

ulong __thiscall
v8::internal::OldLargeObjectSpace::AllocateRaw(OldLargeObjectSpace *this,uint param_1,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  Heap *this_00;
  undefined8 *puVar14;
  ulong local_38;
  
  uVar12 = (ulong)(int)param_1;
  uVar9 = Heap::CanExpandOldGeneration(*(Heap **)(this + 0x40),uVar12);
  if ((((uVar9 & 1) == 0) ||
      (uVar9 = Heap::ShouldExpandOldGenerationOnSlowAllocation(*(Heap **)(this + 0x40)),
      (uVar9 & 1) == 0)) ||
     (puVar10 = (ulong *)MemoryAllocator::AllocateChunk
                                   (*(MemoryAllocator **)(*(long *)(this + 0x40) + 0x820),uVar12,
                                    uVar12,param_3,this), puVar10 == (ulong *)0x0)) {
    uVar9 = (long)*(int *)(this + 0x48) << 1;
  }
  else {
    if ((param_3 != 0) && (0x20000000 < *puVar10)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Code page is too large.");
    }
    puVar10[0x1c] = 0;
    puVar10[0x1d] = 0;
    puVar10[1] = puVar10[1] | 0x20;
    (**(code **)(*(long *)this + 0x88))(this,puVar10,uVar12);
    Heap::CreateFillerObjectAt(*(Heap **)(this + 0x40),puVar10[4],param_1,1,1);
    puVar13 = (uint *)puVar10[4];
    uVar9 = puVar10[1] | 0x40006;
    if (*(int *)(*(long *)(*(long *)(this + 0x40) + 0x828) + 0x58) < 2) {
      uVar9 = puVar10[1] & 0xfffffffffffbfff9 | 4;
    }
    puVar10[1] = uVar9;
    this_00 = *(Heap **)(this + 0x40);
    uVar9 = (long)puVar13 + 1;
    uVar7 = Heap::ShouldOptimizeForMemoryUsage(this_00);
    Heap::StartIncrementalMarkingIfAllocationLimitIsReached(this_00,uVar7 & 1,0x40);
    if (*(char *)(*(long *)(*(long *)(this + 0x40) + 0x828) + 0x5f) != '\0') {
      uVar12 = uVar9 & 0xfffffffffffc0000;
      puVar1 = (uint *)(*(long *)(uVar12 + 0x10) + (uVar9 - uVar12 >> 7 & 0x1ffffff) * 4);
      while( true ) {
        uVar7 = *puVar1;
        uVar11 = (uint)(1L << (uVar9 - uVar12 >> 2 & 0x1f));
        if ((uVar11 & (uVar7 ^ 0xffffffff)) == 0) break;
        while (*puVar1 == uVar7) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar7 | uVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            puVar1 = (uint *)(*(long *)(uVar12 + 0x10) +
                             ((long)puVar13 - uVar12 >> 7 & 0x1ffffff) * 4);
            uVar7 = 1 << (ulong)((uint)((long)puVar13 - uVar12 >> 2) & 0x1f);
            local_38 = uVar9;
            if ((*puVar1 & uVar7) == 0) goto LAB_0101d7d0;
            uVar7 = uVar7 << 1;
            bVar6 = uVar7 == 0;
            puVar2 = puVar1;
            if (bVar6) {
              uVar7 = 1;
              puVar2 = puVar1 + 1;
            }
            goto LAB_0101d77c;
          }
        }
        ClearExclusiveLocal();
      }
    }
LAB_0101d7d0:
    DataMemoryBarrier(2,3);
    Heap::NotifyOldGenerationExpansion(*(Heap **)(this + 0x40));
    if ((this[0x38] == (OldLargeObjectSpace)0x0) && (*(long *)(this + 8) != *(long *)(this + 0x10)))
    {
      *(undefined1 *)(*(long *)(this + 0x40) + 0x1a0) = 1;
      Heap::CreateFillerObjectAt(*(Heap **)(this + 0x40),puVar13,param_1,1,1);
      puVar3 = *(undefined8 **)(this + 0x10);
      for (puVar14 = *(undefined8 **)(this + 8); puVar14 != puVar3; puVar14 = puVar14 + 1) {
        AllocationObserver::AllocationStep((int)*puVar14,(ulong)param_1,(ulong)puVar13);
      }
      *(undefined1 *)(*(long *)(this + 0x40) + 0x1a0) = 0;
    }
    if ((uVar9 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!object.IsSmi()");
    }
  }
  return uVar9;
LAB_0101d77c:
  uVar11 = puVar1[bVar6];
  if ((uVar7 & (uVar11 ^ 0xffffffff)) == 0) goto LAB_0101d7d0;
  while (*puVar2 == uVar11) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = uVar11 | uVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
      iVar8 = HeapObject::SizeFromMap
                        ((HeapObject *)&local_38,uVar9 & 0xffffffff00000000 | (ulong)*puVar13);
      *(long *)(uVar12 + 0x68) = *(long *)(uVar12 + 0x68) + (long)iVar8;
      goto LAB_0101d7d0;
    }
  }
  ClearExclusiveLocal();
  goto LAB_0101d77c;
}

