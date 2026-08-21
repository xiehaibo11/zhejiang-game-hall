
/* v8::internal::IsolateAllocator::CommitPagesForIsolate(unsigned long) */

void __thiscall
v8::internal::IsolateAllocator::CommitPagesForIsolate(IsolateAllocator *this,ulong param_1)

{
  ulong uVar1;
  PageAllocator *pPVar2;
  long lVar3;
  BoundedPageAllocator *this_00;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  pPVar2 = (PageAllocator *)GetPlatformPageAllocator();
  lVar3 = (**(code **)(*(long *)pPVar2 + 0x10))();
  uVar5 = lVar3 - 1U & -lVar3;
  uVar1 = uVar5 + param_1;
  if ((int)uVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsAligned(isolate_root, kPtrComprIsolateRootAlignment)");
  }
  if ((*(ulong *)(this + 0x28) <= param_1 - *(long *)(this + 0x20)) ||
     (*(ulong *)(this + 0x28) < uVar5 + (param_1 - *(long *)(this + 0x20)) + 0x100000000)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "reservation_.InVM( heap_reservation_address, kPtrComprHeapReservationSize + kIsolateRootBiasPageSize)"
            );
  }
  lVar3 = (**(code **)(*(long *)pPVar2 + 0x10))(pPVar2);
  uVar5 = lVar3 + 0x3ffffU & -lVar3;
  this_00 = operator_new(0xb0);
  base::BoundedPageAllocator::BoundedPageAllocator(this_00,pPVar2,uVar1,0x100000000,uVar5);
  plVar4 = *(long **)(this + 0x10);
  *(BoundedPageAllocator **)(this + 0x10) = this_00;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
    this_00 = *(BoundedPageAllocator **)(this + 0x10);
  }
  *(BoundedPageAllocator **)(this + 8) = this_00;
  uVar5 = base::BoundedPageAllocator::AllocatePagesAt
                    (this_00,uVar1,(uVar5 + uVar1 + 0xc7f7 & -uVar5) - uVar1,0);
  if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "page_allocator_instance_->AllocatePagesAt( reserved_region_address, reserved_region_size, PageAllocator::Permission::kNoAccess)"
            );
  }
  lVar3 = (**(code **)(*(long *)pPVar2 + 0x18))(pPVar2);
  uVar8 = uVar1 & -lVar3;
  uVar9 = (lVar3 + uVar1 + 0xc7f7 & -lVar3) - uVar8;
  uVar5 = VirtualMemory::SetPermissions(this + 0x18,uVar8,uVar9,2);
  if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "reservation_.SetPermissions(committed_region_address, committed_region_size, PageAllocator::kReadWrite)"
            );
  }
  if ((FLAG_verify_heap != '\0') && (uVar5 = uVar9 >> 3, uVar5 != 0)) {
    if (uVar9 < 0x20) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar5 & 0x1ffffffffffffffc;
      puVar7 = (undefined8 *)(uVar8 + 0x10);
      uVar9 = uVar6;
      do {
        puVar7[-1] = 0xdeadbeedbeadbeef;
        puVar7[-2] = 0xdeadbeedbeadbeef;
        puVar7[1] = 0xdeadbeedbeadbeef;
        *puVar7 = 0xdeadbeedbeadbeef;
        uVar9 = uVar9 - 4;
        puVar7 = puVar7 + 4;
      } while (uVar9 != 0);
      if (uVar5 == uVar6) goto LAB_0103d554;
    }
    lVar3 = uVar5 - uVar6;
    puVar7 = (undefined8 *)(uVar8 + uVar6 * 8);
    do {
      lVar3 = lVar3 + -1;
      *puVar7 = 0xdeadbeedbeadbeef;
      puVar7 = puVar7 + 1;
    } while (lVar3 != 0);
  }
LAB_0103d554:
  *(ulong *)this = uVar1;
  return;
}

