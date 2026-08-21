
/* cocos2d::PUEventHandlerManager::Instance() */

undefined * cocos2d::PUEventHandlerManager::Instance(void)

{
  int iVar1;
  
  if (((DAT_0178f220 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0178f220), iVar1 != 0)) {
    PUEventHandlerManager((PUEventHandlerManager *)&DAT_0178f1e8);
    __cxa_atexit(~PUEventHandlerManager,&DAT_0178f1e8,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_0178f220);
  }
  return &DAT_0178f1e8;
}

