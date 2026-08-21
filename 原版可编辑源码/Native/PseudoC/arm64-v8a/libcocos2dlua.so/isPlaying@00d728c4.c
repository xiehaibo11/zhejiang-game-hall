
/* dragonBones::Animation::isPlaying() const */

undefined8 __thiscall dragonBones::Animation::isPlaying(Animation *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  puVar1 = *(undefined8 **)(this + 0x40);
  puVar2 = *(undefined8 **)(this + 0x38);
  do {
    if (puVar2 == puVar1) {
      return 0;
    }
    uVar3 = AnimationState::isPlaying((AnimationState *)*puVar2);
    puVar2 = puVar2 + 1;
  } while ((uVar3 & 1) == 0);
  return 1;
}

