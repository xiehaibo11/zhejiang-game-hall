
void memcpy_to_i16_from_q8_23(ushort *param_1,int *param_2,ulong param_3)

{
  ushort uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  ushort *puVar10;
  int *piVar11;
  ulong uVar12;
  ulong uVar13;
  char cVar14;
  char cVar15;
  byte bVar16;
  byte bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  if (param_3 != 0) {
    if (3 < param_3) {
      uVar12 = param_3 & 0xfffffffffffffffc;
      puVar10 = param_1;
      piVar11 = param_2;
      uVar13 = uVar12;
      do {
        uVar7 = *(undefined8 *)(piVar11 + 2);
        uVar6 = *(undefined8 *)piVar11;
        uVar13 = uVar13 - 4;
        uVar4 = (uint)((ulong)uVar6 >> 0x20);
        uVar5 = (uint)((ulong)uVar7 >> 0x20);
        cVar14 = (char)((ulong)uVar6 >> 0x18) >> 7;
        cVar15 = (char)((long)uVar6 >> 0x3f);
        bVar16 = (char)((ulong)uVar7 >> 0x18) >> 7;
        bVar17 = (byte)((long)uVar7 >> 0x3f);
        auVar18._0_4_ =
             -(uint)((int)(uint)uVar6 >> 0x17 ==
                    CONCAT13(cVar14,CONCAT12(cVar14,CONCAT11(cVar14,cVar14))));
        auVar18._4_4_ =
             -(uint)((int)uVar4 >> 0x17 == CONCAT13(cVar15,CONCAT12(cVar15,CONCAT11(cVar15,cVar15)))
                    );
        auVar18._8_4_ =
             -(uint)((int)(uint)uVar7 >> 0x17 ==
                    CONCAT13(bVar16,CONCAT12(bVar16,CONCAT11(bVar16,bVar16))));
        auVar18._12_4_ =
             -(uint)((int)uVar5 >> 0x17 == CONCAT13(bVar17,CONCAT12(bVar17,CONCAT11(bVar17,bVar17)))
                    );
        auVar3[6] = 0;
        auVar3._0_6_ = CONCAT15(cVar15,CONCAT14(cVar15,(uint)(ushort)(CONCAT11(cVar14,cVar14) ^
                                                                     0x7fff))) ^ 0x7fff00000000;
        auVar3[7] = cVar15;
        auVar3[8] = bVar16 ^ 0xff;
        auVar3[9] = bVar16 ^ 0x7f;
        auVar3[10] = bVar16;
        auVar3[0xb] = bVar16;
        auVar3[0xc] = bVar17 ^ 0xff;
        auVar3[0xd] = bVar17 ^ 0x7f;
        auVar3[0xe] = bVar17;
        auVar3[0xf] = bVar17;
        auVar8._4_4_ = uVar4 >> 8;
        auVar8._0_4_ = (uint)uVar6 >> 8;
        auVar8._8_4_ = (uint)uVar7 >> 8;
        auVar8._12_4_ = uVar5 >> 8;
        auVar19[6] = 0;
        auVar19._0_6_ =
             CONCAT15(cVar15,CONCAT14(cVar15,(uint)(ushort)(CONCAT11(cVar14,cVar14) ^ 0x7fff))) ^
             0x7fff00000000;
        auVar19[7] = cVar15;
        auVar19[8] = bVar16 ^ 0xff;
        auVar19[9] = bVar16 ^ 0x7f;
        auVar19[10] = bVar16;
        auVar19[0xb] = bVar16;
        auVar19[0xc] = bVar17 ^ 0xff;
        auVar19[0xd] = bVar17 ^ 0x7f;
        auVar19[0xe] = bVar17;
        auVar19[0xf] = bVar17;
        auVar19 = auVar19 ^ (auVar3 ^ auVar8) & auVar18;
        *(ulong *)puVar10 =
             CONCAT17(auVar19[0xd],
                      CONCAT16(auVar19[0xc],
                               CONCAT15(auVar19[9],
                                        CONCAT14(auVar19[8],
                                                 CONCAT13(auVar19[5],
                                                          CONCAT12(auVar19[4],auVar19._0_2_))))));
        puVar10 = puVar10 + 4;
        piVar11 = piVar11 + 4;
      } while (uVar13 != 0);
      bVar9 = uVar12 == param_3;
      param_3 = param_3 - uVar12;
      param_2 = param_2 + uVar12;
      param_1 = param_1 + uVar12;
      if (bVar9) {
        return;
      }
    }
    do {
      iVar2 = *param_2;
      param_3 = param_3 - 1;
      uVar1 = (ushort)((uint)iVar2 >> 8);
      if (iVar2 >> 0x1f != iVar2 >> 0x17) {
        uVar1 = (ushort)(iVar2 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar1;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    } while (param_3 != 0);
  }
  return;
}

