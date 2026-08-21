
/* v8::internal::interpreter::Register::ToString(int) const */

void v8::internal::interpreter::Register::ToString(int param_1)

{
  int iVar1;
  long lVar2;
  basic_ostream *pbVar3;
  int in_w1;
  undefined8 *in_x8;
  undefined8 uVar4;
  undefined **local_178;
  undefined **local_170;
  locale alStack_168 [8];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined **local_108 [17];
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  char *pcVar5;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(ulong)(uint)param_1;
  if (iVar1 == -3) {
    in_x8[2] = 0;
    pcVar5 = "<closure>";
  }
  else {
    if (iVar1 != -4) {
      if (iVar1 < 0) {
        if (in_w1 + iVar1 == -6) {
          *in_x8 = 0;
          in_x8[1] = 0;
          in_x8[2] = 0;
          *(undefined1 *)in_x8 = 0xc;
          *(undefined4 *)((long)in_x8 + 1) = 0x6968743c;
          *(undefined2 *)((long)in_x8 + 5) = 0x3e73;
          *(undefined1 *)((long)in_x8 + 7) = 0;
          goto LAB_0104020c;
        }
        local_178 = (undefined **)0x1c6c8a8;
        local_108[0] = (undefined **)0x1c6c8d0;
        std::__ndk1::ios_base::init((ios_base *)local_108,&local_170);
        local_170 = &PTR__basic_streambuf_01c671a8;
        local_78 = 0xffffffff;
        local_80 = 0;
        local_178 = &PTR__basic_ostringstream_01c6c858;
        local_108[0] = &PTR__basic_ostringstream_01c6c880;
        std::__ndk1::locale::locale(alStack_168);
        uStack_148 = 0;
        local_150 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_158 = 0;
        local_160 = 0;
        uStack_128 = 0;
        local_130 = 0;
        uStack_118 = 0;
        local_120 = (void *)0x0;
        local_110 = 0x10;
        local_170 = &PTR__basic_stringbuf_01c67100;
        pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           ((basic_ostream *)&local_178,"a",1);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,in_w1 + iVar1 + 5);
        std::__ndk1::
        basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
        local_178 = &PTR__basic_ostringstream_01c6c858;
        local_108[0] = &PTR__basic_ostringstream_01c6c880;
        if ((local_130 & 1) != 0) {
          local_170 = &PTR__basic_stringbuf_01c67100;
          operator_delete(local_120);
        }
      }
      else {
        local_178 = (undefined **)0x1c6c8a8;
        local_108[0] = (undefined **)0x1c6c8d0;
        std::__ndk1::ios_base::init((ios_base *)local_108,&local_170);
        local_170 = &PTR__basic_streambuf_01c671a8;
        local_78 = 0xffffffff;
        local_80 = 0;
        local_178 = &PTR__basic_ostringstream_01c6c858;
        local_108[0] = &PTR__basic_ostringstream_01c6c880;
        std::__ndk1::locale::locale(alStack_168);
        uStack_148 = 0;
        local_150 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_158 = 0;
        local_160 = 0;
        uStack_128 = 0;
        local_130 = 0;
        uStack_118 = 0;
        local_120 = (void *)0x0;
        local_110 = 0x10;
        local_170 = &PTR__basic_stringbuf_01c67100;
        pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           ((basic_ostream *)&local_178,"r",1);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                   *(int *)(ulong)(uint)param_1);
        std::__ndk1::
        basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
        local_178 = &PTR__basic_ostringstream_01c6c858;
        local_108[0] = &PTR__basic_ostringstream_01c6c880;
        if ((local_130 & 1) != 0) {
          local_170 = &PTR__basic_stringbuf_01c67100;
          operator_delete(local_120);
        }
      }
      local_170 = &PTR__basic_streambuf_01c671a8;
      std::__ndk1::locale::~locale(alStack_168);
      std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
      goto LAB_0104020c;
    }
    pcVar5 = "<context>";
    in_x8[2] = 0;
  }
  uVar4 = *(undefined8 *)pcVar5;
  *in_x8 = 0x12;
  in_x8[1] = 0;
  *(undefined1 *)((long)in_x8 + 9) = 0x3e;
  *(undefined1 *)((long)in_x8 + 10) = 0;
  *(undefined8 *)((long)in_x8 + 1) = uVar4;
LAB_0104020c:
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

