
/* cocos2d::LabelAtlas::initWithString(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, int, int, int) */

bool __thiscall
cocos2d::LabelAtlas::initWithString
          (LabelAtlas *this,basic_string *param_1,basic_string *param_2,int param_3,int param_4,
          int param_5)

{
  bool bVar1;
  uint uVar2;
  Director *this_00;
  TextureCache *this_01;
  Texture2D *pTVar3;
  ulong uVar4;
  
                    /* try { // try from 00f109ec to 01010a23 has its CatchHandler @ 00f109ec
                       catch() { ... } // from try @ 00f109ec with catch @ 00f109ec
                       catch() { ... } // from try @ 00f10a2c with catch @ 00f109ec
                       catch() { ... } // from try @ 00f10a54 with catch @ 00f109ec
                       catch() { ... } // from try @ 00f10ab0 with catch @ 00f109ec */
  this_00 = (Director *)Director::getInstance();
  this_01 = (TextureCache *)Director::getTextureCache(this_00);
  pTVar3 = (Texture2D *)TextureCache::addImage(this_01,param_2);
  uVar2 = (uint)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar2 = *(uint *)(param_1 + 8);
  }
  uVar4 = AtlasNode::initWithTexture((AtlasNode *)this,pTVar3,param_3,param_4,uVar2);
                    /* try { // try from 00f10a24 to 01010a2b has its CatchHandler @ 00f10b4c */
  bVar1 = (uVar4 & 1) != 0;
  if (bVar1) {
                    /* try { // try from 00f10a2c to 01010a4b has its CatchHandler @ 00f109ec */
    *(int *)(this + 0x408) = param_5;
    (**(code **)(*(long *)this + 0x558))(this,param_1);
  }
                    /* try { // try from 00f10a4c to 01010a53 has its CatchHandler @ 00f10b48 */
                    /* try { // try from 00f10a54 to 01010a73 has its CatchHandler @ 00f109ec */
  return bVar1;
}

