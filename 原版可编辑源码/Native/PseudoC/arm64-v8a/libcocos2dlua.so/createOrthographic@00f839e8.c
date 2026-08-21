
/* cocos2d::Mat4::createOrthographic(float, float, float, float, cocos2d::Mat4*) */

void cocos2d::Mat4::createOrthographic
               (float param_1,float param_2,float param_3,float param_4,Mat4 *param_5)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1 * 0.5;
  fVar2 = param_2 * 0.5;
  *(undefined8 *)(param_5 + 8) = 0;
  *(undefined8 *)param_5 = 0;
  *(undefined8 *)(param_5 + 0x18) = 0;
  *(undefined8 *)(param_5 + 0x10) = 0;
  *(undefined8 *)(param_5 + 0x28) = 0;
  *(undefined8 *)(param_5 + 0x20) = 0;
  *(undefined8 *)(param_5 + 0x38) = 0;
  *(undefined8 *)(param_5 + 0x30) = 0;
  *(float *)(param_5 + 0x38) = (param_3 + param_4) / (param_3 - param_4);
  *(float *)(param_5 + 0x28) = 2.0 / (param_3 - param_4);
  *(float *)param_5 = 2.0 / (fVar1 + fVar1);
  *(float *)(param_5 + 0x14) = 2.0 / (fVar2 + fVar2);
  *(ulong *)(param_5 + 0x30) =
       CONCAT44((fVar2 - fVar2) / (-fVar2 - fVar2),(fVar1 - fVar1) / (-fVar1 - fVar1));
  *(undefined4 *)(param_5 + 0x3c) = 0x3f800000;
  return;
}

