
/* cocos2d::Sprite3D::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

long cocos2d::Sprite3D::create(basic_string *param_1,basic_string *param_2)

{
  long lVar1;
  Director *this;
  TextureCache *this_00;
  Texture2D *pTVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
                    /* catch() { ... } // from try @ 00d3d1bc with catch @ 00d3d264 */
  lVar1 = create(param_1);
  if (lVar1 != 0) {
                    /* catch() { ... } // from try @ 00d3d1ac with catch @ 00d3d274 */
    this = (Director *)Director::getInstance();
                    /* catch() { ... } // from try @ 00d3d1dc with catch @ 00d3d278 */
    this_00 = (TextureCache *)Director::getTextureCache(this);
    pTVar2 = (Texture2D *)TextureCache::addImage(this_00,param_2);
    puVar4 = *(undefined8 **)(lVar1 + 0x358);
    for (puVar3 = *(undefined8 **)(lVar1 + 0x350); puVar3 != puVar4; puVar3 = puVar3 + 1) {
      Mesh::setTexture((Mesh *)*puVar3,pTVar2);
    }
  }
  return lVar1;
}

