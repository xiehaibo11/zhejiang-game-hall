
/* cocos2d::extension::AssetsManager::downloadAndUncompress() */

void __thiscall cocos2d::extension::AssetsManager::downloadAndUncompress(AssetsManager *this)

{
  long lVar1;
  int iVar2;
  __thread_struct *this_00;
  undefined8 *__arg;
  thread atStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = operator_new(8);
  std::__ndk1::__thread_struct::__thread_struct(this_00);
                    /* try { // try from 00df71ec to 00ef71f3 has its CatchHandler @ 00df71f8 */
  __arg = operator_new(0x10);
                    /* try { // try from 00df71f4 to 00ef7243 has its CatchHandler @ 00df70ac */
                    /* catch() { ... } // from try @ 00df71ec with catch @ 00df71f8 */
  *__arg = this_00;
  __arg[1] = this;
  iVar2 = pthread_create((pthread_t *)atStack_40,(pthread_attr_t *)0x0,FUN_00df9354,__arg);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__throw_system_error(iVar2,"thread constructor failed");
  }
  std::__ndk1::thread::detach(atStack_40);
  std::__ndk1::thread::~thread(atStack_40);
                    /* catch() { ... } // from try @ 00df70e0 with catch @ 00df7228 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00df7244 to 00ef733b has its CatchHandler @ 00df7244
                       catch() { ... } // from try @ 00df7244 with catch @ 00df7244
                       catch() { ... } // from try @ 00df734c with catch @ 00df7244 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

