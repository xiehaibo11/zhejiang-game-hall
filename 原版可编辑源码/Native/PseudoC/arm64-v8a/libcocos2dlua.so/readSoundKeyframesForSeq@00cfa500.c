
/* cocosbuilder::CCBReader::readSoundKeyframesForSeq(cocosbuilder::CCBSequence*) */

undefined8 __thiscall
cocosbuilder::CCBReader::readSoundKeyframesForSeq(CCBReader *this,CCBSequence *param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  Value *pVVar7;
  Value *pVVar8;
  CCBSequenceProperty *this_00;
  CCBKeyframe *this_01;
  vector<cocosbuilder::CCBKeyframe*,std::__ndk1::allocator<cocosbuilder::CCBKeyframe*>> *this_02;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  Value *local_c8;
  Value *local_c0;
  Value *pVStack_b8;
  basic_string local_b0 [16];
  void *local_a0;
  CCBKeyframe *local_98 [2];
  long local_88;
  
  lVar6 = tpidr_el0;
  local_88 = *(long *)(lVar6 + 0x28);
  uVar10 = 0xffffffffffffffff;
  iVar9 = *(int *)(this + 0x40);
  uVar11 = *(uint *)(this + 0x44);
  do {
    bVar4 = *(byte *)(*(long *)(this + 0x38) + (long)iVar9);
    uVar12 = uVar11 & 0x1f;
    *(uint *)(this + 0x44) = uVar11 + 1;
    bVar1 = 6 < (int)uVar11;
    uVar11 = uVar11 + 1;
    if (bVar1) {
      uVar11 = 0;
      iVar9 = iVar9 + 1;
      *(int *)(this + 0x40) = iVar9;
      *(undefined4 *)(this + 0x44) = 0;
    }
    uVar10 = uVar10 + 1;
  } while ((1 << (ulong)uVar12 & (uint)bVar4) == 0);
  if ((int)uVar10 == 0) {
    uVar10 = 0;
    uVar12 = 0;
  }
  else {
    uVar13 = 0;
    uVar14 = uVar10;
    do {
      bVar4 = *(byte *)(*(long *)(this + 0x38) + (long)iVar9);
      uVar12 = uVar11 & 0x1f;
      uVar14 = uVar14 - 1;
      *(uint *)(this + 0x44) = uVar11 + 1;
      bVar1 = 6 < (int)uVar11;
      uVar11 = uVar11 + 1;
      if (bVar1) {
        uVar11 = 0;
        iVar9 = iVar9 + 1;
        *(int *)(this + 0x40) = iVar9;
        *(undefined4 *)(this + 0x44) = 0;
      }
      uVar2 = 0;
      if ((1 << (ulong)uVar12 & (uint)bVar4) != 0) {
        uVar2 = 1L << (uVar14 & 0x3f);
      }
      uVar13 = uVar2 | uVar13;
      uVar12 = (uint)uVar13;
    } while (0 < (long)uVar14);
  }
  uVar12 = uVar12 | (uint)(1L << (uVar10 & 0x3f));
  iVar5 = uVar12 - 1;
  if (uVar11 != 0) {
    *(int *)(this + 0x40) = iVar9 + 1;
    *(undefined4 *)(this + 0x44) = 0;
  }
  if (uVar12 != 1) {
    this_00 = operator_new(0x60,(nothrow_t *)&std::nothrow);
    if (this_00 != (CCBSequenceProperty *)0x0) {
      CCBSequenceProperty::CCBSequenceProperty(this_00);
    }
    cocos2d::Ref::autorelease((Ref *)this_00);
    if (0 < iVar5) {
      iVar9 = 0;
      do {
        fVar15 = (float)readFloat(this);
        readCachedString();
        fVar16 = (float)readFloat(this);
        fVar17 = (float)readFloat(this);
        fVar18 = (float)readFloat(this);
        local_c0 = (Value *)0x0;
        pVStack_b8 = (Value *)0x0;
        local_c8 = (Value *)0x0;
        cocos2d::Value::Value((Value *)local_98,local_b0);
        pVVar7 = local_c0;
        if (local_c0 < pVStack_b8) {
          cocos2d::Value::Value(local_c0,(Value *)local_98);
          local_c0 = pVVar7 + 0x10;
        }
        else {
          std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
          __push_back_slow_path<cocos2d::Value>
                    ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)&local_c8,
                     (Value *)local_98);
        }
        cocos2d::Value::~Value((Value *)local_98);
        cocos2d::Value::Value((Value *)local_98,fVar16);
        pVVar7 = local_c0;
        if (local_c0 < pVStack_b8) {
          cocos2d::Value::Value(local_c0,(Value *)local_98);
          local_c0 = pVVar7 + 0x10;
        }
        else {
          std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
          __push_back_slow_path<cocos2d::Value>
                    ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)&local_c8,
                     (Value *)local_98);
        }
        cocos2d::Value::~Value((Value *)local_98);
        cocos2d::Value::Value((Value *)local_98,fVar17);
        pVVar7 = local_c0;
        if (local_c0 < pVStack_b8) {
          cocos2d::Value::Value(local_c0,(Value *)local_98);
          local_c0 = pVVar7 + 0x10;
        }
        else {
          std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
          __push_back_slow_path<cocos2d::Value>
                    ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)&local_c8,
                     (Value *)local_98);
        }
        cocos2d::Value::~Value((Value *)local_98);
        cocos2d::Value::Value((Value *)local_98,fVar18);
        pVVar7 = local_c0;
        if (local_c0 < pVStack_b8) {
          cocos2d::Value::Value(local_c0,(Value *)local_98);
          local_c0 = pVVar7 + 0x10;
        }
        else {
          std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
          __push_back_slow_path<cocos2d::Value>
                    ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)&local_c8,
                     (Value *)local_98);
        }
        cocos2d::Value::~Value((Value *)local_98);
        this_01 = operator_new(0x50,(nothrow_t *)&std::nothrow);
        if (this_01 != (CCBKeyframe *)0x0) {
          CCBKeyframe::CCBKeyframe(this_01);
        }
        CCBKeyframe::setTime(this_01,fVar15);
        cocos2d::Value::Value((Value *)local_98,(vector *)&local_c8);
        CCBKeyframe::setValue(this_01,(Value *)local_98);
        cocos2d::Value::~Value((Value *)local_98);
        this_02 = (vector<cocosbuilder::CCBKeyframe*,std::__ndk1::allocator<cocosbuilder::CCBKeyframe*>>
                   *)CCBSequenceProperty::getKeyframes(this_00);
        puVar3 = *(undefined8 **)(this_02 + 8);
        local_98[0] = this_01;
        if (puVar3 == *(undefined8 **)(this_02 + 0x10)) {
          std::__ndk1::
          vector<cocosbuilder::CCBKeyframe*,std::__ndk1::allocator<cocosbuilder::CCBKeyframe*>>::
          __push_back_slow_path<cocosbuilder::CCBKeyframe*const&>(this_02,local_98);
        }
        else {
          *puVar3 = this_01;
          *(undefined8 **)(this_02 + 8) = puVar3 + 1;
        }
        cocos2d::Ref::retain((Ref *)local_98[0]);
        cocos2d::Ref::release((Ref *)this_01);
        pVVar8 = local_c8;
        pVVar7 = local_c0;
        if (local_c8 != (Value *)0x0) {
          while (pVVar7 != pVVar8) {
            cocos2d::Value::~Value(pVVar7 + -0x10);
            pVVar7 = pVVar7 + -0x10;
          }
          local_c0 = pVVar8;
          operator_delete(local_c8);
        }
        if (((byte)local_b0[0] & 1) != 0) {
          operator_delete(local_a0);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 != iVar5);
    }
    CCBSequence::setSoundChannel(param_1,this_00);
  }
  if (*(long *)(lVar6 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

