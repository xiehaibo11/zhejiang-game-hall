
int vorbis_dsp_pcmout(long *param_1,long param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  
  iVar7 = (int)param_1[9];
  if ((iVar7 < 0) ||
     (iVar6 = *(int *)((long)param_1 + 0x4c) - iVar7,
     iVar6 == 0 || *(int *)((long)param_1 + 0x4c) < iVar7)) {
    iVar7 = 0;
  }
  else {
    iVar7 = iVar6;
    if (param_2 != 0) {
      lVar8 = *param_1;
      iVar7 = param_3;
      if (iVar6 <= param_3) {
        iVar7 = iVar6;
      }
      uVar5 = (ulong)*(uint *)(lVar8 + 4);
      if (0 < (int)*(uint *)(lVar8 + 4)) {
        puVar10 = *(ulong **)(lVar8 + 0x30);
        lVar9 = 0;
        do {
          uVar1 = *puVar10;
          uVar2 = puVar10[1];
          iVar6 = (int)(uVar1 >> 1);
          if (iVar6 < 0x200) {
            if (iVar6 < 0x80) {
              puVar3 = &DAT_0142af88;
              if (iVar6 != 0x20) {
                if (iVar6 == 0x40) {
                  puVar3 = &DAT_0142b008;
                }
                else {
LAB_00eb6900:
                  puVar3 = (undefined *)0x0;
                }
              }
            }
            else if (iVar6 == 0x80) {
              puVar3 = &DAT_0142b108;
            }
            else {
              if (iVar6 != 0x100) goto LAB_00eb6900;
              puVar3 = &DAT_0142b308;
            }
          }
          else if (iVar6 < 0x800) {
            if (iVar6 == 0x200) {
              puVar3 = &DAT_0142b708;
            }
            else {
              if (iVar6 != 0x400) goto LAB_00eb6900;
              puVar3 = &DAT_0142bf08;
            }
          }
          else if (iVar6 == 0x800) {
            puVar3 = &DAT_0142cf08;
          }
          else {
            if (iVar6 != 0x1000) goto LAB_00eb6900;
            puVar3 = &DAT_0142ef08;
          }
          iVar6 = (int)(uVar2 >> 1);
          if (iVar6 < 0x200) {
            if (iVar6 < 0x80) {
              puVar4 = &DAT_0142af88;
              if (iVar6 != 0x20) {
                if (iVar6 == 0x40) {
                  puVar4 = &DAT_0142b008;
                }
                else {
LAB_00eb6808:
                  puVar4 = (undefined *)0x0;
                }
              }
            }
            else if (iVar6 == 0x80) {
              puVar4 = &DAT_0142b108;
            }
            else {
              if (iVar6 != 0x100) goto LAB_00eb6808;
              puVar4 = &DAT_0142b308;
            }
          }
          else if (iVar6 < 0x800) {
            if (iVar6 == 0x200) {
              puVar4 = &DAT_0142b708;
            }
            else {
              if (iVar6 != 0x400) goto LAB_00eb6808;
              puVar4 = &DAT_0142bf08;
            }
          }
          else if (iVar6 == 0x800) {
            puVar4 = &DAT_0142cf08;
          }
          else {
            if (iVar6 != 0x1000) goto LAB_00eb6808;
            puVar4 = &DAT_0142ef08;
          }
          mdct_unroll_lap(uVar1,uVar2,(int)param_1[10],(int)param_1[0xb],
                          *(undefined8 *)(param_1[7] + lVar9 * 8),
                          *(undefined8 *)(param_1[8] + lVar9 * 8),puVar3,puVar4,param_2,(int)uVar5,
                          (int)param_1[9],(int)param_1[9] + iVar7);
          uVar5 = (ulong)*(int *)(lVar8 + 4);
          lVar9 = lVar9 + 1;
          param_2 = param_2 + 2;
        } while (lVar9 < (long)uVar5);
      }
    }
  }
  return iVar7;
}

