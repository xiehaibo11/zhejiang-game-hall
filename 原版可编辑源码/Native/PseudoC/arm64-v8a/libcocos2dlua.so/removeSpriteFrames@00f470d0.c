
/* cocos2d::SpriteFrameCache::removeSpriteFrames() */

void __thiscall cocos2d::SpriteFrameCache::removeSpriteFrames(SpriteFrameCache *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  
  if (*(long *)(this + 0x40) != 0) {
    puVar1 = *(void **)(this + 0x38);
    while (puVar1 != (void *)0x0) {
      pvVar4 = (void *)*puVar1;
      cocos2d::Value::~Value((Value *)(puVar1 + 5));
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
      operator_delete(puVar1);
      puVar1 = pvVar4;
    }
    lVar2 = *(long *)(this + 0x30);
    *(undefined8 *)(this + 0x38) = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x28) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(this + 0x40) = 0;
  }
  PlistFramesCache::clear((PlistFramesCache *)(this + 0x50));
  return;
}

