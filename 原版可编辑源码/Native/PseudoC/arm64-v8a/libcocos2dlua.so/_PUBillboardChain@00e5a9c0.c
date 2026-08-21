
/* cocos2d::PUBillboardChain::~PUBillboardChain() */

void __thiscall cocos2d::PUBillboardChain::~PUBillboardChain(PUBillboardChain *this)

{
  void *pvVar1;
  Vec4 *this_00;
  void *pvVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__PUBillboardChain_016f2c18;
  if (*(long **)(this + 0x70) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x70) + 8))();
  }
  *(undefined8 *)(this + 0x70) = 0;
  if (*(Ref **)(this + 0x78) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x78));
  }
  if (*(Ref **)(this + 0x88) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x88));
  }
  if (*(Ref **)(this + 0x98) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x98));
  }
  if (*(Ref **)(this + 0x90) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x90));
  }
  if (((byte)this[0xd0] & 1) != 0) {
    operator_delete(*(void **)(this + 0xe0));
  }
  pvVar1 = *(void **)(this + 0xb8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xc0) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0xa0);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0xa8);
    pvVar3 = pvVar1;
    if (pvVar2 != pvVar1) {
      do {
        this_00 = (Vec4 *)((long)pvVar2 + -0x10);
        pvVar2 = (void *)((long)pvVar2 + -0x24);
        Vec4::~Vec4(this_00);
      } while (pvVar1 != pvVar2);
      pvVar3 = *(void **)(this + 0xa0);
    }
    *(void **)(this + 0xa8) = pvVar1;
    operator_delete(pvVar3);
  }
  pvVar1 = *(void **)(this + 0x58);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x60) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x40);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar3 = pvVar1;
  pvVar2 = *(void **)(this + 0x48);
  if (*(void **)(this + 0x48) != pvVar1) {
    do {
      pvVar3 = (void *)((long)pvVar2 + -0x34);
      Quaternion::~Quaternion((Quaternion *)((long)pvVar2 + -0x10));
      Vec4::~Vec4((Vec4 *)((long)pvVar2 + -0x20));
      pvVar2 = pvVar3;
    } while (pvVar1 != pvVar3);
    pvVar3 = *(void **)(this + 0x40);
  }
  *(void **)(this + 0x48) = pvVar1;
  operator_delete(pvVar3);
  return;
}

