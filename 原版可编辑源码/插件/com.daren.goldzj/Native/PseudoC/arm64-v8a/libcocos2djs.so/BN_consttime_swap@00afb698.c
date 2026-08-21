
void BN_consttime_swap(long param_1,long *param_2,long *param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined8 uVar12;
  byte bVar19;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  undefined8 uVar20;
  byte bVar27;
  byte bVar28;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  undefined8 uVar29;
  byte bVar36;
  byte bVar37;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined8 uVar38;
  byte bVar45;
  
  uVar2 = 0xffffffffffffffff - (param_1 + -1 >> 0x3f);
  uVar1 = (uint)uVar2 & (*(uint *)(param_3 + 1) ^ *(uint *)(param_2 + 1));
  *(uint *)(param_2 + 1) = uVar1 ^ *(uint *)(param_2 + 1);
  *(uint *)(param_3 + 1) = uVar1 ^ *(uint *)(param_3 + 1);
  switch(param_4) {
  case 1:
    puVar4 = (ulong *)*param_2;
    puVar6 = (ulong *)*param_3;
    goto LAB_00afb930;
  case 2:
    puVar4 = (ulong *)*param_2;
    puVar6 = (ulong *)*param_3;
    break;
  case 3:
    puVar4 = (ulong *)*param_2;
    puVar6 = (ulong *)*param_3;
    goto LAB_00afb8e8;
  case 4:
    puVar4 = (ulong *)*param_2;
    puVar6 = (ulong *)*param_3;
    goto LAB_00afb8c4;
  case 5:
    puVar4 = (ulong *)*param_2;
    puVar6 = (ulong *)*param_3;
    goto LAB_00afb8a0;
  case 6:
    puVar4 = (ulong *)*param_2;
                    /* try { // try from 00afb7e8 to 00bfb7ef has its CatchHandler @ 00afb974 */
    puVar6 = (ulong *)*param_3;
    goto LAB_00afb87c;
  case 7:
                    /* try { // try from 00afb7f0 to 00bfb90b has its CatchHandler @ 00afb430 */
    puVar4 = (ulong *)*param_2;
    puVar6 = (ulong *)*param_3;
    goto LAB_00afb858;
  case 8:
    puVar4 = (ulong *)*param_2;
    puVar6 = (ulong *)*param_3;
    goto LAB_00afb834;
  case 9:
    puVar4 = (ulong *)*param_2;
    puVar6 = (ulong *)*param_3;
    goto LAB_00afb810;
  default:
    if (10 < (int)param_4) {
      lVar7 = *param_2;
      lVar5 = *param_3;
      uVar3 = (ulong)param_4;
      if (uVar3 - 10 < 2) {
LAB_00afb744:
        lVar8 = 10;
      }
      else {
        lVar9 = (uVar3 - 10) - (ulong)(param_4 & 1);
        if (lVar9 == 0) goto LAB_00afb744;
                    /* try { // try from 00afb72c to 00bfb733 has its CatchHandler @ 00afb954 */
                    /* try { // try from 00afb734 to 00bfb78b has its CatchHandler @ 00afb430 */
        if (((undefined8 *)(lVar7 + 0x50U) < (undefined8 *)(lVar5 + uVar3 * 8)) &&
           ((undefined8 *)(lVar5 + 0x50U) < (undefined8 *)(lVar7 + uVar3 * 8))) goto LAB_00afb744;
                    /* catch() { ... } // from try @ 00afb618 with catch @ 00afb958 */
        lVar8 = lVar9 + 10;
                    /* catch() { ... } // from try @ 00afb564 with catch @ 00afb95c */
        puVar10 = (undefined8 *)(lVar7 + 0x50U);
        puVar11 = (undefined8 *)(lVar5 + 0x50U);
        do {
                    /* catch() { ... } // from try @ 00afb7a8 with catch @ 00afb960 */
          uVar20 = puVar10[1];
          uVar12 = *puVar10;
                    /* catch() { ... } // from try @ 00afb468 with catch @ 00afb964 */
          uVar38 = puVar11[1];
          uVar29 = *puVar11;
          lVar9 = lVar9 + -2;
          bVar13 = (byte)((ulong)uVar12 >> 8);
          bVar14 = (byte)((ulong)uVar12 >> 0x10);
          bVar15 = (byte)((ulong)uVar12 >> 0x18);
          bVar16 = (byte)((ulong)uVar12 >> 0x20);
          bVar17 = (byte)((ulong)uVar12 >> 0x28);
          bVar18 = (byte)((ulong)uVar12 >> 0x30);
          bVar19 = (byte)((ulong)uVar12 >> 0x38);
          bVar21 = (byte)((ulong)uVar20 >> 8);
          bVar22 = (byte)((ulong)uVar20 >> 0x10);
          bVar23 = (byte)((ulong)uVar20 >> 0x18);
          bVar24 = (byte)((ulong)uVar20 >> 0x20);
          bVar25 = (byte)((ulong)uVar20 >> 0x28);
          bVar26 = (byte)((ulong)uVar20 >> 0x30);
          bVar27 = (byte)((ulong)uVar20 >> 0x38);
          bVar28 = ((byte)uVar29 ^ (byte)uVar12) & (byte)uVar2;
          bVar39 = (byte)(uVar2 >> 8);
          bVar30 = ((byte)((ulong)uVar29 >> 8) ^ bVar13) & bVar39;
          bVar40 = (byte)(uVar2 >> 0x10);
          bVar31 = ((byte)((ulong)uVar29 >> 0x10) ^ bVar14) & bVar40;
          bVar41 = (byte)(uVar2 >> 0x18);
          bVar32 = ((byte)((ulong)uVar29 >> 0x18) ^ bVar15) & bVar41;
          bVar42 = (byte)(uVar2 >> 0x20);
          bVar33 = ((byte)((ulong)uVar29 >> 0x20) ^ bVar16) & bVar42;
          bVar43 = (byte)(uVar2 >> 0x28);
          bVar34 = ((byte)((ulong)uVar29 >> 0x28) ^ bVar17) & bVar43;
          bVar44 = (byte)(uVar2 >> 0x30);
          bVar35 = ((byte)((ulong)uVar29 >> 0x30) ^ bVar18) & bVar44;
          bVar45 = (byte)(uVar2 >> 0x38);
          bVar36 = ((byte)((ulong)uVar29 >> 0x38) ^ bVar19) & bVar45;
          bVar37 = ((byte)uVar38 ^ (byte)uVar20) & (byte)uVar2;
          bVar39 = ((byte)((ulong)uVar38 >> 8) ^ bVar21) & bVar39;
          bVar40 = ((byte)((ulong)uVar38 >> 0x10) ^ bVar22) & bVar40;
          bVar41 = ((byte)((ulong)uVar38 >> 0x18) ^ bVar23) & bVar41;
          bVar42 = ((byte)((ulong)uVar38 >> 0x20) ^ bVar24) & bVar42;
          bVar43 = ((byte)((ulong)uVar38 >> 0x28) ^ bVar25) & bVar43;
          bVar44 = ((byte)((ulong)uVar38 >> 0x30) ^ bVar26) & bVar44;
          bVar45 = ((byte)((ulong)uVar38 >> 0x38) ^ bVar27) & bVar45;
                    /* catch() { ... } // from try @ 00afb7e8 with catch @ 00afb974 */
          puVar10[1] = CONCAT17(bVar45 ^ bVar27,
                                CONCAT16(bVar44 ^ bVar26,
                                         CONCAT15(bVar43 ^ bVar25,
                                                  CONCAT14(bVar42 ^ bVar24,
                                                           CONCAT13(bVar41 ^ bVar23,
                                                                    CONCAT12(bVar40 ^ bVar22,
                                                                             CONCAT11(bVar39 ^ 
                                                  bVar21,bVar37 ^ (byte)uVar20)))))));
          *puVar10 = CONCAT17(bVar36 ^ bVar19,
                              CONCAT16(bVar35 ^ bVar18,
                                       CONCAT15(bVar34 ^ bVar17,
                                                CONCAT14(bVar33 ^ bVar16,
                                                         CONCAT13(bVar32 ^ bVar15,
                                                                  CONCAT12(bVar31 ^ bVar14,
                                                                           CONCAT11(bVar30 ^ bVar13,
                                                                                    bVar28 ^ (byte)
                                                  uVar12)))))));
          uVar20 = puVar11[1];
          uVar12 = *puVar11;
          puVar11[1] = CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ bVar45,
                                CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ bVar44,
                                         CONCAT15((byte)((ulong)uVar20 >> 0x28) ^ bVar43,
                                                  CONCAT14((byte)((ulong)uVar20 >> 0x20) ^ bVar42,
                                                           CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                                    bVar41,CONCAT12((byte)((ulong)
                                                  uVar20 >> 0x10) ^ bVar40,
                                                  CONCAT11((byte)((ulong)uVar20 >> 8) ^ bVar39,
                                                           (byte)uVar20 ^ bVar37)))))));
          *puVar11 = CONCAT17((byte)((ulong)uVar12 >> 0x38) ^ bVar36,
                              CONCAT16((byte)((ulong)uVar12 >> 0x30) ^ bVar35,
                                       CONCAT15((byte)((ulong)uVar12 >> 0x28) ^ bVar34,
                                                CONCAT14((byte)((ulong)uVar12 >> 0x20) ^ bVar33,
                                                         CONCAT13((byte)((ulong)uVar12 >> 0x18) ^
                                                                  bVar32,CONCAT12((byte)((ulong)
                                                  uVar12 >> 0x10) ^ bVar31,
                                                  CONCAT11((byte)((ulong)uVar12 >> 8) ^ bVar30,
                                                           (byte)uVar12 ^ bVar28)))))));
          puVar10 = puVar10 + 2;
          puVar11 = puVar11 + 2;
        } while (lVar9 != 0);
        if ((param_4 & 1) == 0) goto switchD_00afb6e4_caseD_a;
      }
      lVar9 = uVar3 - lVar8;
      puVar4 = (ulong *)(lVar5 + lVar8 * 8);
      puVar6 = (ulong *)(lVar7 + lVar8 * 8);
      do {
        lVar9 = lVar9 + -1;
        uVar3 = (*puVar4 ^ *puVar6) & uVar2;
        *puVar6 = uVar3 ^ *puVar6;
        *puVar4 = *puVar4 ^ uVar3;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      } while (lVar9 != 0);
    }
  case 10:
