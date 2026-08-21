
/* universe::TanGaoXiong::renameFile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) const */

uint __thiscall
universe::TanGaoXiong::renameFile
          (TanGaoXiong *this,basic_string *param_1,basic_string *param_2,basic_string *param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  basic_string *pbVar4;
  byte local_90 [16];
  void *local_80;
  byte local_78 [16];
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pbVar4 = param_2;
  uVar3 = (**(code **)(*(long *)this + 0x40))();
  if ((uVar3 & 1) == 0) {
    std::__ndk1::operator+((__ndk1 *)(this + 8),param_1,pbVar4);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_60,param_1);
  }
  std::__ndk1::operator+((__ndk1 *)local_60,param_2,pbVar4);
  std::__ndk1::operator+((__ndk1 *)local_60,param_3,pbVar4);
  uVar2 = (**(code **)(*(long *)this + 0x20))(this,local_78,local_90);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

