
/* dragonBones::Animation::reset() */

void __thiscall dragonBones::Animation::reset(Animation *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x40);
  for (puVar2 = *(undefined8 **)(this + 0x38); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    BaseObject::returnToPool((BaseObject *)*puVar2);
  }
  this[0x14] = (Animation)0x0;
  AnimationConfig::clear(*(AnimationConfig **)(this + 0x70));
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + 0x38);
  return;
}

