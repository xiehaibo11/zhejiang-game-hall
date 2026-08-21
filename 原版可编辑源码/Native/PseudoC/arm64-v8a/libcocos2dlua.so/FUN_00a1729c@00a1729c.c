
/* WARNING: Type propagation algorithm not settling */

uint FUN_00a1729c(long param_1,uint *param_2,byte *param_3,ulong param_4)

{
  ulong uVar1;
  byte bVar2;
  undefined4 uVar3;
  ulong uVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  
  bVar2 = *param_3;
  iVar5 = *(int *)(param_1 + 0x28);
  if (bVar2 == 0x1b) {
    uVar4 = 0;
    do {
      uVar1 = uVar4 + 3;
      if (param_4 < uVar1) goto LAB_00a173cc;
      if (param_3[uVar4 + 1] == 0x24) {
        if ((param_3[uVar4 + 2] | 2) != 0x42) goto LAB_00a174bc;
        iVar5 = 2;
      }
      else {
        if (param_3[uVar4 + 1] != 0x28) goto LAB_00a174bc;
        if (param_3[uVar4 + 2] == 0x4a) {
          iVar5 = 1;
        }
        else {
          if (param_3[uVar4 + 2] != 0x42) goto LAB_00a174bc;
          iVar5 = 0;
        }
      }
      if (param_4 < uVar4 + 4) {
        uVar4 = (ulong)((int)uVar4 + 3);
        goto LAB_00a173cc;
      }
      bVar2 = param_3[uVar4 + 3];
      uVar4 = uVar1;
    } while (bVar2 == 0x1b);
    param_3 = param_3 + uVar1;
    uVar4 = uVar1 & 0xffffffff;
  }
  else {
    uVar4 = 0;
  }
  uVar3 = (undefined4)uVar4;
  if (iVar5 != 2) {
    uVar7 = (uint)bVar2;
    if (iVar5 == 1) {
      if (-1 < (char)bVar2) {
        if (uVar7 == 0x5c) {
          uVar7 = 0xa5;
        }
        else if (uVar7 == 0x7e) {
          uVar7 = 0x203e;
        }
        *param_2 = uVar7;
        *(undefined4 *)(param_1 + 0x28) = 1;
        return uVar3 + 1;
      }
      iVar5 = 1;
    }
    else {
      if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (-1 < (char)bVar2) {
        *param_2 = uVar7;
        *(undefined4 *)(param_1 + 0x28) = 0;
        return uVar3 + 1;
      }
      iVar5 = 0;
    }
    goto LAB_00a174bc;
  }
  uVar7 = (uint)bVar2;
  if (param_4 < (ulong)(long)(int)(uVar3 + 2)) {
    iVar5 = 2;
LAB_00a173cc:
    *(int *)(param_1 + 0x28) = iVar5;
    return (int)uVar4 * -2 - 2;
  }
  if (((char)bVar2 < '\0') || (bVar2 = param_3[1], (char)bVar2 < '\0')) goto LAB_00a174b8;
  iVar5 = 2;
  if ((7 < uVar7 - 0x21 && 0x44 < uVar7 - 0x30) || (0x5d < (bVar2 - 0x21 & 0xff)))
  goto LAB_00a174bc;
  iVar5 = (uint)bVar2 + uVar7 * 0x5e;
  uVar7 = iVar5 - 0xc3f;
  if (uVar7 < 0x582) {
    if (0x2b1 < uVar7) {
LAB_00a174b8:
      iVar5 = 2;
      goto LAB_00a174bc;
    }
    puVar6 = (ushort *)(&DAT_01303206 + (ulong)uVar7 * 2);
  }
  else {
    if (0x3c < uVar7 >> 7) goto LAB_00a174b8;
    puVar6 = (ushort *)(&DAT_0130376a + (ulong)(iVar5 - 0x11c1) * 2);
  }
  iVar5 = 2;
  if (*puVar6 != 0xfffd) {
    *param_2 = (uint)*puVar6;
    *(undefined4 *)(param_1 + 0x28) = 2;
    return uVar3 + 2;
  }
LAB_00a174bc:
  *(int *)(param_1 + 0x28) = iVar5;
  return (int)uVar4 << 1 ^ 0xffffffff;
}

