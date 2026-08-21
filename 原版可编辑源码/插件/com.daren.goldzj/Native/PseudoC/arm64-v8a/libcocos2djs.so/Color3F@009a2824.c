
/* cocos2d::Color3F::Color3F(float, float, float) */

void __thiscall cocos2d::Color3F::Color3F(Color3F *this,float param_1,float param_2,float param_3)

{
                    /* try { // try from 009a2824 to 00aa283b has its CatchHandler @ 009a2a44 */
  *(float *)this = param_1;
  *(float *)(this + 4) = param_2;
  *(float *)(this + 8) = param_3;
  return;
}

