
/* cocos2d::Color4F::Color4F(cocos2d::Color4B const&) */

void __thiscall cocos2d::Color4F::Color4F(Color4F *this,Color4B *param_1)

{
  float fVar1;
  
  fVar1 = (float)NEON_ucvtf((uint)(byte)*param_1);
  *(float *)this = fVar1 / 255.0;
  fVar1 = (float)NEON_ucvtf((uint)(byte)param_1[1]);
                    /* try { // try from 009a2590 to 00aa25e3 has its CatchHandler @ 009a2590
                       catch() { ... } // from try @ 009a2590 with catch @ 009a2590
                       catch() { ... } // from try @ 009a26f0 with catch @ 009a2590 */
  *(float *)(this + 4) = fVar1 / 255.0;
  fVar1 = (float)NEON_ucvtf((uint)(byte)param_1[2]);
  *(float *)(this + 8) = fVar1 / 255.0;
  fVar1 = (float)NEON_ucvtf((uint)(byte)param_1[3]);
  *(float *)(this + 0xc) = fVar1 / 255.0;
  return;
}

