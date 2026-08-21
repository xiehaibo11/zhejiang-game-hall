
/* spine::Interpolation::interpolate(float, float, float) */

float __thiscall
spine::Interpolation::interpolate(Interpolation *this,float param_1,float param_2,float param_3)

{
  float fVar1;
  undefined4 in_register_00005044;
  
  fVar1 = (float)(*(code *)**(undefined8 **)this)(CONCAT44(in_register_00005044,param_3));
  return (param_2 - param_1) * fVar1 + param_1;
}

