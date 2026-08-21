
/* v8::internal::FreeList::CreateFreeList() */

FreeListLegacy * v8::internal::FreeList::CreateFreeList(void)

{
  FreeListMany *this;
  undefined *puVar1;
  
  switch(FLAG_gc_freelist_strategy) {
  case 0:
    this = operator_new(0x30);
    FreeListLegacy::FreeListLegacy((FreeListLegacy *)this);
    break;
  case 1:
    this = operator_new(0x30);
    FreeListFastAlloc::FreeListFastAlloc((FreeListFastAlloc *)this);
    break;
  case 2:
    this = operator_new(0x30);
    FreeListMany::FreeListMany(this);
    break;
  case 3:
    this = operator_new(0x98);
    FreeListMany::FreeListMany(this);
    *(undefined8 *)(this + 0x30) = 0x1800000018;
    *(undefined8 *)(this + 0x38) = 0x1800000018;
    *(undefined8 *)(this + 0x40) = 0x1800000018;
    *(undefined8 *)(this + 0x48) = 0x1800000018;
    *(undefined ***)this = &PTR__FreeListMany_01ca97d8;
    *(undefined8 *)(this + 0x50) = 0x1800000018;
    *(undefined8 *)(this + 0x58) = 0x1800000018;
    *(undefined8 *)(this + 0x60) = 0x1800000018;
    *(undefined8 *)(this + 0x68) = 0x1800000018;
    *(undefined8 *)(this + 0x70) = 0x1800000018;
    *(undefined8 *)(this + 0x78) = 0x1800000018;
    *(undefined8 *)(this + 0x80) = 0x1800000018;
    *(undefined8 *)(this + 0x88) = 0x1800000018;
    *(undefined4 *)(this + 0x90) = 0x18;
    break;
  case 4:
    this = operator_new(0x98);
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x90) = 0;
    FreeListMany::FreeListMany(this);
    puVar1 = &FreeListManyCachedFastPath::vtable;
    goto LAB_0101a91c;
  case 5:
    this = operator_new(0x98);
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x90) = 0;
    FreeListMany::FreeListMany(this);
    puVar1 = &FreeListManyCachedOrigin::vtable;
LAB_0101a91c:
    *(undefined4 *)(this + 0x90) = 0x18;
    *(undefined8 *)(this + 0x38) = 0x1800000018;
    *(undefined8 *)(this + 0x30) = 0x1800000018;
    *(undefined8 *)(this + 0x48) = 0x1800000018;
    *(undefined8 *)(this + 0x40) = 0x1800000018;
    *(undefined8 *)(this + 0x58) = 0x1800000018;
    *(undefined8 *)(this + 0x50) = 0x1800000018;
    *(undefined8 *)(this + 0x68) = 0x1800000018;
    *(undefined8 *)(this + 0x60) = 0x1800000018;
    *(undefined8 *)(this + 0x78) = 0x1800000018;
    *(undefined8 *)(this + 0x70) = 0x1800000018;
    *(undefined8 *)(this + 0x88) = 0x1800000018;
    *(undefined8 *)(this + 0x80) = 0x1800000018;
    *(undefined **)this = puVar1 + 0x10;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Invalid FreeList strategy");
  }
  return (FreeListLegacy *)this;
}

