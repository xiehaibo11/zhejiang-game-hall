
void FUN_01171800(float param_1,float param_2,float param_3,float param_4,long param_5,long param_6,
                 code *param_7,undefined8 param_8)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  float fVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  int iVar16;
  int iVar17;
  int iVar19;
  ulong uVar18;
  int iVar20;
  undefined8 uVar21;
  
  fVar4 = *(float *)(param_5 + 0x24);
  param_1 = param_1 / fVar4;
  param_3 = param_3 / fVar4;
  uVar21 = NEON_scvtf(CONCAT44((int)param_3,(int)param_1),4);
  iVar16 = -(uint)(param_1 == (float)uVar21);
  iVar19 = -(uint)(param_3 == (float)((ulong)uVar21 >> 0x20));
  uVar18 = CONCAT44(-(uint)(param_3 < 0.0),-(uint)(param_1 < 0.0)) &
           CONCAT17(~(byte)((uint)iVar19 >> 0x18),
                    CONCAT16(~(byte)((uint)iVar19 >> 0x10),
                             CONCAT15(~(byte)((uint)iVar19 >> 8),
                                      CONCAT14(~(byte)iVar19,
                                               CONCAT13(~(byte)((uint)iVar16 >> 0x18),
                                                        CONCAT12(~(byte)((uint)iVar16 >> 0x10),
                                                                 CONCAT11(~(byte)((uint)iVar16 >> 8)
                                                                          ,~(byte)iVar16)))))));
  iVar16 = (int)uVar18 + (int)param_1;
  iVar19 = (int)(uVar18 >> 0x20) + (int)param_3;
  if (iVar16 <= iVar19) {
    param_2 = param_2 / fVar4;
    param_4 = param_4 / fVar4;
    uVar21 = NEON_scvtf(CONCAT44((int)param_4,(int)param_2),4);
    iVar17 = -(uint)(param_2 == (float)uVar21);
    iVar20 = -(uint)(param_4 == (float)((ulong)uVar21 >> 0x20));
    uVar18 = CONCAT44(-(uint)(param_4 < 0.0),-(uint)(param_2 < 0.0)) &
             CONCAT17(~(byte)((uint)iVar20 >> 0x18),
                      CONCAT16(~(byte)((uint)iVar20 >> 0x10),
                               CONCAT15(~(byte)((uint)iVar20 >> 8),
                                        CONCAT14(~(byte)iVar20,
                                                 CONCAT13(~(byte)((uint)iVar17 >> 0x18),
                                                          CONCAT12(~(byte)((uint)iVar17 >> 0x10),
                                                                   CONCAT11(~(byte)((uint)iVar17 >>
                                                                                   8),~(byte)iVar17)
                                                                  ))))));
    iVar17 = (int)uVar18 + (int)param_2;
    iVar20 = (int)(uVar18 >> 0x20) + (int)param_4;
    if (iVar17 <= iVar20) {
      lVar10 = *(long *)(param_5 + 0x28);
      uVar18 = (ulong)*(int *)(param_5 + 0x20);
      lVar8 = (long)iVar16;
      do {
        lVar11 = (long)iVar17;
        do {
          uVar7 = lVar11 * 0x9e3779cd ^ lVar8 * 0x61c88639;
          uVar3 = 0;
          if (uVar18 != 0) {
            uVar3 = uVar7 / uVar18;
          }
          plVar2 = (long *)(lVar10 + (uVar7 - uVar3 * uVar18) * 8);
LAB_01171964:
          puVar13 = (undefined8 *)*plVar2;
          if (puVar13 != (undefined8 *)0x0) {
            iVar16 = *(int *)(param_5 + 0x50);
            do {
              plVar15 = (long *)*puVar13;
              lVar6 = *plVar15;
              if (lVar6 != param_6 && *(int *)((long)plVar15 + 0xc) != iVar16) {
                if (lVar6 == 0) goto LAB_011719b0;
                (*param_7)(param_6,lVar6,0,param_8);
                iVar16 = *(int *)(param_5 + 0x50);
                *(int *)((long)plVar15 + 0xc) = iVar16;
              }
              puVar13 = (undefined8 *)puVar13[1];
              if (puVar13 == (undefined8 *)0x0) break;
            } while( true );
          }
LAB_011719bc:
          bVar1 = lVar11 < iVar20;
          lVar11 = lVar11 + 1;
        } while (bVar1);
        bVar1 = lVar8 < iVar19;
        lVar8 = lVar8 + 1;
      } while (bVar1);
    }
  }
  *(int *)(param_5 + 0x50) = *(int *)(param_5 + 0x50) + 1;
  return;
LAB_011719b0:
  plVar15 = (long *)*plVar2;
  plVar12 = plVar2;
  if ((long *)*plVar2 == (long *)0x0) goto LAB_011719bc;
  do {
    while( true ) {
      plVar5 = (long *)*plVar15;
      plVar9 = plVar15 + 1;
      plVar14 = (long *)*plVar9;
      if (*plVar5 != 0) break;
      *plVar12 = (long)plVar14;
      plVar15[1] = *(long *)(param_5 + 0x38);
      *(long **)(param_5 + 0x38) = plVar15;
      uVar21 = *(undefined8 *)(param_5 + 0x40);
      iVar16 = (int)plVar5[1] + -1;
      *(int *)(plVar5 + 1) = iVar16;
      if (iVar16 == 0) {
        cpArrayPush(uVar21);
      }
      plVar15 = plVar14;
      if (plVar14 == (long *)0x0) goto LAB_01171964;
    }
    plVar15 = plVar14;
    plVar12 = plVar9;
  } while (plVar14 != (long *)0x0);
  goto LAB_01171964;
}

