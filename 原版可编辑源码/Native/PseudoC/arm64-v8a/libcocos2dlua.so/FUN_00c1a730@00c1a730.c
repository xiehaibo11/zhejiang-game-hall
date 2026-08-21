
long * FUN_00c1a730(long *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  ulong uVar7;
  undefined1 (*pauVar8) [16];
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 auVar14 [16];
  
  puVar11 = (undefined8 *)*param_1;
  uVar5 = *(uint *)(param_2 + 0x10);
  if ((uint)((int)param_1[1] - (int)puVar11) < uVar5) {
    puVar11 = (undefined8 *)FUN_00c1a4a8(param_1,uVar5);
  }
  uVar7 = (ulong)uVar5;
  puVar4 = (undefined8 *)((long)puVar11 + uVar7);
  puVar12 = (undefined1 *)(param_2 + uVar7 + 0x17);
  if (puVar11 < puVar4) {
    puVar1 = (undefined1 *)((long)puVar11 + 1);
    puVar2 = (undefined1 *)((long)puVar4 + (1 - (long)puVar1));
    puVar9 = puVar11;
    if ((puVar1 + param_2 + ((uVar7 + 0x17) - (long)puVar4) <
         (undefined1 *)((long)puVar11 + (long)puVar2) &&
         puVar11 < (undefined8 *)(param_2 + uVar7 + 0x18)) || (puVar2 < (undefined1 *)0x10)) {
      do {
        puVar10 = (undefined8 *)((long)puVar9 + 1);
        *(undefined1 *)puVar9 = *puVar12;
        puVar9 = puVar10;
        puVar12 = puVar12 + -1;
      } while (puVar10 != puVar4);
    }
    else {
      uVar3 = ((ulong)((long)puVar4 + (-0xf - (long)puVar1)) >> 4) + 1;
      pauVar8 = (undefined1 (*) [16])(param_2 + uVar7 + 8);
      puVar13 = (undefined1 *)(uVar3 * 0x10);
      uVar7 = 0;
      do {
        auVar6 = *pauVar8;
        uVar7 = uVar7 + 1;
        pauVar8 = pauVar8 + -1;
        auVar14._8_8_ = 0x1020304050607;
        auVar14._0_8_ = 0x8090a0b0c0d0e0f;
        auVar14 = a64_TBL(ZEXT816(0),auVar6,auVar14);
        puVar9[1] = auVar14._8_8_;
        *puVar9 = auVar14._0_8_;
        puVar9 = puVar9 + 2;
      } while (uVar7 < uVar3);
      puVar12 = puVar12 + uVar3 * -0x10;
      if (((((puVar2 != puVar13) &&
            (*(undefined1 *)(puVar11 + uVar3 * 2) = *puVar12,
            (undefined8 *)((long)puVar11 + (long)(puVar13 + 1)) < puVar4)) &&
           (*(undefined1 *)((long)puVar11 + (long)(puVar13 + 1)) = puVar12[-1],
           (undefined8 *)((long)puVar11 + (long)(puVar13 + 2)) < puVar4)) &&
          (((*(undefined1 *)((long)puVar11 + (long)(puVar13 + 2)) = puVar12[-2],
            (undefined8 *)((long)puVar11 + (long)(puVar13 + 3)) < puVar4 &&
            (*(undefined1 *)((long)puVar11 + (long)(puVar13 + 3)) = puVar12[-3],
            (undefined8 *)((long)puVar11 + (long)(puVar13 + 4)) < puVar4)) &&
           ((*(undefined1 *)((long)puVar11 + (long)(puVar13 + 4)) = puVar12[-4],
            (undefined8 *)((long)puVar11 + (long)(puVar13 + 5)) < puVar4 &&
            ((*(undefined1 *)((long)puVar11 + (long)(puVar13 + 5)) = puVar12[-5],
             (undefined8 *)((long)puVar11 + (long)(puVar13 + 6)) < puVar4 &&
             (*(undefined1 *)((long)puVar11 + (long)(puVar13 + 6)) = puVar12[-6],
             (undefined8 *)((long)puVar11 + (long)(puVar13 + 7)) < puVar4)))))))) &&
         ((*(undefined1 *)((long)puVar11 + (long)(puVar13 + 7)) = puVar12[-7],
          puVar11 + uVar3 * 2 + 1 < puVar4 &&
          (((((*(undefined1 *)(puVar11 + uVar3 * 2 + 1) = puVar12[-8],
              (undefined8 *)((long)puVar11 + (long)(puVar13 + 9)) < puVar4 &&
              (*(undefined1 *)((long)puVar11 + (long)(puVar13 + 9)) = puVar12[-9],
              (undefined8 *)((long)puVar11 + (long)(puVar13 + 10)) < puVar4)) &&
             (*(undefined1 *)((long)puVar11 + (long)(puVar13 + 10)) = puVar12[-10],
             (undefined8 *)((long)puVar11 + (long)(puVar13 + 0xb)) < puVar4)) &&
            ((*(undefined1 *)((long)puVar11 + (long)(puVar13 + 0xb)) = puVar12[-0xb],
             (undefined8 *)((long)puVar11 + (long)(puVar13 + 0xc)) < puVar4 &&
             (*(undefined1 *)((long)puVar11 + (long)(puVar13 + 0xc)) = puVar12[-0xc],
             (undefined8 *)((long)puVar11 + (long)(puVar13 + 0xd)) < puVar4)))) &&
           (*(undefined1 *)((long)puVar11 + (long)(puVar13 + 0xd)) = puVar12[-0xd],
           (undefined8 *)((long)puVar11 + (long)(puVar13 + 0xe)) < puVar4)))))) {
        *(undefined1 *)((long)puVar11 + (long)(puVar13 + 0xe)) = puVar12[-0xe];
      }
    }
    puVar11 = (undefined8 *)((long)puVar11 + (long)((long)puVar4 + (1 - (long)puVar1)));
  }
  *param_1 = (long)puVar11;
  return param_1;
}

