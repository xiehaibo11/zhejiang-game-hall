
/* dragonBones::AnimationConfig::~AnimationConfig() */

void __thiscall dragonBones::AnimationConfig::~AnimationConfig(AnimationConfig *this)

{
  AnimationConfig AVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  *(undefined ***)this = &PTR__AnimationConfig_01c90b40;
  _onClear(this);
  pbVar3 = *(byte **)(this + 0x90);
  if (pbVar3 != (byte *)0x0) {
    pbVar2 = *(byte **)(this + 0x98);
    pbVar4 = pbVar3;
    if (pbVar2 != pbVar3) {
      do {
        pbVar4 = pbVar2 + -0x18;
        if ((*pbVar4 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -8));
        }
        pbVar2 = pbVar4;
      } while (pbVar3 != pbVar4);
      pbVar4 = *(byte **)(this + 0x90);
    }
    *(byte **)(this + 0x98) = pbVar3;
    operator_delete(pbVar4);
  }
  if (((byte)this[0x78] & 1) == 0) {
    AVar1 = this[0x60];
  }
  else {
    operator_delete(*(void **)(this + 0x88));
    AVar1 = this[0x60];
  }
  if (((byte)AVar1 & 1) == 0) {
    AVar1 = this[0x48];
  }
  else {
    operator_delete(*(void **)(this + 0x70));
    AVar1 = this[0x48];
  }
  if (((byte)AVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x58));
  }
  BaseObject::~BaseObject((BaseObject *)this);
  return;
}

