
/* cocos2d::FontFNT::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::Vec2 const&) */

Ref * cocos2d::FontFNT::create(basic_string *param_1,Vec2 *param_2)

{
  long lVar1;
  Director *this;
  TextureCache *this_00;
  long lVar2;
  Ref *this_01;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
                    /* catch() { ... } // from try @ 00f02b28 with catch @ 00f02df4
                       catch() { ... } // from try @ 00f02bb4 with catch @ 00f02df4 */
  lVar1 = FNTConfigLoadFile(param_1);
  if (lVar1 != 0) {
    this = (Director *)Director::getInstance();
    this_00 = (TextureCache *)Director::getTextureCache(this);
    lVar2 = TextureCache::addImage(this_00,(basic_string *)(lVar1 + 0x68));
    if (lVar2 != 0) {
      this_01 = operator_new(0x40);
      Ref::Ref(this_01);
      *(long *)(this_01 + 0x28) = lVar1;
      *(undefined ***)this_01 = &PTR__FontFNT_016fd158;
      fVar4 = *(float *)param_2;
      lVar2 = Director::getInstance();
      fVar6 = *(float *)(lVar2 + 0x1a0);
      fVar5 = *(float *)(param_2 + 4);
      lVar2 = Director::getInstance();
      fVar3 = *(float *)(lVar2 + 0x1a0);
      *(float *)(this_01 + 0x30) = fVar4 / fVar6;
      *(float *)(this_01 + 0x34) = fVar5 / fVar3;
      Ref::retain(*(Ref **)(this_01 + 0x28));
                    /* try { // try from 00f02e84 to 01002eff has its CatchHandler @ 00f02e84
                       catch() { ... } // from try @ 00f02e84 with catch @ 00f02e84
                       catch() { ... } // from try @ 00f02f08 with catch @ 00f02e84 */
      *(float *)(this_01 + 0x38) = (float)*(int *)(lVar1 + 0xb0);
      Ref::autorelease(this_01);
      return this_01;
    }
  }
  return (Ref *)0x0;
}

