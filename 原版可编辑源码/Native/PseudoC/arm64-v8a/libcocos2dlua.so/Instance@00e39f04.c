
/* cocos2d::PUObserverManager::Instance() */

undefined * cocos2d::PUObserverManager::Instance(void)

{
  int iVar1;
  
  if (((DAT_01788f98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01788f98), iVar1 != 0)) {
    PUObserverManager((PUObserverManager *)&DAT_01788f40);
    __cxa_atexit(~PUObserverManager,&DAT_01788f40,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_01788f98);
  }
  return &DAT_01788f40;
}

