
/* cocos2d::TextureAtlas::moveQuadsFromIndex(long, long, long) */

void __thiscall
cocos2d::TextureAtlas::moveQuadsFromIndex(TextureAtlas *this,long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  void *__dest;
  size_t __size;
  long lVar3;
  
  if (param_1 - param_3 != 0) {
    __size = param_2 * 0x60;
    __dest = malloc(__size);
    lVar3 = *(long *)(this + 0x58);
    memcpy(__dest,(void *)(lVar3 + param_1 * 0x60),__size);
    lVar1 = param_3 - param_1;
    lVar2 = param_1;
    if (param_3 < param_1) {
      lVar2 = param_3;
      lVar1 = param_1 - param_3;
    }
    memmove((void *)(lVar3 + lVar2 * 0x60),(void *)(lVar3 + (lVar2 + param_2) * 0x60),lVar1 * 0x60);
    memcpy((void *)(*(long *)(this + 0x58) + param_3 * 0x60),__dest,__size);
    free(__dest);
    this[0x3c] = (TextureAtlas)0x1;
  }
  return;
}

