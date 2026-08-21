
/* spine::SkeletonCacheAnimation::SkeletonCacheAnimation(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool) */

void __thiscall
spine::SkeletonCacheAnimation::SkeletonCacheAnimation
          (SkeletonCacheAnimation *this,basic_string *param_1,bool param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Ref *this_00;
  SkeletonCache *this_01;
  MiddlewareManager *this_02;
  SkeletonCacheAnimation *pSVar3;
  
  cocos2d::Ref::Ref((Ref *)this);
  *(undefined ***)(this + 0x10) = &PTR__SkeletonCacheAnimation_01c8fe98;
  *(undefined ***)this = &PTR__SkeletonCacheAnimation_01c8fe60;
  *(undefined4 *)(this + 0x18) = 0x3f800000;
  *(undefined2 *)(this + 0x1c) = 0;
  uVar2 = cocos2d::Color4F::WHITE._8_8_;
  uVar1 = cocos2d::Color4F::WHITE._0_8_;
  pSVar3 = this + 0xe0;
  *(undefined8 *)pSVar3 = 0;
  *(undefined8 *)(this + 0x28) = uVar2;
  *(undefined8 *)(this + 0x20) = uVar1;
  this[0x30] = (SkeletonCacheAnimation)0x0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0xffffffff;
  *(undefined8 *)(this + 0xf8) = 0;
  this[0x100] = (SkeletonCacheAnimation)0x1;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  this[0x109] = (SkeletonCacheAnimation)0x0;
  this[0x120] = (SkeletonCacheAnimation)0x0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  if (param_2) {
    if (SkeletonCacheMgr::_instance == (SkeletonCacheMgr *)0x0) {
      SkeletonCacheMgr::_instance = operator_new(0x28);
      *(undefined8 *)(SkeletonCacheMgr::_instance + 0x20) = 0;
      *(undefined8 *)(SkeletonCacheMgr::_instance + 8) = 0;
      *(undefined8 *)SkeletonCacheMgr::_instance = 0;
      *(undefined8 *)(SkeletonCacheMgr::_instance + 0x18) = 0;
      *(undefined8 *)(SkeletonCacheMgr::_instance + 0x10) = 0;
      *(undefined4 *)(SkeletonCacheMgr::_instance + 0x20) = 0x3f800000;
    }
    this_00 = (Ref *)SkeletonCacheMgr::buildSkeletonCache(SkeletonCacheMgr::_instance,param_1);
    *(Ref **)pSVar3 = this_00;
    cocos2d::Ref::retain(this_00);
  }
  else {
    this_01 = operator_new(0x210);
    SkeletonCache::SkeletonCache(this_01);
    *(SkeletonCache **)pSVar3 = this_01;
    SkeletonRenderer::initWithUUID((SkeletonRenderer *)this_01,param_1);
    cocos2d::Ref::retain(*(Ref **)pSVar3);
    cocos2d::Ref::autorelease(*(Ref **)pSVar3);
  }
  if (cocos2d::middleware::MiddlewareManager::_instance == (MiddlewareManager *)0x0) {
    this_02 = operator_new(0x50);
    cocos2d::middleware::MiddlewareManager::MiddlewareManager(this_02);
    cocos2d::middleware::MiddlewareManager::_instance = this_02;
  }
  cocos2d::middleware::MiddlewareManager::addTimer
            (cocos2d::middleware::MiddlewareManager::_instance,(IMiddleware *)(this + 0x10));
  return;
}

