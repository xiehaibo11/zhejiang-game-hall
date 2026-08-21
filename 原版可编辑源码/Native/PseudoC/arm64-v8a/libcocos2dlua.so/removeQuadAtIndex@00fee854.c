
/* cocos2d::TextureAtlas::removeQuadAtIndex(long) */

void __thiscall cocos2d::TextureAtlas::removeQuadAtIndex(TextureAtlas *this,long param_1)

{
  void *__dest;
  
  if (*(long *)(this + 0x40) + ~param_1 != 0) {
    __dest = (void *)(*(long *)(this + 0x58) + param_1 * 0x60);
    memmove(__dest,(void *)((long)__dest + 0x60),(*(long *)(this + 0x40) + ~param_1) * 0x60);
  }
  this[0x3c] = (TextureAtlas)0x1;
  *(long *)(this + 0x40) = *(long *)(this + 0x40) + -1;
  return;
}

