
/* dragonBones::AnimationConfig*
   dragonBones::BaseObject::borrowObject<dragonBones::AnimationConfig>() */

AnimationConfig * dragonBones::BaseObject::borrowObject<dragonBones::AnimationConfig>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  AnimationConfig *pAVar4;
  
  if (((AnimationConfig::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&AnimationConfig::getTypeIndex()::typeIndex), iVar1 != 0)) {
    AnimationConfig::getTypeIndex()::typeIndex = "N11dragonBones15AnimationConfigE";
    __cxa_guard_release(&AnimationConfig::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= AnimationConfig::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < AnimationConfig::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= AnimationConfig::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pAVar4 = (AnimationConfig *)*puVar3;
      puVar2[6] = puVar3;
      pAVar4[0xc] = (AnimationConfig)0x0;
      return pAVar4;
    }
  }
  this = operator_new(0xa8,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined8 *)(this + 0xa0) = 0;
    *(undefined8 *)(this + 0x98) = 0;
    *(undefined8 *)(this + 0x90) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined ***)this = &PTR__AnimationConfig_01c90b40;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    AnimationConfig::_onClear((AnimationConfig *)this);
  }
  return (AnimationConfig *)this;
}

