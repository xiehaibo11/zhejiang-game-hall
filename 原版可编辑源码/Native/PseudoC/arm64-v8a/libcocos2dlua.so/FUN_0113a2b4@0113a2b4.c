
void FUN_0113a2b4(long param_1,ushort *param_2,ulong param_3)

{
  ulong uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  int iVar10;
  int iVar11;
  ushort *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  uint *puVar16;
  uint *puVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  double dVar22;
  double dVar23;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  
  iVar10 = *(int *)(param_1 + 4);
  puVar16 = *(uint **)(param_1 + 0x10);
  if (iVar10 == 0) {
    if (0 < (long)param_3) {
      uVar1 = 0xfffffffffffffffe;
      if (-2 < (long)~param_3) {
        uVar1 = ~param_3;
      }
      uVar1 = uVar1 + param_3 + 2;
      if ((3 < uVar1) && (uVar14 = uVar1 & 0xfffffffffffffffc, uVar14 != 0)) {
        param_3 = param_3 - uVar14;
        puVar12 = param_2 + uVar14 * 3;
        uVar15 = uVar14;
        puVar17 = puVar16;
        do {
          uVar2 = *param_2;
          uVar18 = param_2[1];
          uVar20 = param_2[2];
          uVar3 = param_2[3];
          uVar19 = param_2[4];
          uVar21 = param_2[5];
          puVar4 = param_2 + 6;
          puVar5 = param_2 + 7;
          puVar6 = param_2 + 8;
          puVar7 = param_2 + 9;
          puVar8 = param_2 + 10;
          puVar9 = param_2 + 0xb;
          param_2 = param_2 + 0xc;
          uVar15 = uVar15 - 4;
          *(ulong *)(puVar17 + 2) =
               CONCAT17((char)(*puVar7 >> 8),
                        CONCAT16((char)*puVar7,
                                 CONCAT15((char)(uint3)((uint)((short)*puVar8 * 0x19a) >> 0xf),
                                          CONCAT14((char)((uint)((short)*puVar9 * 0x19a) >> 0xf),
                                                   CONCAT13((char)(*puVar4 >> 8),
                                                            CONCAT12((char)*puVar4,
                                                                     CONCAT11((char)(uint3)((uint)((
                                                  short)*puVar5 * 0x19a) >> 0xf),
                                                  (char)((uint)((short)*puVar6 * 0x19a) >> 0xf))))))
                                ));
          *(ulong *)puVar17 =
               CONCAT17((char)(uVar3 >> 8),
                        CONCAT16((char)uVar3,
                                 CONCAT15((char)(uint3)((uint)((short)uVar19 * 0x19a) >> 0xf),
                                          CONCAT14((char)((uint)((short)uVar21 * 0x19a) >> 0xf),
                                                   CONCAT13((char)(uVar2 >> 8),
                                                            CONCAT12((char)uVar2,
                                                                     CONCAT11((char)(uint3)((uint)((
                                                  short)uVar18 * 0x19a) >> 0xf),
                                                  (char)((uint)((short)uVar20 * 0x19a) >> 0xf)))))))
                       );
          puVar17 = puVar17 + 4;
        } while (uVar15 != 0);
        puVar16 = puVar16 + uVar14;
        param_2 = puVar12;
        if (uVar1 == uVar14) {
          return;
        }
      }
      lVar13 = param_3 + 1;
      do {
        lVar13 = lVar13 + -1;
        *puVar16 = (uint)*param_2 << 0x10 | (uint)((short)param_2[1] * 0x19a) >> 7 & 0xff00 |
                   (uint)((short)param_2[2] * 0x19a) >> 0xf & 0xff;
        param_2 = param_2 + 3;
        puVar16 = puVar16 + 1;
      } while (1 < lVar13);
    }
  }
  else if (0 < (long)param_3) {
    while( true ) {
      uVar2 = *param_2;
      dVar22 = (double)(int)(short)param_2[1] * 0.01251220703125;
      iVar11 = 0;
      if (iVar10 != 0) {
        iVar10 = rand();
        iVar11 = *(int *)(param_1 + 4);
        dVar22 = dVar22 + (double)iVar10 * 4.656612875245797e-10 + -0.5;
      }
      dVar23 = (double)(int)(short)param_2[2] * 0.01251220703125;
      if (iVar11 != 0) {
        iVar10 = rand();
        dVar23 = dVar23 + (double)iVar10 * 4.656612875245797e-10 + -0.5;
      }
      *puVar16 = ((int)dVar22 & 0xffU) << 8 | (uint)uVar2 << 0x10 | (int)dVar23 & 0xffU;
      if ((long)param_3 < 2) break;
      iVar10 = *(int *)(param_1 + 4);
      param_3 = param_3 - 1;
      puVar16 = puVar16 + 1;
      param_2 = param_2 + 3;
    }
  }
  return;
}

