
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
  long lVar13;
  long lVar14;
  char *pcVar15;
  long lVar16;
  undefined8 *puVar17;
  
  puVar7 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x58);
  *(undefined8 **)(param_1 + 0x280) = puVar7;
  *(undefined4 *)(puVar7 + 2) = 0;
  *puVar7 = FUN_010ec210;
  iVar4 = *(int *)(param_1 + 0x90) * *(int *)(param_1 + 0x88);
  *(int *)((long)puVar7 + 0x4c) = iVar4;
  if (*(int *)(param_1 + 0x1a4) == 2) {
    puVar7[1] = FUN_010ec224;
    puVar7[3] = FUN_010ec32c;
    uVar8 = (**(code **)(*(long *)(param_1 + 8) + 8))(param_1,1,iVar4);
    puVar17 = *(undefined8 **)(param_1 + 0x280);
  }
  else {
    uVar8 = 0;
    puVar7[1] = FUN_010ec544;
    puVar7[3] = FUN_010ec594;
    puVar17 = puVar7;
  }
  puVar7[8] = uVar8;
  iVar4 = *(int *)(param_1 + 0x3c);
  uVar8 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x400);
  puVar17[4] = uVar8;
  uVar8 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x400);
  puVar17[5] = uVar8;
  uVar8 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x800);
  puVar17[6] = uVar8;
  plVar9 = (long *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x800);
  uVar2 = puVar17[4];
  uVar3 = puVar17[5];
  plVar10 = (long *)puVar17[6];
  puVar17[7] = plVar9;
  bVar5 = uVar3 + 0x400 <= uVar2;
  bVar6 = uVar2 + 0x400 <= uVar3;
  if (iVar4 == 7) {
    if ((bVar5 || bVar6) && (plVar9 + 0x100 <= plVar10 || plVar10 + 0x100 <= plVar9)) {
      lVar13 = -0x7f;
      lVar16 = -0x80;
      lVar14 = 0;
      do {
        *(ulong *)(uVar2 + lVar14) =
             CONCAT44((int)((ulong)(lVar13 * 0x2cdd3 + 0x8000) >> 0x10),
                      (int)((ulong)(lVar16 * 0x2cdd3 + 0x8000) >> 0x10));
        *(ulong *)(uVar3 + lVar14) =
             CONCAT44((int)((ulong)(lVar13 * 0x38b44 + 0x8000) >> 0x10),
                      (int)((ulong)(lVar16 * 0x38b44 + 0x8000) >> 0x10));
        plVar10[1] = lVar13 * -0x16da3;
        *plVar10 = lVar16 * -0x16da3;
        lVar14 = lVar14 + 8;
        plVar9[1] = lVar13 * -0xb033 + 0x8000;
        *plVar9 = lVar16 * -0xb033 + 0x8000;
        lVar16 = lVar16 + 2;
        lVar13 = lVar13 + 2;
        plVar9 = plVar9 + 2;
        plVar10 = plVar10 + 2;
      } while (lVar14 != 0x400);
    }
    else {
      lVar13 = -0x1666980;
      lVar14 = 0x589980;
      lVar16 = 0xb6d180;
      lVar11 = 0;
      lVar12 = -0x1c52200;
      do {
        lVar1 = lVar11 + 1;
        *(int *)(uVar2 + lVar11 * 4) = (int)((ulong)lVar13 >> 0x10);
        *(int *)(uVar3 + lVar11 * 4) = (int)((ulong)lVar12 >> 0x10);
        plVar10[lVar11] = lVar16;
        plVar9[lVar11] = lVar14;
        lVar14 = lVar14 + -0xb033;
        lVar16 = lVar16 + -0x16da3;
        lVar13 = lVar13 + 0x2cdd3;
        lVar11 = lVar1;
        lVar12 = lVar12 + 0x38b44;
      } while (lVar1 != 0x100);
    }
  }
  else if ((bVar5 || bVar6) && (plVar9 + 0x100 <= plVar10 || plVar10 + 0x100 <= plVar9)) {
    lVar13 = -0x7f;
    lVar16 = -0x80;
    lVar14 = 0;
    do {
      *(ulong *)(uVar2 + lVar14) =
           CONCAT44((int)((ulong)(lVar13 * 0x166e9 + 0x8000) >> 0x10),
                    (int)((ulong)(lVar16 * 0x166e9 + 0x8000) >> 0x10));
      *(ulong *)(uVar3 + lVar14) =
           CONCAT44((int)((ulong)(lVar13 * 0x1c5a2 + 0x8000) >> 0x10),
                    (int)((ulong)(lVar16 * 0x1c5a2 + 0x8000) >> 0x10));
      plVar10[1] = lVar13 * -0xb6d2;
      *plVar10 = lVar16 * -0xb6d2;
      lVar14 = lVar14 + 8;
      plVar9[1] = lVar13 * -0x5819 + 0x8000;
      *plVar9 = lVar16 * -0x5819 + 0x8000;
      lVar16 = lVar16 + 2;
      lVar13 = lVar13 + 2;
      plVar9 = plVar9 + 2;
      plVar10 = plVar10 + 2;
    } while (lVar14 != 0x400);
  }
  else {
    lVar16 = -0xb2f480;
    pcVar15 = "ayerColor_initWithColorP9lua_State";
    lVar14 = 0x5b6900;
    lVar13 = 0;
    lVar11 = -0xe25100;
    do {
      lVar12 = lVar13 + 1;
      *(int *)(uVar2 + lVar13 * 4) = (int)((ulong)lVar16 >> 0x10);
      *(int *)(uVar3 + lVar13 * 4) = (int)((ulong)lVar11 >> 0x10);
      plVar10[lVar13] = lVar14;
      plVar9[lVar13] = (long)pcVar15;
      pcVar15 = pcVar15 + -0x5819;
      lVar14 = lVar14 + -0xb6d2;
      lVar16 = lVar16 + 0x166e9;
      lVar13 = lVar12;
      lVar11 = lVar11 + 0x1c5a2;
    } while (lVar12 != 0x100);
  }
  return;
}

