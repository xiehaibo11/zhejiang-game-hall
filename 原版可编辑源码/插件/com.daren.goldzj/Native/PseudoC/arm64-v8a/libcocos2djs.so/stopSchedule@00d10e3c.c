
/* spine::SkeletonRenderer::stopSchedule() */

void __thiscall spine::SkeletonRenderer::stopSchedule(SkeletonRenderer *this)

{
  MiddlewareManager *this_00;
  long lVar1;
  
  if (cocos2d::middleware::MiddlewareManager::_instance == (MiddlewareManager *)0x0) {
    this_00 = operator_new(0x50);
    cocos2d::middleware::MiddlewareManager::MiddlewareManager(this_00);
    cocos2d::middleware::MiddlewareManager::_instance = this_00;
  }
  cocos2d::middleware::MiddlewareManager::removeTimer
            (cocos2d::middleware::MiddlewareManager::_instance,(IMiddleware *)(this + 0x10));
  lVar1 = *(long *)(this + 0x90);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    memset(*(void **)(*(long *)(this + 0x90) + 8),0,*(size_t *)(*(long *)(this + 0x90) + 0x10));
    return;
  }
  return;
}

