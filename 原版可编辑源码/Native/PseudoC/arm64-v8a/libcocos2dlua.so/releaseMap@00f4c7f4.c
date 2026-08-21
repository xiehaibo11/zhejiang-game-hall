
/* cocos2d::TMXLayer::releaseMap() */

void __thiscall cocos2d::TMXLayer::releaseMap(TMXLayer *this)

{
  if (*(void **)(this + 0x3f0) != (void *)0x0) {
    free(*(void **)(this + 0x3f0));
    *(undefined8 *)(this + 0x3f0) = 0;
  }
  if (*(_ccCArray **)(this + 0x3d0) != (_ccCArray *)0x0) {
    ccCArrayFree(*(_ccCArray **)(this + 0x3d0));
    *(undefined8 *)(this + 0x3d0) = 0;
  }
  return;
}

