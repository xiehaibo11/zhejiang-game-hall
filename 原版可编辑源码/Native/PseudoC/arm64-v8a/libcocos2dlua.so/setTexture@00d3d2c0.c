
/* cocos2d::Sprite3D::setTexture(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::Sprite3D::setTexture(Sprite3D *this,basic_string *param_1)

{
  Director *this_00;
  TextureCache *this_01;
  Texture2D *pTVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  this_00 = (Director *)Director::getInstance();
  this_01 = (TextureCache *)Director::getTextureCache(this_00);
  pTVar1 = (Texture2D *)TextureCache::addImage(this_01,param_1);
  puVar2 = *(undefined8 **)(this + 0x358);
  for (puVar3 = *(undefined8 **)(this + 0x350); puVar3 != puVar2; puVar3 = puVar3 + 1) {
    Mesh::setTexture((Mesh *)*puVar3,pTVar1);
  }
  return;
}

