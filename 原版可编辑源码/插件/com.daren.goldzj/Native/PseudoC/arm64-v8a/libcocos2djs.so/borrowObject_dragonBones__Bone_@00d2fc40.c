
/* dragonBones::Bone* dragonBones::BaseObject::borrowObject<dragonBones::Bone>() */

Bone * dragonBones::BaseObject::borrowObject<dragonBones::Bone>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Bone *pBVar4;
  undefined8 uVar5;
  
  if (((Bone::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&Bone::getTypeIndex()::typeIndex), iVar1 != 0)) {
    Bone::getTypeIndex()::typeIndex = "N11dragonBones4BoneE";
    __cxa_guard_release(&Bone::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= Bone::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < Bone::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= Bone::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pBVar4 = (Bone *)*puVar3;
      puVar2[6] = puVar3;
      pBVar4[0xc] = (Bone)0x0;
      return pBVar4;
    }
  }
  this = operator_new(200,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x18) = 0x3f80000000000000;
    *(undefined8 *)(this + 0x10) = 0x3f800000;
    uVar5 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x38) = uVar5;
    *(undefined8 *)(this + 0x50) = uVar5;
    *(undefined ***)this = &PTR__Bone_01c90840;
    *(undefined8 *)(this + 0x88) = uVar5;
    Bone::_onClear((Bone *)this);
  }
  return (Bone *)this;
}

