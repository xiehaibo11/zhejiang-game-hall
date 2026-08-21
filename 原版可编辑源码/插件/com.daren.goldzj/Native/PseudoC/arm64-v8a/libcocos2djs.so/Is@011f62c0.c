
/* unibrow::ID_Start::Is(unsigned int) */

uint unibrow::ID_Start::Is(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  
  switch(param_1 >> 0xd) {
  case 0:
    iVar7 = 0;
    uVar13 = param_1 & 0x1fff;
    iVar12 = 0x1b2;
    break;
  case 1:
    iVar7 = 0;
    uVar13 = param_1 & 0x1fff;
    iVar12 = 0x54;
LAB_011f637c:
    iVar5 = iVar12 + -1;
    iVar2 = iVar7;
LAB_011f6380:
    iVar7 = iVar2;
    iVar12 = iVar7 + ((uint)(iVar5 - iVar7) >> 1);
    iVar2 = iVar12 + 1;
LAB_011f6394:
    iVar9 = iVar5;
    if (iVar5 == iVar7) goto LAB_011f673c;
    uVar11 = (&DAT_019e4084)[iVar12] & 0x3fffffff;
    if (uVar11 <= uVar13) {
      if (iVar2 == 0x54) {
        iVar9 = 0x53;
      }
      else {
        iVar9 = iVar12;
        if (((&DAT_019e4084)[iVar2] & 0x3fffffff) <= uVar13) goto LAB_011f63c4;
      }
      goto LAB_011f673c;
    }
LAB_011f63c4:
    if (uVar13 <= uVar11) goto code_r0x011f63cc;
    goto LAB_011f6380;
  case 2:
    uVar8 = 0;
    uVar11 = param_1 & 0x1fff;
    uVar13 = 4;
LAB_011f63f8:
    uVar4 = uVar13 - 1;
    uVar1 = uVar8;
    do {
      uVar8 = uVar1;
      uVar13 = uVar8 + (uVar4 - uVar8 >> 1);
      uVar1 = uVar13 + 1;
      while( true ) {
        uVar10 = uVar4;
        if (uVar4 == uVar8) goto LAB_011f6760;
        uVar3 = (&DAT_019e41d4)[(int)uVar13] & 0x3fffffff;
        if (uVar3 <= uVar11) {
          if (uVar1 == 4) {
            uVar10 = 3;
            goto LAB_011f6760;
          }
          uVar10 = uVar13;
          if (uVar11 < ((&DAT_019e41d4)[(int)uVar1] & 0x3fffffff)) goto LAB_011f6760;
        }
        if (uVar3 < uVar11) break;
        if (uVar11 < uVar3) {
          uVar10 = uVar8;
          if (uVar13 == 0) {
LAB_011f6760:
            if (((&DAT_019e41d4)[(int)uVar10] & 0x3fffffff) != uVar11) {
              return (uint)(((&DAT_019e41d4)[(int)uVar10] & 0x3fffffff) < uVar11 &&
                           (uVar10 & 0xfffffffd) == 0);
            }
            return 1;
          }
          goto LAB_011f63f8;
        }
      }
    } while( true );
  case 3:
    iVar7 = 0;
    uVar13 = param_1 & 0x1fff;
    iVar12 = 2;
LAB_011f6474:
    iVar5 = iVar12 + -1;
    iVar2 = iVar7;
    do {
      iVar7 = iVar2;
      iVar12 = iVar7 + ((uint)(iVar5 - iVar7) >> 1);
      iVar2 = iVar12 + 1;
      while( true ) {
        iVar9 = iVar5;
        if (iVar5 == iVar7) goto LAB_011f67a0;
        uVar11 = (&DAT_019e3194)[iVar12] & 0x3fffffff;
        if (uVar11 <= uVar13) {
          if (iVar2 == 2) {
            iVar9 = 1;
            goto LAB_011f67a0;
          }
          iVar9 = iVar12;
          if (uVar13 < ((&DAT_019e3194)[iVar2] & 0x3fffffff)) goto LAB_011f67a0;
        }
        if (uVar11 < uVar13) break;
        if (uVar13 < uVar11) {
          iVar9 = iVar7;
          if (iVar12 == 0) {
LAB_011f67a0:
            uVar11 = (&DAT_019e3194)[iVar9] & 0x3fffffff;
            if (uVar11 == uVar13) {
              return 1;
            }
LAB_011f67dc:
            return (uint)(iVar9 == 0 && uVar11 < (param_1 & 0x1fff));
          }
          goto LAB_011f6474;
        }
      }
    } while( true );
  case 4:
    iVar7 = 0;
    uVar13 = param_1 & 0x1fff;
    iVar12 = 2;
LAB_011f64f0:
    iVar5 = iVar12 + -1;
    iVar2 = iVar7;
LAB_011f64f4:
    iVar7 = iVar2;
    iVar12 = iVar7 + ((uint)(iVar5 - iVar7) >> 1);
    iVar2 = iVar12 + 1;
LAB_011f6508:
    iVar9 = iVar5;
    if (iVar5 == iVar7) goto LAB_011f67c4;
    uVar11 = (&DAT_019e319c)[iVar12] & 0x3fffffff;
    if (uVar11 <= uVar13) {
      if (iVar2 == 2) {
        iVar9 = 1;
      }
      else {
        iVar9 = iVar12;
        if (((&DAT_019e319c)[iVar2] & 0x3fffffff) <= uVar13) goto LAB_011f6538;
      }
      goto LAB_011f67c4;
    }
LAB_011f6538:
    if (uVar13 <= uVar11) goto code_r0x011f6540;
    goto LAB_011f64f4;
  case 5:
    iVar7 = 0;
    uVar13 = param_1 & 0x1fff;
    iVar12 = 100;
LAB_011f656c:
    iVar5 = iVar12 + -1;
    iVar2 = iVar7;
LAB_011f6570:
    iVar7 = iVar2;
    iVar12 = iVar7 + ((uint)(iVar5 - iVar7) >> 1);
    iVar2 = iVar12 + 1;
LAB_011f6584:
    iVar9 = iVar5;
    if (iVar5 == iVar7) goto LAB_011f6800;
    uVar11 = (&DAT_019e41e4)[iVar12] & 0x3fffffff;
    if (uVar11 <= uVar13) {
      if (iVar2 == 100) {
        iVar9 = 99;
      }
      else {
        iVar9 = iVar12;
        if (((&DAT_019e41e4)[iVar2] & 0x3fffffff) <= uVar13) goto LAB_011f65b4;
      }
      goto LAB_011f6800;
    }
LAB_011f65b4:
    if (uVar13 <= uVar11) goto code_r0x011f65bc;
    goto LAB_011f6570;
  case 6:
    iVar7 = 0;
    uVar13 = param_1 & 0x1fff;
    iVar12 = 6;
LAB_011f65e8:
    iVar5 = iVar12 + -1;
    iVar2 = iVar7;
    do {
      iVar7 = iVar2;
      iVar12 = iVar7 + ((uint)(iVar5 - iVar7) >> 1);
      iVar2 = iVar12 + 1;
      while( true ) {
        iVar9 = iVar5;
        if (iVar5 == iVar7) goto LAB_011f6834;
        uVar11 = (&DAT_019e4374)[iVar12] & 0x3fffffff;
        if (uVar11 <= uVar13) {
          if (iVar2 == 6) {
            iVar9 = 5;
            goto LAB_011f6834;
          }
          iVar9 = iVar12;
          if (uVar13 < ((&DAT_019e4374)[iVar2] & 0x3fffffff)) goto LAB_011f6834;
        }
        if (uVar11 < uVar13) break;
        if (uVar13 < uVar11) {
          iVar9 = iVar7;
          if (iVar12 == 0) {
LAB_011f6834:
            uVar11 = (&DAT_019e4374)[iVar9] & 0x3fffffff;
            if (uVar11 == uVar13) {
              return 1;
            }
            uVar14 = 0x15;
LAB_011f688c:
            return (uint)(uVar14 >> ((long)iVar9 & 0x3fU)) & (uint)(uVar11 < (param_1 & 0x1fff));
          }
          goto LAB_011f65e8;
        }
      }
    } while( true );
  case 7:
    iVar7 = 0;
    uVar13 = param_1 & 0x1fff;
    iVar12 = 0x30;
LAB_011f6664:
    iVar5 = iVar12 + -1;
    iVar2 = iVar7;
LAB_011f6668:
    iVar7 = iVar2;
    iVar12 = iVar7 + ((uint)(iVar5 - iVar7) >> 1);
    iVar2 = iVar12 + 1;
LAB_011f667c:
    iVar9 = iVar5;
    if (iVar5 == iVar7) goto LAB_011f6864;
    uVar11 = (&DAT_019e438c)[iVar12] & 0x3fffffff;
    if (uVar11 <= uVar13) {
      if (iVar2 == 0x30) {
        iVar9 = 0x2f;
      }
      else {
        iVar9 = iVar12;
        if (((&DAT_019e438c)[iVar2] & 0x3fffffff) <= uVar13) goto LAB_011f66ac;
      }
      goto LAB_011f6864;
    }
LAB_011f66ac:
    if (uVar13 <= uVar11) goto code_r0x011f66b4;
    goto LAB_011f6668;
  default:
    return 0;
  }
LAB_011f62f8:
  iVar5 = iVar12 + -1;
  iVar2 = iVar7;
  do {
    iVar7 = iVar2;
    iVar12 = iVar7 + ((uint)(iVar5 - iVar7) >> 1);
    iVar2 = iVar12 + 1;
    while( true ) {
      iVar9 = iVar5;
      if (iVar5 == iVar7) goto LAB_011f6718;
      uVar11 = (&DAT_019e39bc)[iVar12] & 0x3fffffff;
      if (uVar11 <= uVar13) {
        if (iVar2 == 0x1b2) {
          iVar9 = 0x1b1;
          goto LAB_011f6718;
        }
        iVar9 = iVar12;
        if (uVar13 < ((&DAT_019e39bc)[iVar2] & 0x3fffffff)) goto LAB_011f6718;
      }
      if (uVar11 < uVar13) break;
      if (uVar13 < uVar11) {
        iVar9 = iVar7;
        if (iVar12 == 0) {
LAB_011f6718:
          uVar11 = (&DAT_019e39bc)[iVar9];
          bVar6 = uVar13 <= (uVar11 & 0x3fffffff);
          if ((uVar11 & 0x3fffffff) == uVar13) {
            return 1;
          }
LAB_011f6818:
          return (uint)!bVar6 & (uVar11 & 0x40000000) >> 0x1e;
        }
        goto LAB_011f62f8;
      }
    }
  } while( true );
code_r0x011f66b4:
  if (uVar13 < uVar11) {
    iVar9 = iVar7;
    if (iVar12 != 0) goto LAB_011f6664;
LAB_011f6864:
    uVar11 = (&DAT_019e438c)[iVar9] & 0x3fffffff;
    if (uVar11 == uVar13) {
      return 1;
    }
    uVar14 = 0x555555552a55;
    goto LAB_011f688c;
  }
  goto LAB_011f667c;
code_r0x011f65bc:
  if (uVar13 < uVar11) {
    iVar9 = iVar7;
    if (iVar12 != 0) goto LAB_011f656c;
LAB_011f6800:
    uVar11 = (&DAT_019e41e4)[iVar9];
    bVar6 = uVar13 <= (uVar11 & 0x3fffffff);
    if ((uVar11 & 0x3fffffff) == uVar13) {
      return 1;
    }
    goto LAB_011f6818;
  }
  goto LAB_011f6584;
code_r0x011f6540:
  if (uVar13 < uVar11) {
    iVar9 = iVar7;
    if (iVar12 != 0) goto LAB_011f64f0;
LAB_011f67c4:
    uVar11 = (&DAT_019e319c)[iVar9] & 0x3fffffff;
    if (uVar11 == uVar13) {
      return 1;
    }
    goto LAB_011f67dc;
  }
  goto LAB_011f6508;
code_r0x011f63cc:
  if (uVar13 < uVar11) {
    iVar9 = iVar7;
    if (iVar12 != 0) goto LAB_011f637c;
LAB_011f673c:
    uVar11 = (&DAT_019e4084)[iVar9];
    bVar6 = uVar13 <= (uVar11 & 0x3fffffff);
    if ((uVar11 & 0x3fffffff) == uVar13) {
      return 1;
    }
    goto LAB_011f6818;
  }
  goto LAB_011f6394;
}

