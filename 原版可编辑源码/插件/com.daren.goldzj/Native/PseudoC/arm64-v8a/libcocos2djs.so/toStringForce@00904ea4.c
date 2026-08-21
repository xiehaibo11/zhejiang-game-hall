
/* se::Value::toStringForce() const */

void se::Value::toStringForce(void)

{
  char *pcVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  long lVar4;
  char *in_x0;
  size_t sVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined2 local_30;
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  switch(in_x0[8]) {
  case '\0':
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(in_x8,"undefined",9);
    break;
  case '\x01':
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(in_x8,"null",4);
    break;
  case '\x02':
    local_30 = 0;
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    local_60 = 0;
    snprintf((char *)&local_60,0x32,"%.17g",*(undefined8 *)in_x0);
    sVar5 = strlen((char *)&local_60);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(in_x8,(char *)&local_60,sVar5);
    break;
  case '\x03':
    pcVar1 = "false";
    if (*in_x0 != '\0') {
      pcVar1 = "true";
    }
    uVar2 = 4;
    if (*in_x0 == '\0') {
      uVar2 = 5;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(in_x8,pcVar1,uVar2);
    break;
  case '\x04':
    pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              in_x0;
    if (pbVar6 != in_x8) {
      uVar2 = *(ulong *)(pbVar6 + 8);
      pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (pbVar6 + 0x10);
      if (((byte)*pbVar6 & 1) == 0) {
        pbVar3 = pbVar6 + 1;
        uVar2 = (ulong)((byte)*pbVar6 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(in_x8,(char *)pbVar3,uVar2);
    }
    break;
  case '\x05':
    Object::toString();
    if (((byte)*in_x8 & 1) == 0) {
      *(undefined2 *)in_x8 = 0;
    }
    else {
      **(undefined1 **)(in_x8 + 0x10) = 0;
      *(undefined8 *)(in_x8 + 8) = 0;
      if (((byte)*in_x8 & 1) != 0) {
        operator_delete(*(void **)(in_x8 + 0x10));
        *(undefined8 *)in_x8 = 0;
      }
    }
    *(undefined8 *)(in_x8 + 0x10) = local_50;
    *(undefined8 *)(in_x8 + 8) = uStack_58;
    *(undefined8 *)in_x8 = local_60;
  }
  if (*(long *)(lVar4 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

