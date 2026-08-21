
/* v8::internal::VirtualMemory::Free() */

void __thiscall v8::internal::VirtualMemory::Free(VirtualMemory *this)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  plVar1 = *(long **)this;
  uVar2 = *(undefined8 *)(this + 8);
  lVar5 = *(long *)(this + 0x10);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  lVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
  uVar4 = (**(code **)(*plVar1 + 0x38))(plVar1,uVar2,(lVar5 + lVar3) - 1U & -lVar3);
  if ((uVar4 & 1) != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "FreePages(page_allocator, reinterpret_cast<void*>(region.begin()), RoundUp(region.size(), page_allocator->AllocatePageSize()))"
          );
}

