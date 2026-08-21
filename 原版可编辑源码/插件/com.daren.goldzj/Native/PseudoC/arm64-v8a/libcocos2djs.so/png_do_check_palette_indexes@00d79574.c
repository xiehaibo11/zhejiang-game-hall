
void png_do_check_palette_indexes(long param_1,int *param_2)

{
  ushort uVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = *(ushort *)(param_1 + 0x2a0);
  if (((uVar1 != 0) &&
      (uVar8 = (uint)*(byte *)((long)param_2 + 0x11), uVar7 = 1 << (ulong)(uVar8 & 0x1f),
      uVar7 != uVar1 && (int)(uint)uVar1 <= (int)uVar7)) && (uVar8 - 1 < 8)) {
    pbVar3 = *(byte **)(param_1 + 0x260);
    lVar6 = *(long *)(param_2 + 2);
    uVar7 = -((uint)*(byte *)((long)param_2 + 0x13) * *param_2) & 7;
    pbVar4 = pbVar3 + lVar6;
    switch(uVar8) {
    case 1:
      if (0 < lVar6) {
        if (*pbVar4 >> (ulong)uVar7 != 0) {
          *(undefined4 *)(param_1 + 0x2a4) = 1;
        }
        while (pbVar4 = pbVar4 + -1, pbVar3 < pbVar4) {
          if (*pbVar4 != 0) {
            *(undefined4 *)(param_1 + 0x2a4) = 1;
          }
        }
      }
      break;
    case 2:
      if (0 < lVar6) {
        bVar2 = *pbVar4 >> (ulong)uVar7;
        uVar8 = (uint)bVar2;
        uVar7 = uVar8 & 3;
        uVar5 = *(uint *)(param_1 + 0x2a4);
        if ((int)*(uint *)(param_1 + 0x2a4) < (int)uVar7) {
          *(uint *)(param_1 + 0x2a4) = uVar7;
          uVar5 = uVar7;
        }
        uVar7 = bVar2 >> 2 & 3;
        if ((int)uVar5 < (int)uVar7) {
          *(uint *)(param_1 + 0x2a4) = uVar7;
          uVar5 = uVar7;
        }
        uVar7 = bVar2 >> 4 & 3;
        if ((int)uVar5 < (int)uVar7) {
          *(uint *)(param_1 + 0x2a4) = uVar7;
          uVar5 = uVar7;
        }
        while( true ) {
          uVar8 = uVar8 >> 6;
          if ((int)uVar5 < (int)uVar8) {
            *(uint *)(param_1 + 0x2a4) = uVar8;
            uVar5 = uVar8;
          }
          pbVar4 = pbVar4 + -1;
          if (pbVar4 <= pbVar3) break;
          uVar8 = (uint)*pbVar4;
          uVar7 = uVar8 & 3;
          if ((int)uVar5 < (int)uVar7) {
            *(uint *)(param_1 + 0x2a4) = uVar7;
            uVar8 = (uint)*pbVar4;
            uVar5 = uVar7;
          }
          uVar7 = uVar8 >> 2 & 3;
          if ((int)uVar5 < (int)uVar7) {
            *(uint *)(param_1 + 0x2a4) = uVar7;
            uVar8 = (uint)*pbVar4;
            uVar5 = uVar7;
          }
          uVar7 = uVar8 >> 4 & 3;
          if ((int)uVar5 < (int)uVar7) {
            *(uint *)(param_1 + 0x2a4) = uVar7;
            uVar8 = (uint)*pbVar4;
            uVar5 = uVar7;
          }
        }
      }
      break;
    case 4:
      if (0 < lVar6) {
        uVar8 = (uint)(*pbVar4 >> (ulong)uVar7);
        uVar7 = uVar8 & 0xf;
        uVar5 = *(uint *)(param_1 + 0x2a4);
        if ((int)*(uint *)(param_1 + 0x2a4) < (int)uVar7) {
          *(uint *)(param_1 + 0x2a4) = uVar7;
          uVar5 = uVar7;
        }
        while( true ) {
          uVar8 = uVar8 >> 4;
          if ((int)uVar5 < (int)uVar8) {
            *(uint *)(param_1 + 0x2a4) = uVar8;
            uVar5 = uVar8;
          }
          pbVar4 = pbVar4 + -1;
          if (pbVar4 <= pbVar3) break;
          uVar8 = (uint)*pbVar4;
          uVar7 = uVar8 & 0xf;
          if ((int)uVar5 < (int)uVar7) {
            *(uint *)(param_1 + 0x2a4) = uVar7;
            uVar8 = (uint)*pbVar4;
            uVar5 = uVar7;
          }
        }
      }
      break;
    case 8:
      if (0 < lVar6) {
        uVar7 = *(uint *)(param_1 + 0x2a4);
        do {
          if ((int)uVar7 < (int)(uint)*pbVar4) {
            uVar7 = (uint)*pbVar4;
            *(uint *)(param_1 + 0x2a4) = uVar7;
          }
          pbVar4 = pbVar4 + -1;
        } while (pbVar3 < pbVar4);
      }
    }
  }
  return;
}

