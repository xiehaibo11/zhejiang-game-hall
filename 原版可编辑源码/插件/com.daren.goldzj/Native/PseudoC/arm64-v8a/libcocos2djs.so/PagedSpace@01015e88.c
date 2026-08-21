
/* v8::internal::PagedSpace::PagedSpace(v8::internal::Heap*, v8::internal::AllocationSpace,
   v8::internal::Executability, v8::internal::FreeList*, v8::internal::LocalSpaceKind) */

void __thiscall
v8::internal::PagedSpace::PagedSpace
          (PagedSpace *this,undefined8 param_1,int param_3,undefined4 param_4,undefined8 param_5,
          undefined4 param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  this[0x38] = (PagedSpace)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = param_1;
  *(int *)(this + 0x48) = param_3;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR__Space_01ca9d00;
  *(undefined8 *)(this + 0x60) = param_5;
  puVar1 = operator_new__(0x10);
  *(undefined8 **)(this + 0x30) = puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined ***)this = &PTR__PagedSpace_01ca9518;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x98) = param_4;
  *(undefined4 *)(this + 0x9c) = param_6;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  base::Mutex::Mutex((Mutex *)(this + 0xc0));
  if (param_3 != 3) {
    lVar3 = 0x3fee8;
    goto LAB_01015fa0;
  }
  lVar3 = (long)FLAG_v8_os_page_size;
  if (FLAG_v8_os_page_size == 0) {
    lVar4 = CommitPageSize();
    lVar3 = (long)FLAG_v8_os_page_size;
    lVar4 = 0x4000000000000 - (lVar4 << 0x20) >> 0x20;
    if (FLAG_v8_os_page_size != 0) goto LAB_01015f90;
    lVar3 = CommitPageSize();
    uVar5 = lVar3 + 0x117U & -lVar3;
    if (FLAG_v8_os_page_size == 0) {
      uVar2 = CommitPageSize();
    }
    else {
      uVar2 = (long)FLAG_v8_os_page_size << 10;
    }
  }
  else {
    lVar4 = 0x4000000000000 - (lVar3 << 0x2a) >> 0x20;
LAB_01015f90:
    uVar2 = lVar3 * 0x400;
    uVar5 = uVar2 & lVar3 * -0x400;
  }
  lVar3 = (lVar4 - uVar5) - uVar2;
LAB_01015fa0:
  *(long *)(this + 0xa0) = lVar3;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  return;
}

