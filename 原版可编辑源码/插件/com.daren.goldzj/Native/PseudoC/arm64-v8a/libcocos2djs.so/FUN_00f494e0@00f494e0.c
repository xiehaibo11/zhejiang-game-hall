
void FUN_00f494e0(undefined8 param_1,ulong param_2,int param_3)

{
  char *__s;
  long lVar1;
  basic_ostream *pbVar2;
  size_t sVar3;
  ulong local_190;
  int local_188;
  char *local_180;
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
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if ((param_3 != 0) && (v8::internal::FLAG_max_stack_trace_source_length != 0)) {
    local_178 = (undefined **)0x1c6c8a8;
    local_108[0] = (undefined **)0x1c6c8d0;
    std::__ndk1::ios_base::init((ios_base *)local_108,&local_170);
    local_78 = 0xffffffff;
    local_170 = &PTR__basic_streambuf_01c671a8;
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
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_178,"--------- s o u r c e   c o d e ---------\n",
                        0x2a);
    local_188 = v8::internal::FLAG_max_stack_trace_source_length;
    local_190 = param_2;
    pbVar2 = (basic_ostream *)v8::internal::operator<<(pbVar2,(SourceCodeOf *)&local_190);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar2,"\n-----------------------------------------\n",0x2b);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    __s = (char *)((ulong)&local_190 | 1);
    if ((local_190 & 1) != 0) {
      __s = local_180;
    }
    sVar3 = strlen(__s);
    v8::internal::StringStream::Add(param_1,__s,sVar3,0,0);
    if ((local_190 & 1) != 0) {
      operator_delete(local_180);
    }
    local_178 = &PTR__basic_ostringstream_01c6c858;
    local_108[0] = &PTR__basic_ostringstream_01c6c880;
    if ((local_130 & 1) != 0) {
      local_170 = &PTR__basic_stringbuf_01c67100;
      operator_delete(local_120);
    }
    local_170 = &PTR__basic_streambuf_01c671a8;
    std::__ndk1::locale::~locale(alStack_168);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

