
/* universe::FileSystemAndroid::removeDirectory(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

uint universe::FileSystemAndroid::removeDirectory(basic_string *param_1)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  char *pcVar5;
  byte *in_x1;
  basic_string *in_x2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  char *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_58 [16];
  char *local_48;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = (ulong)(*in_x1 >> 1);
  if ((*in_x1 & 1) != 0) {
    uVar1 = *(ulong *)(in_x1 + 8);
  }
  if (uVar1 == 0) {
    pcVar5 = (char *)Translated::getInstance();
    Translated::log(pcVar5,"Fail to remove directory, path is empty!");
    uVar3 = 0;
  }
  else {
    TanGaoXiong::getAbsolutePath(param_1);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_58,"rm -r ");
    std::__ndk1::operator+((__ndk1 *)0x1447f53,(char *)local_40,in_x2);
    puVar4 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append(local_88,"\"",1);
    local_60 = (char *)puVar4[2];
    uStack_68 = puVar4[1];
    local_70 = *puVar4;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    uVar1 = local_70 >> 1 & 0x7f;
    pcVar5 = (char *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      uVar1 = uStack_68;
      pcVar5 = local_60;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(local_58,pcVar5,uVar1);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if (((byte)local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    pcVar5 = (char *)((ulong)local_58 | 1);
    if (((byte)local_58[0] & 1) != 0) {
      pcVar5 = local_48;
    }
    uVar3 = system(pcVar5);
    if (((byte)local_58[0] & 1) != 0) {
      operator_delete(local_48);
    }
    uVar3 = ~uVar3 >> 0x1f;
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}

