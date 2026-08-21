
/* cocos2d::network::HttpClient::send(cocos2d::network::HttpRequest*) */

void __thiscall cocos2d::network::HttpClient::send(HttpClient *this,HttpRequest *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  mutex *this_00;
  Ref *local_60;
  undefined8 uStack_58;
  HttpClient *local_50;
  thread atStack_40 [8];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (this[8] == (HttpClient)0x0) {
    uStack_58 = 0;
    local_60 = (Ref *)networkThread;
    local_50 = this;
    FUN_00e9a734(atStack_40,&local_60);
    std::__ndk1::thread::detach(atStack_40);
    this[8] = (HttpClient)0x1;
    std::__ndk1::thread::~thread(atStack_40);
  }
  if (param_1 != (HttpRequest *)0x0) {
    Ref::retain((Ref *)param_1);
    std::__ndk1::mutex::lock((mutex *)(this + 0xd8));
    puVar1 = *(undefined8 **)(this + 200);
    local_60 = (Ref *)param_1;
    if (puVar1 == *(undefined8 **)(this + 0xd0)) {
      std::__ndk1::
      vector<cocos2d::network::HttpRequest*,std::__ndk1::allocator<cocos2d::network::HttpRequest*>>
      ::__push_back_slow_path<cocos2d::network::HttpRequest*const&>
                ((vector<cocos2d::network::HttpRequest*,std::__ndk1::allocator<cocos2d::network::HttpRequest*>>
                  *)(this + 0xc0),(HttpRequest **)&local_60);
    }
    else {
      *puVar1 = param_1;
      *(undefined8 **)(this + 200) = puVar1 + 1;
    }
    Ref::retain(local_60);
    std::__ndk1::mutex::unlock((mutex *)(this + 0xd8));
    this_00 = *(mutex **)(this + 0x1f8);
    std::__ndk1::mutex::lock(this_00);
    std::__ndk1::mutex::unlock(this_00);
    std::__ndk1::condition_variable::notify_one((condition_variable *)(this + 0x1c8));
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

