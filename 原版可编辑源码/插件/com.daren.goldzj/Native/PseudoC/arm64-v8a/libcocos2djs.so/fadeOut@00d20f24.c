
/* dragonBones::AnimationState::fadeOut(float, bool) */

void __thiscall
dragonBones::AnimationState::fadeOut(AnimationState *this,float param_1,bool param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  
  if (param_2) {
    *(uint *)(this + 0x60) = *(uint *)(this + 0x60) & 2;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  if (*(int *)(this + 100) < 1) {
    *(undefined8 *)(this + 100) = 0xffffffff00000001;
    if ((param_1 <= 0.0) || (*(float *)(this + 0x74) <= 0.0)) {
      *(undefined4 *)(this + 0x74) = 0x358637bd;
    }
    puVar1 = *(undefined8 **)(this + 0xc0);
    for (puVar2 = *(undefined8 **)(this + 0xb8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
      (**(code **)(*(long *)*puVar2 + 0x38))();
    }
    puVar1 = *(undefined8 **)(this + 0xd8);
    for (puVar2 = *(undefined8 **)(this + 0xd0); puVar2 != puVar1; puVar2 = puVar2 + 1) {
      (**(code **)(*(long *)*puVar2 + 0x38))();
    }
  }
  else if (*(float *)(this + 0x28) - *(float *)(this + 0x94) < param_1) {
    return;
  }
  fVar3 = *(float *)(this + 0x74);
  fVar4 = param_1 / fVar3;
  if (fVar3 <= 1e-06) {
    fVar4 = 0.0;
  }
  *(float *)(this + 0x28) = fVar4;
  this[0xf] = (AnimationState)0x0;
  *(float *)(this + 0x94) = (1.0 - fVar3) * fVar4;
  return;
}

