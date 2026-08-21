
/* cocos2d::SpriteFrame::getTexture() */

long __thiscall cocos2d::SpriteFrame::getTexture(SpriteFrame *this)

{
  basic_string bVar1;
  Director *this_00;
  TextureCache *this_01;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x90);
  if (lVar2 == 0) {
    bVar1 = *(basic_string *)(this + 0x98);
    if (((byte)bVar1 & 1) == 0) {
      if ((byte)bVar1 >> 1 != 0) {
LAB_00f442d4:
        this_00 = (Director *)Director::getInstance();
        this_01 = (TextureCache *)Director::getTextureCache(this_00);
        lVar2 = TextureCache::addImage(this_01,(basic_string *)(this + 0x98));
        return lVar2;
      }
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
      if (*(long *)(this + 0xa0) != 0) goto LAB_00f442d4;
    }
  }
  return lVar2;
}

