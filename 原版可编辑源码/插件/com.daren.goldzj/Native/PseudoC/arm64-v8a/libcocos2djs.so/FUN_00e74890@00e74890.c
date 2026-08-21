
undefined8 FUN_00e74890(long param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  plVar2 = (long *)(param_1 + 0xd8);
  pbVar1 = param_2 + param_3;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(byte **)(param_1 + 0x8e8) = param_2;
  *(long **)(param_1 + 0x8d8) = plVar2;
  *(long *)(param_1 + 0xa78) = param_1 + 0x8e0;
  *(byte **)(param_1 + 0x8f0) = pbVar1;
  *(byte **)(param_1 + 0x8e0) = param_2;
  plVar6 = plVar2;
  if (param_3 != 0) {
    do {
      pbVar4 = param_2 + 1;
      bVar3 = *param_2;
      if (bVar3 == 0xff) {
        if (pbVar1 < param_2 + 5) {
          return 0xa0;
        }
        uVar5 = (*(uint *)(param_2 + 1) & 0xff00ff00) >> 8 |
                (*(uint *)(param_2 + 1) & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        param_2 = param_2 + 5;
        if (64000 < uVar5 + 32000) {
          return 0xa0;
        }
      }
      else {
        uVar5 = (uint)bVar3;
        if (bVar3 < 0x20) {
          if ((1 << (ulong)(uVar5 & 0x1f) & 0xc060cffaU) != 0) {
            return 0xa0;
          }
          if (uVar5 == 0xc) {
            if (pbVar1 <= pbVar4) {
              return 0xa0;
            }
            if (*pbVar4 != 7) {
              return 0xa0;
            }
            lVar8 = 4;
LAB_00e74a04:
            lVar7 = (long)*(int *)(&UNK_0197bb8c + lVar8 * 4);
            if ((long)plVar6 - (long)plVar2 >> 3 < lVar7) {
              return 0xa1;
            }
            if ((int)lVar8 != 4) {
              if ((int)lVar8 != 2) {
                return 0xa0;
              }
              *(undefined4 *)(param_1 + 0x80) = 1;
              *(long *)(param_1 + 0x40) = plVar6[-lVar7] + *(long *)(param_1 + 0x40);
              *(long *)(param_1 + 0x50) = plVar6[1 - lVar7];
              *(undefined8 *)(param_1 + 0x58) = 0;
              return 0;
            }
            *(undefined4 *)(param_1 + 0x80) = 1;
            *(long *)(param_1 + 0x40) = plVar6[-lVar7] + *(long *)(param_1 + 0x40);
            *(long *)(param_1 + 0x48) = plVar6[1 - lVar7] + *(long *)(param_1 + 0x48);
            *(long *)(param_1 + 0x50) = plVar6[2 - lVar7];
            *(long *)(param_1 + 0x58) = plVar6[3 - lVar7];
            return 0;
          }
          if (uVar5 == 0xd) {
            lVar8 = 2;
            goto LAB_00e74a04;
          }
        }
        uVar5 = (uint)bVar3;
        if (uVar5 < 0x20) {
          return 0xa0;
        }
        if (uVar5 < 0xf7) {
          uVar5 = uVar5 - 0x8b;
          param_2 = pbVar4;
        }
        else {
          param_2 = param_2 + 2;
          if (pbVar1 < param_2) {
            return 0xa0;
          }
          if (uVar5 < 0xfb) {
            uVar5 = ((uint)bVar3 * 0x100 - 0xf700 | (uint)*pbVar4) + 0x6c;
          }
          else {
            uVar5 = -((uint)bVar3 * 0x100 - 0xfb00 | (uint)*pbVar4) - 0x6c;
          }
        }
      }
      if (0x7f8 < (long)plVar6 - (long)plVar2) {
        return 0xa0;
      }
      *plVar6 = (long)(int)(uVar5 << 0x10);
      *(long **)(param_1 + 0x8d8) = plVar6 + 1;
      plVar6 = plVar6 + 1;
    } while (param_2 < pbVar1);
  }
  return 0xa0;
}

