
/* cocos2d::__String::initWithFormat(char const*, ...) */

void cocos2d::__String::initWithFormat(char *param_1,...)

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
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 **ppuStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (param_1 + 0x30);
  if (((byte)*this & 1) == 0) {
    *(undefined2 *)this = 0;
  }
  else {
                    /* catch() { ... } // from try @ 00ffe3a8 with catch @ 00ffe47c */
    **(undefined1 **)(param_1 + 0x40) = 0;
    param_1[0x38] = '\0';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    param_1[0x3c] = '\0';
    param_1[0x3d] = '\0';
    param_1[0x3e] = '\0';
    param_1[0x3f] = '\0';
  }
  puStack_a0 = &local_e0;
  ppuStack_a8 = &local_b0;
  uStack_98 = 0xffffff80ffffffd0;
  local_e0 = in_x2;
  uStack_d8 = in_x3;
  local_d0 = in_x4;
  uStack_c8 = in_x5;
  local_c0 = in_x6;
  uStack_b8 = in_x7;
  local_b0 = (undefined1 *)register0x00000008;
  __s = malloc(0x19000);
  if (__s != (char *)0x0) {
    ppuStack_68 = ppuStack_a8;
    local_70 = local_b0;
    uStack_58 = uStack_98;
    puStack_60 = puStack_a0;
    vsnprintf(__s,0x19000,in_x1,&local_70);
    sVar2 = strlen(__s);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this,__s,sVar2);
    free(__s);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__s != (char *)0x0);
}

