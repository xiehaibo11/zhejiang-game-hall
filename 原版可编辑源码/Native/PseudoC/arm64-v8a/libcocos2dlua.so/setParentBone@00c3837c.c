
/* cocostudio::Armature::setParentBone(cocostudio::Bone*) */

void __thiscall cocostudio::Armature::setParentBone(Armature *this,Bone *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x330);
  *(Bone **)(this + 0x310) = param_1;
  for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    (**(code **)(*(long *)plVar1[5] + 0x568))((long *)plVar1[5],this);
  }
  return;
}

