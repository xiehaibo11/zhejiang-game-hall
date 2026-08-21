
/* cocostudio::Tween::gotoAndPlay(int) */

void __thiscall cocostudio::Tween::gotoAndPlay(Tween *this,int param_1)

{
  float fVar1;
  
  ProcessBase::gotoFrame((ProcessBase *)this,param_1);
  *(undefined8 *)(this + 0x94) = 0;
  *(undefined8 *)(this + 0x8c) = 0;
  *(undefined2 *)(this + 0x28) = 0;
  this[0x2a] = (Tween)0x1;
  fVar1 = (float)*(int *)(this + 0x48) / ((float)*(int *)(this + 0x30) + -1.0);
  *(float *)(this + 0x2c) = fVar1;
  *(float *)(this + 0x44) = fVar1 * (float)*(int *)(this + 0x4c);
  return;
}

