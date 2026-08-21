
/* fairygui::FUILabel::applyTextFormat() */

void __thiscall fairygui::FUILabel::applyTextFormat(FUILabel *this)

{
  FUILabel *pFVar1;
  size_t __n;
  size_t sVar2;
  FUILabel FVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  long lVar5;
  int iVar6;
  FUILabel *pFVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar12;
  FUILabel *pFVar13;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar14;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ushort local_68;
  undefined1 local_66;
  ushort local_60;
  undefined1 local_5e;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if (*(int *)(this + 0x6c0) < 0) {
    pbVar15 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (this + 0x6a0);
  }
  else {
    pbVar15 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (this + 0x6a0);
    FVar3 = this[0x6a8];
    bVar4 = *pbVar15;
    uVar9 = (ulong)((byte)FVar3 >> 1);
    __n = uVar9;
    if (((byte)FVar3 & 1) != 0) {
      __n = *(size_t *)(this + 0x6b0);
    }
    sVar2 = (ulong)((byte)bVar4 >> 1);
    if (((byte)bVar4 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar15 + 8);
    }
    if (__n == sVar2) {
      pFVar13 = *(FUILabel **)(this + 0x6b8);
      pbVar14 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                 (pbVar15 + 0x10);
      if (((byte)FVar3 & 1) == 0) {
        pFVar13 = this + 0x6a9;
      }
      if (((byte)bVar4 & 1) == 0) {
        pbVar14 = pbVar15 + 1;
      }
      if (((byte)FVar3 & 1) == 0) {
        if (__n != 0) {
          pbVar12 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)(this + 0x6a9);
          do {
            if (*pbVar12 != *pbVar14) goto LAB_00aa7600;
            uVar9 = uVar9 - 1;
            pbVar12 = pbVar12 + 1;
            pbVar14 = pbVar14 + 1;
          } while (uVar9 != 0);
        }
        goto LAB_00aa7788;
      }
      if ((__n == 0) || (iVar11 = memcmp(pFVar13,pbVar14,__n), iVar11 == 0)) goto LAB_00aa7788;
    }
  }
