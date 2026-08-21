
/* cocos2d::AtlasNode::initWithTileFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int, int, int) */

void __thiscall
cocos2d::AtlasNode::initWithTileFile
          (AtlasNode *this,basic_string *param_1,int param_2,int param_3,int param_4)

{
  Director *this_00;
  TextureCache *this_01;
  Texture2D *pTVar1;
  
  this_00 = (Director *)Director::getInstance();
  this_01 = (TextureCache *)Director::getTextureCache(this_00);
  pTVar1 = (Texture2D *)TextureCache::addImage(this_01,param_1);
  initWithTexture(this,pTVar1,param_2,param_3,param_4);
  return;
}

