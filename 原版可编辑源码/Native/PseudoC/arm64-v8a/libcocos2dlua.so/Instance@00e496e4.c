
/* cocos2d::PUTranslateManager::Instance() */

undefined * cocos2d::PUTranslateManager::Instance(void)

{
  int iVar1;
  
  if (((DAT_0178eef0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0178eef0), iVar1 != 0)) {
    PUTranslateManager((PUTranslateManager *)&DAT_0178ee50);
    __cxa_atexit(~PUTranslateManager,&DAT_0178ee50,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_0178eef0);
  }
  return &DAT_0178ee50;
}

