
/* dragonBones::CCArmatureCacheDisplay::CCArmatureCacheDisplay(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool) */

void __thiscall
dragonBones::CCArmatureCacheDisplay::CCArmatureCacheDisplay
          (CCArmatureCacheDisplay *this,basic_string *param_1,basic_string *param_2,
          basic_string *param_3,bool param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  EventObject *pEVar3;
  Ref *this_00;
  ArmatureCache *this_01;
  MiddlewareManager *this_02;
  
  cocos2d::Ref::Ref((Ref *)this);
  *(undefined ***)(this + 0x10) = &PTR__CCArmatureCacheDisplay_01c91b80;
  *(undefined ***)this = &PTR__CCArmatureCacheDisplay_01c91b48;
  *(undefined8 *)(this + 0x18) = 0xffffffff3f800000;
  this[0x2c] = (CCArmatureCacheDisplay)0x1;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  this[0x31] = (CCArmatureCacheDisplay)0x0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(CCArmatureCacheDisplay **)(this + 0x58) = this + 0x60;
  uVar2 = cocos2d::Color4F::WHITE._8_8_;
  uVar1 = cocos2d::Color4F::WHITE._0_8_;
  *(undefined2 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0x78) = uVar2;
  *(undefined8 *)(this + 0x70) = uVar1;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  pEVar3 = BaseObject::borrowObject<dragonBones::EventObject>();
  *(EventObject **)(this + 0xe0) = pEVar3;
  if (param_4) {
    if (ArmatureCacheMgr::_instance == (ArmatureCacheMgr *)0x0) {
      ArmatureCacheMgr::_instance = operator_new(0x28);
      *(undefined8 *)(ArmatureCacheMgr::_instance + 0x20) = 0;
      *(undefined8 *)(ArmatureCacheMgr::_instance + 8) = 0;
      *(undefined8 *)ArmatureCacheMgr::_instance = 0;
      *(undefined8 *)(ArmatureCacheMgr::_instance + 0x18) = 0;
      *(undefined8 *)(ArmatureCacheMgr::_instance + 0x10) = 0;
      *(undefined4 *)(ArmatureCacheMgr::_instance + 0x20) = 0x3f800000;
    }
    this_00 = (Ref *)ArmatureCacheMgr::buildArmatureCache
                               (ArmatureCacheMgr::_instance,param_1,param_2,param_3);
    *(Ref **)(this + 0xd8) = this_00;
    cocos2d::Ref::retain(this_00);
  }
  else {
    this_01 = operator_new(0x90);
    ArmatureCache::ArmatureCache(this_01,param_1,param_2,param_3);
    *(ArmatureCache **)(this + 0xd8) = this_01;
    cocos2d::Ref::retain((Ref *)this_01);
    cocos2d::Ref::autorelease(*(Ref **)(this + 0xd8));
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

