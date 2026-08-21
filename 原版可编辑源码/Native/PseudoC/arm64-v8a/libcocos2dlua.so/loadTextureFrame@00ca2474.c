
/* cocostudio::timeline::ActionTimelineCache::loadTextureFrame(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

long __thiscall
cocostudio::timeline::ActionTimelineCache::loadTextureFrame
          (ActionTimelineCache *this,GenericValue *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  DictionaryHelper *this_00;
  char *pcVar4;
  SpriteFrameCache *this_01;
  long lVar5;
  char *__dest;
  ulong uVar6;
  ulong local_b0;
  ulong uStack_a8;
  char *local_a0;
  ulong local_90;
  ulong uStack_88;
  char *local_80;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [16];
  void *local_68;
  ulong local_60;
  ulong uStack_58;
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar3 = TextureFrame::create();
  this_00 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pcVar4 = (char *)DictionaryHelper::getStringValue_json(this_00,param_1,"value",(char *)0x0);
  if (pcVar4 == (char *)0x0) goto LAB_00ca2628;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_60,pcVar4);
  this_01 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
  lVar5 = cocos2d::SpriteFrameCache::getSpriteFrameByName(this_01,(basic_string *)&local_60);
  if (lVar5 == 0) {
    lVar5 = cocos2d::CSLoader::getInstance();
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_78,(basic_string *)(lVar5 + 0x58));
    FUN_007c1fb0(&local_90,local_78,pcVar4);
    if (((byte)local_60._0_1_ & 1) != 0) {
      *local_50 = '\0';
      uStack_58 = 0;
      if (((byte)local_60._0_1_ & 1) != 0) {
        operator_delete(local_50);
      }
    }
    uStack_58 = uStack_88;
    local_60 = local_90;
    local_50 = local_80;
    if (((byte)local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
  }
  pcVar4 = local_50;
  uVar1 = uStack_58;
  uStack_a8 = 0;
  local_a0 = (char *)0x0;
  local_b0 = 0;
  if ((local_60 & 1) == 0) {
    uStack_a8 = uStack_58;
    local_b0 = local_60;
    local_a0 = local_50;
  }
  else {
    if (0xffffffffffffffef < uStack_58) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_58 < 0x17) {
      __dest = (char *)((ulong)&local_b0 | 1);
      local_b0 = (ulong)(byte)((int)uStack_58 << 1);
      if (uStack_58 != 0) goto LAB_00ca25c4;
    }
    else {
      uVar6 = uStack_58 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar6);
      local_b0 = uVar6 | 1;
      uStack_a8 = uVar1;
      local_a0 = __dest;
LAB_00ca25c4:
      memcpy(__dest,pcVar4,uVar1);
    }
    __dest[uVar1] = '\0';
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (lVar3 + 0x60) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_b0) {
    uVar1 = local_b0 >> 1 & 0x7f;
    pcVar4 = (char *)((ulong)&local_b0 | 1);
    if ((local_b0 & 1) != 0) {
      uVar1 = uStack_a8;
      pcVar4 = local_a0;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x60),pcVar4,uVar1);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00ca2628:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

