
/* dragonBones::Bone::setVisible(bool) */

void __thiscall dragonBones::Bone::setVisible(Bone *this,bool param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (this[0xb9] != (Bone)param_1) {
    this[0xb9] = (Bone)param_1;
    plVar2 = *(long **)(*(long *)(this + 0x68) + 0x80);
    for (plVar1 = *(long **)(*(long *)(this + 0x68) + 0x78); plVar1 != plVar2; plVar1 = plVar1 + 1)
    {
      if ((Bone *)((long *)*plVar1)[0x30] == this) {
        (**(code **)(*(long *)*plVar1 + 0x78))();
      }
    }
  }
  return;
}

