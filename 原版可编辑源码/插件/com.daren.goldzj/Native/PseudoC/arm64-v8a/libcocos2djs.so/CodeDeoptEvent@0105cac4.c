
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105cb48 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::CodeDeoptEvent(v8::internal::Code, v8::internal::DeoptimizeKind, unsigned
   long, int) */

void v8::internal::Logger::CodeDeoptEvent
               (long param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  MessageBuilder *pMVar3;
  long lVar4;
  MessageBuilder *pMVar5;
  MessageBuilder *pMVar6;
  MessageBuilder *pMVar7;
  char *pcVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  byte local_1b8 [16];
  char *local_1a8;
  MessageBuilder aMStack_1a0 [8];
  Mutex *local_198;
  undefined1 local_190 [16];
  long local_180;
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
  
  auVar2._8_8_ = local_190._8_8_;
  auVar2._0_8_ = local_190._0_8_;
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_180 = param_2;
  if ((**(char **)(param_1 + 0x28) == '\0') &&
     (local_190 = auVar2, *(long *)(*(char **)(param_1 + 0x28) + 8) != 0)) {
    local_190 = Deoptimizer::GetDeoptInfo(param_2,param_4);
    pMVar7 = local_190._0_8_;
    Log::MessageBuilder::MessageBuilder(aMStack_1a0,*(Log **)(param_1 + 0x28));
    Log::MessageBuilder::operator<<(aMStack_1a0,"code-deopt");
    pMVar3 = Log::MessageBuilder::operator<<(pMVar7,0);
    lVar4 = base::TimeTicks::HighResolutionNow();
    local_178 = (undefined **)(lVar4 - *(long *)(param_1 + 0x80));
    pMVar5 = (MessageBuilder *)base::TimeDelta::InMicroseconds((TimeDelta *)&local_178);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar3 + 0x10),
               (long)pMVar5);
    pMVar3 = Log::MessageBuilder::operator<<(pMVar5,0);
    iVar11 = *(int *)(param_2 + 0x13);
    if ((*(byte *)(param_2 + 0x17) & 1) != 0) {
      uVar9 = (long)(iVar11 + 0x47) & 0xfffffffffffffff8;
      iVar11 = (int)uVar9 + *(int *)(param_2 + uVar9 + -1) + -0x38;
    }
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar3 + 0x10),
               (iVar11 + 3U & 0xfffffffc) + 0x5f & 0xffffffe0);
    pMVar3 = Log::MessageBuilder::operator<<(pMVar3,0);
    if (*(int *)(param_2 + 0x17) < 0) {
      pMVar5 = (MessageBuilder *)Code::OffHeapInstructionStart((Code *)&local_180);
      pMVar7 = (MessageBuilder *)local_190._0_8_;
      pMVar6 = pMVar5;
    }
    else {
      pMVar5 = (MessageBuilder *)(param_2 + 0x3f);
      pMVar6 = pMVar3;
    }
    Log::MessageBuilder::operator<<(pMVar3,pMVar5);
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
    if (((ulong)pMVar7 & 0x7fffffffffff) == 0) {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_178,"<unknown>",9);
      iVar10 = -1;
      iVar11 = -1;
    }
    else {
      SourcePosition::Print((SourcePosition *)local_190,&local_178,local_180);
      iVar11 = ((uint)((ulong)local_190._0_8_ >> 0x1f) & 0xffff) - 1;
      iVar10 = (local_190._0_4_ >> 1 & 0x3fffffff) - 1;
    }
    pMVar7 = Log::MessageBuilder::operator<<(pMVar6,0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar7 + 0x10),iVar11
              );
    pMVar7 = Log::MessageBuilder::operator<<(pMVar7,0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar7 + 0x10),iVar10
              );
    Log::MessageBuilder::operator<<(pMVar7,0);
    pMVar7 = (MessageBuilder *)Deoptimizer::MessageFor(param_3);
    Log::MessageBuilder::operator<<(aMStack_1a0,(char *)pMVar7);
    Log::MessageBuilder::operator<<(pMVar7,0);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    pcVar8 = (char *)((ulong)local_1b8 | 1);
    if ((local_1b8[0] & 1) != 0) {
      pcVar8 = local_1a8;
    }
    Log::MessageBuilder::operator<<(aMStack_1a0,pcVar8);
    pMVar7 = Log::MessageBuilder::operator<<(pMVar7,0);
    pcVar8 = (char *)DeoptimizeReasonToString(local_190._8_8_ & 0xff);
    Log::MessageBuilder::operator<<(pMVar7,pcVar8);
    if ((local_1b8[0] & 1) != 0) {
      operator_delete(local_1a8);
    }
    Log::MessageBuilder::WriteToLogFile(aMStack_1a0);
    local_178 = &PTR__basic_ostringstream_01c6c858;
    local_108[0] = &PTR__basic_ostringstream_01c6c880;
    local_170 = &PTR__basic_stringbuf_01c67100;
    if ((local_130 & 1) != 0) {
      operator_delete(local_120);
    }
    local_170 = &PTR__basic_streambuf_01c671a8;
    std::__ndk1::locale::~locale(alStack_168);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
    base::Mutex::Unlock(local_198);
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

