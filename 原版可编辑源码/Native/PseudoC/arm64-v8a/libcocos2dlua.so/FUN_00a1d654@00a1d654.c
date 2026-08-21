
undefined8 FUN_00a1d654(long param_1,uint *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  
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
  if ((uVar5 < 0xa1) || (uVar5 == 0xff)) goto LAB_00a1d7ac;
  if (param_4 < 2) {
LAB_00a1d7d4:
    uVar3 = 0xfffffffe;
  }
  else {
    bVar1 = param_3[1];
    uVar2 = bVar1 - 0x40;
    uVar4 = (uint)bVar1;
    if ((uVar2 < 0x3f) || ((0xa0 < bVar1 && (uVar4 != 0xff)))) {
      if (((uVar5 == 199) ||
          ((uVar5 == 0xc6 && 0xa0 < uVar4 ||
           ((0x26 < (uVar5 + 0x5f & 0xff) && (0x30 < (uVar5 + 0x37 & 0xff))))))) ||
         ((bVar1 < 0xa1 && (0x3e < (uVar2 & 0xff))))) goto LAB_00a1d7ac;
      iVar7 = 0x62;
      if (bVar1 < 0xa1) {
        iVar7 = 0x40;
      }
      iVar7 = (uVar4 - iVar7) + uVar5 * 0x9d;
      uVar2 = iVar7 - 0x62bd;
      if (0x310 < uVar2 >> 3) {
        if (uVar2 >> 2 < 0xd9b) {
          uVar2 = iVar7 - 0x7b45;
          puVar6 = &DAT_0138771e;
          goto LAB_00a1d798;
        }
        goto LAB_00a1d7ac;
      }
      if (0x17e8 < uVar2) goto LAB_00a1d7ac;
      puVar6 = &DAT_0138474c;
LAB_00a1d798:
      if (*(ushort *)(puVar6 + (ulong)uVar2 * 2) == 0xfffd) goto LAB_00a1d7ac;
      *param_2 = (uint)*(ushort *)(puVar6 + (ulong)uVar2 * 2);
    }
    else {
LAB_00a1d7ac:
      uVar3 = FUN_00a20a78(param_2,param_3,param_4);
      if ((int)uVar3 != -1) {
        return uVar3;
      }
      if (uVar5 != 0x88) {
        return 0xffffffff;
      }
      if (param_4 < 2) goto LAB_00a1d7d4;
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
    uVar3 = 2;
  }
  return uVar3;
}

