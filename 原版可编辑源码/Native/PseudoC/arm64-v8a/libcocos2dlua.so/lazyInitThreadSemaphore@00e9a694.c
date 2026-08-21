
/* cocos2d::network::HttpClient::lazyInitThreadSemaphore() */

undefined8 __thiscall cocos2d::network::HttpClient::lazyInitThreadSemaphore(HttpClient *this)

{
  long lVar1;
  code *local_50;
  undefined8 uStack_48;
  HttpClient *local_40;
  thread atStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (this[8] == (HttpClient)0x0) {
    uStack_48 = 0;
    local_50 = networkThread;
    local_40 = this;
    FUN_00e9a734(atStack_30,&local_50);
    std::__ndk1::thread::detach(atStack_30);
    this[8] = (HttpClient)0x1;
    std::__ndk1::thread::~thread(atStack_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

