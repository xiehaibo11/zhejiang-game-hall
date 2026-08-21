
/* cocostudio::ProcessBase::update(float) */

void __thiscall cocostudio::ProcessBase::update(ProcessBase *this,float param_1)

{
  float fVar1;
  float __y;
  
  if ((((this[0x29] == (ProcessBase)0x0) && (this[0x28] == (ProcessBase)0x0)) && (param_1 <= 1.0))
     && (0 < *(int *)(this + 0x30))) {
    if (*(int *)(this + 0x4c) < 1) {
      *(undefined4 *)(this + 0x2c) = 0x3f800000;
      *(undefined4 *)(this + 0x44) = 0;
    }
    else {
      fVar1 = *(float *)(this + 0x44) +
              *(float *)(this + 0x24) * (param_1 / *(float *)(this + 0x3c));
      __y = (float)*(int *)(this + 0x4c);
      *(float *)(this + 0x2c) = fVar1 / __y;
      fVar1 = fmodf(fVar1,__y);
      *(float *)(this + 0x44) = fVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00c3da78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x98))(this);
    return;
  }
  return;
}

