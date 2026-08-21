
/* cocos2d::network::HttpClient::dispatchResponseCallbacks() */

void __thiscall cocos2d::network::HttpClient::dispatchResponseCallbacks(HttpClient *this)

{
  mutex *this_00;
  undefined8 *__dest;
  size_t __n;
  long lVar1;
  long *plVar2;
  Ref *this_01;
  Ref *this_02;
  Ref *local_68;
  HttpClient *pHStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this_00 = (mutex *)(this + 0x120);
  std::__ndk1::mutex::lock(this_00);
  __dest = *(undefined8 **)(this + 0x108);
                    /* try { // try from 009aa9e4 to 00aaa9fb has its CatchHandler @ 009aac4c */
  if (__dest == *(undefined8 **)(this + 0x110)) {
    std::__ndk1::mutex::unlock(this_00);
  }
  else {
    this_01 = (Ref *)*__dest;
    Ref::release(this_01);
    __n = *(long *)(this + 0x110) - (long)(__dest + 1);
                    /* try { // try from 009aaa04 to 00aaaa0f has its CatchHandler @ 009aac48 */
    if (__n != 0) {
                    /* try { // try from 009aaa10 to 00aaaa1b has its CatchHandler @ 009aac44 */
      memmove(__dest,__dest + 1,__n);
    }
                    /* try { // try from 009aaa1c to 00aaabcf has its CatchHandler @ 009aac5c */
    *(undefined8 **)(this + 0x110) = __dest + ((long)__n >> 3);
    std::__ndk1::mutex::unlock(this_00);
    if (this_01 != (Ref *)0x0) {
      this_02 = *(Ref **)(this_01 + 0x10);
      plVar2 = *(long **)(this_02 + 0x80);
      if (plVar2 != (long *)0x0) {
        local_68 = this_01;
        pHStack_60 = this;
        (**(code **)(*plVar2 + 0x30))(plVar2,&pHStack_60,&local_68);
      }
      Ref::release(this_01);
      Ref::release(this_02);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

