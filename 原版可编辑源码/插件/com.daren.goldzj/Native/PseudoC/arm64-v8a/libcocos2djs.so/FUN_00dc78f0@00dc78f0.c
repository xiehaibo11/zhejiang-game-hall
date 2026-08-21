
void FUN_00dc78f0(long param_1,uint *param_2,undefined8 param_3,undefined8 param_4,uint param_5,
                 int param_6,int param_7,int param_8,byte *param_9)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  
  if (param_6 != 0) {
    uVar7 = (ulong)*(ushort *)(param_1 + 0x1e);
    lVar1 = (ulong)(param_5 - 8 & 0xfffffff8) + 8;
    do {
      uVar6 = param_5;
      if (7 < param_5) {
        puVar9 = param_2 + lVar1;
        pbVar5 = param_9 + 3;
        do {
          uVar4 = ~(uint)*pbVar5 & 0xff;
          pbVar2 = pbVar5 + uVar7;
          *param_2 = ((~(uint)pbVar5[-3] & 0xff) * uVar4) / 0xff |
                     ((uint)((ulong)((~(uint)pbVar5[-2] & 0xff) * uVar4) * 0x80808081 >> 0x20) &
                     0x7fff80) << 1 |
                     ((uint)((ulong)((~(uint)pbVar5[-1] & 0xff) * uVar4) * 0x80808081 >> 0x20) &
                     0x7f80) << 9 | 0xff000000;
          pbVar3 = pbVar2 + uVar7;
          uVar4 = ~(uint)*pbVar2 & 0xff;
          param_2[1] = ((~(uint)pbVar2[-3] & 0xff) * uVar4) / 0xff |
                       ((uint)((ulong)((~(uint)pbVar2[-2] & 0xff) * uVar4) * 0x80808081 >> 0x20) &
                       0x7fff80) << 1 |
                       ((uint)((ulong)((~(uint)pbVar2[-1] & 0xff) * uVar4) * 0x80808081 >> 0x20) &
                       0x7f80) << 9 | 0xff000000;
          pbVar2 = pbVar3 + uVar7;
          uVar4 = ~(uint)*pbVar3 & 0xff;
          param_2[2] = ((~(uint)pbVar3[-3] & 0xff) * uVar4) / 0xff |
                       ((uint)((ulong)((~(uint)pbVar3[-2] & 0xff) * uVar4) * 0x80808081 >> 0x20) &
                       0x7fff80) << 1 |
                       ((uint)((ulong)((~(uint)pbVar3[-1] & 0xff) * uVar4) * 0x80808081 >> 0x20) &
                       0x7f80) << 9 | 0xff000000;
          pbVar3 = pbVar2 + uVar7;
          uVar4 = ~(uint)*pbVar2 & 0xff;
          param_2[3] = ((~(uint)pbVar2[-3] & 0xff) * uVar4) / 0xff |
                       ((uint)((ulong)((~(uint)pbVar2[-2] & 0xff) * uVar4) * 0x80808081 >> 0x20) &
                       0x7fff80) << 1 |
                       ((uint)((ulong)((~(uint)pbVar2[-1] & 0xff) * uVar4) * 0x80808081 >> 0x20) &
                       0x7f80) << 9 | 0xff000000;
          pbVar2 = pbVar3 + uVar7;
          uVar4 = ~(uint)*pbVar3 & 0xff;
          param_2[4] = ((~(uint)pbVar3[-3] & 0xff) * uVar4) / 0xff |
                       ((uint)((ulong)((~(uint)pbVar3[-2] & 0xff) * uVar4) * 0x80808081 >> 0x20) &
                       0x7fff80) << 1 |
                       ((uint)((ulong)((~(uint)pbVar3[-1] & 0xff) * uVar4) * 0x80808081 >> 0x20) &
                       0x7f80) << 9 | 0xff000000;
          pbVar3 = pbVar2 + uVar7;
          uVar4 = ~(uint)*pbVar2 & 0xff;
          param_2[5] = ((~(uint)pbVar2[-3] & 0xff) * uVar4) / 0xff |
                       ((uint)((ulong)((~(uint)pbVar2[-2] & 0xff) * uVar4) * 0x80808081 >> 0x20) &
                       0x7fff80) << 1 |
                       ((uint)((ulong)((~(uint)pbVar2[-1] & 0xff) * uVar4) * 0x80808081 >> 0x20) &
                       0x7f80) << 9 | 0xff000000;
          pbVar2 = pbVar3 + uVar7;
          uVar4 = ~(uint)*pbVar3 & 0xff;
          param_2[6] = ((~(uint)pbVar3[-3] & 0xff) * uVar4) / 0xff |
                       ((uint)((ulong)((~(uint)pbVar3[-2] & 0xff) * uVar4) * 0x80808081 >> 0x20) &
                       0x7fff80) << 1 |
                       ((uint)((ulong)((~(uint)pbVar3[-1] & 0xff) * uVar4) * 0x80808081 >> 0x20) &
                       0x7f80) << 9 | 0xff000000;
          uVar4 = ~(uint)*pbVar2 & 0xff;
          uVar6 = uVar6 - 8;
          pbVar5 = pbVar5 + uVar7 * 8;
          param_2[7] = ((~(uint)pbVar2[-3] & 0xff) * uVar4) / 0xff |
                       ((uint)((ulong)((~(uint)pbVar2[-2] & 0xff) * uVar4) * 0x80808081 >> 0x20) &
                       0x7fff80) << 1 |
                       ((uint)((ulong)((~(uint)pbVar2[-1] & 0xff) * uVar4) * 0x80808081 >> 0x20) &
                       0x7f80) << 9 | 0xff000000;
          param_2 = param_2 + 8;
        } while (7 < uVar6);
        param_9 = param_9 + lVar1 * uVar7;
        param_2 = puVar9;
        uVar6 = param_5 - 8 & 7;
      }
      param_6 = param_6 + -1;
      puVar9 = param_2;
      puVar8 = param_2;
      switch(uVar6) {
      case 7:
        uVar6 = ~(uint)param_9[3] & 0xff;
        puVar8 = param_2 + 1;
        *param_2 = ((~(uint)*param_9 & 0xff) * uVar6) / 0xff |
                   ((uint)((ulong)((~(uint)param_9[1] & 0xff) * uVar6) * 0x80808081 >> 0x20) &
                   0x7fff80) << 1 |
                   ((uint)((ulong)((~(uint)param_9[2] & 0xff) * uVar6) * 0x80808081 >> 0x20) &
                   0x7f80) << 9 | 0xff000000;
        param_9 = param_9 + uVar7;
      case 6:
        uVar6 = ~(uint)param_9[3] & 0xff;
        puVar9 = puVar8 + 1;
        *puVar8 = ((~(uint)*param_9 & 0xff) * uVar6) / 0xff |
                  ((uint)((ulong)((~(uint)param_9[1] & 0xff) * uVar6) * 0x80808081 >> 0x20) &
                  0x7fff80) << 1 |
                  ((uint)((ulong)((~(uint)param_9[2] & 0xff) * uVar6) * 0x80808081 >> 0x20) & 0x7f80
                  ) << 9 | 0xff000000;
        param_9 = param_9 + uVar7;
      case 5:
        uVar6 = ~(uint)param_9[3] & 0xff;
        param_2 = puVar9 + 1;
        *puVar9 = ((~(uint)*param_9 & 0xff) * uVar6) / 0xff |
                  ((uint)((ulong)((~(uint)param_9[1] & 0xff) * uVar6) * 0x80808081 >> 0x20) &
                  0x7fff80) << 1 |
                  ((uint)((ulong)((~(uint)param_9[2] & 0xff) * uVar6) * 0x80808081 >> 0x20) & 0x7f80
                  ) << 9 | 0xff000000;
        param_9 = param_9 + uVar7;
      case 4:
        uVar6 = ~(uint)param_9[3] & 0xff;
        puVar9 = param_2 + 1;
        *param_2 = ((~(uint)*param_9 & 0xff) * uVar6) / 0xff |
                   ((uint)((ulong)((~(uint)param_9[1] & 0xff) * uVar6) * 0x80808081 >> 0x20) &
                   0x7fff80) << 1 |
                   ((uint)((ulong)((~(uint)param_9[2] & 0xff) * uVar6) * 0x80808081 >> 0x20) &
                   0x7f80) << 9 | 0xff000000;
        param_9 = param_9 + uVar7;
      case 3:
        uVar6 = ~(uint)param_9[3] & 0xff;
        param_2 = puVar9 + 1;
        *puVar9 = ((~(uint)*param_9 & 0xff) * uVar6) / 0xff |
                  ((uint)((ulong)((~(uint)param_9[1] & 0xff) * uVar6) * 0x80808081 >> 0x20) &
                  0x7fff80) << 1 |
                  ((uint)((ulong)((~(uint)param_9[2] & 0xff) * uVar6) * 0x80808081 >> 0x20) & 0x7f80
                  ) << 9 | 0xff000000;
        param_9 = param_9 + uVar7;
      case 2:
        uVar6 = ~(uint)param_9[3] & 0xff;
        puVar9 = param_2 + 1;
        *param_2 = ((~(uint)*param_9 & 0xff) * uVar6) / 0xff |
                   ((uint)((ulong)((~(uint)param_9[1] & 0xff) * uVar6) * 0x80808081 >> 0x20) &
                   0x7fff80) << 1 |
                   ((uint)((ulong)((~(uint)param_9[2] & 0xff) * uVar6) * 0x80808081 >> 0x20) &
                   0x7f80) << 9 | 0xff000000;
        param_9 = param_9 + uVar7;
      case 1:
        uVar6 = ~(uint)param_9[3] & 0xff;
        param_2 = puVar9 + 1;
        *puVar9 = ((~(uint)*param_9 & 0xff) * uVar6) / 0xff |
                  ((uint)((ulong)((~(uint)param_9[1] & 0xff) * uVar6) * 0x80808081 >> 0x20) &
                  0x7fff80) << 1 |
                  ((uint)((ulong)((~(uint)param_9[2] & 0xff) * uVar6) * 0x80808081 >> 0x20) & 0x7f80
                  ) << 9 | 0xff000000;
        param_9 = param_9 + uVar7;
      }
      param_2 = param_2 + param_8;
      param_9 = param_9 + uVar7 * (long)param_7;
    } while (param_6 != 0);
  }
  return;
}

