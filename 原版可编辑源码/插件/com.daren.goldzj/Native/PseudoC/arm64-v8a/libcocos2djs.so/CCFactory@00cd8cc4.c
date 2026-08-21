
/* dragonBones::CCFactory::CCFactory() */

void __thiscall dragonBones::CCFactory::CCFactory(CCFactory *this)

{
  Ref *pRVar1;
  DragonBones *this_00;
  MiddlewareManager *this_01;
  
  this[8] = (CCFactory)0x0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(CCFactory **)(this + 0x10) = this + 0x18;
  *(undefined8 *)(this + 0x30) = 0;
  *(CCFactory **)(this + 0x28) = this + 0x30;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 **)(this + 0x48) = &BaseFactory::_jsonParser;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)(this + 0x50) = &PTR__CCFactory_01c91900;
  *(undefined ***)this = &PTR__CCFactory_01c917e8;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  if (_dragonBonesInstance == (DragonBones *)0x0) {
    pRVar1 = (Ref *)CCArmatureDisplay::create();
    cocos2d::Ref::retain(pRVar1);
    this_00 = operator_new(0x48);
    if (pRVar1 == (Ref *)0x0) {
      pRVar1 = (Ref *)0x0;
    }
    else {
      pRVar1 = pRVar1 + *(long *)(*(long *)pRVar1 + -0x18);
    }
    DragonBones::DragonBones(this_00,(IEventDispatcher *)pRVar1);
    _dragonBonesInstance = this_00;
    if (cocos2d::middleware::MiddlewareManager::_instance == (MiddlewareManager *)0x0) {
      this_01 = operator_new(0x50);
      cocos2d::middleware::MiddlewareManager::MiddlewareManager(this_01);
      cocos2d::middleware::MiddlewareManager::_instance = this_01;
    }
    cocos2d::middleware::MiddlewareManager::addTimer
              (cocos2d::middleware::MiddlewareManager::_instance,(IMiddleware *)(this + 0x50));
  }
  *(DragonBones **)(this + 0x40) = _dragonBonesInstance;
  return;
}

