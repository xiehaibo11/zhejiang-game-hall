
long * FUN_00c1b0c8(long *param_1,long param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 *puVar8;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar9;
  
  uVar3 = *(uint *)(param_2 + 0x10);
  if ((int)param_3 < 1) {
    return param_1;
  }
  if (uVar3 == 0) {
    return param_1;
  }
  uVar11 = (long)(int)param_3 * (ulong)uVar3;
  if (0x7fffff00 < uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfac84(param_1[3]);
  }
  puVar14 = (undefined8 *)*param_1;
  if ((uint)((int)param_1[1] - (int)puVar14) < (uint)uVar11) {
    puVar14 = (undefined8 *)FUN_00c1a4a8();
  }
  if (uVar3 != 1) {
    puVar2 = (undefined1 *)(param_2 + (ulong)uVar3 + 0x18);
    puVar1 = (undefined1 *)(param_2 + 0x18);
    puVar15 = puVar2 + (1 - (long)(param_2 + 0x19U));
    puVar9 = puVar1;
    puVar10 = puVar14;
    if (puVar2 < (undefined1 *)(param_2 + 0x19U)) {
      puVar15 = (undefined1 *)0x1;
    }
    do {
      do {
        puVar8 = puVar9 + 1;
        puVar12 = (undefined8 *)((long)puVar14 + 1);
        *(undefined1 *)puVar14 = *puVar9;
        puVar9 = puVar8;
        puVar14 = puVar12;
      } while (puVar8 < puVar2);
      param_3 = param_3 - 1;
      puVar14 = (undefined8 *)((long)puVar10 + (long)puVar15);
      puVar9 = puVar1;
      puVar10 = puVar14;
    } while (param_3 != 0);
    *param_1 = (long)puVar12;
    return param_1;
  }
  iVar5 = param_3 - 1;
  uVar3 = (param_3 - 0x10 >> 4) + 1;
  uVar4 = *(undefined1 *)(param_2 + 0x18);
  puVar10 = puVar14;
  iVar6 = iVar5;
  if (0xe < iVar5) {
    uVar13 = 0;
    do {
      puVar10[1] = CONCAT17(uVar4,CONCAT16(uVar4,CONCAT15(uVar4,CONCAT14(uVar4,CONCAT13(uVar4,
                                                  CONCAT12(uVar4,CONCAT11(uVar4,uVar4)))))));
      *puVar10 = CONCAT17(uVar4,CONCAT16(uVar4,CONCAT15(uVar4,CONCAT14(uVar4,CONCAT13(uVar4,CONCAT12
                                                  (uVar4,CONCAT11(uVar4,uVar4)))))));
      uVar13 = uVar13 + 1;
      puVar10 = puVar10 + 2;
    } while (uVar13 < uVar3);
    bVar7 = param_3 == uVar3 * 0x10;
    param_3 = param_3 + uVar3 * -0x10;
    if (bVar7) goto LAB_00c1b28c;
    puVar10 = (undefined8 *)((long)puVar14 + (ulong)(uVar3 * 0x10));
    iVar6 = param_3 - 1;
  }
  *(undefined1 *)puVar10 = uVar4;
  if (((((iVar6 != 0) && (*(undefined1 *)((long)puVar10 + 1) = uVar4, param_3 != 2)) &&
       (*(undefined1 *)((long)puVar10 + 2) = uVar4, param_3 != 3)) &&
      ((((*(undefined1 *)((long)puVar10 + 3) = uVar4, param_3 != 4 &&
         (*(undefined1 *)((long)puVar10 + 4) = uVar4, param_3 != 5)) &&
        ((*(undefined1 *)((long)puVar10 + 5) = uVar4, param_3 != 6 &&
         ((*(undefined1 *)((long)puVar10 + 6) = uVar4, param_3 != 7 &&
          (*(undefined1 *)((long)puVar10 + 7) = uVar4, param_3 != 8)))))) &&
       (*(undefined1 *)(puVar10 + 1) = uVar4, param_3 != 9)))) &&
     ((((*(undefined1 *)((long)puVar10 + 9) = uVar4, param_3 != 10 &&
        (*(undefined1 *)((long)puVar10 + 10) = uVar4, param_3 != 0xb)) &&
       (*(undefined1 *)((long)puVar10 + 0xb) = uVar4, param_3 != 0xc)) &&
      ((*(undefined1 *)((long)puVar10 + 0xc) = uVar4, param_3 != 0xd &&
       (*(undefined1 *)((long)puVar10 + 0xd) = uVar4, param_3 != 0xe)))))) {
    *(undefined1 *)((long)puVar10 + 0xe) = uVar4;
  }
LAB_00c1b28c:
  *param_1 = (long)((long)puVar14 + (long)iVar5 + 1);
  return param_1;
}

