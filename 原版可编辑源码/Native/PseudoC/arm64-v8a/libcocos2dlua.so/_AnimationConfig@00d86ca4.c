
/* dragonBones::AnimationConfig::~AnimationConfig() */

void __thiscall dragonBones::AnimationConfig::~AnimationConfig(AnimationConfig *this)

{
  byte bVar1;
  AnimationConfig AVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  *(undefined ***)this = &PTR__AnimationConfig_016d6af0;
  _onClear(this);
  pbVar5 = *(byte **)(this + 0x90);
  if (pbVar5 != (byte *)0x0) {
    pbVar4 = *(byte **)(this + 0x98);
    pbVar3 = pbVar5;
    if (pbVar4 != pbVar5) {
      bVar1 = pbVar4[-0x18];
      pbVar3 = pbVar4 + -0x18;
      while( true ) {
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -8));
        }
        if (pbVar5 == pbVar3) break;
        bVar1 = pbVar3[-0x18];
        pbVar4 = pbVar3;
        pbVar3 = pbVar3 + -0x18;
      }
      pbVar3 = *(byte **)(this + 0x90);
    }
    *(byte **)(this + 0x98) = pbVar5;
    operator_delete(pbVar3);
  }
  if (((byte)this[0x78] & 1) == 0) {
    AVar2 = this[0x60];
  }
  else {
    operator_delete(*(void **)(this + 0x88));
    AVar2 = this[0x60];
  }
  if (((byte)AVar2 & 1) == 0) {
    AVar2 = this[0x48];
  }
  else {
    operator_delete(*(void **)(this + 0x70));
    AVar2 = this[0x48];
  }
  if (((byte)AVar2 & 1) != 0) {
    operator_delete(*(void **)(this + 0x58));
    return;
  }
  return;
}

