
void FUN_01171d84(float param_1,float param_2,float param_3,float param_4,long param_5,long param_6)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  int iVar15;
  int iVar17;
  ulong uVar16;
  int iVar18;
  undefined8 uVar19;
  
  fVar4 = *(float *)(param_5 + 0x24);
  param_1 = param_1 / fVar4;
  param_3 = param_3 / fVar4;
  uVar19 = NEON_scvtf(CONCAT44((int)param_3,(int)param_1),4);
  iVar14 = -(uint)(param_1 == (float)uVar19);
  iVar17 = -(uint)(param_3 == (float)((ulong)uVar19 >> 0x20));
  uVar16 = CONCAT44(-(uint)(param_3 < 0.0),-(uint)(param_1 < 0.0)) &
           CONCAT17(~(byte)((uint)iVar17 >> 0x18),
                    CONCAT16(~(byte)((uint)iVar17 >> 0x10),
                             CONCAT15(~(byte)((uint)iVar17 >> 8),
                                      CONCAT14(~(byte)iVar17,
                                               CONCAT13(~(byte)((uint)iVar14 >> 0x18),
                                                        CONCAT12(~(byte)((uint)iVar14 >> 0x10),
                                                                 CONCAT11(~(byte)((uint)iVar14 >> 8)
                                                                          ,~(byte)iVar14)))))));
  iVar14 = (int)uVar16 + (int)param_1;
  iVar17 = (int)(uVar16 >> 0x20) + (int)param_3;
  if (iVar14 <= iVar17) {
    param_2 = param_2 / fVar4;
    param_4 = param_4 / fVar4;
    uVar19 = NEON_scvtf(CONCAT44((int)param_4,(int)param_2),4);
    iVar15 = -(uint)(param_2 == (float)uVar19);
    iVar18 = -(uint)(param_4 == (float)((ulong)uVar19 >> 0x20));
    uVar16 = CONCAT44(-(uint)(param_4 < 0.0),-(uint)(param_2 < 0.0)) &
             CONCAT17(~(byte)((uint)iVar18 >> 0x18),
                      CONCAT16(~(byte)((uint)iVar18 >> 0x10),
                               CONCAT15(~(byte)((uint)iVar18 >> 8),
                                        CONCAT14(~(byte)iVar18,
                                                 CONCAT13(~(byte)((uint)iVar15 >> 0x18),
                                                          CONCAT12(~(byte)((uint)iVar15 >> 0x10),
                                                                   CONCAT11(~(byte)((uint)iVar15 >>
                                                                                   8),~(byte)iVar15)
                                                                  ))))));
    iVar15 = (int)uVar16 + (int)param_2;
    iVar18 = (int)(uVar16 >> 0x20) + (int)param_4;
    if (iVar15 <= iVar18) {
      uVar16 = (ulong)*(int *)(param_5 + 0x20);
      lVar6 = (long)iVar14;
      do {
        lVar12 = (long)iVar15;
        do {
          lVar5 = *(long *)(param_5 + 0x28);
          uVar7 = lVar12 * 0x9e3779cd ^ lVar6 * 0x61c88639;
          uVar3 = 0;
          if (uVar16 != 0) {
            uVar3 = uVar7 / uVar16;
          }
          lVar11 = uVar7 - uVar3 * uVar16;
          plVar13 = *(long **)(lVar5 + lVar11 * 8);
          for (plVar8 = plVar13; plVar8 != (long *)0x0; plVar8 = (long *)plVar8[1]) {
            if (*plVar8 == param_6) goto LAB_01171f04;
          }
          *(int *)(param_6 + 8) = *(int *)(param_6 + 8) + 1;
          plVar8 = *(long **)(param_5 + 0x38);
          if (plVar8 == (long *)0x0) {
            plVar8 = calloc(1,0x8000);
            cpArrayPush(*(undefined8 *)(param_5 + 0x48),plVar8);
            plVar9 = plVar8 + 0xffe;
            lVar5 = *(long *)(param_5 + 0x38);
            lVar10 = -0x7ff0;
            do {
              lVar2 = lVar10 + 0x10;
              *(long *)((long)plVar8 + lVar10 + 0x8008) = lVar5;
              lVar5 = (long)plVar8 + lVar10 + 0x8000;
              lVar10 = lVar2;
            } while (lVar2 != 0);
            lVar5 = *(long *)(param_5 + 0x28);
          }
          else {
            plVar9 = (long *)plVar8[1];
          }
          *(long **)(param_5 + 0x38) = plVar9;
          *plVar8 = param_6;
          plVar8[1] = (long)plVar13;
          *(long **)(lVar5 + lVar11 * 8) = plVar8;
LAB_01171f04:
          bVar1 = lVar12 < iVar18;
          lVar12 = lVar12 + 1;
        } while (bVar1);
        bVar1 = lVar6 < iVar17;
        lVar6 = lVar6 + 1;
      } while (bVar1);
    }
  }
  return;
}

