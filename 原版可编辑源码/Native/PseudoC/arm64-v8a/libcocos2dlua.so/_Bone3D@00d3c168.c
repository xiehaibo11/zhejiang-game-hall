
/* cocos2d::Bone3D::~Bone3D() */

void __thiscall cocos2d::Bone3D::~Bone3D(Bone3D *this)

{
  Quaternion *this_00;
  void *pvVar1;
  void *pvVar2;
  Bone3D *pBVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  
  *(undefined ***)this = &PTR__Bone3D_016d3d28;
  pBVar3 = this + 200;
  puVar4 = *(undefined8 **)pBVar3;
  puVar5 = *(undefined8 **)(this + 0xd0);
  if (puVar4 != puVar5) {
    do {
      Ref::release((Ref *)*puVar4);
      puVar4 = puVar4 + 1;
    } while (puVar5 != puVar4);
    puVar4 = *(undefined8 **)pBVar3;
  }
  pvVar6 = *(void **)(this + 0x168);
  *(undefined8 **)(this + 0xd0) = puVar4;
  if (pvVar6 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0x170);
    pvVar1 = pvVar6;
    if (pvVar2 != pvVar6) {
      do {
        this_00 = (Quaternion *)((long)pvVar2 + -0x2c);
        pvVar2 = (void *)((long)pvVar2 + -0x38);
        Quaternion::~Quaternion(this_00);
      } while (pvVar6 != pvVar2);
      pvVar1 = *(void **)(this + 0x168);
    }
    *(void **)(this + 0x170) = pvVar6;
    operator_delete(pvVar1);
  }
  Mat4::~Mat4((Mat4 *)(this + 0x124));
  Mat4::~Mat4((Mat4 *)(this + 0xe4));
  puVar4 = *(undefined8 **)(this + 200);
  puVar5 = *(undefined8 **)(this + 0xd0);
  if (puVar4 != puVar5) {
    do {
      Ref::release((Ref *)*puVar4);
      puVar4 = puVar4 + 1;
    } while (puVar5 != puVar4);
    puVar4 = *(undefined8 **)pBVar3;
  }
  *(undefined8 **)(this + 0xd0) = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0xd0) = puVar4;
    operator_delete(puVar4);
  }
  Mat4::~Mat4((Mat4 *)(this + 0x80));
  Mat4::~Mat4((Mat4 *)(this + 0x40));
  if (((byte)this[0x28] & 1) != 0) {
    operator_delete(*(void **)(this + 0x38));
  }
  Ref::~Ref((Ref *)this);
  return;
}

