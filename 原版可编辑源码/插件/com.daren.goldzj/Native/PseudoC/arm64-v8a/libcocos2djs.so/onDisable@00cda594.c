
/* cocos2d::ParticleSimulator::onDisable() */

void __thiscall cocos2d::ParticleSimulator::onDisable(ParticleSimulator *this)

{
  MiddlewareManager *this_00;
  
  if (middleware::MiddlewareManager::_instance == (MiddlewareManager *)0x0) {
    this_00 = operator_new(0x50);
    middleware::MiddlewareManager::MiddlewareManager(this_00);
    middleware::MiddlewareManager::_instance = this_00;
  }
  middleware::MiddlewareManager::removeTimer
            (middleware::MiddlewareManager::_instance,(IMiddleware *)(this + 0x10));
  return;
}

