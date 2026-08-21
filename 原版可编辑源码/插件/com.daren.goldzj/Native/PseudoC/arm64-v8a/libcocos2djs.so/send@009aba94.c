
/* cocos2d::network::HttpClient::send(cocos2d::network::HttpRequest*) */

void __thiscall cocos2d::network::HttpClient::send(HttpClient *this,HttpRequest *param_1)

{
  long lVar1;
  mutex *this_00;
  Ref *local_60;
  undefined8 uStack_58;
  HttpClient *local_50;
  thread atStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[8] == (HttpClient)0x0) {
    uStack_58 = 0;
    local_60 = (Ref *)networkThread;
    local_50 = this;
                    /* try { // try from 009abaec to 00aabbcf has its CatchHandler @ 009ab98c */
    FUN_009ab9c8(atStack_40,&local_60);
    std::__ndk1::thread::detach(atStack_40);
    this[8] = (HttpClient)0x1;
    std::__ndk1::thread::~thread(atStack_40);
  }
  if (param_1 != (HttpRequest *)0x0) {
    Ref::retain((Ref *)param_1);
    std::__ndk1::mutex::lock((mutex *)(this + 0xe0));
    local_60 = (Ref *)param_1;
    if (*(undefined8 **)(this + 0xd0) == *(undefined8 **)(this + 0xd8)) {
      std::__ndk1::
      vector<cocos2d::network::HttpRequest*,std::__ndk1::allocator<cocos2d::network::HttpRequest*>>
      ::__push_back_slow_path<cocos2d::network::HttpRequest*const&>
                ((vector<cocos2d::network::HttpRequest*,std::__ndk1::allocator<cocos2d::network::HttpRequest*>>
                  *)(this + 200),(HttpRequest **)&local_60);
    }
    else {
      **(undefined8 **)(this + 0xd0) = param_1;
      *(long *)(this + 0xd0) = *(long *)(this + 0xd0) + 8;
    }
    Ref::retain(local_60);
    std::__ndk1::mutex::unlock((mutex *)(this + 0xe0));
                    /* catch() { ... } // from try @ 009aba0c with catch @ 009abb60 */
    this_00 = *(mutex **)(this + 0x200);
                    /* catch() { ... } // from try @ 009aba00 with catch @ 009abb64 */
                    /* catch() { ... } // from try @ 009ab9e0 with catch @ 009abb68 */
    std::__ndk1::mutex::lock(this_00);
    std::__ndk1::mutex::unlock(this_00);
                    /* catch() { ... } // from try @ 009aba18 with catch @ 009abb78 */
    std::__ndk1::condition_variable::notify_one((condition_variable *)(this + 0x1d0));
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

