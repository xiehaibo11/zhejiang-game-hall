
/* dragonBones::TransformObject::updateGlobalTransform() */

void __thiscall dragonBones::TransformObject::updateGlobalTransform(TransformObject *this)

{
  float fVar1;
  float fVar2;
  float __x;
  float fVar3;
  float __x_00;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (this[0x70] != (TransformObject)0x0) {
    fVar1 = *(float *)(this + 0x38);
    fVar6 = *(float *)(this + 0x10);
    fVar4 = *(float *)(this + 0x14);
    fVar2 = *(float *)(this + 0x3c);
    this[0x70] = (TransformObject)0x0;
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(this + 0x20);
    __x = atanf(fVar4 / fVar6);
    fVar3 = *(float *)(this + 0x18);
    fVar5 = *(float *)(this + 0x1c);
    *(float *)(this + 0x34) = __x;
    __x_00 = atanf(-fVar3 / fVar5);
    if ((__x <= -0.7853982) || (0.7853982 <= __x)) {
      fVar6 = sinf(__x);
      fVar6 = fVar4 / fVar6;
    }
    else {
      fVar4 = cosf(__x);
      fVar6 = fVar6 / fVar4;
    }
    *(float *)(this + 0x38) = fVar6;
    if ((__x_00 <= -0.7853982) || (0.7853982 <= __x_00)) {
      fVar5 = sinf(__x_00);
      fVar5 = -fVar3 / fVar5;
    }
    else {
      fVar3 = cosf(__x_00);
      fVar5 = fVar5 / fVar3;
    }
    *(float *)(this + 0x3c) = fVar5;
    if ((0.0 <= fVar1) && (fVar6 < 0.0)) {
      __x = __x - 3.1415927;
      *(float *)(this + 0x34) = __x;
      *(float *)(this + 0x38) = -fVar6;
    }
    if ((0.0 <= fVar2) && (fVar5 < 0.0)) {
      *(float *)(this + 0x3c) = -fVar5;
      __x_00 = __x_00 - 3.1415927;
    }
    *(float *)(this + 0x30) = __x_00 - __x;
  }
  return;
}

