
/* cocos2d::PUEmitterManager::Instance() */

undefined * cocos2d::PUEmitterManager::Instance(void)

{
  int iVar1;
  
  if (((DAT_01788ec0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01788ec0), iVar1 != 0)) {
                    /* try { // try from 00e33af0 to 00f33b43 has its CatchHandler @ 00e33af0
                       catch() { ... } // from try @ 00e33af0 with catch @ 00e33af0
                       catch() { ... } // from try @ 00e33c0c with catch @ 00e33af0 */
    PUEmitterManager((PUEmitterManager *)&DAT_01788e80);
    __cxa_atexit(~PUEmitterManager,&DAT_01788e80,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_01788ec0);
  }
  return &DAT_01788e80;
}

