
/* cocos2d::TextureAtlas::initWithFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, long) */

void __thiscall
cocos2d::TextureAtlas::initWithFile(TextureAtlas *this,basic_string *param_1,long param_2)

{
  Director *this_00;
  TextureCache *this_01;
  Texture2D *pTVar1;
  
  this_00 = (Director *)Director::getInstance();
  this_01 = (TextureCache *)Director::getTextureCache(this_00);
  pTVar1 = (Texture2D *)TextureCache::addImage(this_01,param_1);
  if (pTVar1 != (Texture2D *)0x0) {
    initWithTexture(this,pTVar1,param_2);
    return;
  }
  return;
}

