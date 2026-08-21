
/* spine::SkeletonCacheAnimation::destroy() */

void __thiscall spine::SkeletonCacheAnimation::destroy(SkeletonCacheAnimation *this)

{
  MiddlewareManager *this_00;
  ulong uVar1;
  byte *pbVar2;
  
  if (cocos2d::middleware::MiddlewareManager::_instance == (MiddlewareManager *)0x0) {
    this_00 = operator_new(0x50);
    cocos2d::middleware::MiddlewareManager::MiddlewareManager(this_00);
    cocos2d::middleware::MiddlewareManager::_instance = this_00;
  }
  cocos2d::middleware::MiddlewareManager::removeTimer
            (cocos2d::middleware::MiddlewareManager::_instance,(IMiddleware *)(this + 0x10));
  if (*(Ref **)(this + 0xe0) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0xe0));
    *(undefined8 *)(this + 0xe0) = 0;
  }
  while (*(long *)(this + 0x150) != 0) {
    uVar1 = *(ulong *)(this + 0x148);
    pbVar2 = *(byte **)(*(long *)((long)*(undefined8 **)(this + 0x130) +
                                 (uVar1 >> 6 & 0x3fffffffffffff8)) + (uVar1 & 0x1ff) * 8);
    *(ulong *)(this + 0x148) = uVar1 + 1;
    *(long *)(this + 0x150) = *(long *)(this + 0x150) + -1;
    if (0x3ff < uVar1 + 1) {
      operator_delete((void *)**(undefined8 **)(this + 0x130));
      *(long *)(this + 0x130) = *(long *)(this + 0x130) + 8;
      *(long *)(this + 0x148) = *(long *)(this + 0x148) + -0x200;
    }
    if (pbVar2 != (byte *)0x0) {
      if ((*pbVar2 & 1) != 0) {
        operator_delete(*(void **)(pbVar2 + 0x10));
      }
      operator_delete(pbVar2);
    }
  }
  if (*(Ref **)(this + 0x160) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x160));
    *(undefined8 *)(this + 0x160) = 0;
  }
  if (*(Ref **)(this + 0x38) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x38));
    *(undefined8 *)(this + 0x38) = 0;
  }
  if (*(Ref **)(this + 0x40) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x40));
    *(undefined8 *)(this + 0x40) = 0;
  }
  return;
}

