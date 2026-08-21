
uint FUN_00a176e0(long param_1,uint *param_2,byte *param_3,ulong param_4)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  ushort *puVar9;
  undefined *puVar10;
  
  bVar2 = *param_3;
  uVar7 = *(undefined4 *)(param_1 + 0x28);
  if (bVar2 == 0x1b) {
    iVar5 = 0;
    do {
      iVar1 = iVar5 + 3;
      iVar6 = iVar5;
      if (param_4 < (ulong)(long)iVar1) goto LAB_00a17878;
      iVar6 = iVar1;
      if (param_3[1] == 0x24) {
        bVar2 = param_3[2];
        if (bVar2 != 0x28) {
          if ((bVar2 == 0x42) || (bVar2 == 0x40)) {
            uVar7 = 2;
            if ((ulong)(long)(iVar5 + 4) <= param_4) goto LAB_00a17794;
            goto LAB_00a17878;
          }
          goto LAB_00a17a60;
        }
        iVar1 = iVar5 + 4;
        iVar6 = iVar5;
        if (param_4 < (ulong)(long)iVar1) goto LAB_00a17878;
        if (param_3[3] != 0x44) goto LAB_00a17a60;
        uVar7 = 3;
        iVar6 = iVar1;
        if (param_4 < (ulong)(long)(iVar5 + 5)) goto LAB_00a17878;
        param_3 = param_3 + 4;
        iVar5 = iVar1;
      }
      else {
        if (param_3[1] != 0x28) goto LAB_00a17a60;
        if (param_3[2] == 0x4a) {
          uVar7 = 1;
        }
        else {
          if (param_3[2] != 0x42) goto LAB_00a17a60;
          uVar7 = 0;
        }
        if (param_4 < (ulong)(long)(iVar5 + 4)) goto LAB_00a17878;
LAB_00a17794:
        param_3 = param_3 + 3;
        iVar5 = iVar1;
      }
      bVar2 = *param_3;
    } while (bVar2 == 0x1b);
  }
  else {
    iVar5 = 0;
  }
  uVar8 = (uint)bVar2;
  iVar6 = iVar5;
  switch(uVar7) {
  case 0:
    if (-1 < (char)bVar2) {
      *param_2 = (uint)bVar2;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return iVar5 + 1;
    }
    uVar7 = 0;
    break;
  case 1:
    if (-1 < (char)bVar2) {
      if (uVar8 == 0x5c) {
        uVar8 = 0xa5;
      }
      else if (uVar8 == 0x7e) {
        uVar8 = 0x203e;
      }
      *param_2 = uVar8;
      *(undefined4 *)(param_1 + 0x28) = 1;
      return iVar5 + 1;
    }
    uVar7 = 1;
    break;
  case 2:
    if (param_4 < (ulong)(long)(iVar5 + 2)) {
      uVar7 = 2;
LAB_00a17878:
      *(undefined4 *)(param_1 + 0x28) = uVar7;
      return iVar6 * -2 - 2;
    }
    if (((char)bVar2 < '\0') || (bVar2 = param_3[1], (char)bVar2 < '\0')) goto LAB_00a179d4;
    uVar7 = 2;
    if ((7 < uVar8 - 0x21 && 0x44 < uVar8 - 0x30) || (0x5d < (bVar2 - 0x21 & 0xff))) break;
    iVar1 = (uint)bVar2 + uVar8 * 0x5e;
    uVar8 = iVar1 - 0xc3f;
    if (uVar8 < 0x582) {
      if (0x2b1 < uVar8) {
LAB_00a179d4:
        uVar7 = 2;
        break;
      }
      puVar9 = (ushort *)(&DAT_01303206 + (ulong)uVar8 * 2);
    }
    else {
      if (0x3c < uVar8 >> 7) goto LAB_00a179d4;
      puVar9 = (ushort *)(&DAT_0130376a + (ulong)(iVar1 - 0x11c1) * 2);
    }
    uVar3 = *puVar9;
    uVar7 = 2;
    if (uVar3 != 0xfffd) {
LAB_00a17a50:
      *param_2 = (uint)uVar3;
      *(undefined4 *)(param_1 + 0x28) = uVar7;
      return iVar5 + 2;
    }
    break;
  case 3:
    if (param_4 < (ulong)(long)(iVar5 + 2)) {
      uVar7 = 3;
      goto LAB_00a17878;
    }
    if ((-1 < (char)bVar2) && (bVar4 = param_3[1], -1 < (char)bVar4)) {
      if ((0x3d < uVar8 - 0x30) &&
         ((uVar7 = 3, 0x2b < uVar8 || ((1L << ((ulong)bVar2 & 0x3f) & 0xec400000000U) == 0))))
      break;
      if (bVar4 - 0x21 < 0x5e) {
        iVar1 = (uint)bVar4 + uVar8 * 0x5e;
        uVar8 = iVar1 - 0xc3f;
        if (uVar8 < 0x1d6) {
          if (uVar8 < 0xaf) {
            uVar8 = iVar1 - 0xc9d;
            puVar10 = &DAT_0130b5c8;
            goto LAB_00a17a38;
          }
        }
        else if (uVar8 < 0x2f0) {
          if (uVar8 < 0x292) {
            uVar8 = iVar1 - 0xe15;
            puVar10 = &DAT_0130b66a;
            goto LAB_00a17a38;
          }
        }
        else if (uVar8 < 0x582) {
          if (uVar8 < 0x403) {
            uVar8 = iVar1 - 0xf2f;
            puVar10 = &DAT_0130b7e2;
LAB_00a17a38:
            uVar3 = *(ushort *)(puVar10 + (ulong)uVar8 * 2);
            uVar7 = 3;
            if (uVar3 == 0xfffd) break;
            goto LAB_00a17a50;
          }
        }
        else if (uVar8 < 0x1c2b) {
          uVar8 = iVar1 - 0x11c1;
          puVar10 = &DAT_0130ba08;
          goto LAB_00a17a38;
        }
      }
    }
    uVar7 = 3;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
LAB_00a17a60:
  *(undefined4 *)(param_1 + 0x28) = uVar7;
  return iVar5 << 1 ^ 0xffffffff;
}

