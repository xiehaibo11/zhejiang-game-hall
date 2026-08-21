
/* unibrow::Letter::Is(unsigned int) */

uint unibrow::Letter::Is(uint param_1)

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
    iVar12 = 0x1af;
    break;
  case 1:
    iVar7 = 0;
    uVar13 = param_1 & 0x1fff;
    iVar12 = 0x57;
LAB_011f5d9c:
    iVar5 = iVar12 + -1;
    iVar2 = iVar7;
LAB_011f5da0:
    iVar7 = iVar2;
    iVar12 = iVar7 + ((uint)(iVar5 - iVar7) >> 1);
    iVar2 = iVar12 + 1;
LAB_011f5db4:
    iVar9 = iVar5;
    if (iVar5 == iVar7) goto LAB_011f615c;
    uVar11 = (&DAT_019e3860)[iVar12] & 0x3fffffff;
    if (uVar11 <= uVar13) {
      if (iVar2 == 0x57) {
        iVar9 = 0x56;
      }
      else {
        iVar9 = iVar12;
        if (((&DAT_019e3860)[iVar2] & 0x3fffffff) <= uVar13) goto LAB_011f5de4;
      }
      goto LAB_011f615c;
    }
LAB_011f5de4:
    if (uVar13 <= uVar11) goto code_r0x011f5dec;
    goto LAB_011f5da0;
  case 2:
    uVar8 = 0;
    uVar11 = param_1 & 0x1fff;
    uVar13 = 4;
LAB_011f5e18:
    uVar4 = uVar13 - 1;
    uVar1 = uVar8;
    do {
      uVar8 = uVar1;
      uVar13 = uVar8 + (uVar4 - uVar8 >> 1);
      uVar1 = uVar13 + 1;
      while( true ) {
        uVar10 = uVar4;
        if (uVar4 == uVar8) goto LAB_011f6180;
        uVar3 = (&DAT_019e41d4)[(int)uVar13] & 0x3fffffff;
        if (uVar3 <= uVar11) {
          if (uVar1 == 4) {
            uVar10 = 3;
            goto LAB_011f6180;
          }
          uVar10 = uVar13;
          if (uVar11 < ((&DAT_019e41d4)[(int)uVar1] & 0x3fffffff)) goto LAB_011f6180;
        }
        if (uVar3 < uVar11) break;
        if (uVar11 < uVar3) {
          uVar10 = uVar8;
          if (uVar13 == 0) {
LAB_011f6180:
            if (((&DAT_019e41d4)[(int)uVar10] & 0x3fffffff) != uVar11) {
              return (uint)(((&DAT_019e41d4)[(int)uVar10] & 0x3fffffff) < uVar11 &&
                           (uVar10 & 0xfffffffd) == 0);
            }
            return 1;
          }
          goto LAB_011f5e18;
        }
      }
    } while( true );
  case 3:
    iVar7 = 0;
    uVar13 = param_1 & 0x1fff;
    iVar12 = 2;
LAB_011f5e94:
    iVar5 = iVar12 + -1;
    iVar2 = iVar7;
    do {
      iVar7 = iVar2;
      iVar12 = iVar7 + ((uint)(iVar5 - iVar7) >> 1);
      iVar2 = iVar12 + 1;
      while( true ) {
        iVar9 = iVar5;
        if (iVar5 == iVar7) goto LAB_011f61c0;
        uVar11 = (&DAT_019e3194)[iVar12] & 0x3fffffff;
        if (uVar11 <= uVar13) {
          if (iVar2 == 2) {
            iVar9 = 1;
            goto LAB_011f61c0;
          }
          iVar9 = iVar12;
          if (uVar13 < ((&DAT_019e3194)[iVar2] & 0x3fffffff)) goto LAB_011f61c0;
        }
        if (uVar11 < uVar13) break;
        if (uVar13 < uVar11) {
          iVar9 = iVar7;
          if (iVar12 == 0) {
LAB_011f61c0:
            uVar11 = (&DAT_019e3194)[iVar9] & 0x3fffffff;
            if (uVar11 == uVar13) {
              return 1;
            }
LAB_011f61fc:
            return (uint)(iVar9 == 0 && uVar11 < (param_1 & 0x1fff));
          }
          goto LAB_011f5e94;
        }
      }
    } while( true );
  case 4:
    iVar7 = 0;
    uVar13 = param_1 & 0x1fff;
    iVar12 = 2;
