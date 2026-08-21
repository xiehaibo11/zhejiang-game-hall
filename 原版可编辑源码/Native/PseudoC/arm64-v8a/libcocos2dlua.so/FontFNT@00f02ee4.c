
/* cocos2d::FontFNT::FontFNT(cocos2d::BMFontConfiguration*, cocos2d::Vec2 const&) */

void __thiscall cocos2d::FontFNT::FontFNT(FontFNT *this,BMFontConfiguration *param_1,Vec2 *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
                    /* try { // try from 00f02f00 to 01002f07 has its CatchHandler @ 00f02fa0 */
                    /* try { // try from 00f02f08 to 01003003 has its CatchHandler @ 00f02e84 */
  Ref::Ref((Ref *)this);
  *(BMFontConfiguration **)(this + 0x28) = param_1;
  *(undefined ***)this = &PTR__FontFNT_016fd158;
  fVar3 = *(float *)param_2;
  lVar1 = Director::getInstance();
  fVar5 = *(float *)(lVar1 + 0x1a0);
  fVar4 = *(float *)(param_2 + 4);
  lVar1 = Director::getInstance();
  fVar2 = *(float *)(lVar1 + 0x1a0);
  *(float *)(this + 0x30) = fVar3 / fVar5;
  *(float *)(this + 0x34) = fVar4 / fVar2;
  Ref::retain(*(Ref **)(this + 0x28));
  return;
}

