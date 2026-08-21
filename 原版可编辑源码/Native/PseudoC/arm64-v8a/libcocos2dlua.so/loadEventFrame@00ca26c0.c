
/* cocostudio::timeline::ActionTimelineCache::loadEventFrame(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

long __thiscall
cocostudio::timeline::ActionTimelineCache::loadEventFrame
          (ActionTimelineCache *this,GenericValue *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  DictionaryHelper *this_00;
  char *pcVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [8];
  ulong local_48;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = EventFrame::create();
  this_00 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pcVar4 = (char *)DictionaryHelper::getStringValue_json(this_00,param_1,"value",(char *)0x0);
  if (pcVar4 != (char *)0x0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,pcVar4);
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (lVar3 + 0x58) != local_50) {
      uVar1 = (ulong)((byte)local_50[0] >> 1);
      pcVar4 = (char *)((ulong)local_50 | 1);
      if (((byte)local_50[0] & 1) != 0) {
        uVar1 = local_48;
        pcVar4 = local_40;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (lVar3 + 0x58),pcVar4,uVar1);
    }
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar3;
}

