
/* FileImplement::moveFile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

uint __thiscall
FileImplement::moveFile(FileImplement *this,basic_string *param_1,basic_string *param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  universe::FileInterface::basename((FileInterface *)param_2,param_1);
  uVar3 = (**(code **)(*(long *)this + 0x20))(this,local_50);
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    plVar4 = (long *)cocos2d::FileUtils::getInstance();
    uVar2 = (**(code **)(*plVar4 + 0x148))(plVar4,param_1,param_2);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

