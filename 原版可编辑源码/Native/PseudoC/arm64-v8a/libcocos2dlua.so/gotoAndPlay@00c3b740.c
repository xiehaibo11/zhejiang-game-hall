
/* cocostudio::ArmatureAnimation::gotoAndPlay(int) */

void __thiscall cocostudio::ArmatureAnimation::gotoAndPlay(ArmatureAnimation *this,int param_1)

{
  undefined8 *puVar1;
  ArmatureAnimation AVar2;
  undefined8 *puVar3;
  float fVar4;
  
  if (((-1 < param_1) && (*(long *)(this + 0x68) != 0)) &&
     (param_1 < *(int *)(*(long *)(this + 0x68) + 0x40))) {
    AVar2 = this[0xb0];
    this[0xb0] = (ArmatureAnimation)0x1;
    this[0x2a] = (ArmatureAnimation)0x1;
    *(undefined2 *)(this + 0x28) = 0;
    ProcessBase::gotoFrame((ProcessBase *)this,param_1);
    puVar3 = *(undefined8 **)(this + 0x98);
    puVar1 = *(undefined8 **)(this + 0xa0);
    fVar4 = (float)*(int *)(this + 0x48) / ((float)*(int *)(*(long *)(this + 0x68) + 0x40) + -1.0);
    *(float *)(this + 0x2c) = fVar4;
    *(float *)(this + 0x44) = fVar4 * (float)*(int *)(this + 0x4c);
    for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
      (**(code **)(*(long *)*puVar3 + 0xb0))((long *)*puVar3,param_1);
    }
    (**(code **)(**(long **)(this + 0x70) + 0x3d8))(0);
    this[0xb0] = AVar2;
  }
  return;
}

