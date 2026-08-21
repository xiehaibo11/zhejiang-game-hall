
/* v8::internal::VirtualMemory::~VirtualMemory() */

void __thiscall v8::internal::VirtualMemory::~VirtualMemory(VirtualMemory *this)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar3 = *(long *)(this + 8);
  if (lVar3 != 0) {
    plVar4 = *(long **)this;
    lVar5 = *(long *)(this + 0x10);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    lVar1 = (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,lVar3,(lVar5 + lVar1) - 1U & -lVar1);
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "FreePages(page_allocator, reinterpret_cast<void*>(region.begin()), RoundUp(region.size(), page_allocator->AllocatePageSize()))"
              );
    }
  }
  return;
}