LAB_011f5f10:
    iVar5 = iVar12 + -1;
    iVar2 = iVar7;
LAB_011f5f14:
    iVar7 = iVar2;
    iVar12 = iVar7 + ((uint)(iVar5 - iVar7) >> 1);
    iVar2 = iVar12 + 1;
LAB_011f5f28:
    iVar9 = iVar5;
    if (iVar5 == iVar7) goto LAB_011f61e4;
    uVar11 = (&DAT_019e319c)[iVar12] & 0x3fffffff;
    if (uVar11 <= uVar13) {
      if (iVar2 == 2) {
        iVar9 = 1;
      }
      else {
        iVar9 = iVar12;
        if (((&DAT_019e319c)[iVar2] & 0x3fffffff) <= uVar13) goto LAB_011f5f58;
      }
      goto LAB_011f61e4;
    }
LAB_011f5f58:
    if (uVar13 <= uVar11) goto code_r0x011f5f60;
    goto LAB_011f5f14;
  case 5:
    iVar7 = 0;
    uVar13 = param_1 & 0x1fff;
    iVar12 = 100;
LAB_011f5f8c:
    iVar5 = iVar12 + -1;
    iVar2 = iVar7;
LAB_011f5f90:
    iVar7 = iVar2;
    iVar12 = iVar7 + ((uint)(iVar5 - iVar7) >> 1);
    iVar2 = iVar12 + 1;
LAB_011f5fa4:
    iVar9 = iVar5;
    if (iVar5 == iVar7) goto LAB_011f6220;
    uVar11 = (&DAT_019e41e4)[iVar12] & 0x3fffffff;
    if (uVar11 <= uVar13) {
      if (iVar2 == 100) {
        iVar9 = 99;
      }
      else {
        iVar9 = iVar12;
        if (((&DAT_019e41e4)[iVar2] & 0x3fffffff) <= uVar13) goto LAB_011f5fd4;
      }
      goto LAB_011f6220;
    }
LAB_011f5fd4:
    if (uVar13 <= uVar11) goto code_r0x011f5fdc;
    goto LAB_011f5f90;
  case 6:
    iVar7 = 0;
    uVar13 = param_1 & 0x1fff;
    iVar12 = 6;
LAB_011f6008:
    iVar5 = iVar12 + -1;
    iVar2 = iVar7;
    do {
      iVar7 = iVar2;
      iVar12 = iVar7 + ((uint)(iVar5 - iVar7) >> 1);
      iVar2 = iVar12 + 1;
      while( true ) {
        iVar9 = iVar5;
        if (iVar5 == iVar7) goto LAB_011f6254;
        uVar11 = (&DAT_019e4374)[iVar12] & 0x3fffffff;
        if (uVar11 <= uVar13) {
          if (iVar2 == 6) {
            iVar9 = 5;
            goto LAB_011f6254;
          }
          iVar9 = iVar12;
          if (uVar13 < ((&DAT_019e4374)[iVar2] & 0x3fffffff)) goto LAB_011f6254;
        }
        if (uVar11 < uVar13) break;
        if (uVar13 < uVar11) {
          iVar9 = iVar7;
          if (iVar12 == 0) {
LAB_011f6254:
            uVar11 = (&DAT_019e4374)[iVar9] & 0x3fffffff;
            if (uVar11 == uVar13) {
              return 1;
            }
            uVar14 = 0x15;
LAB_011f62ac:
            return (uint)(uVar14 >> ((long)iVar9 & 0x3fU)) & (uint)(uVar11 < (param_1 & 0x1fff));
          }
          goto LAB_011f6008;
        }
      }
    } while( true );
  case 7:
    iVar7 = 0;
    uVar13 = param_1 & 0x1fff;
    iVar12 = 0x30;
LAB_011f6084:
    iVar5 = iVar12 + -1;
    iVar2 = iVar7;
