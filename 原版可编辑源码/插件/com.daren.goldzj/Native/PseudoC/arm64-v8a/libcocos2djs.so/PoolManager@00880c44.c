
/* cocos2d::PoolManager::PoolManager() */

void __thiscall cocos2d::PoolManager::PoolManager(PoolManager *this)

{
  void *pvVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  pvVar1 = operator_new(0x50);
  *(void **)(this + 8) = pvVar1;
  *(void **)this = pvVar1;
  *(long *)(this + 0x10) = (long)pvVar1 + 0x50;
  return;
}

