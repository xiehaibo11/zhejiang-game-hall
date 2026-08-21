
/* void std::__ndk1::vector<v8::internal::VirtualMemory,
   std::__ndk1::allocator<v8::internal::VirtualMemory>
   >::__emplace_back_slow_path<v8::internal::VirtualMemory>(v8::internal::VirtualMemory&&) */

void __thiscall
std::__ndk1::vector<v8::internal::VirtualMemory,std::__ndk1::allocator<v8::internal::VirtualMemory>>
::__emplace_back_slow_path<v8::internal::VirtualMemory>
          (vector<v8::internal::VirtualMemory,std::__ndk1::allocator<v8::internal::VirtualMemory>>
           *this,VirtualMemory *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  VirtualMemory *pVVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  VirtualMemory *this_00;
  VirtualMemory *pVVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  lVar7 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar7 * -0x5555555555555555 + 1;
  if (uVar1 < 0xaaaaaaaaaaaaaab) {
    lVar5 = *(long *)(this + 0x10) - *(long *)this >> 3;
    uVar6 = lVar5 * 0x5555555555555556;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar1 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar1 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar1) goto LAB_01204624;
      pvVar4 = operator_new(uVar1 * 0x18);
    }
    puVar9 = (undefined8 *)((long)pvVar4 + lVar7 * 8);
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = *(undefined8 *)param_1;
    uVar10 = *(undefined8 *)(param_1 + 8);
    puVar9[2] = *(undefined8 *)(param_1 + 0x10);
    puVar9[1] = uVar10;
    v8::internal::VirtualMemory::Reset(param_1);
    this_00 = *(VirtualMemory **)this;
    pVVar3 = *(VirtualMemory **)(this + 8);
    puVar2 = puVar9 + 3;
    pVVar8 = this_00;
    if (pVVar3 != this_00) {
      lVar7 = 0;
      do {
        *(undefined8 *)((long)puVar9 + lVar7 + -0x18) = 0;
        *(undefined8 *)((long)puVar9 + lVar7 + -0x10) = 0;
        *(undefined8 *)((long)puVar9 + lVar7 + -8) = 0;
        *(undefined8 *)((long)puVar9 + lVar7 + -0x18) = *(undefined8 *)(pVVar3 + lVar7 + -0x18);
        uVar10 = *(undefined8 *)(pVVar3 + lVar7 + -0x10);
        *(undefined8 *)((long)puVar9 + lVar7 + -8) = *(undefined8 *)(pVVar3 + lVar7 + -8);
        *(undefined8 *)((long)puVar9 + lVar7 + -0x10) = uVar10;
        v8::internal::VirtualMemory::Reset(pVVar3 + lVar7 + -0x18);
        lVar7 = lVar7 + -0x18;
      } while ((long)this_00 - (long)pVVar3 != lVar7);
      this_00 = *(VirtualMemory **)(this + 8);
      puVar9 = (undefined8 *)((long)puVar9 + lVar7);
      pVVar8 = *(VirtualMemory **)this;
    }
    *(undefined8 **)this = puVar9;
    *(undefined8 **)(this + 8) = puVar2;
    *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x18);
    while (this_00 != pVVar8) {
      this_00 = this_00 + -0x18;
      v8::internal::VirtualMemory::~VirtualMemory(this_00);
    }
    if (pVVar8 != (VirtualMemory *)0x0) {
      operator_delete(pVVar8);
      return;
    }
    return;
  }
LAB_01204624:
                    /* WARNING: Subroutine does not return */
  abort();
}

