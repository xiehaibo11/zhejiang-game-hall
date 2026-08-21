
/* cocos2d::Director::purgeCachedData() */

void __thiscall cocos2d::Director::purgeCachedData(Director *this)

{
  void *pvVar1;
  long lVar2;
  SpriteFrameCache *this_00;
  long *plVar3;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  FontFNT::purgeCachedData();
  FontAtlasCache::purgeCachedData();
  if (*(long *)(DAT_0178fc40 + 0x108) != 0) {
    this_00 = (SpriteFrameCache *)SpriteFrameCache::getInstance();
                    /* catch() { ... } // from try @ 00f99a80 with catch @ 00f99b18 */
    SpriteFrameCache::removeUnusedSpriteFrames(this_00);
    TextureCache::removeUnusedTextures(*(TextureCache **)(this + 0x110));
    TextureCache::getCachedTextureInfo();
    pvVar1 = (void *)((ulong)local_40 | 1);
    if ((local_40[0] & 1) != 0) {
      pvVar1 = local_30;
    }
                    /* catch() { ... } // from try @ 00f99b88 with catch @ 00f99b50 */
    log("%s\n",pvVar1);
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  plVar3 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar3 + 0x10))();
                    /* try { // try from 00f99b80 to 01099b87 has its CatchHandler @ 00f99b9c */
  if (*(long *)(lVar2 + 0x28) == local_28) {
                    /* try { // try from 00f99b88 to 01099bb7 has its CatchHandler @ 00f99b50 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

