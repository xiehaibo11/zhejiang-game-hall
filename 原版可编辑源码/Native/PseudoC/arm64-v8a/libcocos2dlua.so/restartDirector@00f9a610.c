
/* cocos2d::Director::restartDirector() */

void __thiscall cocos2d::Director::restartDirector(Director *this)

{
  long lVar1;
  TextureCache *this_00;
  PoolManager *this_01;
  AutoreleasePool *this_02;
  undefined8 uVar2;
  pthread_t pVar3;
  long *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined **local_70;
  void *local_68;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  reset(this);
  RenderState::initialize();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f9a570 with catch @ 00f9a648
                        */
  this_00 = operator_new(0x170,(nothrow_t *)&std::nothrow);
  if (this_00 != (TextureCache *)0x0) {
    TextureCache::TextureCache(this_00);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f9a528 with catch @ 00f9a65c
                        */
  *(TextureCache **)(this + 0x110) = this_00;
  local_68 = *(void **)(this + 0xa8);
  local_70 = &PTR_FUN_01722d30;
  local_50 = (long *)&local_70;
  Scheduler::schedulePerFrame
            (*(Scheduler **)(this + 0xa0),(function *)&local_70,local_68,-0x80000000,false);
                    /* try { // try from 00f9a694 to 0109a6df has its CatchHandler @ 00f9a694
                       catch() { ... } // from try @ 00f9a694 with catch @ 00f9a694
                       catch() { ... } // from try @ 00f9a6e8 with catch @ 00f9a694 */
  if (&local_70 == (undefined ***)local_50) {
    pcVar6 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00f9a6bc;
    pcVar6 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar6)();
LAB_00f9a6bc:
  this_01 = (PoolManager *)PoolManager::getInstance();
  this_02 = (AutoreleasePool *)PoolManager::getCurrentPool(this_01);
  AutoreleasePool::clear(this_02);
  uVar2 = std::__ndk1::chrono::steady_clock::now();
  *(undefined8 *)(this + 0x188) = uVar2;
  this[0x1d0] = (Director)0x0;
  pVar3 = pthread_self();
  *(pthread_t *)(this + 0x1c8) = pVar3;
  plVar4 = (long *)Application::getInstance();
                    /* try { // try from 00f9a6e0 to 0109a6e7 has its CatchHandler @ 00f9a720 */
                    /* try { // try from 00f9a6e8 to 0109a733 has its CatchHandler @ 00f9a694 */
  (**(code **)(*plVar4 + 0x28))(*(undefined4 *)(this + 0x118));
  this[400] = (Director)0x1;
  local_70 = (undefined **)CONCAT44(local_70._4_4_,0xb);
  local_68 = (void *)0x0;
  puVar5 = (undefined8 *)ScriptEngineManager::getInstance();
  (**(code **)(*(long *)*puVar5 + 0x78))((long *)*puVar5,&local_70);
                    /* catch() { ... } // from try @ 00f9a6e0 with catch @ 00f9a720 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00f9a734 to 0109a757 has its CatchHandler @ 00f9a734
                       catch() { ... } // from try @ 00f9a734 with catch @ 00f9a734
                       catch() { ... } // from try @ 00f9a7b4 with catch @ 00f9a734 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

