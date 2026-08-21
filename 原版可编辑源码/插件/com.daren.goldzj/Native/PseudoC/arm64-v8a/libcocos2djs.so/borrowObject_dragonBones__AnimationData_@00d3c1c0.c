
/* dragonBones::AnimationData* dragonBones::BaseObject::borrowObject<dragonBones::AnimationData>()
    */

AnimationData * dragonBones::BaseObject::borrowObject<dragonBones::AnimationData>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  AnimationData *pAVar4;
  
  if (((AnimationData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&AnimationData::getTypeIndex()::typeIndex), iVar1 != 0)) {
    AnimationData::getTypeIndex()::typeIndex = "N11dragonBones13AnimationDataE";
    __cxa_guard_release(&AnimationData::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= AnimationData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < AnimationData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= AnimationData::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6])
       ) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pAVar4 = (AnimationData *)*puVar3;
      puVar2[6] = puVar3;
      pAVar4[0xc] = (AnimationData)0x0;
      return pAVar4;
    }
  }
  this = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined ***)this = &PTR__AnimationData_01c90b88;
    *(undefined8 *)(this + 0x70) = 0;
    *(BaseObject **)(this + 0x68) = this + 0x70;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(BaseObject **)(this + 0x80) = this + 0x88;
    *(undefined8 *)(this + 0xa0) = 0;
    *(undefined8 *)(this + 0x90) = 0;
    *(BaseObject **)(this + 0x98) = this + 0xa0;
    *(undefined8 *)(this + 0xb8) = 0;
    *(undefined8 *)(this + 0xa8) = 0;
    *(BaseObject **)(this + 0xb0) = this + 0xb8;
    *(undefined8 *)(this + 0xd8) = 0;
    *(undefined8 *)(this + 0xe0) = 0;
    *(undefined8 *)(this + 0xd0) = 0;
    *(undefined8 *)(this + 0xc0) = 0;
    *(BaseObject **)(this + 200) = this + 0xd0;
    *(undefined8 *)(this + 0xe8) = 0;
    AnimationData::_onClear((AnimationData *)this);
  }
  return (AnimationData *)this;
}

