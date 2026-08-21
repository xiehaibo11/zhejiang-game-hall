
/* cocostudio::ArmatureAnimation::setSpeedScale(float) */

void __thiscall cocostudio::ArmatureAnimation::setSpeedScale(ArmatureAnimation *this,float param_1)

{
  long lVar1;
  long *plVar2;
  Bone *this_00;
  long *plVar3;
  
  if (*(float *)(this + 0x60) != param_1) {
    *(float *)(this + 0x60) = param_1;
    if (*(long *)(this + 0x68) != 0) {
      param_1 = *(float *)(*(long *)(this + 0x68) + 0x44) * param_1;
    }
    *(float *)(this + 0x24) = param_1;
    lVar1 = Armature::getBoneDic(*(Armature **)(this + 0x70));
    for (plVar3 = *(long **)(lVar1 + 0x10); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      this_00 = (Bone *)plVar3[5];
      plVar2 = (long *)Bone::getTween(this_00);
      (**(code **)(*plVar2 + 0x40))(*(undefined4 *)(this + 0x24));
      lVar1 = (**(code **)(*(long *)this_00 + 0x580))(this_00);
      if (lVar1 != 0) {
        plVar2 = (long *)(**(code **)(*(long *)this_00 + 0x580))(this_00);
        plVar2 = (long *)(**(code **)(*plVar2 + 0x588))();
        (**(code **)(*plVar2 + 0xb8))(*(undefined4 *)(this + 0x24));
      }
    }
  }
  return;
}

