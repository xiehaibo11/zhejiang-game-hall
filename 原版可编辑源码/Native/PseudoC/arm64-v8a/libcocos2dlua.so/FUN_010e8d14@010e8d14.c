
void FUN_010e8d14(long *param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  byte bVar22;
  byte bVar23;
  long lVar24;
  bool bVar25;
  bool bVar26;
  int iVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 *puVar31;
  long lVar32;
  uint *puVar33;
  code *pcVar34;
  long lVar35;
  undefined8 *puVar36;
  long lVar37;
  int iVar38;
  undefined4 uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  long *plVar43;
  uint uVar44;
  undefined1 *puVar45;
  undefined1 *puVar46;
  long lVar47;
  uint uVar48;
  byte *pbVar49;
  byte *pbVar50;
  byte *pbVar51;
  ulong uVar52;
  ulong uVar53;
  long lVar54;
  byte local_168 [256];
  long local_68;
  
  lVar24 = tpidr_el0;
  local_68 = *(long *)(lVar24 + 0x28);
  uVar44 = *(uint *)((long)param_1 + 0x23c);
  if (uVar44 != 0) goto LAB_010ea000;
  do {
    if (*(int *)(param_1[0x4d] + 0x18) == 0) {
      puVar31 = (undefined8 *)param_1[5];
      lVar35 = puVar31[1];
      if (lVar35 == 0) {
        uVar28 = (*(code *)puVar31[3])(param_1);
        if ((int)uVar28 == 0) goto LAB_010ea454;
        lVar35 = puVar31[1];
      }
      lVar35 = lVar35 + -1;
      pbVar51 = (byte *)*puVar31 + 1;
      bVar22 = *(byte *)*puVar31;
      if (lVar35 == 0) {
        uVar28 = (*(code *)puVar31[3])(param_1);
        if ((int)uVar28 == 0) goto LAB_010ea454;
        pbVar51 = (byte *)*puVar31;
        lVar35 = puVar31[1];
      }
      uVar44 = (uint)*pbVar51;
      uVar48 = (uint)bVar22;
                    /* try { // try from 010e9940 to 011e9973 has its CatchHandler @ 010e9940
                       catch() { ... } // from try @ 010e9940 with catch @ 010e9940
                       catch() { ... } // from try @ 010e9978 with catch @ 010e9940 */
      if ((uVar48 != 0xff) || (uVar44 != 0xd8)) {
        puVar36 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar36 + 5) = 0x37;
        *(uint *)((long)puVar36 + 0x2c) = uVar48;
        *(uint *)(puVar36 + 6) = uVar44;
        (*(code *)*puVar36)(param_1);
      }
      *(uint *)((long)param_1 + 0x23c) = uVar44;
      *puVar31 = pbVar51 + 1;
      puVar31[1] = lVar35 + -1;
                    /* try { // try from 010e9974 to 011e9977 has its CatchHandler @ 010e99a8 */
    }
    else {
      uVar28 = FUN_010e8b30(param_1);
      if ((int)uVar28 == 0) goto LAB_010ea454;
      uVar44 = *(uint *)((long)param_1 + 0x23c);
    }
LAB_010ea000:
    switch(uVar44) {
    case 1:
    case 0xd0:
    case 0xd1:
    case 0xd2:
    case 0xd3:
    case 0xd4:
    case 0xd5:
    case 0xd6:
    case 0xd7:
      lVar35 = *param_1;
      *(undefined4 *)(lVar35 + 0x28) = 0x5e;
      *(uint *)(lVar35 + 0x2c) = uVar44;
      (**(code **)(lVar35 + 8))(param_1,1);
      break;
    default:
      puVar31 = (undefined8 *)*param_1;
      uVar39 = 0x46;
      goto LAB_010e8dac;
    case 0xc0:
      uVar28 = 1;
      goto LAB_010e8de0;
    case 0xc1:
      uVar28 = 0;
LAB_010e8de0:
      uVar29 = 0;
LAB_010e8df4:
      uVar30 = 0;
      goto LAB_010e99c4;
    case 0xc2:
      uVar29 = 1;
      uVar28 = 0;
      goto LAB_010e8df4;
    case 0xc3:
    case 0xc5:
    case 0xc6:
    case 199:
    case 200:
    case 0xcb:
    case 0xcd:
    case 0xce:
    case 0xcf:
      puVar31 = (undefined8 *)*param_1;
      uVar39 = 0x3f;
LAB_010e8dac:
      *(undefined4 *)(puVar31 + 5) = uVar39;
      *(uint *)((long)puVar31 + 0x2c) = uVar44;
      (*(code *)*puVar31)(param_1);
      break;
    case 0xc4:
      puVar31 = (undefined8 *)param_1[5];
      lVar35 = puVar31[1];
      if (lVar35 == 0) {
        iVar27 = (*(code *)puVar31[3])(param_1);
        if (iVar27 != 0) {
          lVar35 = puVar31[1];
          goto LAB_010e8e24;
        }
LAB_010ea05c:
        uVar28 = 0;
        goto LAB_010ea454;
      }
LAB_010e8e24:
      lVar35 = lVar35 + -1;
      puVar45 = (undefined1 *)*puVar31 + 1;
      uVar20 = *(undefined1 *)*puVar31;
      if (lVar35 == 0) {
        iVar27 = (*(code *)puVar31[3])(param_1);
        if (iVar27 == 0) goto LAB_010ea05c;
        puVar45 = (undefined1 *)*puVar31;
        lVar35 = puVar31[1];
      }
      pbVar51 = puVar45 + 1;
      lVar35 = lVar35 + -1;
      uVar52 = (ulong)CONCAT11(uVar20,*puVar45);
      lVar32 = uVar52 - 2;
      if (0x12 < uVar52) {
        do {
          if (lVar35 == 0) {
            iVar27 = (*(code *)puVar31[3])(param_1);
            if (iVar27 == 0) goto LAB_010ea05c;
            pbVar51 = (byte *)*puVar31;
            lVar35 = puVar31[1];
          }
          pbVar49 = pbVar51 + 1;
          bVar22 = *pbVar51;
          uVar52 = (ulong)bVar22;
          lVar47 = *param_1;
          *(undefined4 *)(lVar47 + 0x28) = 0x52;
          *(uint *)(lVar47 + 0x2c) = (uint)bVar22;
          (**(code **)(lVar47 + 8))(param_1,1);
          lVar35 = lVar35 + -1;
          if (lVar35 == 0) {
            iVar27 = (*(code *)puVar31[3])(param_1);
            if (iVar27 == 0) goto LAB_010ea05c;
            pbVar49 = (byte *)*puVar31;
            lVar35 = puVar31[1];
          }
          pbVar51 = pbVar49 + 1;
          bVar23 = *pbVar49;
          lVar35 = lVar35 + -1;
          if (lVar35 == 0) {
            iVar27 = (*(code *)puVar31[3])(param_1);
            if (iVar27 == 0) goto LAB_010ea05c;
            pbVar51 = (byte *)*puVar31;
            lVar35 = puVar31[1];
          }
          pbVar49 = pbVar51 + 1;
          bVar5 = *pbVar51;
          lVar35 = lVar35 + -1;
          if (lVar35 == 0) {
            iVar27 = (*(code *)puVar31[3])(param_1);
            if (iVar27 == 0) goto LAB_010ea05c;
            pbVar49 = (byte *)*puVar31;
            lVar35 = puVar31[1];
          }
          pbVar51 = pbVar49 + 1;
          bVar6 = *pbVar49;
          lVar35 = lVar35 + -1;
          if (lVar35 == 0) {
            iVar27 = (*(code *)puVar31[3])(param_1);
            if (iVar27 == 0) goto LAB_010ea05c;
            pbVar51 = (byte *)*puVar31;
            lVar35 = puVar31[1];
          }
          pbVar49 = pbVar51 + 1;
          bVar7 = *pbVar51;
          lVar35 = lVar35 + -1;
          if (lVar35 == 0) {
            iVar27 = (*(code *)puVar31[3])(param_1);
            if (iVar27 == 0) goto LAB_010ea05c;
            pbVar49 = (byte *)*puVar31;
            lVar35 = puVar31[1];
          }
          pbVar51 = pbVar49 + 1;
          bVar8 = *pbVar49;
          lVar35 = lVar35 + -1;
          if (lVar35 == 0) {
            iVar27 = (*(code *)puVar31[3])(param_1);
            if (iVar27 == 0) goto LAB_010ea05c;
            pbVar51 = (byte *)*puVar31;
            lVar35 = puVar31[1];
          }
          pbVar49 = pbVar51 + 1;
          bVar9 = *pbVar51;
          lVar35 = lVar35 + -1;
          if (lVar35 == 0) {
            iVar27 = (*(code *)puVar31[3])(param_1);
            if (iVar27 == 0) goto LAB_010ea05c;
            pbVar49 = (byte *)*puVar31;
            lVar35 = puVar31[1];
          }
          pbVar51 = pbVar49 + 1;
          bVar10 = *pbVar49;
          lVar35 = lVar35 + -1;
          if (lVar35 == 0) {
            iVar27 = (*(code *)puVar31[3])(param_1);
            if (iVar27 == 0) goto LAB_010ea05c;
            pbVar51 = (byte *)*puVar31;
            lVar35 = puVar31[1];
          }
          pbVar49 = pbVar51 + 1;
          bVar11 = *pbVar51;
          lVar35 = lVar35 + -1;
          if (lVar35 == 0) {
            iVar27 = (*(code *)puVar31[3])(param_1);
            if (iVar27 == 0) goto LAB_010ea05c;
            pbVar49 = (byte *)*puVar31;
            lVar35 = puVar31[1];
          }
          pbVar51 = pbVar49 + 1;
          bVar12 = *pbVar49;
          lVar35 = lVar35 + -1;
          if (lVar35 == 0) {
            iVar27 = (*(code *)puVar31[3])(param_1);
            if (iVar27 == 0) goto LAB_010ea05c;
            pbVar51 = (byte *)*puVar31;
            lVar35 = puVar31[1];
          }
          pbVar49 = pbVar51 + 1;
          bVar13 = *pbVar51;
          lVar35 = lVar35 + -1;
          if (lVar35 == 0) {
            iVar27 = (*(code *)puVar31[3])(param_1);
            if (iVar27 == 0) goto LAB_010ea05c;
            pbVar49 = (byte *)*puVar31;
            lVar35 = puVar31[1];
          }
          pbVar51 = pbVar49 + 1;
          bVar14 = *pbVar49;
          lVar35 = lVar35 + -1;
          if (lVar35 == 0) {
            iVar27 = (*(code *)puVar31[3])(param_1);
            if (iVar27 == 0) goto LAB_010ea05c;
            pbVar51 = (byte *)*puVar31;
            lVar35 = puVar31[1];
          }
          pbVar49 = pbVar51 + 1;
          bVar15 = *pbVar51;
          lVar35 = lVar35 + -1;
          if (lVar35 == 0) {
            iVar27 = (*(code *)puVar31[3])(param_1);
            if (iVar27 == 0) goto LAB_010ea05c;
            pbVar49 = (byte *)*puVar31;
            lVar35 = puVar31[1];
          }
          pbVar51 = pbVar49 + 1;
          bVar16 = *pbVar49;
          lVar35 = lVar35 + -1;
          if (lVar35 == 0) {
            iVar27 = (*(code *)puVar31[3])(param_1);
            if (iVar27 == 0) goto LAB_010ea05c;
            pbVar51 = (byte *)*puVar31;
            lVar35 = puVar31[1];
          }
          pbVar49 = pbVar51 + 1;
          bVar17 = *pbVar51;
          lVar35 = lVar35 + -1;
          if (lVar35 == 0) {
            iVar27 = (*(code *)puVar31[3])(param_1);
            if (iVar27 == 0) goto LAB_010ea05c;
            pbVar49 = (byte *)*puVar31;
            lVar35 = puVar31[1];
          }
          pbVar50 = pbVar49 + 1;
          bVar18 = *pbVar49;
          lVar35 = lVar35 + -1;
          if (lVar35 == 0) {
            iVar27 = (*(code *)puVar31[3])(param_1);
            if (iVar27 == 0) goto LAB_010ea05c;
            pbVar50 = (byte *)*puVar31;
            lVar35 = puVar31[1];
          }
          pbVar51 = pbVar50 + 1;
          bVar19 = *pbVar50;
          lVar35 = lVar35 + -1;
          lVar47 = *param_1;
          *(undefined4 *)(lVar47 + 0x28) = 0x58;
          *(uint *)(lVar47 + 0x2c) = (uint)bVar23;
          *(uint *)(lVar47 + 0x30) = (uint)bVar5;
          *(uint *)(lVar47 + 0x34) = (uint)bVar6;
          *(uint *)(lVar47 + 0x38) = (uint)bVar7;
          *(uint *)(lVar47 + 0x3c) = (uint)bVar8;
          *(uint *)(lVar47 + 0x40) = (uint)bVar9;
          *(uint *)(lVar47 + 0x44) = (uint)bVar10;
          *(uint *)(lVar47 + 0x48) = (uint)bVar11;
          uVar44 = (uint)bVar5 + (uint)bVar23 + (uint)bVar6 + (uint)bVar7 + (uint)bVar8 +
                   (uint)bVar9 + (uint)bVar10 + (uint)bVar11 + (uint)bVar12 + (uint)bVar13 +
                   (uint)bVar14 + (uint)bVar15 + (uint)bVar16 + (uint)bVar17 + (uint)bVar18 +
                   (uint)bVar19;
          (**(code **)(lVar47 + 8))(param_1,2);
          lVar47 = *param_1;
          *(undefined4 *)(lVar47 + 0x28) = 0x58;
          *(uint *)(lVar47 + 0x2c) = (uint)bVar12;
          *(uint *)(lVar47 + 0x30) = (uint)bVar13;
          *(uint *)(lVar47 + 0x34) = (uint)bVar14;
          *(uint *)(lVar47 + 0x38) = (uint)bVar15;
          *(uint *)(lVar47 + 0x3c) = (uint)bVar16;
          *(uint *)(lVar47 + 0x40) = (uint)bVar17;
          *(uint *)(lVar47 + 0x44) = (uint)bVar18;
          *(uint *)(lVar47 + 0x48) = (uint)bVar19;
          (**(code **)(lVar47 + 8))(param_1,2);
          lVar47 = (long)(int)uVar44;
          if ((0x100 < uVar44) || (lVar32 + -0x11 < lVar47)) {
            puVar36 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar36 + 5) = 9;
            (*(code *)*puVar36)(param_1);
          }
          memset(local_168,0,0x100);
          if (uVar44 == 0) {
            if ((bVar22 >> 4 & 1) != 0) goto LAB_010e9280;
LAB_010e9258:
            plVar43 = param_1 + uVar52 + 0x1d;
            uVar53 = uVar52;
            if (3 < bVar22) {
LAB_010e9294:
              puVar36 = (undefined8 *)*param_1;
              *(undefined4 *)(puVar36 + 5) = 0x1f;
              *(int *)((long)puVar36 + 0x2c) = (int)uVar53;
              (*(code *)*puVar36)(param_1);
            }
          }
          else {
            lVar37 = 0;
            pbVar49 = pbVar51;
            do {
              if (lVar35 == 0) {
                iVar27 = (*(code *)puVar31[3])(param_1);
                if (iVar27 == 0) goto LAB_010ea05c;
                pbVar49 = (byte *)*puVar31;
                lVar35 = puVar31[1];
              }
              pbVar51 = pbVar49 + 1;
              lVar35 = lVar35 + -1;
              local_168[lVar37] = *pbVar49;
              lVar37 = lVar37 + 1;
              pbVar49 = pbVar51;
            } while (lVar37 < lVar47);
            if ((bVar22 >> 4 & 1) == 0) goto LAB_010e9258;
LAB_010e9280:
            uVar53 = uVar52 - 0x10;
            plVar43 = param_1 + uVar52 + 0x11;
            if (3 < (uint)uVar53) goto LAB_010e9294;
          }
          puVar45 = (undefined1 *)*plVar43;
          lVar32 = (lVar32 + -0x11) - lVar47;
          if (puVar45 == (undefined1 *)0x0) {
            puVar45 = (undefined1 *)jpeg_alloc_huff_table(param_1);
            *plVar43 = (long)puVar45;
          }
          *puVar45 = 0;
          puVar45[1] = bVar23;
          puVar45[2] = bVar5;
          puVar45[3] = bVar6;
          puVar45[4] = bVar7;
          puVar45[5] = bVar8;
          puVar45[6] = bVar9;
          puVar45[7] = bVar10;
          puVar45[8] = bVar11;
          puVar45[9] = bVar12;
          puVar45[10] = bVar13;
          puVar45[0xb] = bVar14;
          puVar45[0xc] = bVar15;
          puVar45[0xd] = bVar16;
          puVar45[0xe] = bVar17;
          puVar45[0x10] = bVar19;
          puVar45[0xf] = bVar18;
          memcpy((void *)(*plVar43 + 0x11),local_168,0x100);
        } while (0x10 < lVar32);
      }
                    /* try { // try from 010e9978 to 011e99bb has its CatchHandler @ 010e9940 */
      if (lVar32 != 0) {
        puVar36 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar36 + 5) = 0xc;
        (*(code *)*puVar36)(param_1);
      }
      *puVar31 = pbVar51;
      puVar31[1] = lVar35;
      break;
    case 0xc9:
      uVar30 = 1;
                    /* catch() { ... } // from try @ 010e9974 with catch @ 010e99a8 */
      uVar28 = 0;
      uVar29 = 0;
      goto LAB_010e99c4;
    case 0xca:
      uVar29 = 1;
      uVar30 = 1;
      uVar28 = 0;
