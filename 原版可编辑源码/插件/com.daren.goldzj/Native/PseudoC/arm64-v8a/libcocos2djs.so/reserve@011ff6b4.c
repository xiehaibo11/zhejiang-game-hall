
/* std::__ndk1::vector<v8::internal::VirtualMemory,
   std::__ndk1::allocator<v8::internal::VirtualMemory> >::reserve(unsigned long) */

void __thiscall
std::__ndk1::vector<v8::internal::VirtualMemory,std::__ndk1::allocator<v8::internal::VirtualMemory>>
::reserve(vector<v8::internal::VirtualMemory,std::__ndk1::allocator<v8::internal::VirtualMemory>>
          *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  VirtualMemory *pVVar4;
  VirtualMemory *this_00;
  long lVar5;
  undefined8 uVar6;
  
  this_00 = *(VirtualMemory **)this;
  if ((ulong)((*(long *)(this + 0x10) - (long)this_00 >> 3) * -0x5555555555555555) < param_1) {
    if (0xaaaaaaaaaaaaaaa < param_1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pVVar4 = *(VirtualMemory **)(this + 8);
    pvVar3 = operator_new(param_1 * 0x18);
    lVar1 = (long)pVVar4 - (long)this_00;
    lVar5 = (long)pvVar3 + lVar1;
    if (lVar1 != 0) {
      lVar5 = 0;
      do {
        lVar2 = lVar5 + (lVar1 >> 3) * 8;
        *(undefined8 *)((long)pvVar3 + lVar2 + -0x18) = 0;
        *(undefined8 *)((long)pvVar3 + lVar2 + -0x10) = 0;
        *(undefined8 *)((long)pvVar3 + lVar2 + -8) = 0;
        *(undefined8 *)((long)pvVar3 + lVar2 + -0x18) = *(undefined8 *)(pVVar4 + lVar5 + -0x18);
        uVar6 = *(undefined8 *)(pVVar4 + lVar5 + -0x10);
        *(undefined8 *)((long)pvVar3 + lVar2 + -8) = *(undefined8 *)(pVVar4 + lVar5 + -8);
        *(undefined8 *)((long)pvVar3 + lVar2 + -0x10) = uVar6;
        v8::internal::VirtualMemory::Reset(pVVar4 + lVar5 + -0x18);
        lVar5 = lVar5 + -0x18;
      } while ((long)this_00 - (long)pVVar4 != lVar5);
      pVVar4 = *(VirtualMemory **)this;
      this_00 = *(VirtualMemory **)(this + 8);
      lVar5 = (long)pvVar3 + lVar5 + (lVar1 >> 3) * 8;
    }
    *(long *)this = lVar5;
    *(long *)(this + 8) = (long)pvVar3 + lVar1;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + param_1 * 0x18);
    while (this_00 != pVVar4) {
      this_00 = this_00 + -0x18;
      v8::internal::VirtualMemory::~VirtualMemory(this_00);
    }
    if (pVVar4 != (VirtualMemory *)0x0) {
      operator_delete(pVVar4);
      return;
    }
  }
  return;
}

