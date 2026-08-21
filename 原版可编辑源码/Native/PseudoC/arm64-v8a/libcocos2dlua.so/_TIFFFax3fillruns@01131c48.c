
void _TIFFFax3fillruns(long param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  puVar6 = param_3;
  if (((uint)((int)param_3 - (int)param_2) >> 2 & 1) != 0) {
    puVar6 = param_3 + 1;
    *param_3 = 0;
  }
  if (param_2 < puVar6) {
    uVar7 = 0;
    do {
      uVar9 = *param_2;
      if ((param_4 < uVar9) || (param_4 < uVar9 + uVar7)) {
        uVar9 = param_4 - uVar7;
        *param_2 = uVar9;
      }
      if (uVar9 != 0) {
        uVar8 = uVar7 & 7;
        uVar1 = 8 - uVar8;
        pbVar3 = (byte *)(param_1 + (ulong)(uVar7 >> 3));
        if (uVar9 < uVar1 || uVar9 - uVar1 == 0) {
          bVar4 = ~((byte)(&DAT_0147ec50)[uVar9] >> (ulong)uVar8);
LAB_01131dc4:
          *pbVar3 = bVar4 & *pbVar3;
        }
        else {
          if (uVar8 != 0) {
            *pbVar3 = (byte)(0xff << (ulong)(uVar1 & 0x1f)) & *pbVar3;
            pbVar3 = pbVar3 + 1;
            uVar9 = uVar9 - uVar1;
          }
          uVar8 = uVar9 >> 3;
          if (uVar8 != 0) {
            if (0x7f < uVar9) {
              do {
                pbVar2 = pbVar3;
                if (((ulong)pbVar3 & 7) == 0) break;
                uVar8 = uVar8 - 1;
                pbVar2 = pbVar3 + 1;
                *pbVar3 = 0;
                pbVar3 = pbVar2;
              } while (uVar8 != 0);
              lVar5 = (ulong)(((int)uVar8 >> 3) - 1) * 8;
              pbVar3 = pbVar2 + lVar5 + 8;
              memset(pbVar2,0,lVar5 + 8);
              uVar8 = uVar8 & 7;
            }
            switch(uVar8) {
            case 0xf:
              pbVar3[0xe] = 0;
            case 0xe:
              pbVar3[0xd] = 0;
            case 0xd:
              pbVar3[0xc] = 0;
            case 0xc:
              pbVar3[0xb] = 0;
            case 0xb:
              pbVar3[10] = 0;
            case 10:
              pbVar3[9] = 0;
            case 9:
              pbVar3[8] = 0;
            case 8:
              pbVar3[7] = 0;
            case 7:
              pbVar3[6] = 0;
            case 6:
              pbVar3[5] = 0;
            case 5:
              pbVar3[4] = 0;
            case 4:
              pbVar3[3] = 0;
            case 3:
              pbVar3[2] = 0;
            case 2:
              pbVar3[1] = 0;
            case 1:
              *pbVar3 = 0;
              pbVar3 = pbVar3 + uVar8;
            default:
              uVar9 = uVar9 & 7;
            }
          }
          if (uVar9 != 0) {
            bVar4 = (byte)(0xff >> (ulong)(uVar9 & 0x1f));
            goto LAB_01131dc4;
          }
        }
        uVar7 = *param_2 + uVar7;
      }
      uVar9 = param_2[1];
      if ((param_4 < uVar9) || (param_4 < uVar9 + uVar7)) {
        uVar9 = param_4 - uVar7;
        param_2[1] = uVar9;
      }
      if (uVar9 != 0) {
        uVar8 = uVar7 & 7;
        uVar1 = uVar9 - (8 - uVar8);
        pbVar3 = (byte *)(param_1 + (ulong)(uVar7 >> 3));
        if (uVar9 < 8 - uVar8 || uVar1 == 0) {
          bVar4 = (byte)(&DAT_0147ec50)[uVar9] >> (ulong)uVar8;
LAB_01131f00:
          *pbVar3 = bVar4 | *pbVar3;
        }
        else {
          if (uVar8 != 0) {
            *pbVar3 = (byte)(0xff >> (ulong)uVar8) | *pbVar3;
            pbVar3 = pbVar3 + 1;
            uVar9 = uVar1;
          }
          uVar8 = uVar9 >> 3;
          if (uVar8 != 0) {
            if (0x7f < uVar9) {
              do {
                pbVar2 = pbVar3;
                if (((ulong)pbVar3 & 7) == 0) break;
                uVar8 = uVar8 - 1;
                pbVar2 = pbVar3 + 1;
                *pbVar3 = 0xff;
                pbVar3 = pbVar2;
              } while (uVar8 != 0);
              lVar5 = (ulong)(((int)uVar8 >> 3) - 1) * 8;
              pbVar3 = pbVar2 + lVar5 + 8;
              memset(pbVar2,0xff,lVar5 + 8);
              uVar8 = uVar8 & 7;
            }
            switch(uVar8) {
            case 0xf:
              pbVar3[0xe] = 0xff;
            case 0xe:
              pbVar3[0xd] = 0xff;
            case 0xd:
              pbVar3[0xc] = 0xff;
            case 0xc:
              pbVar3[0xb] = 0xff;
            case 0xb:
              pbVar3[10] = 0xff;
            case 10:
              pbVar3[9] = 0xff;
            case 9:
              pbVar3[8] = 0xff;
            case 8:
              pbVar3[7] = 0xff;
            case 7:
              pbVar3[6] = 0xff;
            case 6:
              pbVar3[5] = 0xff;
            case 5:
              pbVar3[4] = 0xff;
            case 4:
              pbVar3[3] = 0xff;
            case 3:
              pbVar3[2] = 0xff;
            case 2:
              pbVar3[1] = 0xff;
            case 1:
              *pbVar3 = 0xff;
              pbVar3 = pbVar3 + uVar8;
            default:
              uVar9 = uVar9 & 7;
            }
          }
          if (uVar9 != 0) {
            bVar4 = (byte)(0xff00 >> (ulong)(uVar9 & 0x1f));
            goto LAB_01131f00;
          }
        }
        uVar7 = param_2[1] + uVar7;
      }
      param_2 = param_2 + 2;
    } while (param_2 < puVar6);
  }
  return;
}

