
/* btSolverBody::writebackVelocityAndTransform(float, float) */

void __thiscall
btSolverBody::writebackVelocityAndTransform(btSolverBody *this,float param_1,float param_2)

{
  float local_70;
  float fStack_6c;
  float local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (*(long *)(this + 0xf0) != 0) {
    *(float *)(this + 0xb0) = *(float *)(this + 0x40) + *(float *)(this + 0xb0);
    *(float *)(this + 0xb4) = *(float *)(this + 0x44) + *(float *)(this + 0xb4);
    *(float *)(this + 0xb8) = *(float *)(this + 0x48) + *(float *)(this + 0xb8);
    *(float *)(this + 0xc0) = *(float *)(this + 0x50) + *(float *)(this + 0xc0);
    *(float *)(this + 0xc4) = *(float *)(this + 0x54) + *(float *)(this + 0xc4);
    *(float *)(this + 200) = *(float *)(this + 0x58) + *(float *)(this + 200);
    if ((((*(float *)(this + 0x90) != 0.0) || (*(float *)(this + 0x94) != 0.0)) ||
        (*(float *)(this + 0x98) != 0.0)) ||
       (((*(float *)(this + 0xa0) != 0.0 || (*(float *)(this + 0xa4) != 0.0)) ||
        (*(float *)(this + 0xa8) != 0.0)))) {
      local_70 = *(float *)(this + 0xa0) * param_2;
      fStack_6c = *(float *)(this + 0xa4) * param_2;
      local_68 = *(float *)(this + 0xa8) * param_2;
      local_64 = 0;
      btTransformUtil::integrateTransform
                ((btTransform *)this,(btVector3 *)(this + 0x90),(btVector3 *)&local_70,param_1,
                 (btTransform *)&local_60);
      *(undefined8 *)(this + 8) = uStack_58;
      *(undefined8 *)this = local_60;
      *(undefined8 *)(this + 0x18) = uStack_48;
      *(undefined8 *)(this + 0x10) = local_50;
      *(undefined8 *)(this + 0x28) = uStack_38;
      *(undefined8 *)(this + 0x20) = local_40;
      *(undefined8 *)(this + 0x38) = uStack_28;
      *(undefined8 *)(this + 0x30) = local_30;
    }
  }
  return;
}

