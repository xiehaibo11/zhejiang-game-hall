
/* cocos2d::TextureAtlas::moveQuadsFromIndex(long, long) */

void __thiscall
cocos2d::TextureAtlas::moveQuadsFromIndex(TextureAtlas *this,long param_1,long param_2)

{
  memmove((void *)(*(long *)(this + 0x58) + param_2 * 0x60),
          (void *)(*(long *)(this + 0x58) + param_1 * 0x60),
          (*(long *)(this + 0x40) - param_1) * 0x60);
  return;
}

