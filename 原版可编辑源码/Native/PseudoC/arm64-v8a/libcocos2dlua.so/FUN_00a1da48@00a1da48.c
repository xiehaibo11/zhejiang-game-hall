
undefined8 FUN_00a1da48(long param_1,uint *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  
  uVar5 = *(uint *)(param_1 + 0x28);
  if (uVar5 != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *param_2 = uVar5;
    return 0;
  }
  uVar5 = (uint)*param_3;
  if (-1 < (char)*param_3) {
    *param_2 = uVar5;
    return 1;
  }
  if ((uVar5 < 0xa1) || (uVar5 == 0xff)) goto LAB_00a1dba0;
  if (param_4 < 2) {
LAB_00a1dc50:
    uVar2 = 0xfffffffe;
  }
  else {
    bVar1 = param_3[1];
    uVar4 = bVar1 - 0x40;
    uVar3 = (uint)bVar1;
    if ((uVar4 < 0x3f) || ((0xa0 < bVar1 && (uVar3 != 0xff)))) {
      if (((uVar5 == 199) ||
          ((uVar5 == 0xc6 && 0xa0 < uVar3 ||
           ((0x26 < (uVar5 + 0x5f & 0xff) && (0x30 < (uVar5 + 0x37 & 0xff))))))) ||
         ((bVar1 < 0xa1 && (0x3e < (uVar4 & 0xff))))) goto LAB_00a1dba0;
      iVar6 = 0x62;
      if (bVar1 < 0xa1) {
        iVar6 = 0x40;
      }
      iVar6 = (uVar3 - iVar6) + uVar5 * 0x9d;
      uVar4 = iVar6 - 0x62bd;
      if (0x310 < uVar4 >> 3) {
        if (uVar4 >> 2 < 0xd9b) {
          uVar4 = iVar6 - 0x7b45;
          puVar7 = &DAT_0138771e;
          goto LAB_00a1db8c;
        }
        goto LAB_00a1dba0;
      }
      if (0x17e8 < uVar4) goto LAB_00a1dba0;
      puVar7 = &DAT_0138474c;
LAB_00a1db8c:
      uVar3 = (uint)*(ushort *)(puVar7 + (ulong)uVar4 * 2);
      if (*(ushort *)(puVar7 + (ulong)uVar4 * 2) == 0xfffd) goto LAB_00a1dba0;
LAB_00a1dcb8:
      *param_2 = uVar3;
    }
    else {
LAB_00a1dba0:
      uVar2 = FUN_00a20a78(param_2,param_3,param_4);
      if ((int)uVar2 != -1) {
        return uVar2;
      }
      if (*param_3 == 0x8c) {
        if (param_4 < 2) goto LAB_00a1dc50;
        bVar1 = param_3[1];
        uVar4 = (uint)bVar1;
        if ((bVar1 - 0x40 < 0x3f) || ((0xa0 < bVar1 && (uVar4 != 0xff)))) {
          iVar6 = 0x62;
          if (uVar4 < 0xa1) {
            iVar6 = 0x40;
          }
          if (((uVar4 - iVar6) + 0x75c < 0x7d7) &&
             (uVar3 = *(ushort *)(&DAT_0139de42 + (ulong)(uVar4 - iVar6) * 2) & 0xff |
                      *(uint *)(&DAT_0139df38 +
                               ((ulong)(*(ushort *)(&DAT_0139de42 + (ulong)(uVar4 - iVar6) * 2) >> 6
                                       ) & 0x3fc)), uVar3 != 0xfffd)) goto LAB_00a1dcb8;
        }
      }
      if (uVar5 != 0x88) {
        return 0xffffffff;
      }
      if (param_4 < 2) goto LAB_00a1dc50;
      bVar1 = param_3[1];
      uVar5 = (uint)bVar1;
      if (bVar1 < 0xa3) {
        if ((uVar5 != 0x62) && (uVar5 != 100)) {
          return 0xffffffff;
        }
      }
      else if ((uVar5 != 0xa5) && (uVar5 != 0xa3)) {
        return 0xffffffff;
      }
      *param_2 = (bVar1 >> 1 & 0x7c) + 0x9a;
      *(uint *)(param_1 + 0x28) = (uVar5 & 6) * 4 + 0x2fc;
    }
    uVar2 = 2;
  }
  return uVar2;
}

