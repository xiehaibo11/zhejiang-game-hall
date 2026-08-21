
/* bool v8::internal::DateParser::Parse<unsigned char const>(v8::internal::Isolate*,
   v8::internal::Vector<unsigned char const>, double*) */

bool __thiscall
v8::internal::DateParser::Parse<unsigned_char_const>
          (DateParser *this,byte *param_1,undefined8 param_3,double *param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong extraout_x1;
  long lVar10;
  ulong unaff_x21;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  DateParser *pDVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  DayComposer aDStack_e0 [12];
  undefined8 local_d4;
  undefined1 local_cc;
  uint local_c8 [4];
  undefined8 local_b8;
  undefined8 local_b0;
  uint local_a8;
  undefined4 *local_a0;
  undefined1 local_98 [12];
  undefined4 local_88 [2];
  byte *local_80;
  undefined8 uStack_78;
  uint local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((int)param_3 < 1) {
    local_70 = 0;
  }
  else {
    local_70 = (uint)*param_1;
  }
  local_a0 = local_88;
  local_88[0] = 1;
  local_80 = param_1;
  uStack_78 = param_3;
  local_98 = DateStringTokenizer<unsigned_char_const>::Scan
                       ((DateStringTokenizer<unsigned_char_const> *)&local_a0);
  local_b8 = 0x7fffffff00000000;
  local_b0 = 0x7fffffff7fffffff;
  local_a8 = 0x7fffffff;
  local_d4 = 0x7fffffff00000000;
  local_cc = 0;
  iVar7 = ParseES5DateTime<unsigned_char_const>
                    ((DateStringTokenizer *)&local_a0,aDStack_e0,(TimeComposer *)local_c8,
                     (TimeZoneComposer *)&local_b0);
  bVar6 = 0;
  if (iVar7 != -6) {
    uVar11 = (uint)extraout_x1;
    bVar15 = 0;
    bVar5 = (int)local_d4 != 0;
    uVar13 = extraout_x1;
    if (iVar7 != -3) goto LAB_014c31a0;
LAB_014c2ed4:
    uVar3 = local_98._0_8_;
    pDVar14 = (DateParser *)(uVar3 & 0xffffffff);
    uVar11 = (uint)uVar13;
    auVar17 = local_98;
    if (local_98._0_4_ == -2) {
      if ((local_98._8_4_ & 0xff) == 0x2e) {
        auVar16 = DateStringTokenizer<unsigned_char_const>::Scan
                            ((DateStringTokenizer<unsigned_char_const> *)&local_a0);
        pDVar14 = auVar16._0_8_;
        uVar13 = local_b8 & 0xffffffff;
        local_98._8_4_ = auVar16._8_4_;
        auVar17 = auVar16._0_12_;
        if ((int)local_b8 == 3) {
          if (uVar11 < 1000) goto LAB_014c30f8;
        }
        else if ((((int)local_b8 == 2) || ((int)local_b8 == 1)) && (uVar11 < 0x3c)) {
LAB_014c30f8:
          local_b8 = CONCAT44(local_b8._4_4_,(int)local_b8 + 1);
          local_98._0_8_ = pDVar14;
          local_c8[uVar13] = uVar11;
          if (auVar16._0_4_ == -3) {
            local_98 = DateStringTokenizer<unsigned_char_const>::Scan
                                 ((DateStringTokenizer<unsigned_char_const> *)&local_a0);
            unaff_x21 = unaff_x21 & 0xffffffff00000000 | auVar16._8_8_ & 0xffffffff;
            uVar9 = ReadMilliseconds(pDVar14,unaff_x21);
            if (-1 < (int)uVar9) {
              lVar10 = (long)(int)local_b8;
              uVar11 = local_a8;
              if ((int)local_b8 < 4) {
                local_b8 = CONCAT44(local_b8._4_4_,(int)local_b8 + 1);
                local_c8[lVar10] = uVar9;
                iVar7 = (int)local_b8;
                while (uVar11 = local_a8, iVar7 < 4) {
                  local_b8._4_4_ = (undefined4)(local_b8 >> 0x20);
                  local_b8 = CONCAT44(local_b8._4_4_,iVar7 + 1);
                  local_c8[iVar7] = 0;
                  iVar7 = (int)local_b8;
                }
              }
              goto LAB_014c3178;
            }
          }
          goto LAB_014c31f0;
        }
        goto LAB_014c2f84;
      }
      if ((local_98._8_4_ & 0xff) != 0x3a) {
        pDVar14 = (DateParser *)0xfffffffe;
        goto LAB_014c2f84;
      }
      auVar17 = DateStringTokenizer<unsigned_char_const>::Scan
                          ((DateStringTokenizer<unsigned_char_const> *)&local_a0);
      local_98 = auVar17;
      if ((auVar17._0_4_ != -2) || ((auVar17._8_4_ & 0xff) != 0x3a)) {
        lVar10 = (long)(int)local_b8;
        if (3 < (int)local_b8) goto LAB_014c31f0;
        local_b8 = CONCAT44(local_b8._4_4_,(int)local_b8 + 1);
        local_c8[lVar10] = uVar11;
        uVar11 = local_a8;
        if ((auVar17._0_4_ != -2) || ((auVar17._8_4_ & 0xff) != 0x2e)) goto LAB_014c3178;
LAB_014c30c4:
        auVar17 = DateStringTokenizer<unsigned_char_const>::Scan
                            ((DateStringTokenizer<unsigned_char_const> *)&local_a0);
        uVar11 = local_a8;
        local_98 = auVar17;
        goto LAB_014c3178;
      }
      auVar17 = DateStringTokenizer<unsigned_char_const>::Scan
                          ((DateStringTokenizer<unsigned_char_const> *)&local_a0);
      local_98 = auVar17;
      if ((int)local_b8 == 0) {
        local_c8[1] = 0;
        local_b8 = CONCAT44(local_b8._4_4_,2);
        local_c8[0] = uVar11;
        uVar11 = local_a8;
        goto LAB_014c3178;
      }
    }
    else {
LAB_014c2f84:
      local_98 = auVar17;
      if (((local_b0._4_4_ != 0x7fffffff) && (uVar11 < 0x3c)) && (local_a8 == 0x7fffffff))
      goto LAB_014c3178;
      uVar13 = local_b8 & 0xffffffff;
      if ((int)local_b8 == 3) {
        if (999 < uVar11) goto LAB_014c305c;
      }
      else if ((((int)local_b8 != 2) && ((int)local_b8 != 1)) || (0x3b < uVar11)) {
LAB_014c305c:
        if ((int)local_d4 < 3) {
          *(uint *)(aDStack_e0 + (long)(int)local_d4 * 4) = uVar11;
          local_d4 = CONCAT44(local_d4._4_4_,(int)local_d4 + 1);
          uVar11 = local_a8;
          if (((int)pDVar14 != -2) || (local_98[8] != '-')) goto LAB_014c3178;
          goto LAB_014c30c4;
        }
        goto LAB_014c31f0;
      }
      local_b8 = CONCAT44(local_b8._4_4_,(int)local_b8 + 1);
      local_c8[uVar13] = uVar11;
      iVar7 = (int)local_b8;
      while( true ) {
        iVar12 = local_98._8_4_;
        if (3 < iVar7) break;
        local_b8._4_4_ = (undefined4)(local_b8 >> 0x20);
        local_b8 = CONCAT44(local_b8._4_4_,iVar7 + 1);
        local_c8[iVar7] = 0;
        iVar7 = (int)local_b8;
      }
      bVar6 = 0;
      bVar15 = 1;
      bVar4 = true;
      auVar17 = local_98;
      uVar11 = local_a8;
      switch(local_98._0_4_) {
      case 2:
        bVar6 = 0;
        if ((local_98._0_8_ >> 0x20 == 1) && (iVar12 == 0)) {
LAB_014c3178:
          local_a8 = uVar11;
          bVar15 = 1;
          bVar4 = true;
          auVar17 = local_98;
switchD_014c3018_caseD_fffffffc:
          do {
            while( true ) {
              bVar5 = bVar4;
              local_98._8_4_ = auVar17._8_4_;
              uVar11 = local_98._8_4_;
              uVar13 = (ulong)(uint)local_98._8_4_;
              local_98 = auVar17;
              auVar18 = DateStringTokenizer<unsigned_char_const>::Scan
                                  ((DateStringTokenizer<unsigned_char_const> *)&local_a0);
              iVar7 = auVar17._0_4_;
              local_98 = auVar18;
              if (iVar7 == -3) goto LAB_014c2ed4;
LAB_014c31a0:
              iVar12 = local_98._8_4_;
              if (iVar7 == -1) {
                uVar13 = DayComposer::Write(aDStack_e0,param_4);
                if ((uVar13 & 1) == 0) goto LAB_014c31f0;
                uVar13 = TimeComposer::Write((TimeComposer *)local_c8,param_4);
                if ((uVar13 & 1) == 0) goto LAB_014c31f0;
                bVar6 = TimeZoneComposer::Write((TimeZoneComposer *)&local_b0,param_4);
                if ((bVar15 & bVar6) != 0) {
                  Isolate::CountUsage(this,0x21);
                  bVar6 = 1;
                }
                goto switchD_014c3018_caseD_fffffffd;
              }
              bVar4 = bVar5;
              auVar17 = local_98;
              if (iVar7 < 0) break;
              if (iVar7 == 1) {
                local_d4 = CONCAT44(uVar11,(int)local_d4);
                if ((local_98._0_4_ == -2) && (local_98[8] == '-')) {
                  auVar17 = DateStringTokenizer<unsigned_char_const>::Scan
                                      ((DateStringTokenizer<unsigned_char_const> *)&local_a0);
                }
LAB_014c2df0:
                bVar15 = 1;
              }
              else {
                if (iVar7 == 2) {
                  if (bVar5) {
                    uVar9 = 0xffffffff;
                    if (-1 < (int)uVar11) {
                      uVar9 = 1;
                    }
                    local_b0 = (ulong)uVar9;
                    iVar7 = uVar9 * uVar11;
                    local_a8 = 0;
                    goto LAB_014c2da4;
                  }
                }
                else {
                  if ((iVar7 == 4) && ((int)local_b8 != 0)) {
                    local_b8 = CONCAT44(uVar11,(int)local_b8);
                    goto LAB_014c2df0;
                  }
                  if (bVar5) goto LAB_014c31f0;
                }
                if (local_98._0_4_ == -3) {
                  bVar6 = 0;
                  goto switchD_014c3018_caseD_fffffffd;
                }
                bVar15 = 1;
                bVar4 = false;
              }
            }
          } while (iVar7 != -2);
          if ((uVar11 == 0x2d) || (uVar11 == 0x2b)) {
            if ((local_a8 == 0 && local_b0._4_4_ == 0) || ((int)local_b8 != 0)) goto LAB_014c2e20;
            if ((uVar11 == 0x2b) || (uVar11 == 0x2d)) {
              bVar6 = 0;
              bVar4 = false;
              if (bVar5) goto switchD_014c3018_caseD_fffffffd;
              goto switchD_014c3018_caseD_fffffffc;
            }
          }
          if (((uVar11 & 0xff) == 0x29) && (bVar5)) break;
          goto switchD_014c3018_caseD_fffffffc;
        }
        goto switchD_014c3018_caseD_fffffffd;
      case -4:
      case -1:
        goto switchD_014c3018_caseD_fffffffc;
      default:
        goto switchD_014c3018_caseD_fffffffd;
      case -2:
        bVar15 = 1;
        if (iVar12 == 0x2b) goto LAB_014c3178;
        bVar4 = true;
        if (iVar12 == 0x2d) goto switchD_014c3018_caseD_fffffffc;
      }
    }
LAB_014c31f0:
    bVar6 = 0;
  }
switchD_014c3018_caseD_fffffffd:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (bool)(bVar6 & 1);
LAB_014c2e20:
  uVar1 = 0xffffffff;
  if ((int)uVar11 < 0x2d) {
    uVar1 = 1;
  }
  local_b0 = CONCAT44(local_b0._4_4_,uVar1);
  if (local_98._0_4_ == -3) {
    iVar7 = local_98._4_4_;
    auVar17 = DateStringTokenizer<unsigned_char_const>::Scan
                        ((DateStringTokenizer<unsigned_char_const> *)&local_a0);
    iVar8 = auVar17._0_4_;
  }
  else {
    iVar7 = 0;
    iVar12 = 0;
    iVar8 = local_98._0_4_;
  }
  local_98 = auVar17;
  if ((iVar8 == -2) && ((local_98._8_4_ & 0xff) == 0x3a)) {
    local_b0 = CONCAT44(iVar12,(undefined4)local_b0);
    local_a8 = 0x7fffffff;
    uVar11 = local_a8;
  }
  else if (iVar7 - 1U < 2) {
    local_b0 = CONCAT44(iVar12,(undefined4)local_b0);
    local_a8 = 0;
    uVar11 = local_a8;
  }
  else {
    if (1 < iVar7 - 3U) goto LAB_014c31f0;
    iVar7 = iVar12 / 100;
    local_a8 = iVar12 % 100;
LAB_014c2da4:
    local_b0 = CONCAT44(iVar7,(undefined4)local_b0);
    uVar11 = local_a8;
  }
  goto LAB_014c3178;
}

