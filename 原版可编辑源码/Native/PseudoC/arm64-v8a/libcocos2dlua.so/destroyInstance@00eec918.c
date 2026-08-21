
/* cocos2d::AnimationCache::destroyInstance() */

void cocos2d::AnimationCache::destroyInstance(void)

{
                    /* catch() { ... } // from try @ 00eec708 with catch @ 00eec918 */
  if (s_sharedAnimationCache != (Ref *)0x0) {
    Ref::release(s_sharedAnimationCache);
                    /* catch() { ... } // from try @ 00eec6f4 with catch @ 00eec938 */
    s_sharedAnimationCache = (Ref *)0x0;
  }
  return;
}

