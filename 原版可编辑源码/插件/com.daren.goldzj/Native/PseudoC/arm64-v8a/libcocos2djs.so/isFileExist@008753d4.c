
/* cocos2d::FileUtils::isFileExist(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

byte __thiscall cocos2d::FileUtils::isFileExist(FileUtils *this,basic_string *param_1)

{
  long lVar1;
  byte bVar2;
  basic_string *pbVar3;
  byte local_50 [8];
  long local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pbVar3 = (basic_string *)(**(code **)(*(long *)this + 0x108))();
  if (((ulong)pbVar3 & 1) == 0) {
    (**(code **)(*(long *)this + 0x40))(local_50,this,param_1);
    if ((local_50[0] & 1) == 0) {
      bVar2 = 1 < local_50[0];
      goto LAB_0087547c;
    }
    bVar2 = local_48 != 0;
  }
  else {
    normalizePath(pbVar3);
    bVar2 = (**(code **)(*(long *)this + 0x168))(this,local_50);
    if ((local_50[0] & 1) == 0) goto LAB_0087547c;
  }
  operator_delete(local_40);
LAB_0087547c:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2 & 1;
}

