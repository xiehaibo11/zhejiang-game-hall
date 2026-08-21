
/* v8::internal::Bignum::AssignHexString(v8::internal::Vector<char const>) */

void v8::internal::Bignum::AssignHexString(long param_1,byte *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  
  if (0 < *(int *)(param_1 + 0x210)) {
    lVar8 = 0;
    do {
      *(undefined4 *)(*(long *)(param_1 + 0x200) + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x210));
  }
  *(undefined8 *)(param_1 + 0x210) = 0;
  if (param_3 < 0x380) {
    uVar7 = param_3 / 7;
    iVar9 = param_3 + -1;
    if (6 < param_3) {
      uVar10 = 0;
      do {
        uVar11 = (uint)param_2[iVar9];
        if (uVar11 - 0x30 < 10) {
          iVar12 = -0x30;
        }
        else if (uVar11 - 0x61 < 6) {
          iVar12 = -0x57;
        }
        else {
          if (5 < uVar11 - 0x41) goto LAB_015246ac;
          iVar12 = -0x37;
        }
        uVar13 = (uint)param_2[(long)iVar9 + -1];
        if (uVar13 - 0x30 < 10) {
          iVar15 = -0x30;
        }
        else if (uVar13 - 0x61 < 6) {
          iVar15 = -0x57;
        }
        else {
          if (5 < uVar13 - 0x41) goto LAB_015246ac;
          iVar15 = -0x37;
        }
        uVar16 = (uint)param_2[(long)iVar9 + -2];
        if (uVar16 - 0x30 < 10) {
          iVar17 = -0x30;
        }
        else if (uVar16 - 0x61 < 6) {
          iVar17 = -0x57;
        }
        else {
          if (5 < uVar16 - 0x41) goto LAB_015246ac;
          iVar17 = -0x37;
        }
        uVar1 = (uint)param_2[(long)iVar9 + -3];
        if (uVar1 - 0x30 < 10) {
          iVar2 = -0x30;
        }
        else if (uVar1 - 0x61 < 6) {
          iVar2 = -0x57;
        }
        else {
          if (5 < uVar1 - 0x41) goto LAB_015246ac;
          iVar2 = -0x37;
        }
        uVar3 = (uint)param_2[(long)iVar9 + -4];
        if (uVar3 - 0x30 < 10) {
          iVar4 = -0x30;
        }
        else if (uVar3 - 0x61 < 6) {
          iVar4 = -0x57;
        }
        else {
          if (5 < uVar3 - 0x41) goto LAB_015246ac;
          iVar4 = -0x37;
        }
        uVar5 = (uint)param_2[(long)iVar9 + -5];
        if (uVar5 - 0x30 < 10) {
          iVar6 = -0x30;
        }
        else if (uVar5 - 0x61 < 6) {
          iVar6 = -0x57;
        }
        else {
          if (5 < uVar5 - 0x41) goto LAB_015246ac;
          iVar6 = -0x37;
        }
        uVar14 = (uint)param_2[(long)iVar9 + -6];
        if (uVar14 - 0x30 < 10) {
          iVar18 = -0x30;
        }
        else if (uVar14 - 0x61 < 6) {
          iVar18 = -0x57;
        }
        else {
          if (5 < uVar14 - 0x41) goto LAB_015246ac;
          iVar18 = -0x37;
        }
        *(uint *)(*(long *)(param_1 + 0x200) + uVar10 * 4) =
             iVar12 + uVar11 + (iVar15 + uVar13) * 0x10 + (iVar17 + uVar16) * 0x100 +
             (iVar2 + uVar1) * 0x1000 + (iVar4 + uVar3) * 0x10000 + (iVar6 + uVar5) * 0x100000 +
             (iVar18 + uVar14) * 0x1000000;
        uVar10 = uVar10 + 1;
        iVar9 = iVar9 + -7;
      } while (uVar7 != uVar10);
    }
    *(uint *)(param_1 + 0x210) = uVar7;
    if (-1 < iVar9) {
      iVar12 = 0;
      uVar10 = (ulong)(iVar9 + 1);
      do {
        uVar11 = (uint)*param_2;
        if (uVar11 - 0x30 < 10) {
          iVar9 = -0x30;
        }
        else if (uVar11 - 0x61 < 6) {
          iVar9 = -0x57;
        }
        else {
          if (5 < uVar11 - 0x41) goto LAB_015246ac;
          iVar9 = -0x37;
        }
        uVar10 = uVar10 - 1;
        iVar12 = iVar9 + uVar11 + iVar12 * 0x10;
        param_2 = param_2 + 1;
      } while (uVar10 != 0);
      if (iVar12 != 0) {
        *(int *)(*(long *)(param_1 + 0x200) + (long)(int)uVar7 * 4) = iVar12;
        uVar7 = *(int *)(param_1 + 0x210) + 1;
        *(uint *)(param_1 + 0x210) = uVar7;
      }
    }
    if ((int)uVar7 < 1) {
      if (uVar7 != 0) {
        return;
      }
    }
    else {
      uVar10 = (ulong)uVar7;
      do {
        if (*(int *)(*(long *)(param_1 + 0x200) + -4 + uVar10 * 4) != 0) {
          return;
        }
        iVar9 = (int)uVar10;
        uVar10 = uVar10 - 1;
        *(int *)(param_1 + 0x210) = iVar9 + -1;
      } while (0 < (long)uVar10);
    }
    *(undefined4 *)(param_1 + 0x214) = 0;
    return;
  }
LAB_015246ac:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