switchD_00afb6e4_caseD_a:
    puVar4 = (ulong *)*param_2;
    puVar6 = (ulong *)*param_3;
                    /* try { // try from 00afb78c to 00bfb797 has its CatchHandler @ 00afb934 */
    uVar3 = (puVar6[9] ^ puVar4[9]) & uVar2;
    puVar4[9] = uVar3 ^ puVar4[9];
                    /* try { // try from 00afb7a8 to 00bfb7bb has its CatchHandler @ 00afb960 */
    puVar6[9] = puVar6[9] ^ uVar3;
LAB_00afb810:
    uVar3 = (puVar6[8] ^ puVar4[8]) & uVar2;
    puVar4[8] = uVar3 ^ puVar4[8];
    puVar6[8] = puVar6[8] ^ uVar3;
LAB_00afb834:
    uVar3 = (puVar6[7] ^ puVar4[7]) & uVar2;
    puVar4[7] = uVar3 ^ puVar4[7];
    puVar6[7] = puVar6[7] ^ uVar3;
LAB_00afb858:
    uVar3 = (puVar6[6] ^ puVar4[6]) & uVar2;
    puVar4[6] = uVar3 ^ puVar4[6];
    puVar6[6] = puVar6[6] ^ uVar3;
LAB_00afb87c:
    uVar3 = (puVar6[5] ^ puVar4[5]) & uVar2;
    puVar4[5] = uVar3 ^ puVar4[5];
    puVar6[5] = puVar6[5] ^ uVar3;
