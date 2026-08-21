
/* fairygui::GObject::getResourceURL() const */

void fairygui::GObject::getResourceURL(void)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  long in_x0;
  undefined8 *puVar4;
  basic_string *in_x2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(long *)(in_x0 + 0xb0) == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(in_x8,(basic_string *)&cocos2d::STD_STRING_EMPTY);
  }
  else {
    std::__ndk1::operator+
              ((__ndk1 *)"ui://",(char *)(*(long *)(*(long *)(in_x0 + 0xb0) + 0x28) + 0x28),in_x2);
    lVar5 = *(long *)(in_x0 + 0xb0);
    uVar1 = (ulong)(*(byte *)(lVar5 + 0x38) >> 1);
    pcVar3 = (char *)(lVar5 + 0x39);
    if ((*(byte *)(lVar5 + 0x38) & 1) != 0) {
      uVar1 = *(ulong *)(lVar5 + 0x40);
      pcVar3 = *(char **)(lVar5 + 0x48);
    }
    puVar4 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       (local_50,pcVar3,uVar1);
    uVar7 = puVar4[1];
    uVar6 = *puVar4;
    *(undefined8 *)(in_x8 + 0x10) = puVar4[2];
    *(undefined8 *)(in_x8 + 8) = uVar7;
    *(undefined8 *)in_x8 = uVar6;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

