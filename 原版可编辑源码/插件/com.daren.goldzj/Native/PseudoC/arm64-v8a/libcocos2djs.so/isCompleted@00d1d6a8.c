
/* dragonBones::Animation::isCompleted() const */

bool __thiscall dragonBones::Animation::isCompleted(Animation *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = *(undefined8 **)(this + 0x38);
  puVar1 = *(undefined8 **)(this + 0x40);
  puVar4 = puVar3;
  if (puVar3 != puVar1) {
    do {
      puVar4 = puVar3 + 1;
      uVar2 = AnimationState::isCompleted((AnimationState *)*puVar3);
      if ((uVar2 & 1) == 0) {
        return false;
      }
      puVar3 = puVar4;
    } while (puVar1 != puVar4);
    puVar3 = *(undefined8 **)(this + 0x38);
    puVar4 = *(undefined8 **)(this + 0x40);
  }
  return puVar3 != puVar4;
}

