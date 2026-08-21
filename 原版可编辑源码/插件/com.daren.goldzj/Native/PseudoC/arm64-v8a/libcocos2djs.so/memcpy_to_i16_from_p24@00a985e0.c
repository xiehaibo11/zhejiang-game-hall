
void memcpy_to_i16_from_p24(undefined2 *param_1,long param_2,ulong param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  
  if (param_3 != 0) {
    lVar4 = param_2;
    uVar5 = param_3;
    if ((0x10 < param_3) &&
       (((undefined2 *)(param_2 + param_3 * 3) <= param_1 ||
        (param_1 + param_3 <= (undefined2 *)(param_2 + 1U))))) {
      uVar5 = 0x10;
      if ((param_3 & 0xf) != 0) {
        uVar5 = param_3 & 0xf;
      }
      puVar6 = (undefined8 *)(param_1 + 8);
      param_1 = param_1 + (param_3 - uVar5);
      lVar4 = param_2 + (param_3 - uVar5) * 3;
      puVar7 = (undefined2 *)(param_2 + 0x19);
      do {
        uVar2 = *puVar7;
        uVar8 = *(undefined1 *)((long)puVar7 + 3);
        uVar14 = *(undefined1 *)(puVar7 + 2);
        uVar9 = *(undefined1 *)(puVar7 + 3);
        uVar15 = *(undefined1 *)((long)puVar7 + 7);
        uVar10 = *(undefined1 *)((long)puVar7 + 9);
        uVar16 = *(undefined1 *)(puVar7 + 5);
        uVar1 = puVar7[6];
        uVar11 = *(undefined1 *)((long)puVar7 + 0xf);
        uVar17 = *(undefined1 *)(puVar7 + 8);
        uVar12 = *(undefined1 *)(puVar7 + 9);
        uVar18 = *(undefined1 *)((long)puVar7 + 0x13);
        uVar13 = *(undefined1 *)((long)puVar7 + 0x15);
        uVar19 = *(undefined1 *)(puVar7 + 0xb);
        uVar3 = puVar7[-0xc];
        uVar20 = *(undefined1 *)((long)puVar7 + -0x15);
        uVar23 = *(undefined1 *)(puVar7 + -10);
        uVar21 = *(undefined1 *)(puVar7 + -9);
        uVar24 = *(undefined1 *)((long)puVar7 + -0x11);
        uVar22 = *(undefined1 *)((long)puVar7 + -0xf);
        uVar25 = *(undefined1 *)(puVar7 + -7);
        param_3 = param_3 - 0x10;
        puVar6[-1] = CONCAT17(*(undefined1 *)(puVar7 + -1),
                              CONCAT16(*(undefined1 *)((long)puVar7 + -3),
                                       CONCAT15(*(undefined1 *)((long)puVar7 + -5),
                                                CONCAT14(*(undefined1 *)(puVar7 + -3),
                                                         CONCAT13(*(undefined1 *)(puVar7 + -4),
                                                                  CONCAT12(*(undefined1 *)
                                                                            ((long)puVar7 + -9),
                                                                           puVar7[-6]))))));
        puVar6[-2] = CONCAT17(uVar25,CONCAT16(uVar22,CONCAT15(uVar24,CONCAT14(uVar21,CONCAT13(uVar23
                                                  ,CONCAT12(uVar20,uVar3))))));
        puVar6[1] = CONCAT17(uVar19,CONCAT16(uVar13,CONCAT15(uVar18,CONCAT14(uVar12,CONCAT13(uVar17,
                                                  CONCAT12(uVar11,uVar1))))));
        *puVar6 = CONCAT17(uVar16,CONCAT16(uVar10,CONCAT15(uVar15,CONCAT14(uVar9,CONCAT13(uVar14,
                                                  CONCAT12(uVar8,uVar2))))));
        puVar6 = puVar6 + 4;
        puVar7 = puVar7 + 0x18;
      } while (uVar5 != param_3);
    }
    lVar4 = lVar4 + 2;
    do {
      puVar7 = (undefined2 *)(lVar4 + -1);
      uVar5 = uVar5 - 1;
      lVar4 = lVar4 + 3;
      *param_1 = *puVar7;
      param_1 = param_1 + 1;
    } while (uVar5 != 0);
  }
  return;
}

