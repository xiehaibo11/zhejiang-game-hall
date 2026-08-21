
void jinit_merged_upsampler(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  
  puVar7 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x58);
  *(undefined8 **)(param_1 + 0x280) = puVar7;
  *(undefined4 *)(puVar7 + 2) = 0;
  *puVar7 = FUN_00d8fd68;
  iVar4 = *(int *)(param_1 + 0x90) * *(int *)(param_1 + 0x88);
  *(int *)((long)puVar7 + 0x4c) = iVar4;
  if (*(int *)(param_1 + 0x1a4) == 2) {
    puVar7[1] = FUN_00d8fd7c;
    puVar7[3] = FUN_00d8fe84;
    uVar8 = (**(code **)(*(long *)(param_1 + 8) + 8))(param_1,1,iVar4);
    puVar15 = *(undefined8 **)(param_1 + 0x280);
  }
  else {
    uVar8 = 0;
    puVar7[1] = FUN_00d9009c;
    puVar7[3] = FUN_00d900ec;
    puVar15 = puVar7;
  }
  puVar7[8] = uVar8;
  iVar4 = *(int *)(param_1 + 0x3c);
  uVar8 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x400);
  puVar15[4] = uVar8;
  uVar8 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x400);
  puVar15[5] = uVar8;
  uVar8 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x800);
  puVar15[6] = uVar8;
  plVar9 = (long *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x800);
  uVar2 = puVar15[4];
  uVar3 = puVar15[5];
  plVar10 = (long *)puVar15[6];
  puVar15[7] = plVar9;
  bVar5 = uVar3 + 0x400 <= uVar2;
  bVar6 = uVar2 + 0x400 <= uVar3;
  if (iVar4 == 7) {
    if ((bVar5 || bVar6) && (plVar9 + 0x100 <= plVar10 || plVar10 + 0x100 <= plVar9)) {
      lVar17 = -0x7f;
      lVar16 = -0x80;
      lVar12 = 0;
      do {
        *(ulong *)(uVar2 + lVar12) =
             CONCAT44((int)((ulong)(lVar17 * 0x2cdd3 + 0x8000) >> 0x10),
                      (int)((ulong)(lVar16 * 0x2cdd3 + 0x8000) >> 0x10));
        *(ulong *)(uVar3 + lVar12) =
             CONCAT44((int)((ulong)(lVar17 * 0x38b44 + 0x8000) >> 0x10),
                      (int)((ulong)(lVar16 * 0x38b44 + 0x8000) >> 0x10));
        plVar10[1] = lVar17 * -0x16da3;
        *plVar10 = lVar16 * -0x16da3;
        lVar12 = lVar12 + 8;
        plVar9[1] = lVar17 * -0xb033 + 0x8000;
        *plVar9 = lVar16 * -0xb033 + 0x8000;
        lVar16 = lVar16 + 2;
        lVar17 = lVar17 + 2;
        plVar9 = plVar9 + 2;
        plVar10 = plVar10 + 2;
      } while (lVar12 != 0x400);
    }
    else {
      lVar12 = -0x1666980;
      pcVar13 = "ratorBuilder20Int64AbsWithOverflowEv";
      puVar14 = &LAB_00b6d180;
      lVar16 = 0;
      lVar17 = -0x1c52200;
      do {
        lVar11 = lVar16 + 1;
        *(int *)(uVar2 + lVar16 * 4) = (int)((ulong)lVar12 >> 0x10);
        *(int *)(uVar3 + lVar16 * 4) = (int)((ulong)lVar17 >> 0x10);
        plVar10[lVar16] = (long)puVar14;
        plVar9[lVar16] = (long)pcVar13;
        pcVar13 = pcVar13 + -0xb033;
        puVar14 = puVar14 + -0x16da3;
        lVar12 = lVar12 + 0x2cdd3;
        lVar16 = lVar11;
        lVar17 = lVar17 + 0x38b44;
      } while (lVar11 != 0x100);
    }
  }
  else if ((bVar5 || bVar6) && (plVar9 + 0x100 <= plVar10 || plVar10 + 0x100 <= plVar9)) {
    lVar17 = -0x7f;
    lVar16 = -0x80;
    lVar12 = 0;
    do {
      *(ulong *)(uVar2 + lVar12) =
           CONCAT44((int)((ulong)(lVar17 * 0x166e9 + 0x8000) >> 0x10),
                    (int)((ulong)(lVar16 * 0x166e9 + 0x8000) >> 0x10));
      *(ulong *)(uVar3 + lVar12) =
           CONCAT44((int)((ulong)(lVar17 * 0x1c5a2 + 0x8000) >> 0x10),
                    (int)((ulong)(lVar16 * 0x1c5a2 + 0x8000) >> 0x10));
      plVar10[1] = lVar17 * -0xb6d2;
      *plVar10 = lVar16 * -0xb6d2;
      lVar12 = lVar12 + 8;
      plVar9[1] = lVar17 * -0x5819 + 0x8000;
      *plVar9 = lVar16 * -0x5819 + 0x8000;
      lVar16 = lVar16 + 2;
      lVar17 = lVar17 + 2;
      plVar9 = plVar9 + 2;
      plVar10 = plVar10 + 2;
    } while (lVar12 != 0x400);
  }
  else {
    lVar16 = -0xb2f480;
    lVar12 = 0x2c8c80;
    pcVar13 = "PNS1_12JSHeapBrokerEPPNS1_10ObjectDataENS0_6HandleINS0_15CallHandlerInfoEEE";
    lVar17 = 0;
    lVar11 = -0xe25100;
    do {
      lVar1 = lVar17 + 1;
      *(int *)(uVar2 + lVar17 * 4) = (int)((ulong)lVar16 >> 0x10);
      *(int *)(uVar3 + lVar17 * 4) = (int)((ulong)lVar11 >> 0x10);
      plVar10[lVar17] = (long)pcVar13;
      plVar9[lVar17] = lVar12;
      lVar12 = lVar12 + -0x5819;
      pcVar13 = pcVar13 + -0xb6d2;
      lVar16 = lVar16 + 0x166e9;
      lVar17 = lVar1;
      lVar11 = lVar11 + 0x1c5a2;
    } while (lVar1 != 0x100);
  }
  return;
}

