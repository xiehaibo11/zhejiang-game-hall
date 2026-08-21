
/* cocos2d::PUBehaviourManager::Instance() */

undefined * cocos2d::PUBehaviourManager::Instance(void)

{
  int iVar1;
  
  if (((DAT_0178f230 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0178f230), iVar1 != 0)) {
    PUSlaveBehaviourTranslator::PUSlaveBehaviourTranslator
              ((PUSlaveBehaviourTranslator *)&DAT_0178f228);
    __cxa_atexit(~PUBehaviourManager,&DAT_0178f228,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_0178f230);
  }
  return &DAT_0178f228;
}

