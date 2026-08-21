
/* dragonBones::UserData::_onClear() */

void __thiscall dragonBones::UserData::_onClear(UserData *this)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar1 = *(byte **)(this + 0x40);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x28);
  pbVar3 = *(byte **)(this + 0x48);
  while (pbVar2 = pbVar3, pbVar2 != pbVar1) {
    pbVar3 = pbVar2 + -0x18;
    if ((*pbVar3 & 1) != 0) {
      operator_delete(*(void **)(pbVar2 + -8));
    }
  }
  *(byte **)(this + 0x48) = pbVar1;
  return;
}

