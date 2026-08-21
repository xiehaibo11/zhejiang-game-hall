
/* cocos2d::TextureCache::sharedTextureCache() */

void cocos2d::TextureCache::sharedTextureCache(void)

{
  Director *this;
  
                    /* try { // try from 00fef3f4 to 010ef433 has its CatchHandler @ 00fef490 */
  this = (Director *)Director::getInstance();
  Director::getTextureCache(this);
  return;
}

