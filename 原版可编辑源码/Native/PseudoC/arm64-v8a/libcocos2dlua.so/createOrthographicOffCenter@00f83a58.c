
/* cocos2d::Mat4::createOrthographicOffCenter(float, float, float, float, float, float,
   cocos2d::Mat4*) */

void cocos2d::Mat4::createOrthographicOffCenter
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               Mat4 *param_7)

{
  *(undefined8 *)(param_7 + 8) = 0;
  *(undefined8 *)param_7 = 0;
  *(undefined8 *)(param_7 + 0x18) = 0;
  *(undefined8 *)(param_7 + 0x10) = 0;
  *(undefined8 *)(param_7 + 0x28) = 0;
  *(undefined8 *)(param_7 + 0x20) = 0;
  *(undefined8 *)(param_7 + 0x38) = 0;
  *(undefined8 *)(param_7 + 0x30) = 0;
  *(float *)(param_7 + 0x14) = 2.0 / (param_4 - param_3);
  *(float *)param_7 = 2.0 / (param_2 - param_1);
  *(float *)(param_7 + 0x28) = 2.0 / (param_5 - param_6);
  *(float *)(param_7 + 0x38) = (param_5 + param_6) / (param_5 - param_6);
  *(ulong *)(param_7 + 0x30) =
       CONCAT44((param_3 + param_4) / (param_3 - param_4),(param_1 + param_2) / (param_1 - param_2))
  ;
  *(undefined4 *)(param_7 + 0x3c) = 0x3f800000;
  return;
}

