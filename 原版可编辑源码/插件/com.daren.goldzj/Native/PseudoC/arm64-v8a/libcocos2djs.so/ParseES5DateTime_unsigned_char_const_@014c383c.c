
/* v8::internal::DateParser::DateToken v8::internal::DateParser::ParseES5DateTime<unsigned char
   const>(v8::internal::DateParser::DateStringTokenizer<unsigned char const>*,
   v8::internal::DateParser::DayComposer*, v8::internal::DateParser::TimeComposer*,
   v8::internal::DateParser::TimeZoneComposer*) */

long v8::internal::DateParser::ParseES5DateTime<unsigned_char_const>
               (DateStringTokenizer *param_1,DayComposer *param_2,TimeComposer *param_3,
               TimeZoneComposer *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  
  lVar6 = *(long *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 0x10);
  if ((int)lVar6 == -2) {
    if ((iVar5 != 0x2d) && (iVar5 != 0x2b)) goto LAB_014c3c78;
    auVar8 = DateStringTokenizer<unsigned_char_const>::Scan
                       ((DateStringTokenizer<unsigned_char_const> *)param_1);
    *(undefined1 (*) [12])(param_1 + 8) = auVar8;
    if (auVar8._0_8_ != 0x6fffffffd) {
      return lVar6;
    }
    auVar9 = DateStringTokenizer<unsigned_char_const>::Scan
                       ((DateStringTokenizer<unsigned_char_const> *)param_1);
    *(undefined1 (*) [12])(param_1 + 8) = auVar9;
    if ((0x2c < iVar5) && (auVar8._8_4_ == 0)) {
      return lVar6;
    }
    if (*(int *)(param_2 + 0xc) < 3) {
      *(int *)(param_2 + (long)*(int *)(param_2 + 0xc) * 4) = (0x2c - iVar5) * auVar8._8_4_;
LAB_014c3928:
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
    }
  }
  else {
    if (lVar6 != 0x4fffffffd) goto LAB_014c3c78;
    auVar8 = DateStringTokenizer<unsigned_char_const>::Scan
                       ((DateStringTokenizer<unsigned_char_const> *)param_1);
    *(undefined1 (*) [12])(param_1 + 8) = auVar8;
    if (*(int *)(param_2 + 0xc) < 3) {
      *(int *)(param_2 + (long)*(int *)(param_2 + 0xc) * 4) = iVar5;
      goto LAB_014c3928;
    }
  }
  if ((*(int *)(param_1 + 8) == -2) && (param_1[0x10] == (DateStringTokenizer)0x2d)) {
    auVar8 = DateStringTokenizer<unsigned_char_const>::Scan
                       ((DateStringTokenizer<unsigned_char_const> *)param_1);
    *(undefined1 (*) [12])(param_1 + 8) = auVar8;
    auVar9 = DateStringTokenizer<unsigned_char_const>::Scan
                       ((DateStringTokenizer<unsigned_char_const> *)param_1);
    iVar5 = auVar9._0_4_;
    *(undefined1 (*) [12])(param_1 + 8) = auVar9;
    if (auVar8._0_8_ != 0x2fffffffd) {
      return auVar8._0_8_;
    }
    if (0xb < auVar8._8_4_ - 1U) {
      return 0x2fffffffd;
    }
    if (*(int *)(param_2 + 0xc) < 3) {
      *(int *)(param_2 + (long)*(int *)(param_2 + 0xc) * 4) = auVar8._8_4_;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
      iVar5 = *(int *)(param_1 + 8);
    }
    if ((iVar5 == -2) && (param_1[0x10] == (DateStringTokenizer)0x2d)) {
      auVar8 = DateStringTokenizer<unsigned_char_const>::Scan
                         ((DateStringTokenizer<unsigned_char_const> *)param_1);
      *(undefined1 (*) [12])(param_1 + 8) = auVar8;
      auVar9 = DateStringTokenizer<unsigned_char_const>::Scan
                         ((DateStringTokenizer<unsigned_char_const> *)param_1);
      *(undefined1 (*) [12])(param_1 + 8) = auVar9;
      if (auVar8._0_8_ != 0x2fffffffd) {
        return auVar8._0_8_;
      }
      if (0x1e < auVar8._8_4_ - 1U) {
        return 0x2fffffffd;
      }
      if (*(int *)(param_2 + 0xc) < 3) {
        *(int *)(param_2 + (long)*(int *)(param_2 + 0xc) * 4) = auVar8._8_4_;
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
      }
    }
  }
  lVar6 = *(long *)(param_1 + 8);
  if ((int)lVar6 == -1) goto LAB_014c3d38;
  if ((int)lVar6 != 3) {
LAB_014c3c78:
    auVar8 = DateStringTokenizer<unsigned_char_const>::Scan
                       ((DateStringTokenizer<unsigned_char_const> *)param_1);
    *(undefined1 (*) [12])(param_1 + 8) = auVar8;
    return lVar6;
  }
  auVar8 = DateStringTokenizer<unsigned_char_const>::Scan
                     ((DateStringTokenizer<unsigned_char_const> *)param_1);
  uVar3 = auVar8._8_4_;
  *(undefined1 (*) [12])(param_1 + 8) = auVar8;
  if (auVar8._0_8_ != 0x2fffffffd) {
    return 0xfffffffa;
  }
  if (0x18 < uVar3) {
    return 0xfffffffa;
  }
  auVar8 = DateStringTokenizer<unsigned_char_const>::Scan
                     ((DateStringTokenizer<unsigned_char_const> *)param_1);
  iVar5 = auVar8._0_4_;
  *(undefined1 (*) [12])(param_1 + 8) = auVar8;
  iVar1 = *(int *)(param_3 + 0x10);
  if (iVar1 < 4) {
    *(int *)(param_3 + 0x10) = iVar1 + 1;
    *(uint *)(param_3 + (long)iVar1 * 4) = uVar3;
    iVar5 = *(int *)(param_1 + 8);
  }
  if (iVar5 != -2) {
    return 0xfffffffa;
  }
  if (param_1[0x10] != (DateStringTokenizer)0x3a) {
    return 0xfffffffa;
  }
  auVar8 = DateStringTokenizer<unsigned_char_const>::Scan
                     ((DateStringTokenizer<unsigned_char_const> *)param_1);
  uVar4 = auVar8._8_4_;
  *(undefined1 (*) [12])(param_1 + 8) = auVar8;
  if (auVar8._0_8_ != 0x2fffffffd) {
    return 0xfffffffa;
  }
  if (0x3b < uVar4) {
    return 0xfffffffa;
  }
  if (uVar3 == 0x18 && 0 < (int)uVar4) {
    return 0xfffffffa;
  }
  auVar8 = DateStringTokenizer<unsigned_char_const>::Scan
                     ((DateStringTokenizer<unsigned_char_const> *)param_1);
  iVar5 = auVar8._0_4_;
  *(undefined1 (*) [12])(param_1 + 8) = auVar8;
  iVar1 = *(int *)(param_3 + 0x10);
  if (iVar1 < 4) {
    *(int *)(param_3 + 0x10) = iVar1 + 1;
    *(uint *)(param_3 + (long)iVar1 * 4) = uVar4;
    iVar5 = *(int *)(param_1 + 8);
  }
  if (iVar5 == -2) {
    uVar4 = *(uint *)(param_1 + 0x10);
    if ((uVar4 & 0xff) == 0x3a) {
      auVar8 = DateStringTokenizer<unsigned_char_const>::Scan
                         ((DateStringTokenizer<unsigned_char_const> *)param_1);
      uVar4 = auVar8._8_4_;
      *(undefined1 (*) [12])(param_1 + 8) = auVar8;
      if (auVar8._0_8_ != 0x2fffffffd) {
        return 0xfffffffa;
      }
      if (0x3b < uVar4) {
        return 0xfffffffa;
      }
      if (uVar3 == 0x18 && 0 < (int)uVar4) {
        return 0xfffffffa;
      }
      auVar8 = DateStringTokenizer<unsigned_char_const>::Scan
                         ((DateStringTokenizer<unsigned_char_const> *)param_1);
      iVar5 = auVar8._0_4_;
      *(undefined1 (*) [12])(param_1 + 8) = auVar8;
      iVar1 = *(int *)(param_3 + 0x10);
      if (iVar1 < 4) {
        *(int *)(param_3 + 0x10) = iVar1 + 1;
        *(uint *)(param_3 + (long)iVar1 * 4) = uVar4;
        iVar5 = *(int *)(param_1 + 8);
      }
      if (iVar5 == -2) {
        uVar4 = *(uint *)(param_1 + 0x10);
        if ((uVar4 & 0xff) != 0x2e) goto LAB_014c3c28;
        auVar7 = DateStringTokenizer<unsigned_char_const>::Scan
                           ((DateStringTokenizer<unsigned_char_const> *)param_1);
        *(DateParser **)(param_1 + 8) = auVar7._0_8_;
        *(int *)(param_1 + 0x10) = auVar7._8_4_;
        if (auVar7._0_4_ != -3) {
          return 0xfffffffa;
        }
        if (uVar3 == 0x18 && 0 < auVar7._8_4_) {
          return 0xfffffffa;
        }
        auVar8 = DateStringTokenizer<unsigned_char_const>::Scan
                           ((DateStringTokenizer<unsigned_char_const> *)param_1);
        *(undefined1 (*) [12])(param_1 + 8) = auVar8;
        uVar2 = ReadMilliseconds(auVar7._0_8_,auVar7._8_8_ & 0xffffffff);
        iVar5 = *(int *)(param_3 + 0x10);
        if (iVar5 < 4) {
          *(int *)(param_3 + 0x10) = iVar5 + 1;
          *(undefined4 *)(param_3 + (long)iVar5 * 4) = uVar2;
        }
      }
      goto LAB_014c3c24;
    }
  }
  else {
LAB_014c3c24:
    uVar4 = *(uint *)(param_1 + 0x10);
  }
LAB_014c3c28:
  iVar5 = (int)*(ulong *)(param_1 + 8);
  if (iVar5 == -2) {
    uVar4 = uVar4 & 0xff;
    if ((uVar4 == 0x2d) || (uVar4 == 0x2b)) {
      auVar8 = DateStringTokenizer<unsigned_char_const>::Scan
                         ((DateStringTokenizer<unsigned_char_const> *)param_1);
      uVar2 = 0xffffffff;
      if (uVar4 == 0x2b) {
        uVar2 = 1;
      }
      *(undefined1 (*) [12])(param_1 + 8) = auVar8;
      *(undefined4 *)param_4 = uVar2;
      if ((int)*(undefined8 *)(param_1 + 8) != -3) {
        return 0xfffffffa;
      }
      uVar3 = *(uint *)(param_1 + 0x10);
      iVar5 = (int)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
      if (iVar5 == 2) {
        if (0x17 < uVar3) {
          return 0xfffffffa;
        }
        auVar8 = DateStringTokenizer<unsigned_char_const>::Scan
                           ((DateStringTokenizer<unsigned_char_const> *)param_1);
        *(undefined1 (*) [12])(param_1 + 8) = auVar8;
        *(uint *)(param_4 + 4) = uVar3;
        if (*(int *)(param_1 + 8) != -2) {
          return 0xfffffffa;
        }
        if (param_1[0x10] != (DateStringTokenizer)0x3a) {
          return 0xfffffffa;
        }
        auVar8 = DateStringTokenizer<unsigned_char_const>::Scan
                           ((DateStringTokenizer<unsigned_char_const> *)param_1);
        *(undefined1 (*) [12])(param_1 + 8) = auVar8;
        if (auVar8._0_8_ != 0x2fffffffd) {
          return 0xfffffffa;
        }
        if (0x3b < auVar8._8_4_) {
          return 0xfffffffa;
        }
        auVar9 = DateStringTokenizer<unsigned_char_const>::Scan
                           ((DateStringTokenizer<unsigned_char_const> *)param_1);
        *(undefined1 (*) [12])(param_1 + 8) = auVar9;
        *(uint *)(param_4 + 8) = auVar8._8_4_;
      }
      else {
        if (iVar5 != 4) {
          return 0xfffffffa;
        }
        auVar8 = DateStringTokenizer<unsigned_char_const>::Scan
                           ((DateStringTokenizer<unsigned_char_const> *)param_1);
        *(undefined1 (*) [12])(param_1 + 8) = auVar8;
        if (0x17 < (uint)((int)uVar3 / 100)) {
          return 0xfffffffa;
        }
        if (0x3b < (uint)((int)uVar3 % 100)) {
          return 0xfffffffa;
        }
        *(int *)(param_4 + 4) = (int)uVar3 / 100;
        *(int *)(param_4 + 8) = (int)uVar3 % 100;
      }
    }
  }
  else if (((iVar5 == 2) && (uVar4 == 0)) &&
          ((*(ulong *)(param_1 + 8) & 0xffffffff00000000) == 0x100000000)) {
    auVar8 = DateStringTokenizer<unsigned_char_const>::Scan
                       ((DateStringTokenizer<unsigned_char_const> *)param_1);
    *(undefined1 (*) [12])(param_1 + 8) = auVar8;
    *(undefined4 *)(param_4 + 8) = 0;
    *(undefined8 *)param_4 = 1;
  }
  if (*(int *)(param_1 + 8) != -1) {
    return 0xfffffffa;
  }
LAB_014c3d38:
  if ((*(int *)(param_4 + 4) == 0x7fffffff) && (*(int *)(param_3 + 0x10) == 0)) {
    *(undefined4 *)(param_4 + 8) = 0;
    *(undefined8 *)param_4 = 1;
  }
  param_2[0x14] = (DayComposer)0x1;
  return 0xffffffff;
}

