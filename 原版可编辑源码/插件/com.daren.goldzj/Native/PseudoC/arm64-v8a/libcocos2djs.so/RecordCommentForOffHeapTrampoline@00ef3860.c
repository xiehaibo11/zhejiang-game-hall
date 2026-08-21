
/* v8::internal::TurboAssemblerBase::RecordCommentForOffHeapTrampoline(int) */

void __thiscall
v8::internal::TurboAssemblerBase::RecordCommentForOffHeapTrampoline
          (TurboAssemblerBase *this,int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  basic_ostream *pbVar4;
  char *pcVar5;
  size_t sVar6;
  void *__dest;
  ulong uVar7;
  byte local_1a8 [16];
  char *local_198;
  ulong local_190;
  size_t local_188;
  void *local_180;
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
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  if (FLAG_code_comments == '\0') goto LAB_00ef3aac;
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
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_178,"-- Inlined Trampoline to ",0x19);
  pcVar5 = (char *)Builtins::name(param_1);
  sVar6 = strlen(pcVar5);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,pcVar5,sVar6);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4," --",3);
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  pcVar5 = (char *)((ulong)local_1a8 | 1);
  if ((local_1a8[0] & 1) != 0) {
    pcVar5 = local_198;
  }
  if (FLAG_code_comments != '\0') {
    iVar1 = *(int *)(this + 0x20);
    iVar2 = *(int *)(this + 0x10);
    local_188 = 0;
    local_180 = (void *)0x0;
    local_190 = 0;
    sVar6 = strlen(pcVar5);
    if (0xffffffffffffffef < sVar6) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (sVar6 < 0x17) {
      __dest = (void *)((ulong)&local_190 | 1);
      local_190 = CONCAT71(local_190._1_7_,(char)((int)sVar6 << 1));
      if (sVar6 != 0) goto LAB_00ef3a20;
    }
    else {
      uVar7 = sVar6 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar7);
      local_190 = uVar7 | 1;
      local_188 = sVar6;
      local_180 = __dest;
LAB_00ef3a20:
      memcpy(__dest,pcVar5,sVar6);
    }
    *(undefined1 *)((long)__dest + sVar6) = 0;
    CodeCommentsWriter::Add((CodeCommentsWriter *)(this + 0x28),iVar1 - iVar2,&local_190);
    if ((local_190 & 1) != 0) {
      operator_delete(local_180);
    }
  }
  if ((local_1a8[0] & 1) != 0) {
    operator_delete(local_198);
  }
  local_178 = &PTR__basic_ostringstream_01c6c858;
  local_108[0] = &PTR__basic_ostringstream_01c6c880;
  local_170 = &PTR__basic_stringbuf_01c67100;
  if ((local_130 & 1) != 0) {
    operator_delete(local_120);
  }
  local_170 = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale(alStack_168);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
LAB_00ef3aac:
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

