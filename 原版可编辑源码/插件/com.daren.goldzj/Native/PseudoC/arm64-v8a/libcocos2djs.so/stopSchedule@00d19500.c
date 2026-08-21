
/* spine::SkeletonCacheAnimation::stopSchedule() */

void __thiscall spine::SkeletonCacheAnimation::stopSchedule(SkeletonCacheAnimation *this)

{
  MiddlewareManager *this_00;
  
  if (cocos2d::middleware::MiddlewareManager::_instance == (MiddlewareManager *)0x0) {
    this_00 = operator_new(0x50);
    cocos2d::middleware::MiddlewareManager::MiddlewareManager(this_00);
    cocos2d::middleware::MiddlewareManager::_instance = this_00;
  }
  cocos2d::middleware::MiddlewareManager::removeTimer
            (cocos2d::middleware::MiddlewareManager::_instance,(IMiddleware *)(this + 0x10));
  return;
}

