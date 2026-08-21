
/* cocos2d::Label::multilineTextWrap(std::__ndk1::function<int (std::__ndk1::basic_string<char32_t,
   std::__ndk1::char_traits<char32_t>, std::__ndk1::allocator<char32_t> > const&, int, int)> const&)
    */

undefined8 __thiscall cocos2d::Label::multilineTextWrap(Label *this,function *param_1)

{
  Label *pLVar1;
  wchar32 wVar2;
  wchar32 wVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  Label *pLVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_104;
  float local_fc;
  float local_f4;
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  FontLetterDefinition aFStack_e0 [8];
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  int local_c0;
  float local_b8;
  int local_b4;
  long local_b0;
  
  lVar4 = tpidr_el0;
  local_b0 = *(long *)(lVar4 + 0x28);
  iVar6 = getStringLength(this);
  local_b8 = 0.0;
  lVar8 = Director::getInstance();
  fVar25 = *(float *)(lVar8 + 0x1a0);
  fVar22 = *(float *)(this + 0x428);
  local_f0 = 0;
  (**(code **)(*(long *)this + 0x608))(this);
  iVar15 = 0;
  if (iVar6 < 1) {
    fVar24 = 0.0;
    fVar20 = 0.0;
    local_104 = 0.0;
  }
  else {
    fVar18 = 0.0;
    pLVar1 = this + 0x310;
    bVar5 = true;
    fVar30 = 0.0;
    fVar26 = 0.0;
    fVar20 = 0.0;
    fVar24 = 0.0;
    local_104 = 0.0;
    do {
      lVar8 = (long)(int)fVar18;
      pLVar11 = this + 0x314;
      if (((byte)*pLVar1 & 1) != 0) {
        pLVar11 = *(Label **)(this + 800);
      }
      fVar23 = fVar24;
      if (*(int *)(pLVar11 + lVar8 * 4) == 10) {
        pfVar12 = *(float **)(this + 0x468);
        if (pfVar12 == *(float **)(this + 0x470)) {
          std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
          __push_back_slow_path<float_const&>
                    ((vector<float,std::__ndk1::allocator<float>> *)(this + 0x460),&local_b8);
        }
        else {
          *pfVar12 = local_b8;
          *(float **)(this + 0x468) = pfVar12 + 1;
        }
        local_b8 = 0.0;
        iVar15 = iVar15 + 1;
        fVar26 = fVar26 - (fVar25 * fVar22 + *(float *)(this + 0x424) * *(float *)(this + 0x680));
        recordPlaceholderInfo(this,(int)fVar18,L'\n');
        fVar18 = (float)((int)fVar18 + 1);
        fVar30 = 0.0;
      }
      else {
        plVar9 = *(long **)(param_1 + 0x20);
        local_e8 = fVar18;
        local_b4 = iVar6;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar7 = (**(code **)(*plVar9 + 0x30))(plVar9,pLVar1,&local_e8,&local_b4);
        local_fc = local_b8;
        fVar21 = fVar30;
        fVar27 = fVar20;
        if ((int)uVar7 < 1) {
          local_f4 = local_104;
        }
        else {
          uVar17 = 0;
          local_f4 = local_104;
          do {
            pLVar11 = this + 0x314;
            if (((byte)*pLVar1 & 1) != 0) {
              pLVar11 = *(Label **)(this + 800);
            }
            wVar3 = *(wchar32 *)(pLVar11 + lVar8 * 4);
            iVar16 = (int)uVar17;
            fVar19 = fVar23;
            if (wVar3 == L'\b') {
              recordPlaceholderInfo(this,(int)fVar18 + iVar16,L'\b');
              bVar5 = false;
            }
            else if (wVar3 == L'\r') {
              recordPlaceholderInfo(this,(int)fVar18 + iVar16,L'\r');
            }
            else {
              wVar2 = L' ';
              if (wVar3 != L'\xa0') {
                wVar2 = wVar3;
              }
              uVar10 = FontAtlas::getLetterDefinitionForChar
                                 (*(FontAtlas **)(this + 0x3d0),wVar2,aFStack_e0);
              if ((uVar10 & 1) == 0) {
                recordPlaceholderInfo(this,(int)fVar18 + iVar16,wVar3);
                    /* try { // try from 00f135e8 to 010135ef has its CatchHandler @ 00f1375c */
              }
              else {
                fVar19 = *(float *)(this + 0x680);
                fVar29 = (fVar21 + local_d0 * fVar19) / fVar25;
                    /* try { // try from 00f134e8 to 010134eb has its CatchHandler @ 00f134fc */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f134e8 with catch @ 00f134fc
                        */
                if ((((this[0x678] != (Label)0x0) && (0.0 < fVar30)) &&
                    (0.0 < *(float *)(this + 0x43c))) &&
                   (*(float *)(this + 0x43c) < fVar29 + fVar19 * local_d8)) {
                  uVar10 = StringUtils::isUnicodeSpace(wVar3);
                  if (((uVar10 & 1) == 0) && (bVar5)) {
                    local_e8 = local_b8 - fVar20;
                    pfVar12 = *(float **)(this + 0x468);
                    if (pfVar12 < *(float **)(this + 0x470)) {
                      *pfVar12 = local_e8;
                      *(float **)(this + 0x468) = pfVar12 + 1;
                    }
                    else {
                      std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
                      __push_back_slow_path<float>
                                ((vector<float,std::__ndk1::allocator<float>> *)(this + 0x460),
                                 &local_e8);
                    }
                    local_b8 = 0.0;
                    iVar15 = iVar15 + 1;
                    fVar26 = fVar26 - (fVar25 * fVar22 +
                                      *(float *)(this + 0x424) * *(float *)(this + 0x680));
                    fVar30 = 0.0;
                    fVar20 = 0.0;
                    fVar23 = fVar24;
                    goto joined_r0x00f136e8;
                  }
                  fVar19 = *(float *)(this + 0x680);
                }
                    /* try { // try from 00f13538 to 0101353b has its CatchHandler @ 00f13554 */
                fVar28 = (fVar26 - local_cc * fVar19) / fVar25;
                local_f0 = CONCAT44(fVar28,fVar29);
                recordLetterInfo(this,(Vec2 *)&local_f0,wVar3,(int)fVar18 + iVar16,iVar15);
                fVar29 = fVar27;
                if (bVar5) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f13538 with catch @ 00f13554
                        */
                  fVar29 = 0.0;
                  fVar19 = 0.0;
                  if (lVar8 < iVar6 + -1) {
                    /* try { // try from 00f13574 to 010135e7 has its CatchHandler @ 00f13574
                       catch() { ... } // from try @ 00f13574 with catch @ 00f13574
                       catch() { ... } // from try @ 00f135f0 with catch @ 00f13574 */
                    fVar19 = 0.0;
                    if (*(long *)(this + 0x430) != 0) {
                      fVar19 = (float)*(int *)(*(long *)(this + 0x430) + lVar8 * 4 + 4);
                    }
                  }
                  fVar19 = fVar19 + *(float *)(this + 0x680) * (float)local_c0 +
                                    *(float *)(this + 0x42c);
                  fVar21 = fVar21 + fVar19;
                  local_fc = fVar21 / fVar25;
                  uVar10 = StringUtils::isUnicodeSpace(wVar3);
                  if ((uVar10 & 1) != 0) {
                    fVar29 = fVar27 + fVar19 / fVar25;
                  }
                }
                    /* try { // try from 00f135f0 to 01013777 has its CatchHandler @ 00f13574 */
                bVar5 = true;
                fVar19 = fVar28 - local_d4 * *(float *)(this + 0x680);
                if (fVar28 <= local_f4) {
                  fVar28 = local_f4;
                }
                fVar27 = fVar29;
                local_f4 = fVar28;
                if (fVar23 <= fVar19) {
                  fVar19 = fVar23;
                }
              }
            }
            fVar23 = fVar19;
            uVar17 = uVar17 + 1;
            lVar8 = lVar8 + 1;
          } while (uVar7 != uVar17);
        }
        fVar18 = (float)(uVar7 + (int)fVar18);
        if (local_f4 <= local_104) {
          local_f4 = local_104;
        }
        fVar30 = fVar21;
        fVar20 = fVar27;
        local_b8 = local_fc;
        local_104 = local_f4;
        if (fVar24 <= fVar23) {
          fVar23 = fVar24;
        }
      }
joined_r0x00f136e8:
      fVar24 = fVar23;
    } while ((int)fVar18 < iVar6);
  }
  pfVar12 = *(float **)(this + 0x460);
  pfVar13 = *(float **)(this + 0x468);
  if (pfVar12 == pfVar13) {
    if (pfVar12 == *(float **)(this + 0x470)) {
      std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__push_back_slow_path<float_const&>
                ((vector<float,std::__ndk1::allocator<float>> *)(this + 0x460),&local_b8);
      fVar22 = local_b8;
    }
    else {
      *pfVar12 = local_b8;
      *(float **)(this + 0x468) = pfVar12 + 1;
      fVar22 = local_b8;
    }
  }
  else {
    local_e8 = local_b8 - fVar20;
    if (pfVar13 < *(float **)(this + 0x470)) {
      pfVar14 = pfVar13 + 1;
      *pfVar13 = local_e8;
      *(float **)(this + 0x468) = pfVar14;
    }
    else {
                    /* catch() { ... } // from try @ 00f135e8 with catch @ 00f1375c */
      std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__push_back_slow_path<float>
                ((vector<float,std::__ndk1::allocator<float>> *)(this + 0x460),&local_e8);
      pfVar12 = *(float **)(this + 0x460);
      pfVar14 = *(float **)(this + 0x468);
    }
    fVar20 = 0.0;
    while (fVar22 = fVar20, pfVar12 != pfVar14) {
      pfVar13 = pfVar12 + 1;
                    /* catch() { ... } // from try @ 00f137bc with catch @ 00f13778 */
      fVar20 = *pfVar12;
      pfVar12 = pfVar13;
      if (fVar20 <= fVar22) {
        fVar20 = fVar22;
      }
    }
  }
                    /* try { // try from 00f137b4 to 010137bb has its CatchHandler @ 00f13834 */
  fVar25 = (*(float *)(this + 0x424) * (float)(iVar15 + 1) * *(float *)(this + 0x680)) / fVar25;
                    /* try { // try from 00f137bc to 0101384f has its CatchHandler @ 00f13778 */
  *(int *)(this + 0x340) = iVar15 + 1;
  *(float *)(this + 0x458) = fVar25;
  if (0 < iVar15) {
    *(float *)(this + 0x458) = fVar25 + *(float *)(this + 0x428) * (float)iVar15;
  }
  Size::Size((Size *)&local_e8,*(float *)(this + 0x448),*(float *)(this + 0x44c));
  if (*(float *)(this + 0x448) <= 0.0) {
    local_e8 = fVar22;
  }
  if (*(float *)(this + 0x44c) <= 0.0) {
    local_e4 = *(float *)(this + 0x458);
  }
  (**(code **)(*(long *)this + 0x160))(this,&local_e8);
  *(undefined4 *)(this + 0x498) = 0;
  *(float *)(this + 0x494) = local_e4;
                    /* catch() { ... } // from try @ 00f137b4 with catch @ 00f13834 */
  if (0.0 < local_104) {
    *(float *)(this + 0x494) = local_104 + local_e4;
  }
                    /* catch() { ... } // from try @ 00f138a0 with catch @ 00f13850 */
  if (fVar24 < -*(float *)(this + 0x458)) {
    *(float *)(this + 0x498) = fVar24 + *(float *)(this + 0x458);
  }
  if (*(long *)(lVar4 + 0x28) == local_b0) {
                    /* try { // try from 00f13898 to 0101389f has its CatchHandler @ 00f1391c */
                    /* try { // try from 00f138a0 to 01013937 has its CatchHandler @ 00f13850 */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

