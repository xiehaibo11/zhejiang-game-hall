
/* cocos2d::Director::destroyTextureCache() */

void __thiscall cocos2d::Director::destroyTextureCache(Director *this)

{
  if (*(TextureCache **)(this + 0x110) != (TextureCache *)0x0) {
    TextureCache::waitForQuit(*(TextureCache **)(this + 0x110));
    if (*(Ref **)(this + 0x110) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this + 0x110));
      *(undefined8 *)(this + 0x110) = 0;
    }
  }
  return;
}

