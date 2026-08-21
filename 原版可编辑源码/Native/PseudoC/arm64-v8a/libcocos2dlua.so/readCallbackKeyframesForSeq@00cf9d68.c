
/* cocosbuilder::CCBReader::readCallbackKeyframesForSeq(cocosbuilder::CCBSequence*) */

undefined8 cocosbuilder::CCBReader::readCallbackKeyframesForSeq(CCBSequence *param_1)

{
  bool bVar1;
  ulong uVar2;
  char *pcVar3;
  Value *pVVar4;
  undefined8 *puVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  Value *pVVar9;
  CCBSequenceProperty *this;
  CCBKeyframe *this_00;
  vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *this_01;
  vector<cocosbuilder::CCBKeyframe*,std::__ndk1::allocator<cocosbuilder::CCBKeyframe*>> *this_02;
  CCBSequence *in_x1;
  basic_string *in_x2;
  int iVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  basic_string local_1f8 [8];
  basic_string *local_1f0;
  char *local_1e8;
  Value *local_1e0;
  Value *local_1d8;
  Value *pVStack_1d0;
  basic_string local_1c8 [16];
  void *local_1b8;
  Value aVStack_1b0 [16];
  CCBKeyframe *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined **ppuStack_188;
  locale alStack_180 [8];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  byte local_148;
  undefined8 uStack_140;
  void *local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined8 local_120 [17];
  undefined8 local_98;
  undefined4 local_90;
  long local_80;
  
  lVar8 = tpidr_el0;
  local_80 = *(long *)(lVar8 + 0x28);
  uVar12 = 0xffffffffffffffff;
  iVar10 = *(int *)(param_1 + 0x40);
  uVar13 = *(uint *)(param_1 + 0x44);
  do {
    bVar6 = *(byte *)(*(long *)(param_1 + 0x38) + (long)iVar10);
    uVar14 = uVar13 & 0x1f;
    *(uint *)(param_1 + 0x44) = uVar13 + 1;
    bVar1 = 6 < (int)uVar13;
    uVar13 = uVar13 + 1;
    if (bVar1) {
      uVar13 = 0;
      iVar10 = iVar10 + 1;
      *(int *)(param_1 + 0x40) = iVar10;
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    uVar12 = uVar12 + 1;
  } while ((1 << (ulong)uVar14 & (uint)bVar6) == 0);
  if ((int)uVar12 == 0) {
    uVar12 = 0;
    uVar14 = 0;
  }
  else {
    uVar15 = 0;
    uVar16 = uVar12;
    do {
      bVar6 = *(byte *)(*(long *)(param_1 + 0x38) + (long)iVar10);
      uVar14 = uVar13 & 0x1f;
      uVar16 = uVar16 - 1;
      *(uint *)(param_1 + 0x44) = uVar13 + 1;
      bVar1 = 6 < (int)uVar13;
      uVar13 = uVar13 + 1;
      if (bVar1) {
        uVar13 = 0;
        iVar10 = iVar10 + 1;
        *(int *)(param_1 + 0x40) = iVar10;
        *(undefined4 *)(param_1 + 0x44) = 0;
      }
      uVar2 = 0;
      if ((1 << (ulong)uVar14 & (uint)bVar6) != 0) {
        uVar2 = 1L << (uVar16 & 0x3f);
      }
      uVar15 = uVar2 | uVar15;
      uVar14 = (uint)uVar15;
    } while (0 < (long)uVar16);
  }
  uVar14 = uVar14 | (uint)(1L << (uVar12 & 0x3f));
  iVar7 = uVar14 - 1;
  if (uVar13 != 0) {
    *(int *)(param_1 + 0x40) = iVar10 + 1;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (uVar14 != 1) {
    this = operator_new(0x60,(nothrow_t *)&std::nothrow);
    if (this != (CCBSequenceProperty *)0x0) {
      CCBSequenceProperty::CCBSequenceProperty(this);
    }
    cocos2d::Ref::autorelease((Ref *)this);
    if (0 < iVar7) {
      iVar10 = 0;
      do {
        fVar17 = (float)readFloat((CCBReader *)param_1);
        readCachedString();
        iVar11 = *(int *)(param_1 + 0x40);
        uVar13 = *(uint *)(param_1 + 0x44);
        uVar12 = 0xffffffffffffffff;
        do {
          bVar6 = *(byte *)(*(long *)(param_1 + 0x38) + (long)iVar11);
          uVar14 = uVar13 & 0x1f;
          *(uint *)(param_1 + 0x44) = uVar13 + 1;
          bVar1 = 6 < (int)uVar13;
          uVar13 = uVar13 + 1;
          if (bVar1) {
            uVar13 = 0;
            iVar11 = iVar11 + 1;
            *(int *)(param_1 + 0x40) = iVar11;
            *(undefined4 *)(param_1 + 0x44) = 0;
          }
          uVar12 = uVar12 + 1;
        } while ((1 << (ulong)uVar14 & (uint)bVar6) == 0);
        if ((int)uVar12 == 0) {
          uVar12 = 0;
          uVar14 = 0;
        }
        else {
          uVar15 = 0;
          uVar16 = uVar12;
          do {
            bVar6 = *(byte *)(*(long *)(param_1 + 0x38) + (long)iVar11);
            uVar14 = uVar13 & 0x1f;
            uVar16 = uVar16 - 1;
            *(uint *)(param_1 + 0x44) = uVar13 + 1;
            bVar1 = 6 < (int)uVar13;
            uVar13 = uVar13 + 1;
            if (bVar1) {
              uVar13 = 0;
              iVar11 = iVar11 + 1;
              *(int *)(param_1 + 0x40) = iVar11;
              *(undefined4 *)(param_1 + 0x44) = 0;
            }
            uVar2 = 0;
            if ((1 << (ulong)uVar14 & (uint)bVar6) != 0) {
              uVar2 = 1L << (uVar16 & 0x3f);
            }
            uVar15 = uVar2 | uVar15;
            uVar14 = (uint)uVar15;
          } while (0 < (long)uVar16);
        }
        if (uVar13 != 0) {
          *(int *)(param_1 + 0x40) = iVar11 + 1;
          *(undefined4 *)(param_1 + 0x44) = 0;
        }
        local_1d8 = (Value *)0x0;
        pVStack_1d0 = (Value *)0x0;
        local_1e0 = (Value *)0x0;
        cocos2d::Value::Value((Value *)&local_1a0,local_1c8);
        pVVar4 = local_1d8;
        if (local_1d8 < pVStack_1d0) {
          cocos2d::Value::Value(local_1d8,(Value *)&local_1a0);
          local_1d8 = pVVar4 + 0x10;
        }
        else {
          std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
          __push_back_slow_path<cocos2d::Value>
                    ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)&local_1e0,
                     (Value *)&local_1a0);
        }
        iVar11 = (uVar14 | (uint)(1L << (uVar12 & 0x3f))) - 1;
        cocos2d::Value::~Value((Value *)&local_1a0);
        cocos2d::Value::Value((Value *)&local_1a0,iVar11);
        pVVar4 = local_1d8;
        if (local_1d8 < pVStack_1d0) {
          cocos2d::Value::Value(local_1d8,(Value *)&local_1a0);
          local_1d8 = pVVar4 + 0x10;
        }
        else {
          std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
          __push_back_slow_path<cocos2d::Value>
                    ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)&local_1e0,
                     (Value *)&local_1a0);
        }
        cocos2d::Value::~Value((Value *)&local_1a0);
        this_00 = operator_new(0x50,(nothrow_t *)&std::nothrow);
        if (this_00 != (CCBKeyframe *)0x0) {
          CCBKeyframe::CCBKeyframe(this_00);
        }
        cocos2d::Ref::autorelease((Ref *)this_00);
        CCBKeyframe::setTime(this_00,fVar17);
        cocos2d::Value::Value((Value *)&local_1a0,(vector *)&local_1e0);
        CCBKeyframe::setValue(this_00,(Value *)&local_1a0);
        cocos2d::Value::~Value((Value *)&local_1a0);
        if (param_1[0x180] != (CCBSequence)0x0) {
          local_120[0] = 0x1698928;
          local_1a0 = (CCBKeyframe *)
                      (std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>-in-std::
                       __ndk1::
                       basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::construction_vtable + 0x18);
          uStack_198 = 0;
          local_190 = 0x1698810;
          std::__ndk1::ios_base::init((ios_base *)local_120,&ppuStack_188);
          local_90 = 0xffffffff;
          local_1a0 = (CCBKeyframe *)
                      (std::__ndk1::
                       basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::vtable + 0x18);
          local_190 = 0x1698810;
          local_120[0] = 0x1698838;
          local_98 = 0;
          ppuStack_188 = &PTR__basic_streambuf_01698a08;
          std::__ndk1::locale::locale(alStack_180);
          uStack_160 = 0;
          local_168 = 0;
          uStack_150 = 0;
          uStack_158 = 0;
          uStack_170 = 0;
          local_178 = 0;
          ppuStack_188 = &PTR__basic_stringbuf_01698960;
          uStack_140 = 0;
          local_148 = 0;
          uStack_130 = 0;
          local_138 = (void *)0x0;
          local_128 = 0x18;
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_190,iVar11);
          std::__ndk1::operator+((__ndk1 *)&DAT_012f06b7,(char *)local_1c8,in_x2);
          in_x2 = (basic_string *)(ulong)((byte)local_1f8[0] >> 1);
          pcVar3 = (char *)((ulong)local_1f8 | 1);
          if (((byte)local_1f8[0] & 1) != 0) {
            pcVar3 = local_1e8;
            in_x2 = local_1f0;
          }
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    ((basic_ostream *)&local_190,pcVar3,(ulong)in_x2);
          if (((byte)local_1f8[0] & 1) != 0) {
            operator_delete(local_1e8);
          }
          this_01 = (vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)
                    CCBAnimationManager::getKeyframeCallbacks
                              (*(CCBAnimationManager **)(param_1 + 0x80));
          std::__ndk1::
          basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
          cocos2d::Value::Value(aVStack_1b0,local_1f8);
          pVVar4 = *(Value **)(this_01 + 8);
          if (pVVar4 < *(Value **)(this_01 + 0x10)) {
            cocos2d::Value::Value(pVVar4,aVStack_1b0);
            *(Value **)(this_01 + 8) = pVVar4 + 0x10;
          }
          else {
            std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
            __push_back_slow_path<cocos2d::Value>(this_01,aVStack_1b0);
          }
          cocos2d::Value::~Value(aVStack_1b0);
          if (((byte)local_1f8[0] & 1) != 0) {
            operator_delete(local_1e8);
          }
          local_1a0 = (CCBKeyframe *)
                      (std::__ndk1::
                       basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::vtable + 0x18);
          local_190 = 0x1698810;
          local_120[0] = 0x1698838;
          ppuStack_188 = &PTR__basic_stringbuf_01698960;
          if ((local_148 & 1) != 0) {
            operator_delete(local_138);
          }
          ppuStack_188 = &PTR__basic_streambuf_01698a08;
          std::__ndk1::locale::~locale(alStack_180);
          std::__ndk1::ios_base::~ios_base((ios_base *)local_120);
        }
        this_02 = (vector<cocosbuilder::CCBKeyframe*,std::__ndk1::allocator<cocosbuilder::CCBKeyframe*>>
                   *)CCBSequenceProperty::getKeyframes(this);
        puVar5 = *(undefined8 **)(this_02 + 8);
        local_1a0 = this_00;
        if (puVar5 == *(undefined8 **)(this_02 + 0x10)) {
          std::__ndk1::
          vector<cocosbuilder::CCBKeyframe*,std::__ndk1::allocator<cocosbuilder::CCBKeyframe*>>::
          __push_back_slow_path<cocosbuilder::CCBKeyframe*const&>(this_02,&local_1a0);
        }
        else {
          *puVar5 = this_00;
          *(undefined8 **)(this_02 + 8) = puVar5 + 1;
        }
        cocos2d::Ref::retain((Ref *)local_1a0);
        pVVar9 = local_1e0;
        pVVar4 = local_1d8;
        if (local_1e0 != (Value *)0x0) {
          while (pVVar4 != pVVar9) {
            cocos2d::Value::~Value(pVVar4 + -0x10);
            pVVar4 = pVVar4 + -0x10;
          }
          local_1d8 = pVVar9;
          operator_delete(local_1e0);
        }
        if (((byte)local_1c8[0] & 1) != 0) {
          operator_delete(local_1b8);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 != iVar7);
    }
    CCBSequence::setCallbackChannel(in_x1,this);
  }
  if (*(long *)(lVar8 + 0x28) == local_80) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

