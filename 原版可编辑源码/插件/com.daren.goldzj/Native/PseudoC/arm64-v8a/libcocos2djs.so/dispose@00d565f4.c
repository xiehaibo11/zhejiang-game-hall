
/* dragonBones::CCArmatureCacheDisplay::dispose() */

void __thiscall dragonBones::CCArmatureCacheDisplay::dispose(CCArmatureCacheDisplay *this)

{
  MiddlewareManager *this_00;
  
  if (*(Ref **)(this + 0xd8) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0xd8));
    *(undefined8 *)(this + 0xd8) = 0;
  }
  if (*(BaseObject **)(this + 0xe0) != (BaseObject *)0x0) {
    BaseObject::returnToPool(*(BaseObject **)(this + 0xe0));
    *(undefined8 *)(this + 0xe0) = 0;
  }
  if (*(Ref **)(this + 0xe8) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0xe8));
    *(undefined8 *)(this + 0xe8) = 0;
  }
  if (*(Ref **)(this + 0xc0) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0xc0));
    *(undefined8 *)(this + 0xc0) = 0;
  }
  if (*(Ref **)(this + 200) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 200));
    *(undefined8 *)(this + 200) = 0;
  }
  if (cocos2d::middleware::MiddlewareManager::_instance == (MiddlewareManager *)0x0) {
    this_00 = operator_new(0x50);
    cocos2d::middleware::MiddlewareManager::MiddlewareManager(this_00);
    cocos2d::middleware::MiddlewareManager::_instance = this_00;
  }
  cocos2d::middleware::MiddlewareManager::removeTimer
            (cocos2d::middleware::MiddlewareManager::_instance,(IMiddleware *)(this + 0x10));
  return;
}

