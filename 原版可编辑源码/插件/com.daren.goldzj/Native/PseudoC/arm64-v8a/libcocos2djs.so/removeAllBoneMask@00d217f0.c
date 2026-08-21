
/* dragonBones::AnimationState::removeAllBoneMask() */

void __thiscall dragonBones::AnimationState::removeAllBoneMask(AnimationState *this)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar1 = *(byte **)(this + 0xa0);
  pbVar3 = *(byte **)(this + 0xa8);
  while (pbVar2 = pbVar3, pbVar2 != pbVar1) {
    pbVar3 = pbVar2 + -0x18;
    if ((*pbVar3 & 1) != 0) {
      operator_delete(*(void **)(pbVar2 + -8));
    }
  }
  *(byte **)(this + 0xa8) = pbVar1;
  *(undefined4 *)(this + 0x90) = 1;
  return;
}

