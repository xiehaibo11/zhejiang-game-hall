
/* cocos2d::PUAffectorManager::Instance() */

undefined * cocos2d::PUAffectorManager::Instance(void)

{
  int iVar1;
  
  if (((DAT_01788ce0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01788ce0), iVar1 != 0)) {
    PUAffectorManager((PUAffectorManager *)&DAT_01788c10);
    __cxa_atexit(~PUAffectorManager,&DAT_01788c10,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_01788ce0);
  }
  return &DAT_01788c10;
}

