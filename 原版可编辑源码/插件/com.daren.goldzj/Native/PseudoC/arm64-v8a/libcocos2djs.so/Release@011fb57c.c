
/* v8::internal::VirtualMemory::Release(unsigned long) */

long __thiscall v8::internal::VirtualMemory::Release(VirtualMemory *this,ulong param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = param_1 - *(long *)(this + 8);
  lVar1 = *(ulong *)(this + 0x10) - uVar2;
  if (*(ulong *)(this + 0x10) < uVar2 || lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","InVM(free_start, free_size)");
  }
  *(ulong *)(this + 0x10) = uVar2;
  uVar2 = (**(code **)(**(long **)this + 0x40))(*(long **)this,*(long *)(this + 8));
  if ((uVar2 & 1) != 0) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "ReleasePages(page_allocator_, reinterpret_cast<void*>(region_.begin()), old_size, region_.size())"
          );
}

