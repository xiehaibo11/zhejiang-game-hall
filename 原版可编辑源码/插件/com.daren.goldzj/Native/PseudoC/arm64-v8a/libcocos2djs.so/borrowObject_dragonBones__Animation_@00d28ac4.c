
/* dragonBones::Animation* dragonBones::BaseObject::borrowObject<dragonBones::Animation>() */

Animation * dragonBones::BaseObject::borrowObject<dragonBones::Animation>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Animation *pAVar4;
  
  if (((Animation::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&Animation::getTypeIndex()::typeIndex), iVar1 != 0)) {
    Animation::getTypeIndex()::typeIndex = "N11dragonBones9AnimationE";
    __cxa_guard_release(&Animation::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= Animation::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < Animation::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= Animation::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pAVar4 = (Animation *)*puVar3;
      puVar2[6] = puVar3;
      pAVar4[0xc] = (Animation)0x0;
      return pAVar4;
    }
  }
  this = operator_new(0x80,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined ***)this = &PTR__Animation_01c8ff48;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(BaseObject **)(this + 0x50) = this + 0x58;
    *(undefined8 *)(this + 0x70) = 0;
    Animation::_onClear((Animation *)this);
  }
  return (Animation *)this;
}

