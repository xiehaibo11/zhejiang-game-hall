
/* dragonBones::AnimationState::removeAllBoneMask() */

void __thiscall dragonBones::AnimationState::removeAllBoneMask(AnimationState *this)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  
  pbVar1 = *(byte **)(this + 0xa0);
  pbVar2 = *(byte **)(this + 0xa8);
  if (pbVar2 != pbVar1) {
    bVar3 = pbVar2[-0x18];
    pbVar4 = pbVar2 + -0x18;
    while( true ) {
      if ((bVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar2 + -8));
      }
      if (pbVar1 == pbVar4) break;
      bVar3 = pbVar4[-0x18];
      pbVar2 = pbVar4;
      pbVar4 = pbVar4 + -0x18;
    }
  }
  *(byte **)(this + 0xa8) = pbVar1;
  *(undefined4 *)(this + 0x90) = 1;
  return;
}

