
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* v8::internal::IsolateAllocator::InitReservation() */

void * __thiscall v8::internal::IsolateAllocator::InitReservation(IsolateAllocator *this)

{
  ulong uVar1;
  PageAllocator *pPVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  int iVar7;
  undefined8 local_90;
  void *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_70;
  ulong uStack_68;
  
  pPVar2 = (PageAllocator *)GetPlatformPageAllocator();
  lVar3 = (**(code **)(*(long *)pPVar2 + 0x10))();
  uVar6 = lVar3 - 1U & -lVar3;
  uVar1 = uVar6 + 0x100000000;
  uVar4 = (**(code **)(*(long *)pPVar2 + 0x28))(pPVar2);
  VirtualMemory::VirtualMemory
            ((VirtualMemory *)&local_78,pPVar2,uVar1 * 2,
             (void *)((uVar4 & 0xffffffff00000000) - uVar6),1);
  if (local_70 != 0) {
    iVar7 = 4;
    do {
      pvVar5 = (void *)((uVar6 + 0xffffffff + local_70 & 0xffffffff00000000) - uVar6);
      if ((uStack_68 <= (ulong)((long)pvVar5 - local_70)) ||
         (uStack_68 < ((long)pvVar5 - local_70) + uVar1)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","padded_reservation.InVM(address, reservation_size)");
      }
      iVar7 = iVar7 + -1;
      if (iVar7 == 0) {
        *(undefined8 *)(this + 0x18) = local_78;
        *(ulong *)(this + 0x28) = uStack_68;
        *(long *)(this + 0x20) = local_70;
        VirtualMemory::Reset((VirtualMemory *)&local_78);
LAB_0103d324:
        VirtualMemory::~VirtualMemory((VirtualMemory *)&local_78);
        return pvVar5;
      }
      VirtualMemory::Free((VirtualMemory *)&local_78);
      VirtualMemory::VirtualMemory((VirtualMemory *)&local_90,pPVar2,uVar1,pvVar5,1);
      if (local_88 == (void *)0x0) {
        VirtualMemory::~VirtualMemory((VirtualMemory *)&local_90);
        break;
      }
      if (local_88 == (void *)((uVar6 + 0xffffffff + (long)local_88 & 0xffffffff00000000) - uVar6))
      {
        *(undefined8 *)(this + 0x18) = local_90;
        *(undefined8 *)(this + 0x28) = uStack_80;
        *(void **)(this + 0x20) = local_88;
        VirtualMemory::Reset((VirtualMemory *)&local_90);
        if (*(ulong *)(this + 0x28) != uVar1) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","reservation_.size() == reservation_size");
        }
        VirtualMemory::~VirtualMemory((VirtualMemory *)&local_90);
        pvVar5 = local_88;
        goto LAB_0103d324;
      }
      VirtualMemory::~VirtualMemory((VirtualMemory *)&local_90);
      VirtualMemory::~VirtualMemory((VirtualMemory *)&local_78);
      uVar4 = (**(code **)(*(long *)pPVar2 + 0x28))(pPVar2);
      VirtualMemory::VirtualMemory
                ((VirtualMemory *)&local_78,pPVar2,uVar1 * 2,
                 (void *)((uVar4 & 0xffffffff00000000) - uVar6),1);
    } while (local_70 != 0);
  }
  VirtualMemory::~VirtualMemory((VirtualMemory *)&local_78);
                    /* WARNING: Subroutine does not return */
  V8::FatalProcessOutOfMemory((Isolate *)0x0,"Failed to reserve memory for new V8 Isolate",false);
}

