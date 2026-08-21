
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mbedtls_aes_setkey_enc(int *param_1,undefined8 *param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  uint *puVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined8 uVar20;
  int aiStack_868 [256];
  uint local_468 [256];
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  if ((DAT_0011d1d0 & 1) == 0) {
    lVar11 = 0;
    uVar15 = 1;
    do {
      uVar14 = (uint)uVar15;
      local_468[lVar11] = uVar14;
      aiStack_868[uVar15] = (int)lVar11;
      lVar11 = lVar11 + 1;
      uVar17 = 0x1b;
      if ((uVar15 & 0x80) == 0) {
        uVar17 = 0;
      }
      uVar15 = (ulong)((uVar14 & 0x7f) << 1 ^ uVar14 ^ uVar17);
    } while (lVar11 != 0x100);
    lVar11 = 1;
    DAT_0011d200 = 0x360000001b;
    DAT_0011d208 = 99;
    DAT_0011f36b = 0;
    uRam000000000011d1e8 = 0x800000004;
    _DAT_0011d1e0 = 0x200000001;
    uRam000000000011d1f8 = 0x8000000040;
    _DAT_0011d1f0 = 0x2000000010;
    do {
      uVar14 = local_468[0xff - (long)aiStack_868[lVar11]];
      uVar19 = uVar14 << 1 | uVar14 >> 7;
      uVar5 = uVar19 >> 7 & 1;
      uVar17 = (uVar19 & 0x7f) << 1;
      uVar6 = (uVar19 & 0xff) >> 6 & 1;
      uVar17 = uVar14 ^ uVar19 & 0xff ^ (uVar5 | uVar17) ^ (uVar6 | (uVar5 | uVar17 & 0x7f) << 1) ^
               ((uVar19 & 0x7f) >> 5 & 1 | (uVar6 | (uVar5 | uVar17 & 0x3f) << 1) << 1) ^ 99;
      (&DAT_0011d208)[lVar11] = (char)uVar17;
      (&DAT_0011f308)[(int)uVar17] = (char)lVar11;
      lVar11 = lVar11 + 1;
    } while (lVar11 != 0x100);
    lVar11 = 0;
    do {
      bVar3 = (&DAT_0011d208)[lVar11];
      uVar17 = (uint)bVar3;
      uVar14 = 0x1b;
      if ((bVar3 & 0x80) == 0) {
        uVar14 = 0;
      }
      uVar14 = uVar14 ^ (bVar3 & 0x7f) << 1;
      uVar5 = uVar17 << 8 | uVar17 << 0x10 | uVar14;
      uVar14 = uVar14 ^ uVar17;
      bVar4 = (&DAT_0011f308)[lVar11];
      uVar19 = uVar14 | uVar5 << 8;
      uVar17 = uVar17 | uVar19 << 8;
      (&DAT_0011e308)[lVar11] = uVar5 | uVar14 << 0x18;
      (&DAT_0011e708)[lVar11] = uVar19;
      (&DAT_0011eb08)[lVar11] = uVar17;
      (&DAT_0011ef08)[lVar11] = (uint)bVar3 | uVar17 << 8;
      if ((ulong)bVar4 == 0) {
        uVar17 = 0;
        uVar19 = 0;
        uVar14 = 0;
      }
      else {
        iVar9 = aiStack_868[bVar4];
        uVar19 = local_468[(iVar9 + aiStack_868[0xb]) % 0xff];
        uVar17 = local_468[(iVar9 + aiStack_868[0xe]) % 0xff] ^
                 local_468[(iVar9 + aiStack_868[9]) % 0xff] << 8;
        uVar14 = uVar17 ^ local_468[(iVar9 + aiStack_868[0xd]) % 0xff] << 0x10;
      }
      uVar19 = uVar14 ^ uVar19 << 0x18;
      (&DAT_0011d308)[lVar11] = uVar19;
      uVar19 = (uint)(((ulong)uVar14 << 0x20) >> 0x18) | uVar19 >> 0x18;
      lVar16 = lVar11 + 1;
      uVar14 = uVar14 >> 0x10 & 0xff | uVar19 << 8;
      (&DAT_0011d708)[lVar11] = uVar19;
      (&DAT_0011db08)[lVar11] = uVar14;
      (&DAT_0011df08)[lVar11] = uVar17 >> 8 & 0xff | uVar14 << 8;
      lVar11 = lVar16;
    } while (lVar16 != 0x100);
    DAT_0011d1d0 = 1;
  }
  if (param_3 == 0x80) {
    iVar9 = 10;
  }
  else if (param_3 == 0x100) {
    iVar9 = 0xe;
  }
  else {
    if (param_3 != 0xc0) {
      uVar8 = 0xffffffe0;
      goto LAB_00106ea0;
    }
    iVar9 = 0xc;
  }
  uVar17 = param_3 >> 5;
  *param_1 = iVar9;
  *(int **)(param_1 + 2) = param_1 + 4;
  if (uVar17 != 0) {
    if (param_3 < 0x80) {
LAB_00106c58:
      lVar11 = 0;
LAB_00106c5c:
      lVar10 = (ulong)uVar17 - lVar11;
      lVar16 = (long)param_2 + lVar11 * 4 + 3;
      piVar12 = param_1 + lVar11 + 4;
      do {
        piVar1 = (int *)(lVar16 + -3);
        lVar10 = lVar10 + -1;
        lVar16 = lVar16 + 4;
        *piVar12 = *piVar1;
        piVar12 = piVar12 + 1;
      } while (lVar10 != 0);
    }
    else {
      uVar14 = param_3 >> 5 & 3;
      lVar11 = (ulong)uVar17 - (ulong)uVar14;
      if (lVar11 == 0) goto LAB_00106c5c;
      piVar12 = param_1 + 4;
      lVar16 = lVar11;
      puVar18 = param_2;
      if ((piVar12 < (int *)((long)param_2 + (ulong)(uVar17 << 2))) &&
         (param_2 < (undefined8 *)((long)param_1 + (ulong)(uVar17 << 2) + 0x10))) goto LAB_00106c58;
      do {
        uVar20 = puVar18[1];
        uVar8 = *puVar18;
        lVar16 = lVar16 + -4;
        uVar15 = CONCAT62((uint6)(byte)((ulong)uVar20 >> 0x20) << 0x10,(short)uVar20) &
                 0xffffffff00ff;
        *(ulong *)(piVar12 + 2) =
             CONCAT17((char)((ulong)uVar20 >> 0x38),
                      CONCAT16((char)((ulong)uVar20 >> 0x30),
                               CONCAT15((char)((ulong)uVar20 >> 0x28),
                                        CONCAT14((char)(uVar15 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar20 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar20 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar20 >>
                                                                                  8),(char)uVar15)))
                                                ))));
        *(undefined8 *)piVar12 = uVar8;
        piVar12 = piVar12 + 4;
        puVar18 = puVar18 + 2;
      } while (lVar16 != 0);
      if (uVar14 != 0) goto LAB_00106c5c;
    }
    iVar9 = *param_1;
  }
  if (iVar9 == 10) {
    uVar17 = param_1[4];
    lVar11 = 0;
    puVar13 = (uint *)(param_1 + 6);
    do {
      puVar2 = (uint *)((long)&DAT_0011d1e0 + lVar11);
      uVar19 = puVar13[1];
      lVar11 = lVar11 + 4;
      uVar17 = *puVar2 ^ uVar17 ^ (uint)(byte)(&DAT_0011d208)[uVar19 >> 8 & 0xff] ^
               (uint)(byte)(&DAT_0011d208)[uVar19 >> 0x10 & 0xff] << 8 ^
               (uint)(byte)(&DAT_0011d208)[uVar19 >> 0x18] << 0x10 ^
               (uint)(byte)(&DAT_0011d208)[(ulong)uVar19 & 0xff] << 0x18;
      puVar13[2] = uVar17;
      puVar13[3] = uVar17 ^ puVar13[-1];
      uVar14 = *puVar13 ^ uVar17 ^ puVar13[-1];
      puVar13[4] = uVar14;
      puVar13[5] = uVar19 ^ uVar14;
      puVar13 = puVar13 + 4;
    } while (lVar11 != 0x28);
  }
  else if (iVar9 == 0xc) {
    uVar17 = param_1[4];
    lVar11 = 0;
    puVar13 = (uint *)(param_1 + 8);
    do {
      puVar2 = (uint *)((long)&DAT_0011d1e0 + lVar11);
      uVar5 = puVar13[1];
      lVar11 = lVar11 + 4;
      uVar17 = *puVar2 ^ uVar17 ^ (uint)(byte)(&DAT_0011d208)[uVar5 >> 8 & 0xff] ^
               (uint)(byte)(&DAT_0011d208)[uVar5 >> 0x10 & 0xff] << 8 ^
               (uint)(byte)(&DAT_0011d208)[uVar5 >> 0x18] << 0x10 ^
               (uint)(byte)(&DAT_0011d208)[(ulong)uVar5 & 0xff] << 0x18;
      puVar13[2] = uVar17;
      puVar13[3] = uVar17 ^ puVar13[-3];
      uVar14 = puVar13[-2] ^ uVar17 ^ puVar13[-3];
      uVar19 = puVar13[-1] ^ uVar14;
      puVar13[4] = uVar14;
      puVar13[5] = uVar19;
      uVar19 = *puVar13 ^ uVar19;
      puVar13[6] = uVar19;
      puVar13[7] = uVar5 ^ uVar19;
      puVar13 = puVar13 + 6;
    } while (lVar11 != 0x20);
  }
  else if (iVar9 == 0xe) {
    uVar17 = param_1[4];
    lVar11 = 0;
    puVar13 = (uint *)(param_1 + 10);
    do {
      puVar2 = (uint *)((long)&DAT_0011d1e0 + lVar11);
      uVar5 = puVar13[1];
      lVar11 = lVar11 + 4;
      uVar17 = *puVar2 ^ uVar17 ^ (uint)(byte)(&DAT_0011d208)[uVar5 >> 8 & 0xff] ^
               (uint)(byte)(&DAT_0011d208)[uVar5 >> 0x10 & 0xff] << 8 ^
               (uint)(byte)(&DAT_0011d208)[uVar5 >> 0x18] << 0x10 ^
               (uint)(byte)(&DAT_0011d208)[(ulong)uVar5 & 0xff] << 0x18;
      puVar13[2] = uVar17;
      puVar13[3] = uVar17 ^ puVar13[-5];
      uVar14 = puVar13[-4] ^ uVar17 ^ puVar13[-5];
      uVar19 = puVar13[-3] ^ uVar14;
      puVar13[4] = uVar14;
      puVar13[5] = uVar19;
      uVar14 = puVar13[-2] ^ (uint)(byte)(&DAT_0011d208)[uVar19 & 0xff] ^
               (uint)(byte)(&DAT_0011d208)[uVar19 >> 8 & 0xff] << 8 ^
               (uint)(byte)(&DAT_0011d208)[uVar19 >> 0x10 & 0xff] << 0x10 ^
               (uint)(byte)(&DAT_0011d208)[uVar19 >> 0x18] << 0x18;
      uVar19 = uVar14 ^ puVar13[-1];
      puVar13[6] = uVar14;
      puVar13[7] = uVar19;
      uVar19 = *puVar13 ^ uVar19;
      puVar13[8] = uVar19;
      puVar13[9] = uVar5 ^ uVar19;
      puVar13 = puVar13 + 8;
    } while (lVar11 != 0x1c);
  }
  uVar8 = 0;
LAB_00106ea0:
  if (*(long *)(lVar7 + 0x28) != local_68) {
    thunk_EXT_FUN_00002bb0(uVar8);
    return;
  }
  return;
}

