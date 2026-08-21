
/* cocos2d::Mat4::Mat4(float, float, float, float, float, float, float, float, float, float, float,
   float, float, float, float, float) */

void __thiscall
cocos2d::Mat4::Mat4(Mat4 *this,float param_1,float param_2,float param_3,float param_4,float param_5
                   ,float param_6,float param_7,float param_8,float param_9,float param_10,
                   float param_11,float param_12,float param_13,float param_14,float param_15,
                   float param_16)

{
  *(float *)this = param_1;
  *(float *)(this + 4) = param_5;
                    /* catch() { ... } // from try @ 009996ac with catch @ 009998c0 */
  *(float *)(this + 0x10) = param_2;
  *(float *)(this + 0x14) = param_6;
                    /* catch() { ... } // from try @ 009996bc with catch @ 009998c4
                       catch() { ... } // from try @ 009997a4 with catch @ 009998c4 */
  *(float *)(this + 0x20) = param_3;
  *(float *)(this + 0x24) = param_7;
  *(float *)(this + 0x30) = param_4;
  *(float *)(this + 0x34) = param_8;
  *(float *)(this + 8) = param_9;
  *(float *)(this + 0xc) = param_13;
  *(float *)(this + 0x18) = param_10;
  *(float *)(this + 0x1c) = param_14;
  *(float *)(this + 0x28) = param_11;
  *(float *)(this + 0x2c) = param_15;
  *(float *)(this + 0x38) = param_12;
  *(float *)(this + 0x3c) = param_16;
  return;
}

