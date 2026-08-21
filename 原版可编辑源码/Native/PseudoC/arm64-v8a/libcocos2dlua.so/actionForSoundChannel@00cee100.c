
/* cocosbuilder::CCBAnimationManager::actionForSoundChannel(cocosbuilder::CCBSequenceProperty*) */

undefined8 __thiscall
cocosbuilder::CCBAnimationManager::actionForSoundChannel
          (CCBAnimationManager *this,CCBSequenceProperty *param_1)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  Value *this_00;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char *pcVar10;
  undefined8 *puVar11;
  CCBKeyframe *this_01;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  Ref *local_208;
  ulong local_200;
  char *local_1f8;
  float local_1ec;
  undefined8 local_1e8;
  basic_string local_1e0 [16];
  void *local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined8 *puStack_1b8;
  Ref *local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined **ppuStack_198;
  locale alStack_190 [8];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong local_158;
  undefined8 uStack_150;
  void *local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined8 local_130 [17];
  undefined8 local_a8;
  undefined4 local_a0;
  long local_90;
  
  lVar2 = tpidr_el0;
  local_90 = *(long *)(lVar2 + 0x28);
  local_1c0 = (undefined8 *)0x0;
  puStack_1b8 = (undefined8 *)0x0;
  local_1c8 = (undefined8 *)0x0;
  plVar4 = (long *)CCBSequenceProperty::getKeyframes(param_1);
  lVar5 = *plVar4;
  lVar6 = plVar4[1] - lVar5;
  if (0 < lVar6) {
    lVar12 = 0;
    pcVar10 = (char *)((ulong)&local_208 | 1);
    fVar15 = 0.0;
    while( true ) {
      this_01 = *(CCBKeyframe **)(lVar5 + lVar12 * 8);
      fVar13 = (float)CCBKeyframe::getTime(this_01);
      fVar14 = (float)CCBKeyframe::getTime(this_01);
      if (0.0 < fVar13 - fVar15) {
        local_1b0 = (Ref *)cocos2d::DelayTime::create(fVar13 - fVar15);
        if (local_1c0 == puStack_1b8) {
          std::__ndk1::
          vector<cocos2d::FiniteTimeAction*,std::__ndk1::allocator<cocos2d::FiniteTimeAction*>>::
          __push_back_slow_path<cocos2d::FiniteTimeAction*const&>
                    ((vector<cocos2d::FiniteTimeAction*,std::__ndk1::allocator<cocos2d::FiniteTimeAction*>>
                      *)&local_1c8,(FiniteTimeAction **)&local_1b0);
        }
        else {
          *local_1c0 = local_1b0;
          local_1c0 = local_1c0 + 1;
        }
        cocos2d::Ref::retain(local_1b0);
      }
      local_130[0] = 0x1698928;
      local_1b0 = (Ref *)(std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>-in-std::
                          __ndk1::
                          basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::construction_vtable + 0x18);
      uStack_1a8 = 0;
      local_1a0 = 0x1698810;
      std::__ndk1::ios_base::init((ios_base *)local_130,&ppuStack_198);
      local_a0 = 0xffffffff;
      local_1b0 = (Ref *)(std::__ndk1::
                          basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::vtable + 0x18);
      local_1a0 = 0x1698810;
      local_130[0] = 0x1698838;
      local_a8 = 0;
      ppuStack_198 = &PTR__basic_streambuf_01698a08;
      std::__ndk1::locale::locale(alStack_190);
      uStack_170 = 0;
      local_178 = 0;
      uStack_160 = 0;
      uStack_168 = 0;
      uStack_180 = 0;
      local_188 = 0;
      ppuStack_198 = &PTR__basic_stringbuf_01698960;
      uStack_150 = 0;
      local_158 = 0;
      uStack_140 = 0;
      local_148 = (void *)0x0;
      local_138 = 0x18;
      this_00 = (Value *)CCBKeyframe::getValue(this_01);
      cocos2d::Value::asValueVector(this_00);
      cocos2d::Value::asString();
      local_1e8 = 0;
      local_1ec = 0.0;
      cocos2d::Value::asString();
      uVar1 = (ulong)local_208 >> 1 & 0x7f;
      pcVar3 = pcVar10;
      if (((ulong)local_208 & 1) != 0) {
        uVar1 = local_200;
        pcVar3 = local_1f8;
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_1a0,pcVar3,uVar1);
      if (((ulong)local_208 & 1) != 0) {
        operator_delete(local_1f8);
      }
      FUN_00cf41c8(&local_1b0,(long)&local_1e8 + 4);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_1a0);
      cocos2d::Value::asString();
      uVar1 = (ulong)local_208 >> 1 & 0x7f;
      pcVar3 = pcVar10;
      if (((ulong)local_208 & 1) != 0) {
        uVar1 = local_200;
        pcVar3 = local_1f8;
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_1a0,pcVar3,uVar1);
      if (((ulong)local_208 & 1) != 0) {
        operator_delete(local_1f8);
      }
      FUN_00cf41c8(&local_1b0,&local_1e8);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_1a0);
      cocos2d::Value::asString();
      uVar1 = (ulong)local_208 >> 1 & 0x7f;
      pcVar3 = pcVar10;
      if (((ulong)local_208 & 1) != 0) {
        uVar1 = local_200;
        pcVar3 = local_1f8;
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_1a0,pcVar3,uVar1);
      if (((ulong)local_208 & 1) != 0) {
        operator_delete(local_1f8);
      }
      FUN_00cf41c8(&local_1b0,&local_1ec);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_1a0);
      local_208 = (Ref *)CCBSoundEffect::actionWithSoundFile
                                   (local_1e0,local_1e8._4_4_,(float)local_1e8,local_1ec);
      if (local_1c0 == puStack_1b8) {
        std::__ndk1::
        vector<cocos2d::FiniteTimeAction*,std::__ndk1::allocator<cocos2d::FiniteTimeAction*>>::
        __push_back_slow_path<cocos2d::FiniteTimeAction*const&>
                  ((vector<cocos2d::FiniteTimeAction*,std::__ndk1::allocator<cocos2d::FiniteTimeAction*>>
                    *)&local_1c8,(FiniteTimeAction **)&local_208);
      }
      else {
        *local_1c0 = local_208;
        local_1c0 = local_1c0 + 1;
      }
      cocos2d::Ref::retain(local_208);
      if (((byte)local_1e0[0] & 1) != 0) {
        operator_delete(local_1d0);
      }
      local_1b0 = (Ref *)(std::__ndk1::
                          basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::vtable + 0x18);
      local_1a0 = 0x1698810;
      local_130[0] = 0x1698838;
      ppuStack_198 = &PTR__basic_stringbuf_01698960;
      if ((local_158 & 1) != 0) {
        operator_delete(local_148);
      }
      ppuStack_198 = &PTR__basic_streambuf_01698a08;
      std::__ndk1::locale::~locale(alStack_190);
      std::__ndk1::ios_base::~ios_base((ios_base *)local_130);
      lVar12 = lVar12 + 1;
      if (lVar6 >> 3 <= lVar12) break;
      lVar5 = *plVar4;
      fVar15 = fVar14;
    }
  }
  if ((long)local_1c0 - (long)local_1c8 < 8) {
    uVar7 = 0;
    puVar9 = local_1c0;
    puVar8 = local_1c0;
    puVar11 = local_1c8;
    if (local_1c8 == local_1c0) goto LAB_00cee4e8;
  }
  else {
    uVar7 = cocos2d::Sequence::create((Vector *)&local_1c8);
    puVar9 = local_1c0;
    puVar8 = local_1c0;
    puVar11 = local_1c8;
    if (local_1c8 == local_1c0) goto LAB_00cee4e8;
  }
  do {
    cocos2d::Ref::release((Ref *)*puVar11);
    puVar11 = puVar11 + 1;
    puVar9 = local_1c8;
  } while (puVar8 != puVar11);
LAB_00cee4e8:
  local_1c0 = local_1c8;
  if (puVar9 != (undefined8 *)0x0) {
    local_1c0 = puVar9;
    operator_delete(puVar9);
  }
  if (*(long *)(lVar2 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

