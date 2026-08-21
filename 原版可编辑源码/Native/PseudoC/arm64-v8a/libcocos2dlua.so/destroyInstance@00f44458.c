
/* cocos2d::SpriteFrameCache::destroyInstance() */

void cocos2d::SpriteFrameCache::destroyInstance(void)

{
  if (DAT_0178f8a8 != (Ref *)0x0) {
    Ref::release(DAT_0178f8a8);
    DAT_0178f8a8 = (Ref *)0x0;
  }
  return;
}

