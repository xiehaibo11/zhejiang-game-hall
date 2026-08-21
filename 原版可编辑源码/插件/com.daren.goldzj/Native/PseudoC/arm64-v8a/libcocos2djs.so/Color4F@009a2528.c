
/* cocos2d::Color4F::Color4F(float, float, float, float) */

void __thiscall
cocos2d::Color4F::Color4F(Color4F *this,float param_1,float param_2,float param_3,float param_4)

{
                    /* catch() { ... } // from try @ 009a2280 with catch @ 009a2528 */
  *(float *)this = param_1;
  *(float *)(this + 4) = param_2;
  *(float *)(this + 8) = param_3;
  *(float *)(this + 0xc) = param_4;
  return;
}

