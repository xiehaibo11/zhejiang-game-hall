
void FUN_01140d04(long param_1,int *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  ulong *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  ulong local_a0;
  ulong local_98;
  undefined8 *local_90;
  long local_88;
  undefined8 *local_80;
  long local_78;
  long local_70;
  long local_68;
  
  lVar17 = *(long *)(param_1 + 0xb20);
  iVar4 = *param_2;
  iVar5 = param_2[1];
  *(undefined1 *)(lVar17 + 0x27) = 0x81;
  *(undefined1 *)(lVar17 + 0x47) = 0x81;
  *(undefined1 *)(lVar17 + 0x67) = 0x81;
  *(undefined1 *)(lVar17 + 0x87) = 0x81;
  *(undefined1 *)(lVar17 + 0xa7) = 0x81;
  *(undefined1 *)(lVar17 + 199) = 0x81;
  *(undefined1 *)(lVar17 + 0xe7) = 0x81;
  *(undefined1 *)(lVar17 + 0x107) = 0x81;
  *(undefined1 *)(lVar17 + 0x127) = 0x81;
  *(undefined1 *)(lVar17 + 0x147) = 0x81;
  *(undefined1 *)(lVar17 + 0x167) = 0x81;
  *(undefined1 *)(lVar17 + 0x187) = 0x81;
  *(undefined1 *)(lVar17 + 0x1a7) = 0x81;
  *(undefined1 *)(lVar17 + 0x1c7) = 0x81;
  *(undefined1 *)(lVar17 + 0x1e7) = 0x81;
  *(undefined1 *)(lVar17 + 0x207) = 0x81;
  *(undefined1 *)(lVar17 + 0x247) = 0x81;
  *(undefined1 *)(lVar17 + 599) = 0x81;
  *(undefined1 *)(lVar17 + 0x267) = 0x81;
  *(undefined1 *)(lVar17 + 0x277) = 0x81;
  *(undefined1 *)(lVar17 + 0x287) = 0x81;
  *(undefined1 *)(lVar17 + 0x297) = 0x81;
  *(undefined1 *)(lVar17 + 0x2a7) = 0x81;
  *(undefined1 *)(lVar17 + 0x2b7) = 0x81;
  *(undefined1 *)(lVar17 + 0x2c7) = 0x81;
  *(undefined1 *)(lVar17 + 0x2d7) = 0x81;
  *(undefined1 *)(lVar17 + 0x2e7) = 0x81;
  *(undefined1 *)(lVar17 + 0x2f7) = 0x81;
  *(undefined1 *)(lVar17 + 0x307) = 0x81;
  *(undefined1 *)(lVar17 + 0x317) = 0x81;
  *(undefined1 *)(lVar17 + 0x327) = 0x81;
  *(undefined1 *)(lVar17 + 0x337) = 0x81;
  if (iVar5 < 1) {
    *(undefined8 *)(lVar17 + 0x14) = 0x7f7f7f7f7f7f7f7f;
    *(undefined8 *)(lVar17 + 0xf) = 0x7f7f7f7f7f7f7f7f;
    *(undefined8 *)(lVar17 + 7) = 0x7f7f7f7f7f7f7f7f;
    *(undefined1 *)(lVar17 + 0x22f) = 0x7f;
    *(undefined8 *)(lVar17 + 0x227) = 0x7f7f7f7f7f7f7f7f;
    *(undefined1 *)(lVar17 + 0x23f) = 0x7f;
    *(undefined8 *)(lVar17 + 0x237) = 0x7f7f7f7f7f7f7f7f;
  }
  else {
    *(undefined1 *)(lVar17 + 0x237) = 0x81;
    *(undefined1 *)(lVar17 + 0x227) = 0x81;
    *(undefined1 *)(lVar17 + 7) = 0x81;
  }
  if (0 < *(int *)(param_1 + 0x198)) {
    piVar1 = (int *)(lVar17 + 0x18);
    local_70 = lVar17 + 0x248;
    local_78 = lVar17 + 600;
    local_80 = (undefined8 *)(lVar17 + 0x208);
    local_98 = 5;
    if (iVar5 == 0) {
      local_98 = 6;
    }
    lVar19 = 0;
    puVar2 = (undefined8 *)(lVar17 + 0x28);
    local_a0 = (ulong)(iVar5 == 0) << 2;
    do {
      local_68 = *(long *)(param_2 + 6);
      if (0 < lVar19) {
        *(undefined4 *)(lVar17 + 4) = *(undefined4 *)(lVar17 + 0x14);
        *(undefined4 *)(lVar17 + 0x24) = *(undefined4 *)(lVar17 + 0x34);
        *(undefined4 *)(lVar17 + 0x44) = *(undefined4 *)(lVar17 + 0x54);
        *(undefined4 *)(lVar17 + 100) = *(undefined4 *)(lVar17 + 0x74);
        *(undefined4 *)(lVar17 + 0x84) = *(undefined4 *)(lVar17 + 0x94);
        *(undefined4 *)(lVar17 + 0xa4) = *(undefined4 *)(lVar17 + 0xb4);
        *(undefined4 *)(lVar17 + 0xc4) = *(undefined4 *)(lVar17 + 0xd4);
        *(undefined4 *)(lVar17 + 0xe4) = *(undefined4 *)(lVar17 + 0xf4);
        *(undefined4 *)(lVar17 + 0x104) = *(undefined4 *)(lVar17 + 0x114);
        *(undefined4 *)(lVar17 + 0x124) = *(undefined4 *)(lVar17 + 0x134);
        *(undefined4 *)(lVar17 + 0x144) = *(undefined4 *)(lVar17 + 0x154);
        *(undefined4 *)(lVar17 + 0x164) = *(undefined4 *)(lVar17 + 0x174);
        *(undefined4 *)(lVar17 + 0x184) = *(undefined4 *)(lVar17 + 0x194);
        *(undefined4 *)(lVar17 + 0x1a4) = *(undefined4 *)(lVar17 + 0x1b4);
        *(undefined4 *)(lVar17 + 0x1c4) = *(undefined4 *)(lVar17 + 0x1d4);
        *(undefined4 *)(lVar17 + 0x1e4) = *(undefined4 *)(lVar17 + 500);
        *(undefined4 *)(lVar17 + 0x204) = *(undefined4 *)(lVar17 + 0x214);
        *(undefined4 *)(lVar17 + 0x224) = *(undefined4 *)(lVar17 + 0x22c);
        *(undefined4 *)(lVar17 + 0x234) = *(undefined4 *)(lVar17 + 0x23c);
        *(undefined4 *)(lVar17 + 0x244) = *(undefined4 *)(lVar17 + 0x24c);
        *(undefined4 *)(lVar17 + 0x254) = *(undefined4 *)(lVar17 + 0x25c);
        *(undefined4 *)(lVar17 + 0x264) = *(undefined4 *)(lVar17 + 0x26c);
        *(undefined4 *)(lVar17 + 0x274) = *(undefined4 *)(lVar17 + 0x27c);
        *(undefined4 *)(lVar17 + 0x284) = *(undefined4 *)(lVar17 + 0x28c);
        *(undefined4 *)(lVar17 + 0x294) = *(undefined4 *)(lVar17 + 0x29c);
        *(undefined4 *)(lVar17 + 0x2a4) = *(undefined4 *)(lVar17 + 0x2ac);
        *(undefined4 *)(lVar17 + 0x2b4) = *(undefined4 *)(lVar17 + 700);
        *(undefined4 *)(lVar17 + 0x2c4) = *(undefined4 *)(lVar17 + 0x2cc);
        *(undefined4 *)(lVar17 + 0x2d4) = *(undefined4 *)(lVar17 + 0x2dc);
        *(undefined4 *)(lVar17 + 0x2e4) = *(undefined4 *)(lVar17 + 0x2ec);
        *(undefined4 *)(lVar17 + 0x2f4) = *(undefined4 *)(lVar17 + 0x2fc);
        *(undefined4 *)(lVar17 + 0x304) = *(undefined4 *)(lVar17 + 0x30c);
        *(undefined4 *)(lVar17 + 0x314) = *(undefined4 *)(lVar17 + 0x31c);
        *(undefined4 *)(lVar17 + 0x324) = *(undefined4 *)(lVar17 + 0x32c);
        *(undefined4 *)(lVar17 + 0x334) = *(undefined4 *)(lVar17 + 0x33c);
      }
      local_88 = *(long *)(param_1 + 0xb08);
      uVar14 = *(uint *)(local_68 + lVar19 * 800 + 0x314);
      local_90 = (undefined8 *)(local_88 + lVar19 * 0x20);
      if (0 < iVar5) {
        uVar20 = *local_90;
        *(undefined8 *)(lVar17 + 0x10) = local_90[1];
        *(undefined8 *)(lVar17 + 8) = uVar20;
        *(undefined8 *)(lVar17 + 0x228) = local_90[2];
        *(undefined8 *)(lVar17 + 0x238) = local_90[3];
      }
      if (*(char *)(local_68 + lVar19 * 800 + 0x300) == '\0') {
        bVar6 = *(byte *)(local_68 + lVar19 * 800 + 0x301);
        puVar9 = &local_98;
        if (lVar19 != 0) {
          puVar9 = &local_a0;
        }
        uVar3 = *puVar9;
        if (bVar6 != 0) {
          uVar3 = (ulong)bVar6;
        }
        (**(code **)(&DAT_01796058 + uVar3 * 8))(puVar2);
        if (uVar14 != 0) {
          lVar15 = 0;
          lVar18 = local_68 + lVar19 * 800;
          do {
            uVar8 = uVar14 >> 0x1e;
            lVar16 = (long)puVar2 + (long)*(int *)((long)&DAT_014985e8 + lVar15);
            if (uVar8 == 1) {
              puVar11 = &DAT_017960b0;
LAB_01141124:
              (*(code *)*puVar11)(lVar18,lVar16);
            }
            else {
              if (uVar8 == 2) {
                puVar11 = &DAT_01795ff0;
                goto LAB_01141124;
              }
              if (uVar8 == 3) {
                (*DAT_017960b8)(lVar18,lVar16,0);
              }
            }
            lVar15 = lVar15 + 4;
            uVar14 = uVar14 << 2;
            lVar18 = lVar18 + 0x20;
          } while (lVar15 != 0x40);
        }
      }
      else {
        if (iVar5 < 1) {
          iVar10 = *piVar1;
        }
        else if (lVar19 < (long)*(int *)(param_1 + 0x198) + -1) {
          iVar10 = *(int *)(local_90 + 4);
          *piVar1 = iVar10;
        }
        else {
          bVar6 = *(byte *)(local_88 + lVar19 * 0x20 + 0xf);
          *piVar1 = (uint)bVar6 * 0x1010101;
          iVar10 = CONCAT22(CONCAT11(bVar6,bVar6),CONCAT11(bVar6,bVar6));
        }
        lVar16 = local_68 + lVar19 * 800;
        lVar18 = 0;
        lVar15 = lVar16 + 0x301;
        *(int *)(lVar17 + 0x198) = iVar10;
        *(int *)(lVar17 + 0x118) = iVar10;
        *(int *)(lVar17 + 0x98) = iVar10;
        do {
          lVar13 = (long)puVar2 + (long)(int)(&DAT_014985e8)[lVar18];
          (**(code **)(&DAT_01796008 + (ulong)*(byte *)(lVar15 + lVar18) * 8))(lVar13);
          uVar8 = uVar14 >> 0x1e;
                    /* try { // try from 011411b4 to 0124129b has its CatchHandler @ 011411b4
                       catch() { ... } // from try @ 011411b4 with catch @ 011411b4
                       catch() { ... } // from try @ 011412bc with catch @ 011411b4 */
          if (uVar8 == 1) {
            puVar11 = &DAT_017960b0;
LAB_011411fc:
            (*(code *)*puVar11)(lVar16,lVar13);
          }
          else {
            if (uVar8 == 2) {
              puVar11 = &DAT_01795ff0;
              goto LAB_011411fc;
            }
            if (uVar8 == 3) {
              (*DAT_017960b8)(lVar16,lVar13,0);
            }
          }
          lVar18 = lVar18 + 1;
          uVar14 = uVar14 << 2;
          lVar16 = lVar16 + 0x20;
        } while (lVar18 != 0x10);
      }
      lVar15 = local_68 + lVar19 * 800;
      puVar9 = &local_98;
      if (lVar19 != 0) {
        puVar9 = &local_a0;
      }
      uVar14 = *(uint *)(lVar15 + 0x318);
      uVar3 = *puVar9;
      if (*(byte *)(lVar15 + 0x311) != 0) {
        uVar3 = (ulong)*(byte *)(lVar15 + 0x311);
      }
      (**(code **)(&DAT_017960c8 + uVar3 * 8))(local_70);
      (**(code **)(&DAT_017960c8 + uVar3 * 8))(local_78);
      if ((uVar14 & 0xff) != 0) {
        if ((uVar14 & 0xaa) == 0) {
          puVar11 = &DAT_017960a8;
        }
        else {
          puVar11 = &DAT_01795fc8;
        }
                    /* try { // try from 0114129c to 012412bb has its CatchHandler @ 01141308 */
        (*(code *)*puVar11)(lVar15 + 0x200,local_70);
      }
      if ((uVar14 >> 8 & 0xff) != 0) {
                    /* try { // try from 011412bc to 0124131b has its CatchHandler @ 011411b4 */
        if ((uVar14 >> 8 & 0xaa) == 0) {
          puVar11 = &DAT_017960a8;
        }
        else {
          puVar11 = &DAT_01795fc8;
        }
        (*(code *)*puVar11)(local_68 + lVar19 * 800 + 0x280,local_78);
      }
      if (iVar5 < *(int *)(param_1 + 0x19c) + -1) {
        uVar20 = *local_80;
                    /* catch() { ... } // from try @ 0114129c with catch @ 01141308 */
        local_90[1] = local_80[1];
        *local_90 = uVar20;
        local_88 = local_88 + lVar19 * 0x20;
        *(undefined8 *)(local_88 + 0x10) = *(undefined8 *)(lVar17 + 0x328);
        *(undefined8 *)(local_88 + 0x18) = *(undefined8 *)(lVar17 + 0x338);
      }
      uVar20 = *puVar2;
      iVar10 = *(int *)(param_1 + 0xb44);
      puVar12 = (undefined8 *)
                (*(long *)(param_1 + 0xb28) + (long)(int)lVar19 * 0x10 +
                (long)(iVar4 << 4) * (long)*(int *)(param_1 + 0xb40));
      lVar18 = *(long *)(param_1 + 0xb30);
      lVar16 = *(long *)(param_1 + 0xb38);
      puVar12[1] = *(undefined8 *)(lVar17 + 0x30);
      *puVar12 = uVar20;
      uVar20 = *(undefined8 *)(lVar17 + 0x48);
      puVar11 = (undefined8 *)((long)puVar12 + (long)*(int *)(param_1 + 0xb40));
      puVar11[1] = *(undefined8 *)(lVar17 + 0x50);
      *puVar11 = uVar20;
      uVar20 = *(undefined8 *)(lVar17 + 0x68);
      puVar11 = (undefined8 *)((long)puVar12 + (long)*(int *)(param_1 + 0xb40) * 2);
      puVar11[1] = *(undefined8 *)(lVar17 + 0x70);
      *puVar11 = uVar20;
      uVar20 = *(undefined8 *)(lVar17 + 0x88);
      puVar11 = (undefined8 *)((long)puVar12 + (long)*(int *)(param_1 + 0xb40) * 3);
      puVar11[1] = *(undefined8 *)(lVar17 + 0x90);
      *puVar11 = uVar20;
      uVar20 = *(undefined8 *)(lVar17 + 0xa8);
      puVar11 = (undefined8 *)((long)puVar12 + (long)*(int *)(param_1 + 0xb40) * 4);
      puVar11[1] = *(undefined8 *)(lVar17 + 0xb0);
      *puVar11 = uVar20;
      uVar20 = *(undefined8 *)(lVar17 + 200);
      puVar11 = (undefined8 *)((long)puVar12 + (long)*(int *)(param_1 + 0xb40) * 5);
      puVar11[1] = *(undefined8 *)(lVar17 + 0xd0);
      *puVar11 = uVar20;
      uVar20 = *(undefined8 *)(lVar17 + 0xe8);
      puVar11 = (undefined8 *)((long)puVar12 + (long)*(int *)(param_1 + 0xb40) * 6);
      puVar11[1] = *(undefined8 *)(lVar17 + 0xf0);
      *puVar11 = uVar20;
      uVar20 = *(undefined8 *)(lVar17 + 0x108);
      puVar11 = (undefined8 *)((long)puVar12 + (long)*(int *)(param_1 + 0xb40) * 7);
      puVar11[1] = *(undefined8 *)(lVar17 + 0x110);
      *puVar11 = uVar20;
      iVar7 = *(int *)(param_1 + 0xb40);
      uVar20 = *(undefined8 *)(lVar17 + 0x128);
      (puVar12 + iVar7)[1] = *(undefined8 *)(lVar17 + 0x130);
      puVar12[iVar7] = uVar20;
      uVar20 = *(undefined8 *)(lVar17 + 0x148);
      puVar11 = (undefined8 *)((long)puVar12 + (long)*(int *)(param_1 + 0xb40) * 9);
      puVar11[1] = *(undefined8 *)(lVar17 + 0x150);
      *puVar11 = uVar20;
      uVar20 = *(undefined8 *)(lVar17 + 0x168);
      puVar11 = (undefined8 *)((long)puVar12 + (long)*(int *)(param_1 + 0xb40) * 10);
      puVar11[1] = *(undefined8 *)(lVar17 + 0x170);
      *puVar11 = uVar20;
      uVar20 = *(undefined8 *)(lVar17 + 0x188);
      puVar11 = (undefined8 *)((long)puVar12 + (long)*(int *)(param_1 + 0xb40) * 0xb);
      puVar11[1] = *(undefined8 *)(lVar17 + 400);
      *puVar11 = uVar20;
      uVar20 = *(undefined8 *)(lVar17 + 0x1a8);
      puVar11 = (undefined8 *)((long)puVar12 + (long)*(int *)(param_1 + 0xb40) * 0xc);
      puVar11[1] = *(undefined8 *)(lVar17 + 0x1b0);
      *puVar11 = uVar20;
      uVar20 = *(undefined8 *)(lVar17 + 0x1c8);
      puVar11 = (undefined8 *)((long)puVar12 + (long)*(int *)(param_1 + 0xb40) * 0xd);
      puVar11[1] = *(undefined8 *)(lVar17 + 0x1d0);
      *puVar11 = uVar20;
      uVar20 = *(undefined8 *)(lVar17 + 0x1e8);
      puVar11 = (undefined8 *)((long)puVar12 + (long)*(int *)(param_1 + 0xb40) * 0xe);
      puVar11[1] = *(undefined8 *)(lVar17 + 0x1f0);
      *puVar11 = uVar20;
      uVar20 = *local_80;
      puVar12 = (undefined8 *)((long)puVar12 + (long)*(int *)(param_1 + 0xb40) * 0xf);
      puVar12[1] = local_80[1];
      *puVar12 = uVar20;
      lVar13 = (long)(int)lVar19 * 8;
      lVar15 = (long)(iVar4 << 3) * (long)iVar10;
      puVar11 = (undefined8 *)(lVar18 + lVar13 + lVar15);
      *puVar11 = *(undefined8 *)(lVar17 + 0x248);
      puVar12 = (undefined8 *)(lVar16 + lVar13 + lVar15);
      lVar19 = lVar19 + 1;
      *puVar12 = *(undefined8 *)(lVar17 + 600);
      *(undefined8 *)((long)puVar11 + (long)*(int *)(param_1 + 0xb44)) =
           *(undefined8 *)(lVar17 + 0x268);
      *(undefined8 *)((long)puVar12 + (long)*(int *)(param_1 + 0xb44)) =
           *(undefined8 *)(lVar17 + 0x278);
      *(undefined8 *)((long)puVar11 + (long)*(int *)(param_1 + 0xb44) * 2) =
           *(undefined8 *)(lVar17 + 0x288);
      *(undefined8 *)((long)puVar12 + (long)*(int *)(param_1 + 0xb44) * 2) =
           *(undefined8 *)(lVar17 + 0x298);
      *(undefined8 *)((long)puVar11 + (long)*(int *)(param_1 + 0xb44) * 3) =
           *(undefined8 *)(lVar17 + 0x2a8);
      *(undefined8 *)((long)puVar12 + (long)*(int *)(param_1 + 0xb44) * 3) =
           *(undefined8 *)(lVar17 + 0x2b8);
      *(undefined8 *)((long)puVar11 + (long)*(int *)(param_1 + 0xb44) * 4) =
           *(undefined8 *)(lVar17 + 0x2c8);
      *(undefined8 *)((long)puVar12 + (long)*(int *)(param_1 + 0xb44) * 4) =
           *(undefined8 *)(lVar17 + 0x2d8);
      *(undefined8 *)((long)puVar11 + (long)*(int *)(param_1 + 0xb44) * 5) =
           *(undefined8 *)(lVar17 + 0x2e8);
      *(undefined8 *)((long)puVar12 + (long)*(int *)(param_1 + 0xb44) * 5) =
           *(undefined8 *)(lVar17 + 0x2f8);
      *(undefined8 *)((long)puVar11 + (long)*(int *)(param_1 + 0xb44) * 6) =
           *(undefined8 *)(lVar17 + 0x308);
      *(undefined8 *)((long)puVar12 + (long)*(int *)(param_1 + 0xb44) * 6) =
           *(undefined8 *)(lVar17 + 0x318);
      *(undefined8 *)((long)puVar11 + (long)*(int *)(param_1 + 0xb44) * 7) =
           *(undefined8 *)(lVar17 + 0x328);
      *(undefined8 *)((long)puVar12 + (long)*(int *)(param_1 + 0xb44) * 7) =
           *(undefined8 *)(lVar17 + 0x338);
    } while (lVar19 < *(int *)(param_1 + 0x198));
  }
  return;
}

