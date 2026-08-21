
/* dragonBones::BonePose* dragonBones::BaseObject::borrowObject<dragonBones::BonePose>() */

BonePose * dragonBones::BaseObject::borrowObject<dragonBones::BonePose>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  BonePose *pBVar4;
  undefined8 uVar5;
  
  if (((BonePose::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&BonePose::getTypeIndex()::typeIndex), iVar1 != 0)) {
    BonePose::getTypeIndex()::typeIndex = "N11dragonBones8BonePoseE";
    __cxa_guard_release(&BonePose::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= BonePose::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < BonePose::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= BonePose::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pBVar4 = (BonePose *)*puVar3;
      puVar2[6] = puVar3;
      pBVar4[0xc] = (BonePose)0x0;
      return pBVar4;
    }
  }
  this = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    uVar5 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x20) = uVar5;
    *(undefined8 *)(this + 0x38) = uVar5;
    *(undefined ***)this = &PTR__BonePose_01c8ffd8;
    *(undefined8 *)(this + 0x50) = uVar5;
  }
  return (BonePose *)this;
}

