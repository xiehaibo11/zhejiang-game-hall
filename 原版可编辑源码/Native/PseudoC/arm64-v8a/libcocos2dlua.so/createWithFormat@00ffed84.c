
/* cocos2d::__String::createWithFormat(char const*, ...) */

long cocos2d::__String::createWithFormat(char *param_1,...)

{
  long lVar1;
  long lVar2;
  char *__s;
  size_t sVar3;
  undefined8 in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined1 **ppuStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_e8 = in_x1;
  uStack_e0 = in_x2;
  local_d8 = in_x3;
  uStack_d0 = in_x4;
  local_c8 = in_x5;
  uStack_c0 = in_x6;
  local_b8 = in_x7;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,"");
  lVar2 = create((basic_string *)&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  puStack_a0 = auStack_f0;
  ppuStack_a8 = &local_b0;
  uStack_98 = 0xffffff80ffffffc8;
  local_b0 = (undefined1 *)register0x00000008;
  __s = malloc(0x19000);
  if (__s != (char *)0x0) {
    ppuStack_68 = ppuStack_a8;
    local_70 = local_b0;
    uStack_58 = uStack_98;
    local_60 = puStack_a0;
    vsnprintf(__s,0x19000,param_1,&local_70);
    sVar3 = strlen(__s);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar2 + 0x30),__s,sVar3);
    free(__s);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

