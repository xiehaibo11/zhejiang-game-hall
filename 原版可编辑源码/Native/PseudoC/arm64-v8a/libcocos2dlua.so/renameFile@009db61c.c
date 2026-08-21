
/* universe::TanGaoXiong::renameFile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

undefined4 __thiscall
universe::TanGaoXiong::renameFile(TanGaoXiong *this,basic_string *param_1,basic_string *param_2)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  char *pcVar6;
  uint *puVar7;
  basic_string *pbVar8;
  undefined4 uVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [16];
  char *local_80;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [16];
  char *local_68;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pbVar8 = param_2;
  dirname((TanGaoXiong *)param_2,param_1);
  uVar5 = (**(code **)(*(long *)this + 0x30))(this,local_60);
  if ((uVar5 & 1) == 0) {
    uVar9 = 0;
  }
  else {
    uVar5 = (**(code **)(*(long *)this + 0x40))(this,param_1);
    if ((uVar5 & 1) == 0) {
      std::__ndk1::operator+((__ndk1 *)(this + 8),param_1,pbVar8);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_78,param_1);
    }
    uVar5 = (**(code **)(*(long *)this + 0x40))(this,param_2);
    if ((uVar5 & 1) == 0) {
      std::__ndk1::operator+((__ndk1 *)(this + 8),param_2,pbVar8);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_90,param_2);
    }
    pcVar1 = (char *)((ulong)local_78 | 1);
    if (((byte)local_78[0] & 1) != 0) {
      pcVar1 = local_68;
    }
    pcVar6 = (char *)((ulong)local_90 | 1);
    if (((byte)local_90[0] & 1) != 0) {
      pcVar6 = local_80;
    }
    uVar4 = rename(pcVar1,pcVar6);
    if (uVar4 == 0) {
      uVar9 = 1;
    }
    else {
      pcVar6 = (char *)Translated::getInstance();
      pcVar1 = (char *)((ulong)local_78 | 1);
      if (((byte)local_78[0] & 1) != 0) {
        pcVar1 = local_68;
      }
      pcVar2 = (char *)((ulong)local_90 | 1);
      if (((byte)local_90[0] & 1) != 0) {
        pcVar2 = local_80;
      }
      puVar7 = (uint *)__errno();
      Translated::log(pcVar6,&DAT_012f2b1d,pcVar1,pcVar2,(ulong)uVar4,(ulong)*puVar7);
      uVar9 = 0;
    }
    if (((byte)local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
    if (((byte)local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