LAB_010e99c4:
      uVar28 = FUN_010ead50(param_1,uVar28,uVar29,uVar30);
      iVar27 = (int)uVar28;
joined_r0x010e8d7c:
      if (iVar27 == 0) goto LAB_010ea454;
      break;
    case 0xcc:
      puVar31 = (undefined8 *)param_1[5];
      lVar35 = puVar31[1];
      if (lVar35 == 0) {
                    /* try { // try from 010e99e0 to 011e9a47 has its CatchHandler @ 010e9a6c */
        uVar28 = (*(code *)puVar31[3])(param_1);
        if ((int)uVar28 == 0) goto LAB_010ea454;
        lVar35 = puVar31[1];
      }
      lVar35 = lVar35 + -1;
      puVar45 = (undefined1 *)*puVar31 + 1;
      uVar20 = *(undefined1 *)*puVar31;
      if (lVar35 == 0) {
        uVar28 = (*(code *)puVar31[3])(param_1);
        if ((int)uVar28 == 0) goto LAB_010ea454;
        puVar45 = (undefined1 *)*puVar31;
        lVar35 = puVar31[1];
      }
      pbVar51 = puVar45 + 1;
      lVar35 = lVar35 + -1;
      uVar52 = (ulong)CONCAT11(uVar20,*puVar45);
      if (2 < uVar52) {
        do {
          if (lVar35 == 0) {
            uVar28 = (*(code *)puVar31[3])(param_1);
            if ((int)uVar28 == 0) goto LAB_010ea454;
            pbVar51 = (byte *)*puVar31;
            lVar35 = puVar31[1];
          }
          pbVar49 = pbVar51 + 1;
          bVar22 = *pbVar51;
          uVar53 = (ulong)bVar22;
          lVar35 = lVar35 + -1;
          if (lVar35 == 0) {
            uVar28 = (*(code *)puVar31[3])(param_1);
            if ((int)uVar28 == 0) goto LAB_010ea454;
            pbVar49 = (byte *)*puVar31;
            lVar35 = puVar31[1];
          }
          pbVar51 = pbVar49 + 1;
          bVar23 = *pbVar49;
          lVar32 = *param_1;
          lVar35 = lVar35 + -1;
          *(undefined4 *)(lVar32 + 0x28) = 0x51;
          *(uint *)(lVar32 + 0x2c) = (uint)bVar22;
          uVar44 = (uint)bVar23;
          *(uint *)(lVar32 + 0x30) = uVar44;
          (**(code **)(lVar32 + 8))(param_1,1);
          if (bVar22 < 0x20) {
            if (0xf < bVar22) goto LAB_010e9afc;
            *(char *)((long)param_1 + uVar53 + 0x144) = (char)(uVar44 & 0xf);
            *(byte *)((long)param_1 + uVar53 + 0x154) = bVar23 >> 4;
            if ((uint)(bVar23 >> 4) < (uVar44 & 0xf)) {
              puVar36 = (undefined8 *)*param_1;
              *(undefined4 *)(puVar36 + 5) = 0x1e;
              *(uint *)((long)puVar36 + 0x2c) = uVar44;
              (*(code *)*puVar36)(param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010e99e0 with catch @ 010e9a6c
                        */
            }
          }
          else {
            puVar36 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar36 + 5) = 0x1d;
            *(uint *)((long)puVar36 + 0x2c) = (uint)bVar22;
            (*(code *)*puVar36)(param_1);
LAB_010e9afc:
            *(byte *)((long)param_1 + uVar53 + 0x154) = bVar23;
          }
          uVar52 = uVar52 - 2;
        } while (2 < (long)uVar52);
      }
      if (uVar52 != 2) {
        puVar36 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar36 + 5) = 0xc;
        (*(code *)*puVar36)(param_1);
      }
      *puVar31 = pbVar51;
      puVar31[1] = lVar35;
      break;
    case 0xd8:
      lVar35 = *param_1;
      *(undefined4 *)(lVar35 + 0x28) = 0x68;
      (**(code **)(lVar35 + 8))(param_1,1);
      lVar35 = param_1[0x4d];
      if (*(int *)(lVar35 + 0x18) != 0) {
        puVar31 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar31 + 5) = 0x40;
        (*(code *)*puVar31)(param_1);
        lVar35 = param_1[0x4d];
      }
      *(undefined8 *)((long)param_1 + 0x144) = 0;
      *(undefined4 *)((long)param_1 + 0x154) = 0x1010101;
      *(undefined8 *)((long)param_1 + 0x164) = 0x505050505050505;
      *(undefined2 *)(param_1 + 0x2b) = 0x101;
      *(undefined4 *)((long)param_1 + 0x15a) = 0x1010101;
      *(undefined2 *)((long)param_1 + 0x14c) = 0;
      *(undefined1 *)((long)param_1 + 0x16c) = 5;
      *(undefined1 *)((long)param_1 + 0x16d) = 5;
      *(undefined4 *)((long)param_1 + 0x14e) = 0;
      *(undefined1 *)((long)param_1 + 0x16e) = 5;
      *(undefined1 *)((long)param_1 + 0x16f) = 5;
      *(undefined1 *)(param_1 + 0x2e) = 5;
      *(undefined1 *)((long)param_1 + 0x171) = 5;
      *(undefined1 *)((long)param_1 + 0x172) = 5;
      *(undefined1 *)((long)param_1 + 0x173) = 5;
      *(undefined2 *)((long)param_1 + 0x15e) = 0x101;
      *(undefined1 *)(param_1 + 0x2c) = 1;
      *(undefined1 *)((long)param_1 + 0x161) = 1;
      *(undefined2 *)((long)param_1 + 0x152) = 0;
      *(undefined1 *)((long)param_1 + 0x162) = 1;
      *(undefined1 *)((long)param_1 + 0x163) = 1;
      *(undefined4 *)((long)param_1 + 0x174) = 0;
      *(undefined4 *)((long)param_1 + 0x3c) = 0;
      *(undefined4 *)((long)param_1 + 0x18c) = 0;
      *(undefined4 *)(param_1 + 0x32) = 0;
      *(undefined4 *)(param_1 + 0x2f) = 0;
      *(undefined1 *)((long)param_1 + 0x17c) = 1;
      *(undefined1 *)((long)param_1 + 0x17d) = 1;
      *(undefined1 *)((long)param_1 + 0x17e) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0x10001;
      *(undefined4 *)((long)param_1 + 0x184) = 0;
      *(undefined1 *)(param_1 + 0x31) = 0;
      *(undefined4 *)(lVar35 + 0x18) = 1;
      break;
    case 0xd9:
      lVar35 = *param_1;
      *(undefined4 *)(lVar35 + 0x28) = 0x57;
      (**(code **)(lVar35 + 8))(param_1,1);
      uVar28 = 2;
      *(undefined4 *)((long)param_1 + 0x23c) = 0;
      goto LAB_010ea454;
    case 0xda:
      puVar31 = (undefined8 *)param_1[5];
      puVar45 = (undefined1 *)*puVar31;
      lVar35 = puVar31[1];
      if (*(int *)(param_1[0x4d] + 0x1c) == 0) {
        lVar32 = *param_1;
        *(undefined4 *)(lVar32 + 0x28) = 0x3c;
        strncpy((char *)(lVar32 + 0x2c),"SOS",0x50);
        (**(code **)*param_1)(param_1);
      }
      if (lVar35 == 0) {
        uVar28 = (*(code *)puVar31[3])(param_1);
        if ((int)uVar28 == 0) goto LAB_010ea454;
        puVar45 = (undefined1 *)*puVar31;
        lVar35 = puVar31[1];
      }
      puVar46 = puVar45 + 1;
      uVar20 = *puVar45;
      lVar35 = lVar35 + -1;
      if (lVar35 == 0) {
        uVar28 = (*(code *)puVar31[3])(param_1);
        if ((int)uVar28 == 0) goto LAB_010ea454;
        puVar46 = (undefined1 *)*puVar31;
        lVar35 = puVar31[1];
      }
      pbVar51 = puVar46 + 1;
      uVar21 = *puVar46;
      lVar35 = lVar35 + -1;
      if (lVar35 == 0) {
        uVar28 = (*(code *)puVar31[3])(param_1);
        if ((int)uVar28 == 0) goto LAB_010ea454;
        pbVar51 = (byte *)*puVar31;
        lVar35 = puVar31[1];
      }
      lVar32 = *param_1;
      bVar22 = *pbVar51;
      *(undefined4 *)(lVar32 + 0x28) = 0x69;
      *(uint *)(lVar32 + 0x2c) = (uint)bVar22;
      (**(code **)(lVar32 + 8))(param_1,1);
      uVar44 = (uint)bVar22;
      if ((bVar22 < 5) && ((ulong)CONCAT11(uVar20,uVar21) == (ulong)bVar22 * 2 + 6)) {
        if (uVar44 == 0) {
          if (*(int *)((long)param_1 + 0x13c) == 0) goto LAB_010ea16c;
          *(uint *)(param_1 + 0x38) = (uint)bVar22;
          lVar32 = lVar35 + -1;
          bVar25 = true;
          if (lVar32 == 0) goto LAB_010ea380;
          pbVar49 = pbVar51 + 1;
          goto LAB_010ea394;
        }
        bVar26 = lVar35 == 1;
        *(uint *)(param_1 + 0x38) = (uint)bVar22;
      }
      else {
LAB_010ea16c:
        puVar36 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar36 + 5) = 0xc;
        (*(code *)*puVar36)(param_1);
        lVar32 = lVar35 + -1;
        bVar26 = lVar32 == 0;
        pbVar49 = pbVar51 + 1;
        *(uint *)(param_1 + 0x38) = uVar44;
        if (uVar44 == 0) {
          bVar25 = true;
          goto joined_r0x010ea37c;
        }
      }
      pbVar49 = pbVar51 + 1;
      lVar32 = lVar35 + -1;
      uVar52 = 0;
      uVar53 = 0xffffffffffffffff;
      goto LAB_010ea1b4;
    case 0xdb:
                    /* try { // try from 010e9c34 to 011e9f5f has its CatchHandler @ 010e9c34
                       catch() { ... } // from try @ 010e9c34 with catch @ 010e9c34
                       catch() { ... } // from try @ 010e9f88 with catch @ 010e9c34 */
      plVar43 = (long *)param_1[5];
      lVar35 = plVar43[1];
      if (lVar35 == 0) {
        uVar28 = (*(code *)plVar43[3])(param_1);
        if ((int)uVar28 == 0) goto LAB_010ea454;
        lVar35 = plVar43[1];
      }
      lVar35 = lVar35 + -1;
      puVar45 = (undefined1 *)*plVar43 + 1;
      uVar20 = *(undefined1 *)*plVar43;
      if (lVar35 == 0) {
        uVar28 = (*(code *)plVar43[3])(param_1);
        if ((int)uVar28 == 0) goto LAB_010ea454;
        puVar45 = (undefined1 *)*plVar43;
        lVar35 = plVar43[1];
      }
      pbVar51 = puVar45 + 1;
      lVar35 = lVar35 + -1;
      uVar52 = (ulong)CONCAT11(uVar20,*puVar45);
      lVar32 = uVar52 - 2;
      if (2 < uVar52) {
        do {
          pbVar49 = pbVar51;
          lVar47 = lVar35;
          if (lVar35 == 0) {
            uVar28 = (*(code *)plVar43[3])(param_1);
            if ((int)uVar28 == 0) goto LAB_010ea454;
            pbVar49 = (byte *)*plVar43;
            lVar47 = plVar43[1];
          }
          lVar35 = *param_1;
          bVar22 = *pbVar49 >> 4;
          uVar44 = *pbVar49 & 0xf;
          *(undefined4 *)(lVar35 + 0x28) = 0x53;
          *(uint *)(lVar35 + 0x2c) = uVar44;
          *(uint *)(lVar35 + 0x30) = (uint)bVar22;
          (**(code **)(lVar35 + 8))(param_1,1);
          if (3 < uVar44) {
            puVar31 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar31 + 5) = 0x20;
            *(uint *)((long)puVar31 + 0x2c) = uVar44;
            (*(code *)*puVar31)(param_1);
          }
          puVar31 = (undefined8 *)param_1[(ulong)uVar44 + 0x19];
          if (puVar31 == (undefined8 *)0x0) {
            puVar31 = (undefined8 *)jpeg_alloc_quant_table(param_1);
            param_1[(ulong)uVar44 + 0x19] = (long)puVar31;
          }
          lVar37 = lVar32 + -1;
          if (bVar22 == 0) {
            lVar54 = lVar37;
            if (0x40 < lVar32) goto LAB_010e9d90;
LAB_010e9d48:
            puVar31[1] = 0x1000100010001;
            *puVar31 = 0x1000100010001;
            puVar31[3] = 0x1000100010001;
            puVar31[2] = 0x1000100010001;
            puVar31[5] = 0x1000100010001;
            puVar31[4] = 0x1000100010001;
            puVar31[7] = 0x1000100010001;
            puVar31[6] = 0x1000100010001;
            puVar31[9] = 0x1000100010001;
            puVar31[8] = 0x1000100010001;
            puVar31[0xb] = 0x1000100010001;
            puVar31[10] = 0x1000100010001;
            puVar31[0xd] = 0x1000100010001;
            puVar31[0xc] = 0x1000100010001;
            puVar31[0xf] = 0x1000100010001;
            puVar31[0xe] = 0x1000100010001;
            puVar45 = jpeg_natural_order2;
            lVar35 = 4;
            switch(lVar54) {
            case 4:
              break;
            default:
              puVar45 = jpeg_natural_order;
              pbVar51 = pbVar49 + 1;
              lVar35 = lVar47 + -1;
              if (0 < lVar54) goto joined_r0x010e9e44;
              goto LAB_010e9eac;
            case 9:
              puVar45 = jpeg_natural_order3;
              lVar35 = lVar54;
              break;
            case 0x10:
              puVar45 = jpeg_natural_order4;
              lVar35 = lVar54;
              break;
            case 0x19:
              puVar45 = jpeg_natural_order5;
              lVar35 = lVar54;
              break;
            case 0x24:
              puVar45 = jpeg_natural_order6;
              lVar35 = lVar54;
              break;
            case 0x31:
              puVar45 = (undefined1 *)&jpeg_natural_order7;
              lVar35 = lVar54;
            }
            lVar54 = lVar35;
          }
          else {
            if (lVar32 < 0x81) {
              lVar54 = lVar37 >> 1;
              goto LAB_010e9d48;
            }
LAB_010e9d90:
            puVar45 = jpeg_natural_order;
            lVar54 = 0x40;
          }
joined_r0x010e9e44:
          if (bVar22 == 0) {
            lVar35 = lVar47 + -1;
            lVar32 = 0;
            pbVar49 = pbVar49 + 1;
            do {
              if (lVar35 == 0) {
                uVar28 = (*(code *)plVar43[3])(param_1);
                if ((int)uVar28 == 0) goto LAB_010ea454;
                pbVar49 = (byte *)*plVar43;
                lVar35 = plVar43[1];
              }
              pbVar51 = pbVar49 + 1;
              piVar4 = (int *)((long)puVar45 + lVar32 * 4);
              lVar32 = lVar32 + 1;
              lVar35 = lVar35 + -1;
              *(ushort *)((long)puVar31 + (long)*piVar4 * 2) = (ushort)*pbVar49;
              pbVar49 = pbVar51;
            } while (lVar32 < lVar54);
          }
          else {
            lVar35 = lVar47 + -1;
            pbVar51 = pbVar49 + 1;
            lVar32 = 0;
            do {
              if (lVar35 == 0) {
                uVar28 = (*(code *)plVar43[3])(param_1);
                if ((int)uVar28 == 0) goto LAB_010ea454;
                pbVar51 = (byte *)*plVar43;
                lVar35 = plVar43[1];
              }
              pbVar49 = pbVar51 + 1;
              bVar23 = *pbVar51;
              lVar35 = lVar35 + -1;
              if (lVar35 == 0) {
                uVar28 = (*(code *)plVar43[3])(param_1);
                if ((int)uVar28 == 0) goto LAB_010ea454;
                pbVar49 = (byte *)*plVar43;
                lVar35 = plVar43[1];
              }
              pbVar51 = pbVar49 + 1;
              piVar4 = (int *)((long)puVar45 + lVar32 * 4);
              lVar32 = lVar32 + 1;
              lVar35 = lVar35 + -1;
              *(ushort *)((long)puVar31 + (long)*piVar4 * 2) = CONCAT11(bVar23,*pbVar49);
            } while (lVar32 < lVar54);
          }
LAB_010e9eac:
          lVar32 = *param_1;
          if (1 < *(int *)(lVar32 + 0x7c)) {
            lVar47 = 0;
            puVar31 = puVar31 + 1;
            while( true ) {
              uVar28 = puVar31[-1];
              *(ulong *)(lVar32 + 0x34) =
                   (ulong)CONCAT24((short)((ulong)uVar28 >> 0x30),
                                   (uint)(ushort)((ulong)uVar28 >> 0x20));
              *(ulong *)(lVar32 + 0x2c) =
                   (ulong)(CONCAT24((short)((ulong)uVar28 >> 0x10),(int)uVar28) & 0xffff0000ffff);
              uVar28 = *puVar31;
              *(undefined4 *)(lVar32 + 0x28) = 0x5f;
              *(ulong *)(lVar32 + 0x44) =
                   (ulong)CONCAT24((short)((ulong)uVar28 >> 0x30),
                                   (uint)(ushort)((ulong)uVar28 >> 0x20));
              *(ulong *)(lVar32 + 0x3c) =
                   (ulong)(CONCAT24((short)((ulong)uVar28 >> 0x10),(int)uVar28) & 0xffff0000ffff);
              (**(code **)(lVar32 + 8))(param_1,2);
              if (0x37 < lVar47) break;
              lVar32 = *param_1;
              lVar47 = lVar47 + 8;
              puVar31 = puVar31 + 2;
            }
          }
          lVar32 = 0;
          if (bVar22 != 0) {
            lVar32 = -lVar54;
          }
          lVar32 = (lVar37 - lVar54) + lVar32;
        } while (0 < lVar32);
      }
      if (lVar32 != 0) {
        puVar31 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar31 + 5) = 0xc;
        (*(code *)*puVar31)(param_1);
      }
      *plVar43 = (long)pbVar51;
      plVar43[1] = lVar35;
      break;
    case 0xdc:
      puVar31 = (undefined8 *)param_1[5];
      lVar35 = puVar31[1];
                    /* try { // try from 010e9f60 to 011e9f87 has its CatchHandler @ 010e9ff0 */
      if (lVar35 == 0) {
        uVar28 = (*(code *)puVar31[3])(param_1);
        if ((int)uVar28 == 0) goto LAB_010ea454;
        lVar35 = puVar31[1];
      }
      lVar35 = lVar35 + -1;
      puVar45 = (undefined1 *)*puVar31 + 1;
      uVar20 = *(undefined1 *)*puVar31;
      if (lVar35 == 0) {
                    /* try { // try from 010e9f88 to 011ea00b has its CatchHandler @ 010e9c34 */
        uVar28 = (*(code *)puVar31[3])(param_1);
        if ((int)uVar28 == 0) goto LAB_010ea454;
        puVar45 = (undefined1 *)*puVar31;
        lVar35 = puVar31[1];
      }
      uVar21 = *puVar45;
      lVar32 = *param_1;
      *(undefined4 *)(lVar32 + 0x28) = 0x5d;
      uVar52 = (ulong)CONCAT11(uVar20,uVar21);
      lVar47 = uVar52 - 2;
      *(undefined4 *)(lVar32 + 0x2c) = *(undefined4 *)((long)param_1 + 0x23c);
      *(int *)(lVar32 + 0x30) = (int)lVar47;
      (**(code **)(lVar32 + 8))(param_1,1);
      *puVar31 = puVar45 + 1;
      puVar31[1] = lVar35 + -1;
      if (2 < uVar52) {
                    /* catch() { ... } // from try @ 010e9f60 with catch @ 010e9ff0 */
        (**(code **)(param_1[5] + 0x20))(param_1,lVar47);
      }
      break;
    case 0xdd:
      puVar31 = (undefined8 *)param_1[5];
      lVar35 = puVar31[1];
      if (lVar35 == 0) {
        uVar28 = (*(code *)puVar31[3])(param_1);
        if ((int)uVar28 == 0) goto LAB_010ea454;
        lVar35 = puVar31[1];
      }
      lVar35 = lVar35 + -1;
      puVar45 = (undefined1 *)*puVar31 + 1;
      uVar20 = *(undefined1 *)*puVar31;
      if (lVar35 == 0) {
        uVar28 = (*(code *)puVar31[3])(param_1);
        if ((int)uVar28 == 0) goto LAB_010ea454;
        puVar45 = (undefined1 *)*puVar31;
        lVar35 = puVar31[1];
      }
      puVar46 = puVar45 + 1;
      lVar35 = lVar35 + -1;
      if (CONCAT11(uVar20,*puVar45) != 4) {
        puVar36 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar36 + 5) = 0xc;
        (*(code *)*puVar36)(param_1);
      }
      if (lVar35 == 0) {
        uVar28 = (*(code *)puVar31[3])(param_1);
        if ((int)uVar28 == 0) goto LAB_010ea454;
        puVar46 = (undefined1 *)*puVar31;
        lVar35 = puVar31[1];
      }
      puVar45 = puVar46 + 1;
      uVar20 = *puVar46;
      lVar35 = lVar35 + -1;
      if (lVar35 == 0) {
        uVar28 = (*(code *)puVar31[3])(param_1);
        if ((int)uVar28 == 0) goto LAB_010ea454;
        puVar45 = (undefined1 *)*puVar31;
        lVar35 = puVar31[1];
      }
      uVar21 = *puVar45;
      lVar32 = *param_1;
      *(undefined4 *)(lVar32 + 0x28) = 0x54;
      *(uint *)(lVar32 + 0x2c) = (uint)CONCAT11(uVar20,uVar21);
      (**(code **)(lVar32 + 8))(param_1,1);
      *(uint *)((long)param_1 + 0x174) = (uint)CONCAT11(uVar20,uVar21);
      *puVar31 = puVar45 + 1;
      puVar31[1] = lVar35 + -1;
      break;
    case 0xe0:
    case 0xe1:
    case 0xe2:
    case 0xe3:
    case 0xe4:
    case 0xe5:
    case 0xe6:
    case 0xe7:
    case 0xe8:
    case 0xe9:
    case 0xea:
    case 0xeb:
    case 0xec:
    case 0xed:
    case 0xee:
    case 0xef:
      pcVar34 = *(code **)(param_1[0x4d] + (long)(int)uVar44 * 8 + -0x6d0);
      goto LAB_010e8d74;
    case 0xf8:
      puVar31 = (undefined8 *)param_1[5];
      pbVar51 = (byte *)*puVar31;
      lVar35 = puVar31[1];
      if (*(int *)(param_1[0x4d] + 0x1c) == 0) {
        lVar32 = *param_1;
        *(undefined4 *)(lVar32 + 0x28) = 0x3c;
        strncpy((char *)(lVar32 + 0x2c),"LSE",0x50);
        (**(code **)*param_1)(param_1);
      }
      if ((int)param_1[7] < 3) {
LAB_010e98b0:
        puVar36 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar36 + 5) = 0x1c;
        (*(code *)*puVar36)(param_1);
      }
      else {
        if (lVar35 == 0) {
          uVar28 = (*(code *)puVar31[3])(param_1);
          if ((int)uVar28 == 0) goto LAB_010ea454;
          pbVar51 = (byte *)*puVar31;
          lVar35 = puVar31[1];
        }
        pbVar49 = pbVar51 + 1;
        bVar22 = *pbVar51;
        lVar35 = lVar35 + -1;
        if (lVar35 == 0) {
          uVar28 = (*(code *)puVar31[3])(param_1);
          if ((int)uVar28 == 0) goto LAB_010ea454;
          pbVar49 = (byte *)*puVar31;
          lVar35 = puVar31[1];
        }
        pbVar51 = pbVar49 + 1;
        lVar35 = lVar35 + -1;
        if (CONCAT11(bVar22,*pbVar49) != 0x18) {
          puVar36 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar36 + 5) = 0xc;
          (*(code *)*puVar36)(param_1);
        }
        if (lVar35 == 0) {
          uVar28 = (*(code *)puVar31[3])(param_1);
          if ((int)uVar28 == 0) goto LAB_010ea454;
          pbVar51 = (byte *)*puVar31;
          lVar35 = puVar31[1];
        }
        pbVar49 = pbVar51 + 1;
        lVar35 = lVar35 + -1;
        if (*pbVar51 != 0xd) {
          puVar36 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar36 + 5) = 0x46;
          *(undefined4 *)((long)puVar36 + 0x2c) = *(undefined4 *)((long)param_1 + 0x23c);
          (*(code *)*puVar36)(param_1);
        }
        if (lVar35 == 0) {
          uVar28 = (*(code *)puVar31[3])(param_1);
          if ((int)uVar28 == 0) goto LAB_010ea454;
          pbVar49 = (byte *)*puVar31;
          lVar35 = puVar31[1];
        }
        pbVar50 = pbVar49 + 1;
        bVar22 = *pbVar49;
        lVar35 = lVar35 + -1;
        if (lVar35 == 0) {
          uVar28 = (*(code *)puVar31[3])(param_1);
          if ((int)uVar28 == 0) goto LAB_010ea454;
          pbVar50 = (byte *)*puVar31;
          lVar35 = puVar31[1];
        }
        pbVar51 = pbVar50 + 1;
        lVar35 = lVar35 + -1;
        if (CONCAT11(bVar22,*pbVar50) != 0xff) goto LAB_010e98b0;
        pbVar49 = pbVar51;
        if (lVar35 == 0) {
          uVar28 = (*(code *)puVar31[3])(param_1);
          if ((int)uVar28 == 0) goto LAB_010ea454;
          pbVar49 = (byte *)*puVar31;
          lVar35 = puVar31[1];
        }
        pbVar51 = pbVar49 + 1;
        lVar35 = lVar35 + -1;
        if (*pbVar49 != 3) goto LAB_010e98b0;
        pbVar49 = pbVar51;
        if (lVar35 == 0) {
          uVar28 = (*(code *)puVar31[3])(param_1);
          if ((int)uVar28 == 0) goto LAB_010ea454;
          pbVar49 = (byte *)*puVar31;
          lVar35 = puVar31[1];
        }
        pbVar51 = pbVar49 + 1;
        puVar33 = (uint *)param_1[0x26];
        lVar35 = lVar35 + -1;
        if (puVar33[0x18] != (uint)*pbVar49) goto LAB_010e98b0;
        pbVar49 = pbVar51;
        if (lVar35 == 0) {
          uVar28 = (*(code *)puVar31[3])(param_1);
          if ((int)uVar28 == 0) goto LAB_010ea454;
          pbVar49 = (byte *)*puVar31;
          lVar35 = puVar31[1];
          puVar33 = (uint *)param_1[0x26];
        }
        pbVar51 = pbVar49 + 1;
        lVar35 = lVar35 + -1;
        if (*puVar33 != (uint)*pbVar49) goto LAB_010e98b0;
        pbVar49 = pbVar51;
        if (lVar35 == 0) {
          uVar28 = (*(code *)puVar31[3])(param_1);
          if ((int)uVar28 == 0) goto LAB_010ea454;
          pbVar49 = (byte *)*puVar31;
          lVar35 = puVar31[1];
          puVar33 = (uint *)param_1[0x26];
        }
        pbVar51 = pbVar49 + 1;
        lVar35 = lVar35 + -1;
        if (puVar33[0x30] != (uint)*pbVar49) goto LAB_010e98b0;
        pbVar49 = pbVar51;
        if (lVar35 == 0) {
          uVar28 = (*(code *)puVar31[3])(param_1);
          if ((int)uVar28 == 0) goto LAB_010ea454;
          pbVar49 = (byte *)*puVar31;
          lVar35 = puVar31[1];
        }
        pbVar51 = pbVar49 + 1;
        lVar35 = lVar35 + -1;
        if (*pbVar49 != 0x80) goto LAB_010e98b0;
        if (lVar35 == 0) {
          uVar28 = (*(code *)puVar31[3])(param_1);
          if ((int)uVar28 == 0) goto LAB_010ea454;
          pbVar51 = (byte *)*puVar31;
          lVar35 = puVar31[1];
        }
        pbVar49 = pbVar51 + 1;
        bVar22 = *pbVar51;
        lVar35 = lVar35 + -1;
        if (lVar35 == 0) {
          uVar28 = (*(code *)puVar31[3])(param_1);
          if ((int)uVar28 == 0) goto LAB_010ea454;
          pbVar49 = (byte *)*puVar31;
          lVar35 = puVar31[1];
        }
        pbVar51 = pbVar49 + 1;
        lVar35 = lVar35 + -1;
        if (CONCAT11(bVar22,*pbVar49) != 0) goto LAB_010e98b0;
        if (lVar35 == 0) {
          uVar28 = (*(code *)puVar31[3])(param_1);
          if ((int)uVar28 == 0) goto LAB_010ea454;
          pbVar51 = (byte *)*puVar31;
          lVar35 = puVar31[1];
        }
        pbVar49 = pbVar51 + 1;
        bVar22 = *pbVar51;
        lVar35 = lVar35 + -1;
        if (lVar35 == 0) {
          uVar28 = (*(code *)puVar31[3])(param_1);
          if ((int)uVar28 == 0) goto LAB_010ea454;
          pbVar49 = (byte *)*puVar31;
          lVar35 = puVar31[1];
        }
        pbVar51 = pbVar49 + 1;
        lVar35 = lVar35 + -1;
        if (CONCAT11(bVar22,*pbVar49) != 0) goto LAB_010e98b0;
        pbVar49 = pbVar51;
        if (lVar35 == 0) {
          uVar28 = (*(code *)puVar31[3])(param_1);
          if ((int)uVar28 == 0) goto LAB_010ea454;
          pbVar49 = (byte *)*puVar31;
          lVar35 = puVar31[1];
        }
        pbVar51 = pbVar49 + 1;
        lVar35 = lVar35 + -1;
        if (*pbVar49 != 0) goto LAB_010e98b0;
        if (lVar35 == 0) {
          uVar28 = (*(code *)puVar31[3])(param_1);
          if ((int)uVar28 == 0) goto LAB_010ea454;
          pbVar51 = (byte *)*puVar31;
          lVar35 = puVar31[1];
        }
        pbVar49 = pbVar51 + 1;
        bVar22 = *pbVar51;
        lVar35 = lVar35 + -1;
        if (lVar35 == 0) {
          uVar28 = (*(code *)puVar31[3])(param_1);
          if ((int)uVar28 == 0) goto LAB_010ea454;
          pbVar49 = (byte *)*puVar31;
          lVar35 = puVar31[1];
        }
        pbVar51 = pbVar49 + 1;
        lVar35 = lVar35 + -1;
        if (CONCAT11(bVar22,*pbVar49) != 1) goto LAB_010e98b0;
        if (lVar35 == 0) {
          uVar28 = (*(code *)puVar31[3])(param_1);
          if ((int)uVar28 == 0) goto LAB_010ea454;
          pbVar51 = (byte *)*puVar31;
          lVar35 = puVar31[1];
        }
        pbVar49 = pbVar51 + 1;
        bVar22 = *pbVar51;
        lVar35 = lVar35 + -1;
        if (lVar35 == 0) {
          uVar28 = (*(code *)puVar31[3])(param_1);
          if ((int)uVar28 == 0) goto LAB_010ea454;
          pbVar49 = (byte *)*puVar31;
          lVar35 = puVar31[1];
        }
        pbVar51 = pbVar49 + 1;
        lVar35 = lVar35 + -1;
        if (CONCAT11(bVar22,*pbVar49) != 0) goto LAB_010e98b0;
        pbVar49 = pbVar51;
        if (lVar35 == 0) {
          uVar28 = (*(code *)puVar31[3])(param_1);
          if ((int)uVar28 == 0) goto LAB_010ea454;
          pbVar49 = (byte *)*puVar31;
          lVar35 = puVar31[1];
        }
        pbVar51 = pbVar49 + 1;
        lVar35 = lVar35 + -1;
        if (*pbVar49 != 0) goto LAB_010e98b0;
        if (lVar35 == 0) {
          uVar28 = (*(code *)puVar31[3])(param_1);
          if ((int)uVar28 == 0) goto LAB_010ea454;
          pbVar51 = (byte *)*puVar31;
          lVar35 = puVar31[1];
        }
        pbVar49 = pbVar51 + 1;
        bVar22 = *pbVar51;
        lVar35 = lVar35 + -1;
        if (lVar35 == 0) {
          uVar28 = (*(code *)puVar31[3])(param_1);
          if ((int)uVar28 == 0) goto LAB_010ea454;
          pbVar49 = (byte *)*puVar31;
          lVar35 = puVar31[1];
        }
        pbVar51 = pbVar49 + 1;
        lVar35 = lVar35 + -1;
        if (CONCAT11(bVar22,*pbVar49) != 1) goto LAB_010e98b0;
        if (lVar35 == 0) {
          uVar28 = (*(code *)puVar31[3])(param_1);
          if ((int)uVar28 == 0) goto LAB_010ea454;
          pbVar51 = (byte *)*puVar31;
          lVar35 = puVar31[1];
        }
        pbVar49 = pbVar51 + 1;
        bVar22 = *pbVar51;
        lVar35 = lVar35 + -1;
        if (lVar35 == 0) {
          uVar28 = (*(code *)puVar31[3])(param_1);
          if ((int)uVar28 == 0) goto LAB_010ea454;
          pbVar49 = (byte *)*puVar31;
          lVar35 = puVar31[1];
        }
        pbVar51 = pbVar49 + 1;
        lVar35 = lVar35 + -1;
        if (CONCAT11(bVar22,*pbVar49) != 0) goto LAB_010e98b0;
      }
      *(undefined4 *)((long)param_1 + 0x18c) = 1;
      *puVar31 = pbVar51;
      puVar31[1] = lVar35;
      break;
    case 0xfe:
      pcVar34 = *(code **)(param_1[0x4d] + 0x28);
