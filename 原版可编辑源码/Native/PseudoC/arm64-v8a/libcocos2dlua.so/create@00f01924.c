
/* cocos2d::FontCharMap::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, int, int, int) */

Ref * cocos2d::FontCharMap::create(basic_string *param_1,int param_2,int param_3,int param_4)

{
  Director *this;
  TextureCache *this_00;
  long lVar1;
  Ref *this_01;
  
                    /* try { // try from 00f01924 to 0100192b has its CatchHandler @ 00f01c24 */
                    /* try { // try from 00f01930 to 01001937 has its CatchHandler @ 00f01c0c */
                    /* try { // try from 00f01938 to 0100193f has its CatchHandler @ 00f01bfc */
                    /* try { // try from 00f01940 to 01001a83 has its CatchHandler @ 00f01748 */
  this = (Director *)Director::getInstance();
  this_00 = (TextureCache *)Director::getTextureCache(this);
  lVar1 = TextureCache::addImage(this_00,param_1);
  if (lVar1 == 0) {
    this_01 = (Ref *)0x0;
  }
  else {
    this_01 = operator_new(0x40);
    Ref::Ref(this_01);
    *(long *)(this_01 + 0x28) = lVar1;
    *(int *)(this_01 + 0x30) = param_4;
    *(int *)(this_01 + 0x34) = param_2;
    *(undefined ***)this_01 = &PTR__FontCharMap_016fd0e8;
    *(int *)(this_01 + 0x38) = param_3;
    Ref::autorelease(this_01);
  }
  return this_01;
}

