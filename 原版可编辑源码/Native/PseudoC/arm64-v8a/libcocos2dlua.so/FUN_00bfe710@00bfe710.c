
void FUN_00bfe710(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar3 = 0;
  do {
    uVar6 = (&DAT_014111b0)[lVar3];
    lVar1 = lVar3 * 8;
    *(code **)(param_1 + 0x300 + lVar3 * 8) = FUN_00c154e0 + uVar6;
    lVar3 = lVar3 + 1;
    *(code **)(param_1 + 0x300 + lVar1 + 0x4d0) = FUN_00c154e0 + uVar6;
  } while (lVar3 != 0x59);
  puVar4 = (undefined8 *)&DAT_01411262;
  puVar5 = (undefined8 *)(param_1 + 0x5c8);
  do {
    uVar11 = puVar4[1];
    uVar10 = *puVar4;
    puVar2 = puVar5 + 8;
    uVar6 = (ushort)((ulong)uVar10 >> 0x10);
    uVar8 = (ushort)((ulong)uVar10 >> 0x30);
    uVar7 = (ushort)((ulong)uVar11 >> 0x10);
    uVar9 = (ushort)((ulong)uVar11 >> 0x30);
    puVar5[1] = FUN_00c154e0 + uVar6;
    *puVar5 = FUN_00c154e0 + ((ulong)(CONCAT24(uVar6,(int)uVar10) & 0xffff0000ffff) & 0xffffffff);
    puVar5[3] = FUN_00c154e0 + uVar8;
    puVar5[2] = FUN_00c154e0 +
                ((ulong)CONCAT24(uVar8,(uint)(ushort)((ulong)uVar10 >> 0x20)) & 0xffffffff);
    puVar5[5] = FUN_00c154e0 + uVar7;
    puVar5[4] = FUN_00c154e0 + ((ulong)(CONCAT24(uVar7,(int)uVar11) & 0xffff0000ffff) & 0xffffffff);
    puVar5[7] = FUN_00c154e0 + uVar9;
    puVar5[6] = FUN_00c154e0 +
                ((ulong)CONCAT24(uVar9,(uint)(ushort)((ulong)uVar11 >> 0x20)) & 0xffffffff);
    puVar4 = puVar4 + 2;
    puVar5 = puVar2;
  } while (puVar2 != (undefined8 *)(param_1 + 0x7c8));
  *(undefined8 *)(param_1 + 0x5a8) = *(undefined8 *)(param_1 + 0x5b0);
  *(undefined **)(param_1 + 0x7c8) = &DAT_00c1872c;
  *(undefined8 *)(param_1 + 0x590) = *(undefined8 *)(param_1 + 0x598);
  *(undefined8 *)(param_1 + 0x5c8) = *(undefined8 *)(param_1 + 0x5d0);
  *(undefined8 *)(param_1 + 0x5e0) = *(undefined8 *)(param_1 + 0x5e8);
  *(undefined4 *)(param_1 + 0x1b0) = 0x145f;
  *(undefined4 *)(param_1 + 0x1b4) = 0x145f;
  *(undefined8 *)(param_1 + 0x578) = *(undefined8 *)(param_1 + 0x580);
  *(undefined8 *)(param_1 + 0xaa0) = 0x6400000063;
  *(undefined8 *)(param_1 + 0xa98) = 0x6200000061;
  *(undefined8 *)(param_1 + 0xab0) = 0x6800000067;
  *(undefined8 *)(param_1 + 0xaa8) = 0x6600000065;
  *(undefined8 *)(param_1 + 0xac0) = 0x6c0000006b;
  *(undefined8 *)(param_1 + 0xab8) = 0x6a00000069;
  *(undefined8 *)(param_1 + 0xad0) = 0x700000006f;
  *(undefined8 *)(param_1 + 0xac8) = 0x6e0000006d;
  *(undefined8 *)(param_1 + 0xae0) = 0x7400000073;
  *(undefined8 *)(param_1 + 0xad8) = 0x7200000071;
  *(undefined8 *)(param_1 + 0xaf0) = 0x7800000077;
  *(undefined8 *)(param_1 + 0xae8) = 0x7600000075;
  *(undefined8 *)(param_1 + 0xb00) = 0x7c0000007b;
  *(undefined8 *)(param_1 + 0xaf8) = 0x7a00000079;
  *(undefined8 *)(param_1 + 0xb10) = 0x800000007f;
  *(undefined8 *)(param_1 + 0xb08) = 0x7e0000007d;
  *(undefined8 *)(param_1 + 0xb20) = 0x8400000083;
  *(undefined8 *)(param_1 + 0xb18) = 0x8200000081;
  *(undefined8 *)(param_1 + 0xb30) = 0x8800000087;
  *(undefined8 *)(param_1 + 0xb28) = 0x8600000085;
  *(undefined8 *)(param_1 + 0xb40) = 0x8c0000008b;
  *(undefined8 *)(param_1 + 0xb38) = 0x8a00000089;
  *(undefined8 *)(param_1 + 0xb50) = 0x900000008f;
  *(undefined8 *)(param_1 + 0xb48) = 0x8e0000008d;
  *(undefined8 *)(param_1 + 0xb60) = 0x9400000093;
  *(undefined8 *)(param_1 + 0xb58) = 0x9200000091;
  *(undefined8 *)(param_1 + 0xb70) = 0x9800000097;
  *(undefined8 *)(param_1 + 0xb68) = 0x9600000095;
  *(undefined4 *)(param_1 + 0xb78) = 0x99;
  return;
}

