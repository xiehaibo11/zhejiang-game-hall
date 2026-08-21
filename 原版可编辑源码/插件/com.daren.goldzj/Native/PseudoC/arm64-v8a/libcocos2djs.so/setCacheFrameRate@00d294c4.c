
/* dragonBones::Armature::setCacheFrameRate(unsigned int) */

void __thiscall dragonBones::Armature::setCacheFrameRate(Armature *this,uint param_1)

{
  long *plVar1;
  long *plVar2;
  Armature *this_00;
  
  if (*(uint *)(*(ArmatureData **)(this + 0x20) + 0x18) != param_1) {
    ArmatureData::cacheFrames(*(ArmatureData **)(this + 0x20),param_1);
    plVar2 = *(long **)(this + 0x80);
    for (plVar1 = *(long **)(this + 0x78); plVar1 != plVar2; plVar1 = plVar1 + 1) {
      this_00 = *(Armature **)(*plVar1 + 0x178);
      if ((this_00 != (Armature *)0x0) && (*(int *)(*(long *)(this_00 + 0x20) + 0x18) == 0)) {
        setCacheFrameRate(this_00,param_1);
      }
    }
  }
  return;
}

