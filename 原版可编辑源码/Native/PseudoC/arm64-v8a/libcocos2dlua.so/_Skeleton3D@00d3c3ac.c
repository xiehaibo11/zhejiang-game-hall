
/* cocos2d::Skeleton3D::~Skeleton3D() */

void __thiscall cocos2d::Skeleton3D::~Skeleton3D(Skeleton3D *this)

{
  undefined8 *puVar1;
  Skeleton3D *pSVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *(undefined ***)this = &PTR__Skeleton3D_016d3d48;
  pSVar2 = this + 0x28;
  puVar4 = *(undefined8 **)pSVar2;
  puVar3 = *(undefined8 **)(this + 0x30);
  if (puVar4 != puVar3) {
    do {
      Ref::release((Ref *)*puVar4);
      puVar4 = puVar4 + 1;
    } while (puVar3 != puVar4);
    puVar4 = *(undefined8 **)pSVar2;
  }
  puVar3 = *(undefined8 **)(this + 0x40);
  puVar1 = *(undefined8 **)(this + 0x48);
  *(undefined8 **)(this + 0x30) = puVar4;
  if (puVar3 != puVar1) {
    do {
      Ref::release((Ref *)*puVar3);
      puVar3 = puVar3 + 1;
    } while (puVar1 != puVar3);
    puVar3 = *(undefined8 **)(this + 0x40);
  }
  *(undefined8 **)(this + 0x48) = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x48) = puVar3;
    operator_delete(puVar3);
  }
  puVar4 = *(undefined8 **)(this + 0x28);
  puVar3 = *(undefined8 **)(this + 0x30);
  if (puVar4 != puVar3) {
    do {
      Ref::release((Ref *)*puVar4);
      puVar4 = puVar4 + 1;
    } while (puVar3 != puVar4);
    puVar4 = *(undefined8 **)pSVar2;
  }
  *(undefined8 **)(this + 0x30) = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x30) = puVar4;
    operator_delete(puVar4);
  }
  Ref::~Ref((Ref *)this);
  return;
}

