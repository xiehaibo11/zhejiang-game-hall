
/* cocos2d::FileUtils::getFileSize(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

__off_t __thiscall cocos2d::FileUtils::getFileSize(FileUtils *this,basic_string *param_1)

{
  char *__file;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  undefined1 local_d0 [128];
  ulong local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_50,param_1);
  uVar5 = (**(code **)(*(long *)this + 0x140))(this,param_1);
  if ((uVar5 & 1) == 0) {
    (**(code **)(*(long *)this + 0x50))(local_d0,this,param_1);
    if ((local_50 & 1) != 0) {
      *local_40 = '\0';
      uStack_48 = 0;
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
      }
    }
    uStack_48 = local_d0._8_8_;
    local_50 = local_d0._0_8_;
    uVar3 = local_50;
    local_50._0_1_ = SUB81(local_d0._0_8_,0);
    local_40 = (char *)local_d0._16_8_;
    uVar5 = (ulong)((byte)local_50._0_1_ >> 1);
    if ((local_d0._0_8_ & 1) != 0) {
      uVar5 = local_d0._8_8_;
    }
    bVar1 = local_50._0_1_;
    local_50 = uVar3;
    if (uVar5 == 0) {
      local_d0._48_8_ = 0;
      local_50 = local_d0._0_8_;
      goto joined_r0x00f70d18;
    }
  }
  else {
    bVar1 = local_50._0_1_;
  }
  __file = (char *)((ulong)&local_50 | 1);
  if (((byte)bVar1 & 1) != 0) {
    __file = local_40;
  }
  iVar4 = stat(__file,(stat *)local_d0);
  if (iVar4 != 0) {
    local_d0._48_8_ = -1;
  }
joined_r0x00f70d18:
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_d0._48_8_;
}

