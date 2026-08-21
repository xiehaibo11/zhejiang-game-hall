
/* cocos2d::FileUtils::loadResKey(char const*) */

void __thiscall cocos2d::FileUtils::loadResKey(FileUtils *this,char *param_1)

{
  long lVar1;
  char *pcVar2;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  Data aDStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,param_1);
  (**(code **)(*(long *)this + 0x28))(aDStack_48,this,local_60);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  pcVar2 = (char *)Data::getBytes(aDStack_48);
  uVar3 = Data::getSize(aDStack_48);
  uVar3 = hdq::load_key(pcVar2,uVar3);
  if ((uVar3 & 1) == 0) {
    log("FileUtils: load res key failed. %s",param_1);
  }
  Data::~Data(aDStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

