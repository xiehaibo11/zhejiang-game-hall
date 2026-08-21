
/* cocos2d::BatchMesh::setTexture(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::NTextureData::Usage) */

void __thiscall
cocos2d::BatchMesh::setTexture(BatchMesh *this,basic_string *param_1,undefined4 param_3)

{
  Director *this_00;
  TextureCache *this_01;
  undefined8 uVar1;
  
  this_00 = (Director *)Director::getInstance();
  this_01 = (TextureCache *)Director::getTextureCache(this_00);
  uVar1 = TextureCache::addImage(this_01,param_1);
  setTexture(this,uVar1,param_3);
  return;
}

