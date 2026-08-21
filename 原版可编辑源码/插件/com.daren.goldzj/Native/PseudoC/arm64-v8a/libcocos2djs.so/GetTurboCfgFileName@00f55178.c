
/* v8::internal::Isolate::GetTurboCfgFileName(v8::internal::Isolate*) */

void __thiscall v8::internal::Isolate::GetTurboCfgFileName(Isolate *this,Isolate *param_1)

{
  long lVar1;
  char *__s;
  int iVar2;
  size_t __n;
  basic_ostream *pbVar3;
  ulong *in_x8;
  void *__dest;
  ulong uVar4;
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
  
  __s = FLAG_trace_turbo_cfg_file;
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if (FLAG_trace_turbo_cfg_file == (char *)0x0) {
    local_178 = (undefined **)0x1c6c8a8;
    local_108[0] = (undefined **)0x1c6c8d0;
    std::__ndk1::ios_base::init((ios_base *)local_108,&local_170);
    local_78 = 0xffffffff;
    local_178 = &PTR__basic_ostringstream_01c6c858;
    local_108[0] = &PTR__basic_ostringstream_01c6c880;
    local_170 = &PTR__basic_streambuf_01c671a8;
    local_80 = 0;
    std::__ndk1::locale::locale(alStack_168);
    local_170 = &PTR__basic_stringbuf_01c67100;
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
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_178,"turbo-",6);
    iVar2 = base::OS::GetCurrentProcessId();
    pbVar3 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,iVar2);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"-",1);
    if (this == (Isolate *)0x0) {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_178,"any",3);
    }
    else {
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_178,
                 *(int *)(this + 0x9480));
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_178,".cfg",4);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    local_178 = &PTR__basic_ostringstream_01c6c858;
    local_108[0] = &PTR__basic_ostringstream_01c6c880;
    local_170 = &PTR__basic_stringbuf_01c67100;
    if ((local_130 & 1) != 0) {
      operator_delete(local_120);
    }
    local_170 = &PTR__basic_streambuf_01c671a8;
    std::__ndk1::locale::~locale(alStack_168);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
    goto LAB_00f55380;
  }
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n != 0) goto LAB_00f552f4;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar4 | 1;
LAB_00f552f4:
    memcpy(__dest,__s,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_00f55380:
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