LAB_010e8d74:
      uVar28 = (*pcVar34)(param_1);
      iVar27 = (int)uVar28;
      goto joined_r0x010e8d7c;
    }
    *(undefined4 *)((long)param_1 + 0x23c) = 0;
  } while( true );
code_r0x010ea1f4:
  lVar35 = lVar35 + 1;
  if ((long)uVar52 <= lVar35) goto LAB_010ea29c;
  goto LAB_010ea1e4;
LAB_010ea1b4:
  do {
    if (bVar26) {
      uVar28 = (*(code *)puVar31[3])(param_1);
      if ((int)uVar28 == 0) goto LAB_010ea454;
      pbVar49 = (byte *)*puVar31;
      lVar32 = puVar31[1];
    }
    pbVar51 = pbVar49 + 1;
    uVar44 = (uint)*pbVar49;
    if (0 < (long)uVar52) {
      lVar35 = 0;
      uVar42 = uVar53 & 0xfffffffffffffffe;
      uVar41 = uVar52 - 1;
LAB_010ea1e4:
      if (*(uint *)param_1[lVar35 + 0x39] != (uint)*pbVar49) goto code_r0x010ea1f4;
      iVar27 = *(int *)param_1[0x39];
      if ((long)uVar52 < 2) goto LAB_010ea298;
      iVar38 = iVar27;
      if (uVar41 < 2) {
        uVar40 = 1;
        goto LAB_010ea278;
      }
      if ((uVar41 & 0xfffffffffffffffe) != 0) {
        uVar40 = uVar41 | 1;
        plVar43 = param_1 + 0x3b;
        do {
          plVar1 = plVar43 + -1;
          piVar4 = (int *)*plVar43;
          uVar42 = uVar42 - 2;
          plVar43 = plVar43 + 2;
          iVar2 = *(int *)*plVar1;
          if (*(int *)*plVar1 <= iVar27) {
            iVar2 = iVar27;
          }
          iVar3 = *piVar4;
          if (*piVar4 <= iVar38) {
            iVar3 = iVar38;
          }
          iVar27 = iVar2;
          iVar38 = iVar3;
        } while (uVar42 != 0);
        if (iVar2 <= iVar3) {
          iVar27 = iVar3;
        }
        iVar38 = iVar27;
        if (uVar41 != (uVar41 & 0xfffffffffffffffe)) {
LAB_010ea278:
          do {
            lVar35 = uVar40 + 0x39;
            uVar40 = uVar40 + 1;
            iVar27 = *(int *)param_1[lVar35];
            if (*(int *)param_1[lVar35] <= iVar38) {
              iVar27 = iVar38;
            }
            iVar38 = iVar27;
          } while (uVar52 != uVar40);
        }
LAB_010ea298:
        uVar44 = iVar27 + 1;
        goto LAB_010ea29c;
      }
      uVar40 = 1;
      goto LAB_010ea278;
    }
LAB_010ea29c:
    puVar33 = (uint *)param_1[0x26];
    lVar32 = lVar32 + -1;
    if (0 < (int)param_1[7]) {
      iVar27 = 0;
      do {
        if (uVar44 == *puVar33) goto LAB_010ea2e8;
        iVar27 = iVar27 + 1;
        puVar33 = puVar33 + 0x18;
      } while (iVar27 < (int)param_1[7]);
    }
    puVar36 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar36 + 5) = 4;
    *(uint *)((long)puVar36 + 0x2c) = uVar44;
    (*(code *)*puVar36)(param_1);
