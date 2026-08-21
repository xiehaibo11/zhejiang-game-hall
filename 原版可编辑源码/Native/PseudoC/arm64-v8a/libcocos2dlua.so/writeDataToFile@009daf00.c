
/* universe::TanGaoXiong::writeDataToFile(unsigned char*, unsigned long,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::function<void (bool)> const&) const */

void __thiscall
universe::TanGaoXiong::writeDataToFile
          (TanGaoXiong *this,uchar *param_1,ulong param_2,basic_string *param_3,function *param_4)

{
  long lVar1;
  Branches *this_00;
  ulong uVar2;
  basic_string *pbVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pbVar3 = (basic_string *)param_2;
  this_00 = (Branches *)Branches::getInstance();
  uVar2 = (**(code **)(*(long *)this + 0x40))(this,param_3);
  if ((uVar2 & 1) == 0) {
    std::__ndk1::operator+((__ndk1 *)(this + 8),param_3,pbVar3);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_70,param_3);
  }
  Branches::add(this_00,(basic_string *)local_70,param_1,param_2,param_4);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

