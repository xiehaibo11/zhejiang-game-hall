
void FUN_01171f7c(undefined1 param_1 [16],float param_2,float param_3,float param_4,long *param_5,
                 long *param_6)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  float fVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long **pplVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long **pplVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  int iVar21;
  int iVar22;
  int iVar24;
  ulong uVar23;
  int iVar25;
  undefined8 uVar26;
  long local_a8;
  long *local_68;
  
  lVar3 = *param_6;
  pcVar4 = (code *)param_6[1];
  lVar7 = param_6[2];
  lVar16 = *param_5;
  uVar14 = (ulong)*(int *)(lVar3 + 0x20);
  fVar5 = *(float *)(lVar3 + 0x24);
  fVar20 = (float)(**(code **)(lVar3 + 8))(lVar16);
  fVar20 = fVar20 / fVar5;
  param_3 = param_3 / fVar5;
  uVar26 = NEON_scvtf(CONCAT44((int)param_3,(int)fVar20),4);
  iVar21 = -(uint)(fVar20 == (float)uVar26);
  iVar24 = -(uint)(param_3 == (float)((ulong)uVar26 >> 0x20));
  uVar23 = CONCAT44(-(uint)(param_3 < 0.0),-(uint)(fVar20 < 0.0)) &
           CONCAT17(~(byte)((uint)iVar24 >> 0x18),
                    CONCAT16(~(byte)((uint)iVar24 >> 0x10),
                             CONCAT15(~(byte)((uint)iVar24 >> 8),
                                      CONCAT14(~(byte)iVar24,
                                               CONCAT13(~(byte)((uint)iVar21 >> 0x18),
                                                        CONCAT12(~(byte)((uint)iVar21 >> 0x10),
                                                                 CONCAT11(~(byte)((uint)iVar21 >> 8)
                                                                          ,~(byte)iVar21)))))));
  iVar21 = (int)uVar23 + (int)fVar20;
  iVar24 = (int)(uVar23 >> 0x20) + (int)param_3;
  if (iVar21 <= iVar24) {
    param_2 = param_2 / fVar5;
    param_4 = param_4 / fVar5;
    uVar26 = NEON_scvtf(CONCAT44((int)param_4,(int)param_2),4);
    iVar22 = -(uint)(param_2 == (float)uVar26);
    iVar25 = -(uint)(param_4 == (float)((ulong)uVar26 >> 0x20));
    lVar12 = *(long *)(lVar3 + 0x28);
    uVar23 = CONCAT44(-(uint)(param_4 < 0.0),-(uint)(param_2 < 0.0)) &
             CONCAT17(~(byte)((uint)iVar25 >> 0x18),
                      CONCAT16(~(byte)((uint)iVar25 >> 0x10),
                               CONCAT15(~(byte)((uint)iVar25 >> 8),
                                        CONCAT14(~(byte)iVar25,
                                                 CONCAT13(~(byte)((uint)iVar22 >> 0x18),
                                                          CONCAT12(~(byte)((uint)iVar22 >> 0x10),
                                                                   CONCAT11(~(byte)((uint)iVar22 >>
                                                                                   8),~(byte)iVar22)
                                                                  ))))));
    iVar22 = (int)uVar23 + (int)param_2;
    iVar25 = (int)(uVar23 >> 0x20) + (int)param_4;
    local_a8 = (long)iVar21;
    do {
      if (iVar22 <= iVar25) {
        lVar19 = (long)iVar22;
        do {
          uVar8 = lVar19 * 0x9e3779cd ^ local_a8 * 0x61c88639;
          uVar23 = 0;
          if (uVar14 != 0) {
            uVar23 = uVar8 / uVar14;
          }
          lVar18 = uVar8 - uVar23 * uVar14;
          local_68 = *(long **)(lVar12 + lVar18 * 8);
          plVar9 = local_68;
          plVar10 = local_68;
          if (local_68 == (long *)0x0) {
            *(int *)(param_5 + 1) = (int)param_5[1] + 1;
          }
          else {
            do {
              if ((long *)*plVar9 == param_5) goto LAB_0117220c;
              plVar9 = (long *)plVar9[1];
            } while (plVar9 != (long *)0x0);
            *(int *)(param_5 + 1) = (int)param_5[1] + 1;
            if (local_68 != (long *)0x0) {
LAB_011720d0:
              plVar10 = local_68;
              iVar21 = *(int *)(lVar3 + 0x50);
              plVar9 = local_68;
              do {
                plVar15 = (long *)*plVar9;
                lVar6 = *plVar15;
                if (lVar6 != lVar16 && *(int *)((long)plVar15 + 0xc) != iVar21) {
                  if (lVar6 == 0) goto LAB_01172118;
                  (*pcVar4)(lVar16,lVar6,0,lVar7);
                  iVar21 = *(int *)(lVar3 + 0x50);
                  *(int *)((long)plVar15 + 0xc) = iVar21;
                }
                plVar9 = (long *)plVar9[1];
                if (plVar9 == (long *)0x0) {
                  plVar9 = *(long **)(lVar3 + 0x38);
                  goto joined_r0x01172198;
                }
              } while( true );
            }
          }
LAB_01172194:
          plVar9 = *(long **)(lVar3 + 0x38);
joined_r0x01172198:
          if (plVar9 == (long *)0x0) {
            plVar9 = calloc(1,0x8000);
            cpArrayPush(*(undefined8 *)(lVar3 + 0x48),plVar9);
            lVar6 = *(long *)(lVar3 + 0x38);
            lVar13 = -0x7ff0;
            do {
              lVar2 = lVar13 + 0x10;
              *(long *)((long)plVar9 + lVar13 + 0x8008) = lVar6;
              lVar6 = (long)plVar9 + lVar13 + 0x8000;
              lVar13 = lVar2;
            } while (lVar2 != 0);
            *(long **)(lVar3 + 0x38) = plVar9 + 0xffe;
          }
          else {
            *(long *)(lVar3 + 0x38) = plVar9[1];
          }
          *plVar9 = (long)param_5;
          plVar9[1] = (long)plVar10;
          *(long **)(lVar12 + lVar18 * 8) = plVar9;
LAB_0117220c:
          bVar1 = lVar19 < iVar25;
          lVar19 = lVar19 + 1;
        } while (bVar1);
      }
      bVar1 = local_a8 < iVar24;
      local_a8 = local_a8 + 1;
    } while (bVar1);
  }
  *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x50) + 1;
  return;
LAB_01172118:
  if (plVar10 == (long *)0x0) goto LAB_01172194;
  pplVar17 = &local_68;
  do {
    while( true ) {
      plVar9 = (long *)*plVar10;
      pplVar11 = (long **)(plVar10 + 1);
      plVar15 = *pplVar11;
      if (*plVar9 != 0) break;
      *pplVar17 = plVar15;
      plVar10[1] = *(long *)(lVar3 + 0x38);
      *(long **)(lVar3 + 0x38) = plVar10;
      uVar26 = *(undefined8 *)(lVar3 + 0x40);
      iVar21 = (int)plVar9[1] + -1;
      *(int *)(plVar9 + 1) = iVar21;
      if (iVar21 == 0) {
        cpArrayPush(uVar26);
      }
      plVar10 = plVar15;
      if (plVar15 == (long *)0x0) goto LAB_01172178;
    }
    plVar10 = plVar15;
    pplVar17 = pplVar11;
  } while (plVar15 != (long *)0x0);
LAB_01172178:
  plVar10 = local_68;
  if (local_68 == (long *)0x0) goto LAB_01172194;
  goto LAB_011720d0;
}

