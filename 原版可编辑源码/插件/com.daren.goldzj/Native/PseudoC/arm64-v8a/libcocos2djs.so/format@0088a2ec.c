
/* cocos2d::StringUtils::format(char const*, ...) */

void cocos2d::StringUtils::format(char *param_1,...)

{
  long lVar1;
  char *__s;
  size_t sVar2;
  undefined8 in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  long lVar3;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  local_c8 = in_x1;
  local_c0 = in_x2;
  uStack_b8 = in_x3;
  local_b0 = in_x4;
  uStack_a8 = in_x5;
  local_a0 = in_x6;
  uStack_98 = in_x7;
  __s = malloc(0x19000);
  if (__s != (char *)0x0) {
    uStack_78 = 0xffffff80ffffffc8;
    local_90 = (undefined1 *)register0x00000008;
    ppuStack_88 = &local_90;
    puStack_80 = auStack_d0;
    vsnprintf(__s,0x19000,param_1,&local_90);
    sVar2 = strlen(__s);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(in_x8,__s,sVar2);
    free(__s);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