LAB_010ea2e8:
    param_1[uVar52 + 0x39] = (long)puVar33;
    if (lVar32 == 0) {
      uVar28 = (*(code *)puVar31[3])(param_1);
      if ((int)uVar28 == 0) goto LAB_010ea454;
      pbVar51 = (byte *)*puVar31;
      lVar32 = puVar31[1];
    }
    pbVar49 = pbVar51 + 1;
    bVar23 = *pbVar51;
    puVar33[5] = (uint)(bVar23 >> 4);
    puVar33[6] = bVar23 & 0xf;
    lVar35 = *param_1;
    *(uint *)(lVar35 + 0x2c) = *puVar33;
    *(uint *)(lVar35 + 0x30) = puVar33[5];
    uVar44 = puVar33[6];
    *(undefined4 *)(lVar35 + 0x28) = 0x6a;
    *(uint *)(lVar35 + 0x34) = uVar44;
    (**(code **)(lVar35 + 8))(param_1,1);
    uVar52 = uVar52 + 1;
    lVar32 = lVar32 + -1;
    bVar26 = lVar32 == 0;
    uVar53 = uVar53 + 1;
  } while ((long)uVar52 < (long)(ulong)bVar22);
  bVar25 = false;
joined_r0x010ea37c:
  if (bVar26) {
LAB_010ea380:
    uVar28 = (*(code *)puVar31[3])(param_1);
    if ((int)uVar28 == 0) goto LAB_010ea454;
    pbVar49 = (byte *)*puVar31;
    lVar32 = puVar31[1];
  }
