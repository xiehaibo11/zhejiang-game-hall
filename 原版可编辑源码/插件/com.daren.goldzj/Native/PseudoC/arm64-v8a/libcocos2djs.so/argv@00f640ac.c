
/* v8::internal::FlagList::argv() */

vector<char_const*,std::__ndk1::allocator<char_const*>> * v8::internal::FlagList::argv(void)

{
  long lVar1;
  bool bVar2;
  vector<char_const*,std::__ndk1::allocator<char_const*>> *this;
  undefined8 *puVar3;
  ulong uVar4;
  basic_ostream *pbVar5;
  size_t sVar6;
  int *piVar7;
  char *pcVar8;
  long lVar9;
  byte local_198 [16];
  char *local_188;
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
  byte local_130;
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
  this = operator_new(0x18);
  puVar3 = operator_new(0x40);
  *(undefined8 **)this = puVar3;
  piVar7 = &DAT_01d2f058;
  lVar9 = 0x1d7;
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  *(undefined8 **)(this + 0x10) = puVar3 + 8;
  *(undefined8 **)(this + 8) = puVar3 + 8;
  do {
    uVar4 = FUN_00f644a0(piVar7);
    if ((uVar4 & 1) == 0) {
      if (*piVar7 == 0) {
        bVar2 = **(char **)(piVar7 + 4) == '\0';
      }
      else {
        bVar2 = false;
      }
      local_178 = (undefined **)0x1c6c8a8;
      local_108[0] = (undefined **)0x1c6c8d0;
      std::__ndk1::ios_base::init((ios_base *)local_108,&local_170);
      local_78 = 0xffffffff;
      local_178 = &PTR__basic_ostringstream_01c6c858;
      local_108[0] = &PTR__basic_ostringstream_01c6c880;
      local_170 = &PTR__basic_streambuf_01c671a8;
      local_80 = 0;
      std::__ndk1::locale::locale(alStack_168);
      uStack_148 = 0;
      local_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_158 = 0;
      local_160 = 0;
      local_170 = &PTR__basic_stringbuf_01c67100;
      uStack_128 = 0;
      local_130 = 0;
      uStack_118 = 0;
      local_120 = (void *)0x0;
      local_110 = 0x10;
      pcVar8 = "--no";
      if (!bVar2) {
        pcVar8 = "--";
      }
      uVar4 = 4;
      if (!bVar2) {
        uVar4 = 2;
      }
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_178,pcVar8,uVar4);
      pcVar8 = *(char **)(piVar7 + 2);
      sVar6 = strlen(pcVar8);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (pbVar5,pcVar8,sVar6);
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      pcVar8 = (char *)((ulong)local_198 | 1);
      if ((local_198[0] & 1) != 0) {
        pcVar8 = local_188;
      }
      local_180 = (char *)StrDup(pcVar8);
      if (*(undefined8 **)(this + 8) < *(undefined8 **)(this + 0x10)) {
        **(undefined8 **)(this + 8) = local_180;
        *(long *)(this + 8) = *(long *)(this + 8) + 8;
      }
      else {
        std::__ndk1::vector<char_const*,std::__ndk1::allocator<char_const*>>::
        __push_back_slow_path<char_const*>(this,&local_180);
      }
      if ((local_198[0] & 1) != 0) {
        operator_delete(local_188);
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
      if (*piVar7 != 0) {
        local_178 = (undefined **)0x1c6c8a8;
        local_108[0] = (undefined **)0x1c6c8d0;
        std::__ndk1::ios_base::init((ios_base *)local_108,&local_170);
        local_78 = 0xffffffff;
        local_178 = &PTR__basic_ostringstream_01c6c858;
        local_108[0] = &PTR__basic_ostringstream_01c6c880;
        local_80 = 0;
        local_170 = &PTR__basic_streambuf_01c671a8;
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
        FUN_00f64570(&local_178,piVar7);
        std::__ndk1::
        basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
        pcVar8 = (char *)((ulong)local_198 | 1);
        if ((local_198[0] & 1) != 0) {
          pcVar8 = local_188;
        }
        local_180 = (char *)StrDup(pcVar8);
        if (*(undefined8 **)(this + 8) < *(undefined8 **)(this + 0x10)) {
          **(undefined8 **)(this + 8) = local_180;
          *(long *)(this + 8) = *(long *)(this + 8) + 8;
        }
        else {
          std::__ndk1::vector<char_const*,std::__ndk1::allocator<char_const*>>::
          __push_back_slow_path<char_const*>(this,&local_180);
        }
        if ((local_198[0] & 1) != 0) {
          operator_delete(local_188);
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
      }
    }
    lVar9 = lVar9 + -1;
    piVar7 = piVar7 + 0xc;
  } while (lVar9 != 0);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