LAB_00afb8a0:
    uVar3 = (puVar6[4] ^ puVar4[4]) & uVar2;
    puVar4[4] = uVar3 ^ puVar4[4];
    puVar6[4] = puVar6[4] ^ uVar3;
LAB_00afb8c4:
    uVar3 = (puVar6[3] ^ puVar4[3]) & uVar2;
    puVar4[3] = uVar3 ^ puVar4[3];
    puVar6[3] = puVar6[3] ^ uVar3;
LAB_00afb8e8:
    uVar3 = (puVar6[2] ^ puVar4[2]) & uVar2;
    puVar4[2] = uVar3 ^ puVar4[2];
    puVar6[2] = puVar6[2] ^ uVar3;
  }
                    /* try { // try from 00afb90c to 00bfb913 has its CatchHandler @ 00afb930 */
                    /* try { // try from 00afb914 to 00bfb923 has its CatchHandler @ 00afb92c */
  uVar3 = (puVar6[1] ^ puVar4[1]) & uVar2;
  puVar4[1] = uVar3 ^ puVar4[1];
                    /* try { // try from 00afb924 to 00bfb92b has its CatchHandler @ 00afb954 */
                    /* catch() { ... } // from try @ 00afb914 with catch @ 00afb92c
                       try { // try from 00afb92c to 00bfb9f7 has its CatchHandler @ 00afb430 */
  puVar6[1] = puVar6[1] ^ uVar3;
LAB_00afb930:
                    /* catch() { ... } // from try @ 00afb90c with catch @ 00afb930 */
                    /* catch() { ... } // from try @ 00afb78c with catch @ 00afb934 */
  uVar2 = (*puVar6 ^ *puVar4) & uVar2;
  *puVar4 = uVar2 ^ *puVar4;
  *puVar6 = *puVar6 ^ uVar2;
                    /* catch() { ... } // from try @ 00afb72c with catch @ 00afb954
                       catch() { ... } // from try @ 00afb924 with catch @ 00afb954 */
  return;
}