LAB_011f6088:
    iVar7 = iVar2;
    iVar12 = iVar7 + ((uint)(iVar5 - iVar7) >> 1);
    iVar2 = iVar12 + 1;
LAB_011f609c:
    iVar9 = iVar5;
    if (iVar5 == iVar7) goto LAB_011f6284;
    uVar11 = (&DAT_019e438c)[iVar12] & 0x3fffffff;
    if (uVar11 <= uVar13) {
      if (iVar2 == 0x30) {
        iVar9 = 0x2f;
      }
      else {
        iVar9 = iVar12;
        if (((&DAT_019e438c)[iVar2] & 0x3fffffff) <= uVar13) goto LAB_011f60cc;
      }
      goto LAB_011f6284;
    }
LAB_011f60cc:
    if (uVar13 <= uVar11) goto code_r0x011f60d4;
    goto LAB_011f6088;
  default:
    return 0;
  }
LAB_011f5d18:
  iVar5 = iVar12 + -1;
  iVar2 = iVar7;
  do {
    iVar7 = iVar2;
    iVar12 = iVar7 + ((uint)(iVar5 - iVar7) >> 1);
    iVar2 = iVar12 + 1;
    while( true ) {
      iVar9 = iVar5;
      if (iVar5 == iVar7) goto LAB_011f6138;
      uVar11 = (&DAT_019e31a4)[iVar12] & 0x3fffffff;
      if (uVar11 <= uVar13) {
        if (iVar2 == 0x1af) {
          iVar9 = 0x1ae;
          goto LAB_011f6138;
        }
        iVar9 = iVar12;
        if (uVar13 < ((&DAT_019e31a4)[iVar2] & 0x3fffffff)) goto LAB_011f6138;
      }
      if (uVar11 < uVar13) break;
      if (uVar13 < uVar11) {
        iVar9 = iVar7;
        if (iVar12 == 0) {
LAB_011f6138:
          uVar11 = (&DAT_019e31a4)[iVar9];
          bVar6 = uVar13 <= (uVar11 & 0x3fffffff);
          if ((uVar11 & 0x3fffffff) == uVar13) {
            return 1;
          }
LAB_011f6238:
          return (uint)!bVar6 & (uVar11 & 0x40000000) >> 0x1e;
        }
        goto LAB_011f5d18;
      }
    }
  } while( true );
code_r0x011f60d4:
  if (uVar13 < uVar11) {
    iVar9 = iVar7;
    if (iVar12 != 0) goto LAB_011f6084;
LAB_011f6284:
    uVar11 = (&DAT_019e438c)[iVar9] & 0x3fffffff;
    if (uVar11 == uVar13) {
      return 1;
    }
    uVar14 = 0x555555552a55;
    goto LAB_011f62ac;
  }
  goto LAB_011f609c;
code_r0x011f5fdc:
  if (uVar13 < uVar11) {
    iVar9 = iVar7;
    if (iVar12 != 0) goto LAB_011f5f8c;
LAB_011f6220:
    uVar11 = (&DAT_019e41e4)[iVar9];
    bVar6 = uVar13 <= (uVar11 & 0x3fffffff);
    if ((uVar11 & 0x3fffffff) == uVar13) {
      return 1;
    }
    goto LAB_011f6238;
  }
  goto LAB_011f5fa4;
code_r0x011f5f60:
  if (uVar13 < uVar11) {
    iVar9 = iVar7;
    if (iVar12 != 0) goto LAB_011f5f10;
LAB_011f61e4:
    uVar11 = (&DAT_019e319c)[iVar9] & 0x3fffffff;
    if (uVar11 == uVar13) {
      return 1;
    }
    goto LAB_011f61fc;
  }
  goto LAB_011f5f28;
code_r0x011f5dec:
  if (uVar13 < uVar11) {
    iVar9 = iVar7;
    if (iVar12 != 0) goto LAB_011f5d9c;
LAB_011f615c:
    uVar11 = (&DAT_019e3860)[iVar9];
    bVar6 = uVar13 <= (uVar11 & 0x3fffffff);
    if ((uVar11 & 0x3fffffff) == uVar13) {
      return 1;
    }
    goto LAB_011f6238;
  }
  goto LAB_011f5db4;
}

