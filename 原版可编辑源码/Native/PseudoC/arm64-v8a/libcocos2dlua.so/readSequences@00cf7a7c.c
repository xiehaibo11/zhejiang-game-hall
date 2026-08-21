
/* cocosbuilder::CCBReader::readSequences() */

undefined8 __thiscall cocosbuilder::CCBReader::readSequences(CCBReader *this)

{
  bool bVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  vector<cocosbuilder::CCBSequence*,std::__ndk1::allocator<cocosbuilder::CCBSequence*>> *this_00;
  CCBSequence *this_01;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  CCBSequence *local_80 [2];
  char *local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  this_00 = (vector<cocosbuilder::CCBSequence*,std::__ndk1::allocator<cocosbuilder::CCBSequence*>> *
            )CCBAnimationManager::getSequences(*(CCBAnimationManager **)(this + 0x80));
  lVar11 = *(long *)(this + 0x38);
  iVar9 = *(int *)(this + 0x40);
  uVar13 = *(uint *)(this + 0x44);
  uVar12 = 0xffffffffffffffff;
  do {
    bVar5 = *(byte *)(lVar11 + iVar9);
    uVar14 = uVar13 & 0x1f;
    *(uint *)(this + 0x44) = uVar13 + 1;
    bVar1 = 6 < (int)uVar13;
    uVar13 = uVar13 + 1;
    if (bVar1) {
      uVar13 = 0;
      iVar9 = iVar9 + 1;
      *(int *)(this + 0x40) = iVar9;
      *(undefined4 *)(this + 0x44) = 0;
    }
    uVar12 = uVar12 + 1;
  } while ((1 << (ulong)uVar14 & (uint)bVar5) == 0);
  if ((int)uVar12 == 0) {
    uVar12 = 0;
    uVar14 = 0;
  }
  else {
    uVar15 = 0;
    uVar16 = uVar12;
    do {
      bVar5 = *(byte *)(lVar11 + iVar9);
      uVar14 = uVar13 & 0x1f;
      uVar16 = uVar16 - 1;
      *(uint *)(this + 0x44) = uVar13 + 1;
      bVar1 = 6 < (int)uVar13;
      uVar13 = uVar13 + 1;
      if (bVar1) {
        uVar13 = 0;
        iVar9 = iVar9 + 1;
        *(int *)(this + 0x40) = iVar9;
        *(undefined4 *)(this + 0x44) = 0;
      }
      uVar3 = 0;
      if ((1 << (ulong)uVar14 & (uint)bVar5) != 0) {
        uVar3 = 1L << (uVar16 & 0x3f);
      }
      uVar15 = uVar3 | uVar15;
      uVar14 = (uint)uVar15;
    } while (0 < (long)uVar16);
  }
  iVar7 = (uVar14 | (uint)(1L << (uVar12 & 0x3f))) - 1;
  if (uVar13 != 0) {
    iVar9 = iVar9 + 1;
    *(int *)(this + 0x40) = iVar9;
    *(undefined4 *)(this + 0x44) = 0;
  }
  if (iVar7 < 1) {
    uVar13 = 0;
  }
  else {
    iVar9 = 0;
    do {
      this_01 = operator_new(0x58,(nothrow_t *)&std::nothrow);
      if (this_01 != (CCBSequence *)0x0) {
        CCBSequence::CCBSequence(this_01);
      }
      cocos2d::Ref::autorelease((Ref *)this_01);
      fVar17 = (float)readFloat(this);
      CCBSequence::setDuration(this_01,fVar17);
      readCachedString();
      pcVar2 = (char *)((ulong)local_80 | 1);
      if (((ulong)local_80[0] & 1) != 0) {
        pcVar2 = local_70;
      }
      CCBSequence::setName(this_01,pcVar2);
      if (((ulong)local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
      iVar10 = *(int *)(this + 0x40);
      uVar13 = *(uint *)(this + 0x44);
      uVar12 = 0xffffffffffffffff;
      do {
        bVar5 = *(byte *)(*(long *)(this + 0x38) + (long)iVar10);
        uVar14 = uVar13 & 0x1f;
        *(uint *)(this + 0x44) = uVar13 + 1;
        bVar1 = 6 < (int)uVar13;
        uVar13 = uVar13 + 1;
        if (bVar1) {
          uVar13 = 0;
          iVar10 = iVar10 + 1;
          *(int *)(this + 0x40) = iVar10;
          *(undefined4 *)(this + 0x44) = 0;
        }
        uVar12 = uVar12 + 1;
      } while ((1 << (ulong)uVar14 & (uint)bVar5) == 0);
      if ((int)uVar12 == 0) {
        uVar12 = 0;
        uVar14 = 0;
      }
      else {
        uVar15 = 0;
        uVar16 = uVar12;
        do {
          bVar5 = *(byte *)(*(long *)(this + 0x38) + (long)iVar10);
          uVar14 = uVar13 & 0x1f;
          uVar16 = uVar16 - 1;
          *(uint *)(this + 0x44) = uVar13 + 1;
          bVar1 = 6 < (int)uVar13;
          uVar13 = uVar13 + 1;
          if (bVar1) {
            uVar13 = 0;
            iVar10 = iVar10 + 1;
            *(int *)(this + 0x40) = iVar10;
            *(undefined4 *)(this + 0x44) = 0;
          }
          uVar3 = 0;
          if ((1 << (ulong)uVar14 & (uint)bVar5) != 0) {
            uVar3 = 1L << (uVar16 & 0x3f);
          }
          uVar15 = uVar3 | uVar15;
          uVar14 = (uint)uVar15;
        } while (0 < (long)uVar16);
      }
      if (uVar13 != 0) {
        *(int *)(this + 0x40) = iVar10 + 1;
        *(undefined4 *)(this + 0x44) = 0;
      }
      CCBSequence::setSequenceId(this_01,(uVar14 | (uint)(1L << (uVar12 & 0x3f))) - 1);
      iVar10 = *(int *)(this + 0x40);
      uVar13 = *(uint *)(this + 0x44);
      uVar12 = 0xffffffffffffffff;
      do {
        bVar5 = *(byte *)(*(long *)(this + 0x38) + (long)iVar10);
        uVar14 = uVar13 & 0x1f;
        *(uint *)(this + 0x44) = uVar13 + 1;
        bVar1 = 6 < (int)uVar13;
        uVar13 = uVar13 + 1;
        if (bVar1) {
          uVar13 = 0;
          iVar10 = iVar10 + 1;
          *(int *)(this + 0x40) = iVar10;
          *(undefined4 *)(this + 0x44) = 0;
        }
        uVar12 = uVar12 + 1;
      } while ((1 << (ulong)uVar14 & (uint)bVar5) == 0);
      if ((int)uVar12 == 0) {
        uVar12 = 0;
        uVar16 = 0;
      }
      else {
        uVar16 = 0;
        uVar15 = uVar12;
        do {
          bVar5 = *(byte *)(*(long *)(this + 0x38) + (long)iVar10);
          uVar14 = uVar13 & 0x1f;
          uVar15 = uVar15 - 1;
          *(uint *)(this + 0x44) = uVar13 + 1;
          bVar1 = 6 < (int)uVar13;
          uVar13 = uVar13 + 1;
          if (bVar1) {
            uVar13 = 0;
            iVar10 = iVar10 + 1;
            *(int *)(this + 0x40) = iVar10;
            *(undefined4 *)(this + 0x44) = 0;
          }
          uVar3 = 0;
          if ((1 << (ulong)uVar14 & (uint)bVar5) != 0) {
            uVar3 = 1L << (uVar15 & 0x3f);
          }
          uVar16 = uVar3 | uVar16;
        } while (0 < (long)uVar15);
      }
      uVar16 = uVar16 | 1L << (uVar12 & 0x3f);
      uVar12 = uVar16;
      if ((long)uVar16 < 0) {
        uVar12 = uVar16 + 1;
      }
      lVar11 = 2;
      if ((uint)uVar16 == ((uint)uVar12 & 0xfffffffe)) {
        lVar11 = -2;
      }
      iVar6 = 0;
      if (lVar11 != 0) {
        iVar6 = (int)((long)uVar16 / lVar11);
      }
      if (uVar13 != 0) {
        *(int *)(this + 0x40) = iVar10 + 1;
        *(undefined4 *)(this + 0x44) = 0;
      }
      CCBSequence::setChainedSequenceId(this_01,iVar6);
      readCallbackKeyframesForSeq((CCBSequence *)this);
      readSoundKeyframesForSeq(this,this_01);
      puVar4 = *(undefined8 **)(this_00 + 8);
      local_80[0] = this_01;
      if (puVar4 == *(undefined8 **)(this_00 + 0x10)) {
        std::__ndk1::
        vector<cocosbuilder::CCBSequence*,std::__ndk1::allocator<cocosbuilder::CCBSequence*>>::
        __push_back_slow_path<cocosbuilder::CCBSequence*const&>(this_00,local_80);
      }
      else {
        *puVar4 = this_01;
        *(undefined8 **)(this_00 + 8) = puVar4 + 1;
      }
      cocos2d::Ref::retain((Ref *)local_80[0]);
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar7);
    lVar11 = *(long *)(this + 0x38);
    iVar9 = *(int *)(this + 0x40);
    uVar13 = *(uint *)(this + 0x44);
  }
  uVar12 = 0xffffffffffffffff;
  do {
    bVar5 = *(byte *)(lVar11 + iVar9);
    uVar14 = uVar13 & 0x1f;
    *(uint *)(this + 0x44) = uVar13 + 1;
    bVar1 = 6 < (int)uVar13;
    uVar13 = uVar13 + 1;
    if (bVar1) {
      uVar13 = 0;
      iVar9 = iVar9 + 1;
      *(int *)(this + 0x40) = iVar9;
      *(undefined4 *)(this + 0x44) = 0;
    }
    uVar12 = uVar12 + 1;
  } while ((1 << (ulong)uVar14 & (uint)bVar5) == 0);
  if ((int)uVar12 == 0) {
    uVar12 = 0;
    uVar16 = 0;
  }
  else {
    uVar16 = 0;
    uVar15 = uVar12;
    do {
      bVar5 = *(byte *)(lVar11 + iVar9);
      uVar14 = uVar13 & 0x1f;
      uVar15 = uVar15 - 1;
      *(uint *)(this + 0x44) = uVar13 + 1;
      bVar1 = 6 < (int)uVar13;
      uVar13 = uVar13 + 1;
      if (bVar1) {
        uVar13 = 0;
        iVar9 = iVar9 + 1;
        *(int *)(this + 0x40) = iVar9;
        *(undefined4 *)(this + 0x44) = 0;
      }
      uVar3 = 0;
      if ((1 << (ulong)uVar14 & (uint)bVar5) != 0) {
        uVar3 = 1L << (uVar15 & 0x3f);
      }
      uVar16 = uVar3 | uVar16;
    } while (0 < (long)uVar15);
  }
  uVar16 = uVar16 | 1L << (uVar12 & 0x3f);
  uVar12 = uVar16;
  if ((long)uVar16 < 0) {
    uVar12 = uVar16 + 1;
  }
  lVar11 = 2;
  if ((uint)uVar16 == ((uint)uVar12 & 0xfffffffe)) {
    lVar11 = -2;
  }
  iVar7 = 0;
  if (lVar11 != 0) {
    iVar7 = (int)((long)uVar16 / lVar11);
  }
  if (uVar13 != 0) {
    *(int *)(this + 0x40) = iVar9 + 1;
    *(undefined4 *)(this + 0x44) = 0;
  }
  CCBAnimationManager::setAutoPlaySequenceId(*(CCBAnimationManager **)(this + 0x80),iVar7);
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