LAB_00aa7600:
  pbVar14 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x6a8);
  if (pbVar14 != pbVar15) {
    uVar9 = *(ulong *)(pbVar15 + 8);
    pbVar12 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (pbVar15 + 0x10);
    if (((byte)*pbVar15 & 1) == 0) {
      pbVar12 = pbVar15 + 1;
      uVar9 = (ulong)((byte)*pbVar15 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(pbVar14,(char *)pbVar12,uVar9);
  }
  iVar11 = *(int *)(this + 0x308);
  if (((byte)this[0x6a8] & 1) == 0) {
    pFVar13 = this + 0x6a9;
    uVar9 = (ulong)((byte)this[0x6a8] >> 1);
    if (4 < uVar9) {
LAB_00aa765c:
      pFVar1 = pFVar13 + uVar9;
      pFVar7 = pFVar13;
      do {
        if ((uVar9 - 4 == 0) || (pFVar7 = memchr(pFVar7,0x75,uVar9 - 4), pFVar7 == (FUILabel *)0x0))
        break;
        iVar6 = memcmp(pFVar7,"ui://",5);
        if (iVar6 == 0) {
          if ((pFVar7 != pFVar1) && ((long)pFVar7 - (long)pFVar13 != -1)) {
            (**(code **)(*(long *)this + 0x540))(0,this,pbVar14,&cocos2d::Vec2::ZERO);
            goto LAB_00aa7788;
          }
          break;
        }
        pFVar7 = pFVar7 + 1;
        uVar9 = (long)pFVar1 - (long)pFVar7;
      } while (4 < (long)uVar9);
    }
  }
  else {
    pFVar13 = *(FUILabel **)(this + 0x6b8);
    uVar9 = *(ulong *)(this + 0x6b0);
    if (4 < (long)uVar9) goto LAB_00aa765c;
  }
  local_68 = local_68 & 0xff00;
  pbVar15 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            UIConfig::getRealFontName((basic_string *)pbVar14,(bool *)&local_68);
  if (local_68._0_1_ == (Color3B)0x0) {
    (**(code **)(*(long *)this + 0x560))(this);
  }
  else {
    pbVar14 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (this + 0x360);
    if (pbVar14 != pbVar15) {
      uVar9 = *(ulong *)(pbVar15 + 8);
      pbVar12 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                 (pbVar15 + 0x10);
      if (((byte)*pbVar15 & 1) == 0) {
        pbVar12 = pbVar15 + 1;
        uVar9 = (ulong)((byte)*pbVar15 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(pbVar14,(char *)pbVar12,uVar9);
    }
    *(undefined4 *)(this + 0x378) = *(undefined4 *)(*(long *)(this + 0x6a0) + 0x18);
    (**(code **)(*(long *)this + 0x530))(this,pbVar14);
  }
  if (iVar11 == 1) {
    cocos2d::Color4B::Color4B((Color4B *)&local_60,(Color3B *)(*(long *)(this + 0x6a0) + 0x1c),0xff)
    ;
    (**(code **)(*(long *)this + 0x598))(this,&local_60);
  }
LAB_00aa7788:
  if (*(float *)(*(long *)(this + 0x6a0) + 0x18) != (float)*(int *)(this + 0x6c0)) {
    iVar11 = (int)*(float *)(*(long *)(this + 0x6a0) + 0x18);
    fVar16 = (float)iVar11;
    *(int *)(this + 0x6c0) = iVar11;
    if (*(int *)(this + 0x308) == 1) {
      cocos2d::Label::setBMFontSize((Label *)this,fVar16);
    }
    else if (*(int *)(this + 0x308) == 3) {
      (**(code **)(*(long *)this + 0x570))(this);
    }
    else {
      *(float *)(this + 0x378) = fVar16;
      (**(code **)(*(long *)this + 0x530))(this,this + 0x360);
    }
  }
  if ((*(int *)(this + 0x308) != 1) || (this[0x6c4] != (FUILabel)0x0)) {
    lVar10 = *(long *)(this + 0x6a0);
    if (this[0x6c5] == (FUILabel)0x0) {
      local_5e = *(undefined1 *)(lVar10 + 0x1e);
      local_60 = *(ushort *)(lVar10 + 0x1c);
    }
    else {
      fVar16 = (float)NEON_ucvtf((uint)*(byte *)(lVar10 + 0x1c));
      fVar17 = (float)NEON_ucvtf((uint)*(byte *)(lVar10 + 0x1d));
      fVar18 = (float)NEON_ucvtf((uint)*(byte *)(lVar10 + 0x1e));
      uVar8 = (uint)(fVar16 * 0.299 + fVar17 * 0.587 + fVar18 * 0.114);
      local_5e = (undefined1)uVar8;
      local_60 = (ushort)uVar8 & 0xff | (ushort)((uVar8 & 0xff) << 8);
    }
    (**(code **)(*(long *)this + 0x4c0))(this,&local_60);
  }
  if (*(char *)(*(long *)(this + 0x6a0) + 0x21) == '\0') {
    (**(code **)(*(long *)this + 0x5c0))(this,6);
  }
  else {
    cocos2d::Label::enableUnderline((Label *)this);
  }
  lVar10 = *(long *)(this + 0x6a0);
  if (*(char *)(lVar10 + 0x20) != '\0') {
    cocos2d::Label::enableItalics((Label *)this);
    lVar10 = *(long *)(this + 0x6a0);
  }
  if ((*(char *)(lVar10 + 0x1f) == '\0') || (*(int *)(this + 0x308) == 3)) {
    (**(code **)(*(long *)this + 0x5c0))(this,5);
  }
  else {
    cocos2d::Label::enableBold((Label *)this);
  }
  cocos2d::Label::setLineSpacing((Label *)this,(float)*(int *)(*(long *)(this + 0x6a0) + 0x24));
  cocos2d::Label::setAlignment
            ((Label *)this,*(undefined4 *)(*(long *)(this + 0x6a0) + 0x2c),
             *(undefined4 *)(this + 0x454));
  cocos2d::Label::setAlignment
            ((Label *)this,*(undefined4 *)(this + 0x450),
             *(undefined4 *)(*(long *)(this + 0x6a0) + 0x30));
  lVar10 = *(long *)(this + 0x6a0);
  if ((*(byte *)(lVar10 + 0x34) & 1) == 0) {
    (**(code **)(*(long *)this + 0x5c0))(this,1);
  }
  else {
    if (this[0x6c5] == (FUILabel)0x0) {
      local_66 = *(undefined1 *)(lVar10 + 0x3a);
      local_68 = *(ushort *)(lVar10 + 0x38);
    }
    else {
      fVar16 = (float)NEON_ucvtf((uint)*(byte *)(lVar10 + 0x38));
      fVar17 = (float)NEON_ucvtf((uint)*(byte *)(lVar10 + 0x39));
      fVar18 = (float)NEON_ucvtf((uint)*(byte *)(lVar10 + 0x3a));
      uVar8 = (uint)(fVar16 * 0.299 + fVar17 * 0.587 + fVar18 * 0.114);
      local_66 = (undefined1)uVar8;
      local_68 = (ushort)uVar8 & 0xff | (ushort)((uVar8 & 0xff) << 8);
    }
    cocos2d::Color4B::Color4B((Color4B *)&local_60,(Color3B *)&local_68,0xff);
    (**(code **)(*(long *)this + 0x5a8))
              (this,&local_60,*(undefined4 *)(*(long *)(this + 0x6a0) + 0x3c));
  }
  lVar10 = *(long *)(this + 0x6a0);
  if ((*(byte *)(lVar10 + 0x34) >> 1 & 1) == 0) {
                    /* try { // try from 00aa7a4c to 00ba7b8b has its CatchHandler @ 00aa7a4c
                       catch() { ... } // from try @ 00aa7a4c with catch @ 00aa7a4c
                       catch() { ... } // from try @ 00aa7d88 with catch @ 00aa7a4c
                       catch() { ... } // from try @ 00aa8010 with catch @ 00aa7a4c */
    if (*(char *)(lVar10 + 0x1f) == '\0') {
      (**(code **)(*(long *)this + 0x5c0))(this,2);
    }
  }
  else {
    if (this[0x6c5] == (FUILabel)0x0) {
      local_66 = *(undefined1 *)(lVar10 + 0x42);
      local_68 = *(ushort *)(lVar10 + 0x40);
    }
    else {
      fVar16 = (float)NEON_ucvtf((uint)*(byte *)(lVar10 + 0x40));
      fVar17 = (float)NEON_ucvtf((uint)*(byte *)(lVar10 + 0x41));
      fVar18 = (float)NEON_ucvtf((uint)*(byte *)(lVar10 + 0x42));
      uVar8 = (uint)(fVar16 * 0.299 + fVar17 * 0.587 + fVar18 * 0.114);
      local_66 = (undefined1)uVar8;
      local_68 = (ushort)uVar8 & 0xff | (ushort)((uVar8 & 0xff) << 8);
    }
    cocos2d::Color4B::Color4B((Color4B *)&local_60,(Color3B *)&local_68,0xff);
    (**(code **)(*(long *)this + 0x5a0))(this,&local_60,*(long *)(this + 0x6a0) + 0x44,0);
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

