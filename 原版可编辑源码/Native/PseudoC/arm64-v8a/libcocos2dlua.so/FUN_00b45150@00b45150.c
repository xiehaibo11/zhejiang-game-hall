
ulong FUN_00b45150(undefined8 param_1,undefined8 *param_2,void *param_3,undefined8 *param_4,
                  long param_5,code *param_6)

{
  ulong uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong __n;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  undefined8 local_70;
  undefined8 local_68;
  
  uVar8 = 0;
  if ((param_5 - 0x18U < 0x7ffffff1) && (__n = param_5 - 8, (__n & 7) == 0)) {
    uVar4 = *param_4;
    local_70 = uVar4;
    memmove(param_3,param_4 + 1,__n);
    if (__n != 0) {
      puVar5 = (undefined8 *)((long)param_3 + __n);
      uVar6 = (__n >> 3) * 6;
      uVar8 = 0;
      iVar7 = (int)uVar6 + -2;
      while( true ) {
        uVar3 = local_70;
        puVar5 = puVar5 + -1;
        bVar2 = (byte)((ulong)uVar4 >> 0x38) ^ (byte)uVar6;
        local_70 = CONCAT17(bVar2,(undefined7)local_70);
        if (0xff < uVar6) {
          local_70._6_1_ = SUB81(uVar3,6);
          local_70._5_1_ = SUB81(uVar3,5);
          local_70._4_1_ = SUB81(uVar3,4);
          local_70._0_4_ = (undefined4)uVar3;
          local_70._0_5_ = CONCAT14(local_70._4_1_ ^ (byte)(uVar6 >> 0x18),(undefined4)local_70);
          local_70 = CONCAT35(CONCAT21(CONCAT11(bVar2,local_70._6_1_ ^ (byte)(uVar6 >> 8)),
                                       local_70._5_1_ ^ (byte)(uVar6 >> 0x10)),(undefined5)local_70)
          ;
        }
        local_68 = *puVar5;
        (*param_6)(&local_70,&local_70,param_1);
        uVar8 = uVar8 + 8;
        uVar6 = uVar6 - 1;
        *puVar5 = local_68;
        if (__n <= uVar8) break;
        iVar7 = iVar7 + -1;
        uVar4 = local_70;
      }
      uVar8 = 0;
      iVar10 = -1;
      puVar5 = (undefined8 *)((long)param_3 + param_5 + -0x10);
      do {
        uVar4 = local_70;
        bVar2 = local_70._7_1_ ^ (byte)uVar6;
        local_70 = CONCAT17(bVar2,(undefined7)local_70);
        if (0xff < uVar6) {
          local_70._6_1_ = SUB81(uVar4,6);
          local_70._5_1_ = SUB81(uVar4,5);
          local_70._4_1_ = SUB81(uVar4,4);
          local_70._0_4_ = (undefined4)uVar4;
          local_70._0_5_ = CONCAT14(local_70._4_1_ ^ (byte)(uVar6 >> 0x18),(undefined4)local_70);
          local_70 = CONCAT35(CONCAT21(CONCAT11(bVar2,local_70._6_1_ ^ (byte)(uVar6 >> 8)),
                                       local_70._5_1_ ^ (byte)(uVar6 >> 0x10)),(undefined5)local_70)
          ;
        }
        local_68 = *puVar5;
        (*param_6)(&local_70,&local_70,param_1);
        uVar8 = uVar8 + 8;
        uVar6 = uVar6 - 1;
        *puVar5 = local_68;
        iVar10 = iVar10 + 1;
        puVar5 = puVar5 + -1;
      } while (uVar8 < __n);
      lVar9 = 0;
      uVar8 = 0;
      iVar7 = iVar7 - iVar10;
      do {
        uVar4 = local_70;
        uVar1 = uVar6 + lVar9;
        bVar2 = local_70._7_1_ ^ (byte)iVar7;
        local_70 = CONCAT17(bVar2,(undefined7)local_70);
        if (0xff < uVar1) {
          local_70._6_1_ = SUB81(uVar4,6);
          local_70._5_1_ = SUB81(uVar4,5);
          local_70._4_1_ = SUB81(uVar4,4);
          local_70._0_4_ = (undefined4)uVar4;
          local_70._0_5_ = CONCAT14(local_70._4_1_ ^ (byte)(uVar1 >> 0x18),(undefined4)local_70);
          local_70 = CONCAT35(CONCAT21(CONCAT11(bVar2,local_70._6_1_ ^ (byte)(uVar1 >> 8)),
                                       local_70._5_1_ ^ (byte)(uVar1 >> 0x10)),(undefined5)local_70)
          ;
        }
        lVar11 = lVar9 * 8;
        local_68 = *(undefined8 *)((long)param_3 + lVar11 + param_5 + -0x10);
        (*param_6)(&local_70,&local_70,param_1);
        uVar8 = uVar8 + 8;
        lVar9 = lVar9 + -1;
        iVar7 = iVar7 + -1;
        *(undefined8 *)((long)param_3 + lVar11 + param_5 + -0x10) = local_68;
      } while (uVar8 < __n);
      uVar8 = 0;
      uVar6 = uVar6 + lVar9;
      puVar5 = (undefined8 *)((long)param_3 + param_5 + -0x10);
      do {
        uVar4 = local_70;
        bVar2 = local_70._7_1_ ^ (byte)uVar6;
        local_70 = CONCAT17(bVar2,(undefined7)local_70);
        if (0xff < uVar6) {
          local_70._6_1_ = SUB81(uVar4,6);
          local_70._5_1_ = SUB81(uVar4,5);
          local_70._4_1_ = SUB81(uVar4,4);
          local_70._0_4_ = (undefined4)uVar4;
          local_70._0_5_ = CONCAT14(local_70._4_1_ ^ (byte)(uVar6 >> 0x18),(undefined4)local_70);
          local_70 = CONCAT35(CONCAT21(CONCAT11(bVar2,local_70._6_1_ ^ (byte)(uVar6 >> 8)),
                                       local_70._5_1_ ^ (byte)(uVar6 >> 0x10)),(undefined5)local_70)
          ;
        }
        local_68 = *puVar5;
        (*param_6)(&local_70,&local_70,param_1);
        uVar8 = uVar8 + 8;
        uVar6 = uVar6 - 1;
        *puVar5 = local_68;
        puVar5 = puVar5 + -1;
      } while (uVar8 < __n);
      uVar8 = 0;
      puVar5 = (undefined8 *)((long)param_3 + param_5 + -0x10);
      do {
        uVar4 = local_70;
        bVar2 = local_70._7_1_ ^ (byte)uVar6;
        local_70 = CONCAT17(bVar2,(undefined7)local_70);
        if (0xff < uVar6) {
          local_70._6_1_ = SUB81(uVar4,6);
          local_70._5_1_ = SUB81(uVar4,5);
          local_70._4_1_ = SUB81(uVar4,4);
          local_70._0_4_ = (undefined4)uVar4;
          local_70._0_5_ = CONCAT14(local_70._4_1_ ^ (byte)(uVar6 >> 0x18),(undefined4)local_70);
          local_70 = CONCAT35(CONCAT21(CONCAT11(bVar2,local_70._6_1_ ^ (byte)(uVar6 >> 8)),
                                       local_70._5_1_ ^ (byte)(uVar6 >> 0x10)),(undefined5)local_70)
          ;
        }
        local_68 = *puVar5;
        (*param_6)(&local_70,&local_70,param_1);
        uVar8 = uVar8 + 8;
        uVar6 = uVar6 - 1;
        *puVar5 = local_68;
        puVar5 = puVar5 + -1;
      } while (uVar8 < __n);
      uVar8 = 0;
      puVar5 = (undefined8 *)((long)param_3 + param_5 + -0x10);
      do {
        uVar4 = local_70;
        bVar2 = local_70._7_1_ ^ (byte)uVar6;
        local_70 = CONCAT17(bVar2,(undefined7)local_70);
        if (0xff < uVar6) {
          local_70._6_1_ = SUB81(uVar4,6);
          local_70._5_1_ = SUB81(uVar4,5);
          local_70._4_1_ = SUB81(uVar4,4);
          local_70._0_4_ = (undefined4)uVar4;
          local_70._0_5_ = CONCAT14(local_70._4_1_ ^ (byte)(uVar6 >> 0x18),(undefined4)local_70);
          local_70 = CONCAT35(CONCAT21(CONCAT11(bVar2,local_70._6_1_ ^ (byte)(uVar6 >> 8)),
                                       local_70._5_1_ ^ (byte)(uVar6 >> 0x10)),(undefined5)local_70)
          ;
        }
        local_68 = *puVar5;
        (*param_6)(&local_70,&local_70,param_1);
        uVar8 = uVar8 + 8;
        uVar6 = uVar6 - 1;
        *puVar5 = local_68;
        uVar4 = local_70;
        puVar5 = puVar5 + -1;
      } while (uVar8 < __n);
    }
    *param_2 = uVar4;
    uVar8 = __n;
  }
  return uVar8;
}

