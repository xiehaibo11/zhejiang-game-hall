
/* dragonBones::Armature* dragonBones::BaseObject::borrowObject<dragonBones::Armature>() */

Armature * dragonBones::BaseObject::borrowObject<dragonBones::Armature>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Armature *pAVar4;
  
  if (((Armature::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&Armature::getTypeIndex()::typeIndex), iVar1 != 0)) {
    Armature::getTypeIndex()::typeIndex = "N11dragonBones8ArmatureE";
    __cxa_guard_release(&Armature::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= Armature::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < Armature::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= Armature::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pAVar4 = (Armature *)*puVar3;
      puVar2[6] = puVar3;
      pAVar4[0xc] = (Armature)0x0;
      return pAVar4;
    }
  }
  this = operator_new(0xd8,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    *(undefined ***)(this + 0xd0) = &PTR__IAnimatable_01c91970;
    BaseObject(this);
    *(undefined8 *)(this + 0xc0) = 0;
    *(undefined8 *)this = 0x1c90728;
    *(undefined8 *)(this + 0xb0) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x98) = 0;
    *(undefined8 *)(this + 0x90) = 0;
    *(undefined8 *)(this + 0xa8) = 0;
    *(undefined8 *)(this + 0xa0) = 0;
    *(undefined8 *)(this + 0xd0) = 0x1c907b0;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    Armature::_onClear((Armature *)this);
  }
  return (Armature *)this;
}

