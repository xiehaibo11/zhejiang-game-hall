
void FUN_00f9639c(void)

{
  Director *this;
  TextureCache *this_00;
  
  this = (Director *)cocos2d::Director::getInstance();
  this_00 = (TextureCache *)cocos2d::Director::getTextureCache(this);
  cocos2d::TextureCache::removeAllTextures(this_00);
  return;
}

