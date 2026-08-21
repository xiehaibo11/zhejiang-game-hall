
/* cocos2d::Mat4::createOrthographicOffCenter(float, float, float, float, float, float,
   cocos2d::Mat4*) */

void cocos2d::Mat4::createOrthographicOffCenter
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               Mat4 *param_7)

{
                    /* catch() { ... } // from try @ 009999fc with catch @ 00999d2c
                       catch() { ... } // from try @ 00999aac with catch @ 00999d2c
                       catch() { ... } // from try @ 00999c00 with catch @ 00999d2c */
  *(undefined8 *)(param_7 + 0x1c) = 0;
  *(undefined8 *)(param_7 + 0x14) = 0;
  *(undefined8 *)(param_7 + 0x28) = 0;
  *(undefined8 *)(param_7 + 0x20) = 0;
  *(undefined8 *)(param_7 + 0xc) = 0;
  *(undefined8 *)(param_7 + 4) = 0;
  *(float *)(param_7 + 0x14) = 2.0 / (param_4 - param_3);
  *(float *)param_7 = 2.0 / (param_2 - param_1);
  *(float *)(param_7 + 0x28) = 2.0 / (param_5 - param_6);
  *(float *)(param_7 + 0x38) = (param_5 + param_6) / (param_5 - param_6);
  *(ulong *)(param_7 + 0x30) =
       CONCAT44((param_3 + param_4) / (param_3 - param_4),(param_1 + param_2) / (param_1 - param_2))
  ;
                    /* try { // try from 00999d84 to 00a99dd7 has its CatchHandler @ 00999d84
                       catch() { ... } // from try @ 00999d84 with catch @ 00999d84
                       catch() { ... } // from try @ 00999ff8 with catch @ 00999d84 */
  *(undefined4 *)(param_7 + 0x3c) = 0x3f800000;
  return;
}

