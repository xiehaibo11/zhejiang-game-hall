
ulong FUN_00a1c3c4(long param_1,uint *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  ushort *puVar8;
  
  bVar1 = *param_3;
  iVar7 = *(int *)(param_1 + 0x28);
  if (bVar1 == 0x7e) {
    uVar6 = 0;
    do {
      iVar5 = (int)uVar6;
      if (param_4 < iVar5 + 2) goto LAB_00a1c4d0;
      bVar1 = param_3[uVar6 + 1];
      if (iVar7 == 0) {
        if (bVar1 == 10) goto LAB_00a1c420;
        if (bVar1 != 0x7b) {
          if (bVar1 != 0x7e) {
            iVar7 = 0;
            goto LAB_00a1c52c;
          }
          *param_2 = 0x7e;
          uVar3 = iVar5 + 2;
          goto LAB_00a1c454;
        }
        iVar7 = 1;
      }
      else {
        if (bVar1 != 0x7d) goto LAB_00a1c52c;
LAB_00a1c420:
        iVar7 = 0;
      }
      if (param_4 < iVar5 + 3) {
        uVar6 = (ulong)(iVar5 + 2);
        goto LAB_00a1c4d0;
      }
      bVar1 = param_3[uVar6 + 2];
      uVar6 = uVar6 + 2;
    } while (bVar1 == 0x7e);
    param_3 = param_3 + uVar6;
  }
  else {
    uVar6 = 0;
  }
  uVar2 = (uint)bVar1;
  if (iVar7 == 0) {
    uVar3 = (int)uVar6 + 1;
    *param_2 = uVar2;
LAB_00a1c454:
    *(undefined4 *)(param_1 + 0x28) = 0;
    return (ulong)uVar3;
  }
  uVar4 = (ulong)((int)uVar6 + 2);
  if (param_4 < uVar4) {
LAB_00a1c4d0:
    uVar4 = (ulong)((int)uVar6 * -2 - 2);
    goto LAB_00a1c534;
  }
  if (((uVar2 - 0x21 < 9) || ((uVar2 - 0x30 & 0xff) < 0x48)) && (param_3[1] - 0x21 < 0x5e)) {
    iVar5 = (uint)param_3[1] + uVar2 * 0x5e;
    uVar3 = iVar5 - 0xc3f;
    if (uVar3 < 0x582) {
      if (uVar3 < 0x33f) {
        puVar8 = (ushort *)(&DAT_01312c68 + (ulong)uVar3 * 2);
LAB_00a1c510:
        if (*puVar8 != 0xfffd) {
          *param_2 = (uint)*puVar8;
          goto LAB_00a1c534;
        }
      }
    }
    else if (uVar3 >> 1 < 0xff9) {
      puVar8 = (ushort *)(&DAT_013132e6 + (ulong)(iVar5 - 0x11c1) * 2);
      goto LAB_00a1c510;
    }
  }
LAB_00a1c52c:
  uVar4 = (ulong)((int)uVar6 << 1 ^ 0xffffffff);
LAB_00a1c534:
  *(int *)(param_1 + 0x28) = iVar7;
  return uVar4;
}

