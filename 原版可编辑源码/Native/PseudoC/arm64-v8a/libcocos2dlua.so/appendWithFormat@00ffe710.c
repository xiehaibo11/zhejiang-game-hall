
/* cocos2d::__String::appendWithFormat(char const*, ...) */

void cocos2d::__String::appendWithFormat(char *param_1,...)

{
  long lVar1;
  char *__s;
  size_t sVar2;
  char *in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_c0 = in_x2;
  uStack_b8 = in_x3;
  local_b0 = in_x4;
  uStack_a8 = in_x5;
  local_a0 = in_x6;
  uStack_98 = in_x7;
  __s = malloc(0x19000);
  if (__s != (char *)0x0) {
    uStack_58 = 0xffffff80ffffffd0;
    local_70 = (undefined1 *)register0x00000008;
    puStack_68 = &stack0xffffffffffffff70;
    puStack_60 = &local_c0;
    vsnprintf(__s,0x19000,in_x1,&local_70);
    sVar2 = strlen(__s);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + 0x30),__s,sVar2);
    free(__s);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

