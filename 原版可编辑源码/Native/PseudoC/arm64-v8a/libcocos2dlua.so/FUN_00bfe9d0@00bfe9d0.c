
void FUN_00bfe9d0(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  bVar4 = *(byte *)(param_1 + 0xc1);
  uVar2 = (int)(char)bVar4 & 2;
  uVar9 = 0x44;
  if (-1 < (char)bVar4) {
    uVar9 = 0;
  }
  uVar10 = 4;
  if ((bVar4 & 0xc) == 0) {
    uVar10 = 0;
  }
  uVar5 = uVar10 | uVar9 | uVar2 | bVar4 & 1;
  if (*(byte *)(param_1 + 0xc2) == uVar5) {
    return;
  }
  uVar3 = uVar5 ^ *(byte *)(param_1 + 0xc2);
  *(char *)(param_1 + 0xc2) = (char)uVar5;
  *(undefined8 *)(param_1 + 0x9e8) = *(undefined8 *)(param_1 + 0x9f0);
  *(undefined8 *)(param_1 + 0xa00) = *(undefined8 *)(param_1 + 0xa08);
  *(undefined8 *)(param_1 + 0xa18) = *(undefined8 *)(param_1 + 0xa20);
  if ((uVar3 & 100) == 0) {
    if (uVar10 != 0 || (uVar9 & 4) != 0) goto joined_r0x00bfea9c;
    *(undefined8 *)(param_1 + 0x518) = *(undefined8 *)(param_1 + 0x9f0);
    *(undefined8 *)(param_1 + 0x530) = *(undefined8 *)(param_1 + 0xa08);
    *(undefined8 *)(param_1 + 0x548) = *(undefined8 *)(param_1 + 0xa20);
    if (uVar2 == 0) {
      *(undefined8 *)(param_1 + 0x4e8) = *(undefined8 *)(param_1 + 0x9b8);
      *(undefined8 *)(param_1 + 0x4f0) = *(undefined8 *)(param_1 + 0x9c0);
      *(undefined8 *)(param_1 + 0x4f8) = *(undefined8 *)(param_1 + 0x9c8);
      *(undefined8 *)(param_1 + 0x500) = *(undefined8 *)(param_1 + 0x9d0);
      goto joined_r0x00bfea9c;
    }
  }
  else {
    if (uVar10 != 0 || (uVar9 & 4) != 0) {
      if (uVar9 >> 6 == 0) {
        puVar7 = &LAB_00c18aec;
      }
      else {
        puVar7 = &DAT_00c18b90;
      }
      puVar6 = (undefined8 *)(param_1 + 0x2a0);
      do {
        puVar8 = puVar6 + 2;
        puVar6[1] = puVar7;
        *puVar6 = puVar7;
        puVar6 = puVar8;
      } while (puVar8 != (undefined8 *)(param_1 + 0x560));
      *(undefined1 **)(param_1 + 0x560) = puVar7;
      goto joined_r0x00bfea9c;
    }
    memcpy((undefined8 *)(param_1 + 0x2a0),(void *)(param_1 + 0x770),0x2c8);
    if (uVar2 == 0) goto joined_r0x00bfea9c;
  }
  *(undefined1 **)(param_1 + 0x4e8) = &LAB_00c18adc;
  *(undefined1 **)(param_1 + 0x4f0) = &LAB_00c18adc;
  *(undefined1 **)(param_1 + 0x4f8) = &LAB_00c18adc;
  *(undefined1 **)(param_1 + 0x500) = &LAB_00c18adc;
joined_r0x00bfea9c:
  if ((uVar3 & 1) == 0) {
    if ((bVar4 & 1) != 0) {
      return;
    }
  }
  else {
    if ((bVar4 & 1) != 0) {
      puVar6 = (undefined8 *)(param_1 + 0x568);
      do {
        puVar8 = puVar6 + 2;
        puVar6[1] = &LAB_00c18b50;
        *puVar6 = &LAB_00c18b50;
        puVar6 = puVar8;
      } while (puVar8 != (undefined8 *)(param_1 + 0x768));
      *(undefined1 **)(param_1 + 0x768) = &LAB_00c18b50;
      return;
    }
    puVar6 = (undefined8 *)(param_1 + 0x568);
    puVar8 = (undefined8 *)&DAT_01411262;
    do {
      uVar16 = puVar8[1];
      uVar15 = *puVar8;
      puVar1 = puVar6 + 8;
      uVar11 = (ushort)((ulong)uVar15 >> 0x10);
      uVar13 = (ushort)((ulong)uVar15 >> 0x30);
      uVar12 = (ushort)((ulong)uVar16 >> 0x10);
      uVar14 = (ushort)((ulong)uVar16 >> 0x30);
      puVar6[1] = FUN_00c154e0 + uVar11;
      *puVar6 = FUN_00c154e0 + ((ulong)(CONCAT24(uVar11,(int)uVar15) & 0xffff0000ffff) & 0xffffffff)
      ;
      puVar6[3] = FUN_00c154e0 + uVar13;
      puVar6[2] = FUN_00c154e0 +
                  ((ulong)CONCAT24(uVar13,(uint)(ushort)((ulong)uVar15 >> 0x20)) & 0xffffffff);
      puVar6[5] = FUN_00c154e0 + uVar12;
      puVar6[4] = FUN_00c154e0 +
                  ((ulong)(CONCAT24(uVar12,(int)uVar16) & 0xffff0000ffff) & 0xffffffff);
      puVar6[7] = FUN_00c154e0 + uVar14;
      puVar6[6] = FUN_00c154e0 +
                  ((ulong)CONCAT24(uVar14,(uint)(ushort)((ulong)uVar16 >> 0x20)) & 0xffffffff);
      puVar6 = puVar1;
      puVar8 = puVar8 + 2;
    } while (puVar1 != (undefined8 *)(param_1 + 0x768));
    *(undefined **)(param_1 + 0x768) = &DAT_00c1872c;
  }
  *(undefined1 **)(param_1 + 0x568) = &LAB_00c1721c;
  *(undefined1 **)(param_1 + 0x580) = &LAB_00c1725c;
  return;
}

