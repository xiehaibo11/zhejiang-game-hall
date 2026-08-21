
/* unibrow::Ecma262UnCanonicalize::Convert(unsigned int, unsigned int, unsigned int*, bool*) */

undefined8
unibrow::Ecma262UnCanonicalize::Convert(uint param_1,uint param_2,uint *param_3,bool *param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  switch(param_1 >> 0xd) {
  case 0:
    uVar3 = param_1 & 0x1fff;
    uVar15 = 0x3ec;
    uVar12 = 0;
LAB_011f7404:
    do {
      uVar13 = uVar12;
      uVar2 = uVar13 + (uVar15 - uVar13 >> 1);
      uVar12 = uVar2 + 1;
      do {
        uVar14 = uVar15;
        if (uVar15 == uVar13) goto LAB_011f74d0;
        uVar4 = *(uint *)(&DAT_019e9088 +
                         (-(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1) * 4) &
                0x3fffffff;
        if (uVar4 <= uVar3) {
          if (uVar12 == 0x3ed) {
            uVar14 = 0x3ec;
            goto LAB_011f74d0;
          }
          uVar14 = uVar2;
          if (uVar3 < (*(uint *)(&DAT_019e9088 +
                                (-(ulong)(uVar12 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar12 << 1)
                                * 4) & 0x3fffffff)) goto LAB_011f74d0;
        }
        if (uVar4 < uVar3) goto LAB_011f7404;
      } while (uVar4 <= uVar3);
      uVar15 = uVar2 - 1;
      uVar12 = uVar13;
      uVar14 = uVar13;
    } while (uVar2 != 0);
LAB_011f74d0:
    uVar12 = *(uint *)(&DAT_019e9088 + (long)(int)(uVar14 << 1) * 4) & 0x3fffffff;
    iVar7 = uVar3 - uVar12;
    if ((iVar7 != 0) &&
       (((uint)(uVar12 <= uVar3 && iVar7 != 0) &
        (*(uint *)(&DAT_019e9088 + (long)(int)(uVar14 << 1) * 4) & 0x40000000) >> 0x1e) == 0)) {
      return 0;
    }
    uVar12 = *(uint *)(&DAT_019e9088 + (ulong)(uVar14 << 1 | 1) * 4);
    if (uVar12 == 0) {
      return 0;
    }
    if ((uVar12 & 3) == 0) {
      uVar12 = param_1 + ((int)uVar12 >> 2);
    }
    else {
      if ((uVar12 & 3) == 1) {
        if (param_4 != (bool *)0x0) {
          *param_4 = false;
        }
        if ((int)uVar12 >> 2 == 0x1fa) {
          return 0;
        }
        lVar1 = ((long)((ulong)uVar12 << 0x20) >> 0x22) * 0x10;
        iVar5 = *(int *)(&DAT_019eaff4 + lVar1);
        iVar6 = *(int *)(&DAT_019eaff8 + lVar1);
        *param_3 = *(int *)(&DAT_019eaff0 + lVar1) + iVar7;
        param_3[1] = iVar5 + iVar7;
        if (iVar6 == -1) {
          return 2;
        }
        iVar5 = *(int *)(&DAT_019eaffc + lVar1);
        param_3[2] = iVar6 + iVar7;
        if (iVar5 != -1) {
          param_3[3] = iVar5 + iVar7;
          return 4;
        }
        return 3;
      }
      if (param_4 != (bool *)0x0) {
        *param_4 = false;
      }
      if ((uVar12 & 0xfffffffc) != 4) {
        return 0;
      }
      if ((param_2 == 0) || (uVar9 = Letter::Is(param_2), (uVar9 & 1) == 0)) {
        uVar12 = 0x3c2;
      }
      else {
        uVar12 = 0x3c3;
      }
    }
    *param_3 = uVar12;
    return 1;
  case 1:
    puVar8 = &DAT_019ecfa0;
    puVar11 = &DAT_019ed448;
    uVar10 = 0x95;
    break;
  default:
    return 0;
  case 5:
    puVar8 = &DAT_019ed6e0;
    puVar11 = &DAT_019edd10;
    uVar10 = 0xc6;
    break;
  case 7:
    puVar8 = &DAT_019ee050;
    puVar11 = &DAT_019ee070;
    uVar10 = 4;
  }
  uVar10 = FUN_011f6e00(puVar8,uVar10,puVar11,param_1,param_2,param_3);
  return uVar10;
}

