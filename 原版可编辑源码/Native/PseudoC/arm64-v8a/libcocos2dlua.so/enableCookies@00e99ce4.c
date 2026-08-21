
/* cocos2d::network::HttpClient::enableCookies(char const*) */

void __thiscall cocos2d::network::HttpClient::enableCookies(HttpClient *this,char *param_1)

{
  undefined8 uVar1;
  HttpClient HVar2;
  long lVar3;
  long *plVar4;
  HttpClient *pHVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  void *local_60;
  undefined7 uStack_58;
  undefined1 local_51;
  undefined7 uStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  std::__ndk1::mutex::lock((mutex *)(this + 0x158));
  if (param_1 == (char *)0x0) {
    plVar4 = (long *)FileUtils::getInstance();
    (**(code **)(*plVar4 + 0xa0))(&local_70);
    pHVar5 = (HttpClient *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       (&local_70,"cookieFile.txt",0xe);
    uVar1 = *(undefined8 *)(pHVar5 + 0x10);
    HVar2 = *pHVar5;
    uStack_50 = (undefined7)((ulong)*(undefined8 *)(pHVar5 + 8) >> 8);
    uStack_58 = (undefined7)*(undefined8 *)(pHVar5 + 1);
    local_51 = (undefined1)((ulong)*(undefined8 *)(pHVar5 + 1) >> 0x38);
    *(undefined8 *)pHVar5 = 0;
    *(undefined8 *)(pHVar5 + 8) = 0;
    *(undefined8 *)(pHVar5 + 0x10) = 0;
    if (((byte)this[0x140] & 1) == 0) {
      *(undefined2 *)(this + 0x140) = 0;
    }
    else {
      **(undefined1 **)(this + 0x150) = 0;
      *(undefined8 *)(this + 0x148) = 0;
      if (((byte)this[0x140] & 1) != 0) {
        operator_delete(*(void **)(this + 0x150));
        *(undefined8 *)(this + 0x140) = 0;
      }
    }
    this[0x140] = HVar2;
    *(ulong *)(this + 0x148) = CONCAT71(uStack_50,local_51);
    *(undefined8 *)(this + 0x150) = uVar1;
    *(ulong *)(this + 0x141) = CONCAT17(local_51,uStack_58);
    uStack_50 = 0;
    uStack_58 = 0;
    local_51 = 0;
    if (((byte)local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(&local_70,param_1);
    if (((byte)this[0x140] & 1) == 0) {
      *(undefined2 *)(this + 0x140) = 0;
    }
    else {
      **(undefined1 **)(this + 0x150) = 0;
      *(undefined8 *)(this + 0x148) = 0;
      if (((byte)this[0x140] & 1) != 0) {
        operator_delete(*(void **)(this + 0x150));
        *(undefined8 *)(this + 0x140) = 0;
      }
    }
    *(void **)(this + 0x150) = local_60;
    *(undefined8 *)(this + 0x148) = uStack_68;
    *(ulong *)(this + 0x140) = CONCAT71(uStack_6f,local_70);
  }
  std::__ndk1::mutex::unlock((mutex *)(this + 0x158));
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

