
/* v8::internal::LocalAllocator::AllocateInLAB(int, v8::internal::AllocationAlignment) */

ulong __thiscall
v8::internal::LocalAllocator::AllocateInLAB(LocalAllocator *this,int param_1,undefined4 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 0x1f0);
  if (lVar3 == 0) {
    uVar2 = NewLocalAllocationBuffer(this);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(this + 0x1f0);
      goto LAB_00fe5a44;
    }
LAB_00fe5abc:
    uVar2 = 4;
  }
  else {
LAB_00fe5a44:
    iVar1 = Heap::GetFillToAlign(lVar3,param_3);
    uVar2 = lVar3 + param_1 + (long)iVar1;
    if (*(ulong *)(this + 0x1f8) < uVar2) {
      uVar2 = NewLocalAllocationBuffer(this);
      if ((uVar2 & 1) == 0) goto LAB_00fe5abc;
      lVar3 = *(long *)(this + 0x1f0);
      iVar1 = Heap::GetFillToAlign(lVar3,param_3);
      uVar2 = lVar3 + param_1 + (long)iVar1;
      if (*(ulong *)(this + 0x1f8) < uVar2) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!allocation.IsRetry()");
      }
    }
    *(ulong *)(this + 0x1f0) = uVar2;
    if (iVar1 < 1) {
      uVar2 = lVar3 + 1;
    }
    else {
      uVar2 = Heap::PrecedeWithFiller(*(Heap **)(this + 0x1e8),lVar3 + 1,iVar1);
    }
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!object.IsSmi()");
    }
  }
  return uVar2;
}

