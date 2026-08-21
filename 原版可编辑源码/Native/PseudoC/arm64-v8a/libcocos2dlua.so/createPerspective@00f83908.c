
/* cocos2d::Mat4::createPerspective(float, float, float, float, cocos2d::Mat4*) */

void cocos2d::Mat4::createPerspective
               (float param_1,float param_2,float param_3,float param_4,Mat4 *param_5)

{
  float fVar1;
  float __x;
  float fVar2;
  
  __x = param_1 * 0.017453292 * 0.5;
  fVar1 = fmodf(__x,1.5707964);
  if (1e-06 <= ABS(fVar1)) {
    fVar2 = 1.0 / (param_4 - param_3);
    fVar1 = tanf(__x);
    *(undefined8 *)(param_5 + 8) = 0;
    *(undefined8 *)param_5 = 0;
    *(undefined8 *)(param_5 + 0x18) = 0;
    *(undefined8 *)(param_5 + 0x10) = 0;
    *(undefined8 *)(param_5 + 0x28) = 0;
    *(undefined8 *)(param_5 + 0x20) = 0;
    *(undefined8 *)(param_5 + 0x38) = 0;
    *(undefined8 *)(param_5 + 0x30) = 0;
    *(float *)(param_5 + 0x14) = 1.0 / fVar1;
    *(float *)(param_5 + 0x28) = -((param_3 + param_4) * fVar2);
    *(undefined4 *)(param_5 + 0x2c) = 0xbf800000;
    *(float *)param_5 = (1.0 / param_2) * (1.0 / fVar1);
    *(float *)(param_5 + 0x38) = param_4 * -2.0 * param_3 * fVar2;
  }
  return;
}

