
/* cocos2d::TextureCache::getInstance() */

void cocos2d::TextureCache::getInstance(void)

{
  Director *this;
  
  this = (Director *)Director::getInstance();
  Director::getTextureCache(this);
  return;
}

