
/* v8::internal::compiler::CodeGenerator::AssembleSourcePosition(v8::internal::SourcePosition) */

void __thiscall
v8::internal::compiler::CodeGenerator::AssembleSourcePosition(CodeGenerator *this,ulong param_2)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  vector local_198;
  undefined7 uStack_197;
  char *local_188;
  ulong local_180;
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
  local_180 = param_2;
  if (((*(ulong *)(this + 200) != param_2) &&
      (*(ulong *)(this + 200) = param_2, (param_2 & 0x7fffffffffff) != 0)) &&
     (SourcePositionTableBuilder::AddPosition
                ((SourcePositionTableBuilder *)(this + 0x400),
                 (long)(*(int *)(this + 0xf0) - *(int *)(this + 0xe0)),param_2,0),
     FLAG_code_comments != '\0')) {
    lVar4 = *(long *)(this + 0xa0);
    iVar2 = *(int *)(lVar4 + 8);
    if ((iVar2 == 5) || (iVar2 == 0)) {
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
                ((basic_ostream *)&local_178,"-- ",3);
      if (((*(byte *)(lVar4 + 1) >> 5 & 1) == 0) &&
         ((*(long *)(this + 0x248) != 0 && (*(long *)(*(long *)(this + 0x248) + 0xc610) == 0)))) {
        SourcePosition::InliningStack((OptimizedCompilationInfo *)&local_180);
        internal::operator<<((basic_ostream *)&local_178,&local_198);
        if ((void *)CONCAT71(uStack_197,local_198) != (void *)0x0) {
          operator_delete((void *)CONCAT71(uStack_197,local_198));
        }
      }
      else {
        internal::operator<<((basic_ostream *)&local_178,(SourcePosition *)&local_180);
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_178," --",3);
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      pcVar1 = (char *)((ulong)&local_198 | 1);
      if (((byte)local_198 & 1) != 0) {
        pcVar1 = local_188;
      }
      AssemblerBase::RecordComment((AssemblerBase *)(this + 0xd0),pcVar1);
      if (((byte)local_198 & 1) != 0) {
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
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

