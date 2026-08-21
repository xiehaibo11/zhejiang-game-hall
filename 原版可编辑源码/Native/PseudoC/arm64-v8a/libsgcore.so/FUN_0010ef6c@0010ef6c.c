
byte * FUN_0010ef6c(long param_1,char *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  pbVar10 = (byte *)(param_2 + 1);
  if (*param_2 == '\"') {
    iVar6 = 1;
    for (pbVar5 = pbVar10; (bVar1 = *pbVar5, bVar1 != 0 && (bVar1 != 0x22)); pbVar5 = pbVar5 + lVar7
        ) {
      lVar7 = 1;
      if (bVar1 == 0x5c) {
        lVar7 = 2;
      }
      iVar6 = iVar6 + 1;
    }
    pbVar3 = (byte *)(*(code *)PTR_malloc_00113048)((long)iVar6);
    pbVar5 = (byte *)0x0;
    pbVar9 = pbVar3;
    if (pbVar3 != (byte *)0x0) {
      while ((bVar1 = *pbVar10, bVar1 != 0 && (bVar1 != 0x22))) {
        pbVar5 = pbVar10 + 1;
        if (bVar1 == 0x5c) {
          bVar1 = *pbVar5;
          switch(bVar1) {
          case 0x6e:
            pbVar8 = pbVar9 + 1;
            *pbVar9 = 10;
            break;
          case 0x6f:
          case 0x70:
          case 0x71:
          case 0x73:
switchD_0010f034_caseD_6f:
            *pbVar9 = bVar1;
            pbVar8 = pbVar9 + 1;
            break;
          case 0x72:
            pbVar8 = pbVar9 + 1;
            *pbVar9 = 0xd;
            break;
          case 0x74:
            pbVar8 = pbVar9 + 1;
            *pbVar9 = 9;
            break;
          case 0x75:
            uVar2 = FUN_0010f1c8(pbVar10 + 2);
            pbVar5 = pbVar10 + 5;
            pbVar8 = pbVar9;
            if ((uVar2 != 0) && ((uVar2 & 0xfffffc00) != 0xdc00)) {
              if ((uVar2 & 0xfffffc00) == 0xd800) {
                if ((pbVar10[6] == 0x5c) && (pbVar10[7] == 0x75)) {
                  uVar4 = FUN_0010f1c8(pbVar10 + 8);
                  pbVar5 = pbVar10 + 0xb;
                  if (((uint)(uVar4 >> 10) & 0x3fffff) == 0x37) {
                    uVar2 = ((uint)uVar4 & 0x3ff | (uVar2 & 0x3ff) << 10) + 0x10000;
LAB_0010f124:
                    bVar1 = (byte)uVar2;
                    uVar2 = uVar2 >> 6;
                    pbVar9[3] = bVar1 & 0x3f | 0x80;
                    lVar7 = 4;
LAB_0010f138:
                    bVar1 = (byte)uVar2;
                    uVar2 = uVar2 >> 6;
                    pbVar9[2] = bVar1 & 0x3f | 0x80;
                    goto LAB_0010f148;
                  }
                }
              }
              else {
                if (uVar2 < 0x80) {
                  lVar7 = 1;
                }
                else {
                  if (0x7ff < uVar2) {
                    if (0xffff < uVar2) goto LAB_0010f124;
                    lVar7 = 3;
                    goto LAB_0010f138;
                  }
                  lVar7 = 2;
LAB_0010f148:
                  bVar1 = (byte)uVar2;
                  uVar2 = uVar2 >> 6;
                  pbVar9[1] = bVar1 & 0x3f | 0x80;
                }
                *pbVar9 = (&UNK_00110369)[lVar7] | (byte)uVar2;
                pbVar8 = pbVar9 + lVar7;
              }
            }
            break;
          default:
            if (bVar1 == 0x66) {
              *pbVar9 = 0xc;
              pbVar8 = pbVar9 + 1;
            }
            else {
              if (bVar1 != 0x62) goto switchD_0010f034_caseD_6f;
              *pbVar9 = 8;
              pbVar8 = pbVar9 + 1;
            }
          }
          pbVar9 = pbVar8;
          pbVar10 = pbVar5 + 1;
        }
        else {
          *pbVar9 = bVar1;
          pbVar9 = pbVar9 + 1;
          pbVar10 = pbVar5;
        }
      }
      *pbVar9 = 0;
      bVar1 = *pbVar10;
      *(byte **)(param_1 + 0x20) = pbVar3;
      *(undefined4 *)(param_1 + 0x18) = 4;
      pbVar5 = pbVar10 + 1;
      if (bVar1 != 0x22) {
        pbVar5 = pbVar10;
      }
    }
  }
  else {
    pbVar5 = (byte *)0x0;
    DAT_00113188 = param_2;
  }
  return pbVar5;
}

