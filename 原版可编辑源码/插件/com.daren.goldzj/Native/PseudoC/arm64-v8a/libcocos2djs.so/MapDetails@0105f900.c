
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105f978 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::MapDetails(v8::internal::Map) */

void __thiscall v8::internal::Logger::MapDetails(Logger *this,undefined **param_2)

{
  char *pcVar1;
  long lVar2;
  MessageBuilder *pMVar3;
  long lVar4;
  MessageBuilder *pMVar5;
  Log *pLVar6;
  ulong local_1a0 [2];
  char *local_190;
  MessageBuilder aMStack_188 [8];
  Mutex *local_180;
  undefined **local_178;
  undefined **local_170;
  undefined **local_168;
  locale alStack_160 [8];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  ulong local_128;
  undefined8 uStack_120;
  void *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined **local_100 [17];
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pLVar6 = *(Log **)(this + 0x28);
  local_178 = param_2;
  if ((*pLVar6 == (Log)0x0) && (*(long *)(pLVar6 + 8) != 0)) {
    if (FLAG_trace_maps != '\0') {
      Log::MessageBuilder::MessageBuilder(aMStack_188,pLVar6);
      Log::MessageBuilder::operator<<(aMStack_188,"map-details");
      pMVar3 = Log::MessageBuilder::operator<<((MessageBuilder *)this,0);
      lVar4 = base::TimeTicks::HighResolutionNow();
      local_1a0[0] = lVar4 - *(long *)(this + 0x80);
      pMVar5 = (MessageBuilder *)base::TimeDelta::InMicroseconds((TimeDelta *)local_1a0);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar3 + 0x10),
                 (long)pMVar5);
      pMVar3 = Log::MessageBuilder::operator<<(pMVar5,0);
      local_168 = (undefined **)0x10c;
      local_170 = param_2;
      internal::operator<<((basic_ostream *)(*(long *)pMVar3 + 0x10),(AsHex *)&local_170);
      Log::MessageBuilder::operator<<(pMVar3,0);
      if (FLAG_trace_maps_details != '\0') {
        local_170 = (undefined **)0x1c6c8a8;
        local_100[0] = (undefined **)0x1c6c8d0;
        std::__ndk1::ios_base::init((ios_base *)local_100,&local_168);
        local_70 = 0xffffffff;
        local_168 = &PTR__basic_streambuf_01c671a8;
        local_78 = 0;
        local_170 = &PTR__basic_ostringstream_01c6c858;
        local_100[0] = &PTR__basic_ostringstream_01c6c880;
        std::__ndk1::locale::locale(alStack_160);
        uStack_130 = 0;
        local_138 = 0;
        uStack_140 = 0;
        local_148 = 0;
        uStack_150 = 0;
        local_158 = 0;
        uStack_120 = 0;
        local_128 = 0;
        uStack_110 = 0;
        local_118 = (void *)0x0;
        local_108 = 0x10;
        local_168 = &PTR__basic_stringbuf_01c67100;
        Map::PrintMapDetails((Map *)&local_178,(basic_ostream *)&local_170);
        std::__ndk1::
        basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
        pcVar1 = (char *)((ulong)local_1a0 | 1);
        if ((local_1a0[0] & 1) != 0) {
          pcVar1 = local_190;
        }
        Log::MessageBuilder::operator<<(aMStack_188,pcVar1);
        if ((local_1a0[0] & 1) != 0) {
          operator_delete(local_190);
        }
        local_170 = &PTR__basic_ostringstream_01c6c858;
        local_100[0] = &PTR__basic_ostringstream_01c6c880;
        if ((local_128 & 1) != 0) {
          local_168 = &PTR__basic_stringbuf_01c67100;
          operator_delete(local_118);
        }
        local_168 = &PTR__basic_streambuf_01c671a8;
        std::__ndk1::locale::~locale(alStack_160);
        std::__ndk1::ios_base::~ios_base((ios_base *)local_100);
      }
      Log::MessageBuilder::WriteToLogFile(aMStack_188);
      base::Mutex::Unlock(local_180);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