LAB_010ea394:
  pbVar51 = pbVar49 + 1;
  lVar32 = lVar32 + -1;
  *(uint *)((long)param_1 + 0x21c) = (uint)*pbVar49;
  if (lVar32 == 0) {
    uVar28 = (*(code *)puVar31[3])(param_1);
    if ((int)uVar28 == 0) goto LAB_010ea454;
    pbVar51 = (byte *)*puVar31;
    lVar32 = puVar31[1];
  }
  pbVar49 = pbVar51 + 1;
  lVar32 = lVar32 + -1;
  *(uint *)(param_1 + 0x44) = (uint)*pbVar51;
  if (lVar32 == 0) {
    uVar28 = (*(code *)puVar31[3])(param_1);
    if ((int)uVar28 == 0) goto LAB_010ea454;
    pbVar49 = (byte *)*puVar31;
    lVar32 = puVar31[1];
  }
  bVar22 = *pbVar49;
  lVar47 = *param_1;
  *(uint *)((long)param_1 + 0x224) = (uint)(bVar22 >> 4);
  *(uint *)(param_1 + 0x45) = bVar22 & 0xf;
  *(undefined4 *)(lVar47 + 0x2c) = *(undefined4 *)((long)param_1 + 0x21c);
  *(int *)(lVar47 + 0x30) = (int)param_1[0x44];
  *(undefined4 *)(lVar47 + 0x34) = *(undefined4 *)((long)param_1 + 0x224);
  lVar35 = param_1[0x45];
  *(undefined4 *)(lVar47 + 0x28) = 0x6b;
  *(int *)(lVar47 + 0x38) = (int)lVar35;
  (**(code **)(lVar47 + 8))(param_1,1);
  *(undefined4 *)(param_1[0x4d] + 0x20) = 0;
  if (!bVar25) {
    *(int *)((long)param_1 + 0xac) = *(int *)((long)param_1 + 0xac) + 1;
  }
  *puVar31 = pbVar49 + 1;
  puVar31[1] = lVar32 + -1;
  *(undefined4 *)((long)param_1 + 0x23c) = 0;
  uVar28 = 1;
LAB_010ea454:
  if (*(long *)(lVar24 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar28);
}

