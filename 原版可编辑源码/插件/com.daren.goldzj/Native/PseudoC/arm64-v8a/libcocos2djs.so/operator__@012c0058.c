
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&,
   v8::internal::compiler::SerializerForBackgroundCompilation::Environment const&) */

basic_ostream * v8::internal::compiler::operator<<(basic_ostream *param_1,Environment *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  basic_ostream *pbVar4;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this;
  int iVar5;
  char *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong local_190;
  ulong local_188;
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
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
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
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            ((basic_ostream *)&local_178,"Function ",9);
  uVar12 = **(ulong **)param_2;
  uVar1 = *(uint *)(uVar12 + 7);
  uVar10 = uVar12 & 0xffffffff00000000;
  local_190 = uVar10 | uVar1;
  if (((uVar1 & 1) == 0) || (*(short *)((uVar10 | 7) + (ulong)*(uint *)(local_190 - 1)) != 0x83)) {
    uVar12 = local_190;
    if (uVar1 != 0) goto joined_r0x012c018c;
  }
  else {
    uVar3 = ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_190);
    if ((uVar3 & 1) != 0) {
      uVar1 = *(uint *)(uVar12 + 7);
      uVar12 = uVar10 | uVar1;
joined_r0x012c018c:
      if (((uVar1 & 1) == 0) || (*(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x83))
      goto LAB_012c01cc;
      local_190 = uVar12;
      uVar3 = ScopeInfo::HasFunctionName((ScopeInfo *)&local_190);
      if ((uVar3 & 1) != 0) {
        local_190 = uVar12;
        uVar12 = ScopeInfo::FunctionName((ScopeInfo *)&local_190);
        goto LAB_012c01cc;
      }
    }
  }
  uVar12 = *(ulong *)(uVar10 + 200);
LAB_012c01cc:
  local_190 = uVar12;
  Object::Print((Object *)&local_190,(basic_ostream *)&local_178);
  if (*(long *)(param_2 + 0x30) == *(long *)(param_2 + 0x38)) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_178,"dead\n",5);
  }
  else {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_178,"alive\n",6);
    plVar8 = *(long **)(param_2 + 0x30);
    lVar7 = *(long *)(param_2 + 0x38);
    if (0 < (int)((ulong)(lVar7 - (long)plVar8) >> 3)) {
      lVar11 = 0;
      uVar10 = 0;
      plVar9 = (long *)*plVar8;
      do {
        if ((plVar9 != (long *)0x0) &&
           ((((*plVar9 != 0 || (plVar9[1] != 0)) || (plVar9[2] != 0)) ||
            ((plVar9[3] != 0 || (plVar9[4] != 0)))))) {
          iVar5 = *(int *)(param_2 + 0x18);
          if ((long)uVar10 < (long)iVar5) {
            pbVar4 = (basic_ostream *)&local_178;
            if (uVar10 == 0) {
              uVar12 = 0x12;
              pcVar6 = "Hints for <this>: ";
            }
            else {
              this = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                     std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar4,"Hints for a",0xb);
              iVar5 = (int)uVar10 + -1;
LAB_012c0258:
              pbVar4 = (basic_ostream *)
                       std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                                 (this,iVar5);
              uVar12 = 2;
              pcVar6 = ": ";
            }
          }
          else {
            uVar12 = (long)*(int *)(param_2 + 0x1c) + (long)iVar5;
            if ((long)uVar10 < (long)uVar12) {
              iVar5 = (int)uVar10 - iVar5;
              this = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                     std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               ((basic_ostream *)&local_178,"Hints for r",0xb);
              goto LAB_012c0258;
            }
            if (uVar10 != (uVar12 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("unreachable code");
            }
            pbVar4 = (basic_ostream *)&local_178;
            uVar12 = 0x19;
            pcVar6 = "Hints for <accumulator>: ";
          }
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (pbVar4,pcVar6,uVar12);
          operator<<((basic_ostream *)&local_178,(Hints *)((long)plVar8 + lVar11));
          plVar8 = *(long **)(param_2 + 0x30);
          lVar7 = *(long *)(param_2 + 0x38);
        }
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 8;
        if ((long)(int)((ulong)(lVar7 - (long)plVar8) >> 3) <= (long)uVar10) break;
        plVar9 = (long *)plVar8[uVar10];
      } while( true );
    }
  }
  plVar8 = *(long **)(param_2 + 0x20);
  if ((plVar8 != (long *)0x0) &&
     (((*plVar8 != 0 || (plVar8[1] != 0)) ||
      ((plVar8[2] != 0 || ((plVar8[3] != 0 || (plVar8[4] != 0)))))))) {
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_178,"Hints for <closure>: ",0x15);
    operator<<(pbVar4,(Hints *)(param_2 + 0x20));
  }
  plVar8 = *(long **)(param_2 + 0x28);
  if ((plVar8 != (long *)0x0) &&
     ((((*plVar8 != 0 || (plVar8[1] != 0)) || (plVar8[2] != 0)) ||
      ((plVar8[3] != 0 || (plVar8[4] != 0)))))) {
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_178,"Hints for <context>: ",0x15);
    operator<<(pbVar4,(Hints *)(param_2 + 0x28));
  }
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  uVar10 = local_190 >> 1 & 0x7f;
  pcVar6 = (char *)((ulong)&local_190 | 1);
  if ((local_190 & 1) != 0) {
    uVar10 = local_188;
    pcVar6 = local_180;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar6,uVar10);
  if ((local_190 & 1) != 0) {
    operator_delete(local_180);
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
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

