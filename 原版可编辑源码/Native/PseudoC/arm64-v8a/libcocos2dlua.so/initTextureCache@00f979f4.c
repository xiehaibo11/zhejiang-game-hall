
/* cocos2d::Director::initTextureCache() */

void __thiscall cocos2d::Director::initTextureCache(Director *this)

{
  TextureCache *this_00;
  
  this_00 = operator_new(0x170,(nothrow_t *)&std::nothrow);
  if (this_00 != (TextureCache *)0x0) {
    TextureCache::TextureCache(this_00);
  }
  *(TextureCache **)(this + 0x110) = this_00;
  return;
}

