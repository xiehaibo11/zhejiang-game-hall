
/* cocos2d::FileUtils::isFileExist(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

bool __thiscall cocos2d::FileUtils::isFileExist(FileUtils *this,basic_string *param_1)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  ulong uVar4;
  byte local_50 [8];
  long local_48;
  void *pvStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar4 = (**(code **)(*(long *)this + 0x140))();
  if ((uVar4 & 1) == 0) {
    (**(code **)(*(long *)this + 0x50))(local_50,this,param_1);
    if ((local_50[0] & 1) == 0) {
      bVar2 = 1 < local_50[0];
    }
    else {
      bVar2 = local_48 != 0;
      operator_delete(pvStack_40);
    }
    if (*(long *)(lVar1 + 0x28) != local_38) goto LAB_00f6cae8;
  }
  else {
    bVar3 = (**(code **)(*(long *)this + 0x1e8))(this,param_1);
    if (*(long *)(lVar1 + 0x28) != local_38) {
LAB_00f6cae8:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    bVar2 = (bool)(bVar3 & 1);
  }
  return bVar2;
}

