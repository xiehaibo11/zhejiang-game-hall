
void FUN_00c93bfc(void)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  MiddlewareManager *this;
  long *plVar4;
  undefined8 *__dest;
  long *plVar5;
  size_t __n;
  undefined8 *puVar6;
  
  plVar4 = dragonBones::CCFactory::_factory;
  if (dragonBones::CCFactory::_factory != (long *)0x0) {
    dragonBones::DragonBones::checkInPool = 0;
    if (cocos2d::middleware::MiddlewareManager::_instance == (MiddlewareManager *)0x0) {
      this = operator_new(0x50);
      cocos2d::middleware::MiddlewareManager::MiddlewareManager(this);
      cocos2d::middleware::MiddlewareManager::_instance = this;
    }
    cocos2d::middleware::MiddlewareManager::removeTimer
              (cocos2d::middleware::MiddlewareManager::_instance,(IMiddleware *)(plVar4 + 10));
    plVar4 = (long *)dragonBones::BaseObject::getAllObjects();
    uVar3 = plVar4[1] - *plVar4;
    if (uVar3 == 0) {
      __dest = (undefined8 *)0x0;
      puVar6 = (undefined8 *)0x0;
    }
    else {
      if ((ulong)((long)uVar3 >> 3) >> 0x3d != 0) {
LAB_00c93dfc:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      __dest = operator_new(uVar3);
      __n = plVar4[1] - *plVar4;
      puVar6 = __dest;
      if (0 < (long)__n) {
        memcpy(__dest,(void *)*plVar4,__n);
        puVar6 = (undefined8 *)((long)__dest + __n);
      }
    }
    __android_log_print(3,"jswrapper",&DAT_01927885,(ulong)((long)puVar6 - (long)__dest) >> 3);
    for (puVar1 = __dest; puVar1 != puVar6; puVar1 = puVar1 + 1) {
      if (((BaseObject *)*puVar1)[0xc] == (BaseObject)0x0) {
        dragonBones::BaseObject::returnToPool((BaseObject *)*puVar1);
      }
    }
    dragonBones::BaseObject::clearPool(0);
    if (dragonBones::CCFactory::_dragonBonesInstance != (long *)0x0) {
      (**(code **)(*dragonBones::CCFactory::_dragonBonesInstance + 8))();
      dragonBones::CCFactory::_dragonBonesInstance = (long *)0x0;
    }
    if (dragonBones::CCFactory::_factory != (long *)0x0) {
      (**(code **)(*dragonBones::CCFactory::_factory + 8))();
      dragonBones::CCFactory::_factory = (long *)0x0;
    }
    dragonBones::DragonBones::checkInPool = 1;
    plVar5 = (long *)dragonBones::BaseObject::getAllObjects();
    __android_log_print(3,"jswrapper",&DAT_019278b8,(ulong)(plVar5[1] - *plVar5) >> 3);
    plVar4 = (long *)*plVar5;
    plVar2 = (long *)plVar5[1];
    if (plVar4 != plVar2) {
      do {
        if ((long *)*plVar4 == (long *)0x0) {
          __cxa_bad_typeid();
          goto LAB_00c93dfc;
        }
        __android_log_print(3,"jswrapper","Leak dragonbones object: %s, %p\n",
                            *(undefined8 *)(*(long *)(*(long *)*plVar4 + -8) + 8));
        plVar4 = plVar4 + 1;
      } while (plVar2 != plVar4);
      plVar4 = (long *)*plVar5;
    }
    plVar5[1] = (long)plVar4;
    if (__dest != (undefined8 *)0x0) {
      operator_delete(__dest);
      return;
    }
  }
  return;
}

