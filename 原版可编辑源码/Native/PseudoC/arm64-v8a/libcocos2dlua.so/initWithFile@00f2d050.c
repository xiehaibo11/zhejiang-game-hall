
/* cocos2d::ParticleBatchNode::initWithFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int) */

undefined8 __thiscall
cocos2d::ParticleBatchNode::initWithFile(ParticleBatchNode *this,basic_string *param_1,int param_2)

{
  Director *this_00;
  TextureCache *this_01;
  Texture2D *pTVar1;
  
  this_00 = (Director *)Director::getInstance();
  this_01 = (TextureCache *)Director::getTextureCache(this_00);
  pTVar1 = (Texture2D *)TextureCache::addImage(this_01,param_1);
                    /* try { // try from 00f2d07c to 0102d0bf has its CatchHandler @ 00f2d07c
                       catch() { ... } // from try @ 00f2d07c with catch @ 00f2d07c
                       catch() { ... } // from try @ 00f2d0e0 with catch @ 00f2d07c */
  initWithTexture(this,pTVar1,param_2);
  return 1;
}

