
void mbedtls_sha512_process(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong local_2c8 [80];
  long local_48;
  
  lVar3 = tpidr_el0;
  lVar5 = 0;
  local_48 = *(long *)(lVar3 + 0x28);
  do {
    uVar9 = (*(ulong *)(param_2 + lVar5) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_2 + lVar5) & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    *(ulong *)((long)local_2c8 + lVar5) = uVar9 >> 0x20 | uVar9 << 0x20;
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x80);
  lVar5 = 0;
  do {
    uVar9 = local_2c8[lVar5 + 0xe];
    lVar1 = lVar5 + 0x10;
    lVar2 = local_2c8[0] + local_2c8[lVar5 + 9];
    local_2c8[0] = local_2c8[lVar5 + 1];
    local_2c8[lVar5 + 0x10] =
         lVar2 + ((uVar9 >> 0x3d | uVar9 << 3) ^ uVar9 >> 6 ^ (uVar9 >> 0x13 | uVar9 << 0x2d)) +
         ((local_2c8[0] >> 8 | local_2c8[0] << 0x38) ^ local_2c8[0] >> 7 ^
         (local_2c8[0] >> 1 | local_2c8[0] << 0x3f));
    lVar5 = lVar5 + 1;
  } while (lVar1 < 0x4f);
  uVar8 = *(ulong *)(param_1 + 0x10);
  uVar11 = *(ulong *)(param_1 + 0x18);
  uVar10 = *(ulong *)(param_1 + 0x20);
  uVar9 = *(ulong *)(param_1 + 0x28);
  uVar12 = *(ulong *)(param_1 + 0x30);
  uVar13 = *(ulong *)(param_1 + 0x38);
  uVar14 = *(ulong *)(param_1 + 0x40);
  uVar4 = *(ulong *)(param_1 + 0x48);
  puVar6 = local_2c8 + 4;
  plVar7 = &DAT_0010b090;
  lVar5 = -8;
  do {
    lVar1 = ((uVar12 >> 0xe | uVar12 << 0x32) ^ (uVar12 >> 0x12 | uVar12 << 0x2e) ^
            (uVar12 >> 0x29 | uVar12 << 0x17)) + uVar4 + plVar7[-4] +
            ((uVar14 ^ uVar13) & uVar12 ^ uVar14) + puVar6[-4];
    uVar9 = lVar1 + uVar9;
    uVar4 = ((uVar8 >> 0x1c | uVar8 << 0x24) ^ (uVar8 >> 0x22 | uVar8 << 0x1e) ^
            (uVar8 >> 0x27 | uVar8 << 0x19)) + (uVar10 & (uVar11 | uVar8) | uVar11 & uVar8) + lVar1;
    lVar1 = plVar7[-3] + uVar14 + puVar6[-3] + (uVar9 & (uVar13 ^ uVar12) ^ uVar13) +
            ((uVar9 >> 0xe | uVar9 << 0x32) ^ (uVar9 >> 0x12 | uVar9 << 0x2e) ^
            (uVar9 >> 0x29 | uVar9 * 0x800000));
    uVar10 = lVar1 + uVar10;
    uVar14 = ((uVar4 >> 0x1c | uVar4 << 0x24) ^ (uVar4 >> 0x22 | uVar4 * 0x40000000) ^
             (uVar4 >> 0x27 | uVar4 * 0x2000000)) + ((uVar4 | uVar8) & uVar11 | uVar4 & uVar8) +
             lVar1;
    lVar1 = plVar7[-2] + uVar13 + puVar6[-2] + (uVar10 & (uVar9 ^ uVar12) ^ uVar12) +
            ((uVar10 >> 0xe | uVar10 << 0x32) ^ (uVar10 >> 0x12 | uVar10 << 0x2e) ^
            (uVar10 >> 0x29 | uVar10 * 0x800000));
    uVar11 = lVar1 + uVar11;
    uVar13 = ((uVar14 >> 0x1c | uVar14 << 0x24) ^ (uVar14 >> 0x22 | uVar14 * 0x40000000) ^
             (uVar14 >> 0x27 | uVar14 * 0x2000000)) + ((uVar14 | uVar4) & uVar8 | uVar14 & uVar4) +
             lVar1;
    lVar1 = plVar7[-1] + uVar12 + puVar6[-1] + (uVar11 & (uVar10 ^ uVar9) ^ uVar9) +
            ((uVar11 >> 0xe | uVar11 << 0x32) ^ (uVar11 >> 0x12 | uVar11 << 0x2e) ^
            (uVar11 >> 0x29 | uVar11 * 0x800000));
    uVar8 = lVar1 + uVar8;
    uVar12 = ((uVar13 >> 0x1c | uVar13 << 0x24) ^ (uVar13 >> 0x22 | uVar13 * 0x40000000) ^
             (uVar13 >> 0x27 | uVar13 * 0x2000000)) + ((uVar13 | uVar14) & uVar4 | uVar13 & uVar14)
             + lVar1;
    lVar1 = *plVar7 + uVar9 + *puVar6 + (uVar8 & (uVar11 ^ uVar10) ^ uVar10) +
            ((uVar8 >> 0xe | uVar8 << 0x32) ^ (uVar8 >> 0x12 | uVar8 << 0x2e) ^
            (uVar8 >> 0x29 | uVar8 * 0x800000));
    uVar4 = lVar1 + uVar4;
    uVar9 = ((uVar12 >> 0x1c | uVar12 << 0x24) ^ (uVar12 >> 0x22 | uVar12 * 0x40000000) ^
            (uVar12 >> 0x27 | uVar12 * 0x2000000)) + ((uVar12 | uVar13) & uVar14 | uVar12 & uVar13)
            + lVar1;
    lVar1 = puVar6[1] + plVar7[1] + uVar10 + (uVar4 & (uVar8 ^ uVar11) ^ uVar11) +
            ((uVar4 >> 0xe | uVar4 << 0x32) ^ (uVar4 >> 0x12 | uVar4 << 0x2e) ^
            (uVar4 >> 0x29 | uVar4 * 0x800000));
    uVar14 = lVar1 + uVar14;
    uVar10 = ((uVar9 >> 0x1c | uVar9 << 0x24) ^ (uVar9 >> 0x22 | uVar9 * 0x40000000) ^
             (uVar9 >> 0x27 | uVar9 * 0x2000000)) + ((uVar9 | uVar12) & uVar13 | uVar9 & uVar12) +
             lVar1;
    lVar1 = puVar6[2] + plVar7[2] + uVar11 + (uVar14 & (uVar4 ^ uVar8) ^ uVar8) +
            ((uVar14 >> 0xe | uVar14 << 0x32) ^ (uVar14 >> 0x12 | uVar14 << 0x2e) ^
            (uVar14 >> 0x29 | uVar14 * 0x800000));
    uVar13 = lVar1 + uVar13;
    uVar11 = ((uVar10 >> 0x1c | uVar10 << 0x24) ^ (uVar10 >> 0x22 | uVar10 * 0x40000000) ^
             (uVar10 >> 0x27 | uVar10 * 0x2000000)) + ((uVar10 | uVar9) & uVar12 | uVar10 & uVar9) +
             lVar1;
    lVar5 = lVar5 + 8;
    lVar1 = puVar6[3] + plVar7[3] + uVar8 + (uVar13 & (uVar14 ^ uVar4) ^ uVar4) +
            ((uVar13 >> 0xe | uVar13 << 0x32) ^ (uVar13 >> 0x12 | uVar13 << 0x2e) ^
            (uVar13 >> 0x29 | uVar13 * 0x800000));
    puVar6 = puVar6 + 8;
    uVar12 = lVar1 + uVar12;
    uVar8 = ((uVar11 >> 0x1c | uVar11 << 0x24) ^ (uVar11 >> 0x22 | uVar11 * 0x40000000) ^
            (uVar11 >> 0x27 | uVar11 * 0x2000000)) + ((uVar11 | uVar10) & uVar9 | uVar11 & uVar10) +
            lVar1;
    plVar7 = plVar7 + 8;
  } while (lVar5 < 0x48);
  *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + uVar8;
  *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + uVar11;
  *(ulong *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + uVar10;
  *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + uVar9;
  *(ulong *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + uVar12;
  *(ulong *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + uVar13;
  *(ulong *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + uVar14;
  *(ulong *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + uVar4;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
  thunk_EXT_FUN_00002bb0();
  return;
}

