
void FUN_00dd9f24(undefined8 param_1,byte *param_2,byte *param_3,uint param_4)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar13 = 0;
  if (0 < (int)param_4) {
    bVar2 = *param_2;
    uVar8 = (uint)(char)bVar2;
    if (-1 < (char)bVar2) {
      pbVar10 = param_2;
      if ((int)param_4 < 0x80) {
        uVar13 = 0;
        uVar8 = param_4;
      }
      else {
        if (((ulong)param_2 & 7) != 0) {
          if (bVar2 == 0) {
            uVar13 = 0;
            uVar9 = param_4;
            do {
              pbVar10 = pbVar10 + 1;
              uVar13 = uVar13 + 8;
              uVar11 = uVar9 - 8;
              if (((ulong)pbVar10 & 7) == 0) {
                uVar8 = uVar11;
                if ((int)uVar9 < 0x48) goto joined_r0x00dda058;
                goto LAB_00dd9fd8;
              }
              uVar8 = (uint)*pbVar10;
              uVar9 = uVar11;
            } while (*pbVar10 == 0);
          }
          else {
            uVar13 = 0;
          }
          uVar13 = uVar13 + (byte)(&DAT_019560ec)[uVar8 & 0xff];
          goto LAB_00dda084;
        }
        uVar13 = 0;
        uVar11 = param_4;
LAB_00dd9fd8:
        do {
          uVar8 = uVar11;
          if (*(long *)pbVar10 != 0) break;
          uVar8 = uVar11 - 0x40;
          uVar13 = uVar13 + 0x40;
          pbVar10 = pbVar10 + 8;
          bVar1 = 0x7f < (int)uVar11;
          uVar11 = uVar8;
        } while (bVar1);
      }
joined_r0x00dda058:
      if (7 < (int)uVar8) {
        iVar4 = -uVar13;
        uVar13 = uVar8;
        do {
          if ((ulong)*pbVar10 != 0) {
            uVar13 = (uint)(byte)(&DAT_019560ec)[*pbVar10] - iVar4;
            goto LAB_00dda084;
          }
          uVar8 = uVar13 - 8;
          pbVar10 = pbVar10 + 1;
          iVar4 = iVar4 + -8;
          bVar1 = 0xf < (int)uVar13;
          uVar13 = uVar8;
        } while (bVar1);
        uVar13 = -iVar4;
      }
      if (0 < (int)uVar8) {
        if ((int)(uint)(byte)(&DAT_019560ec)[*pbVar10] <= (int)uVar8) {
          uVar8 = (uint)(byte)(&DAT_019560ec)[*pbVar10];
        }
        uVar13 = uVar8 + uVar13;
      }
    }
  }
LAB_00dda084:
  uVar8 = 0;
  if (0 < (int)param_4) {
    bVar2 = *param_3;
    uVar9 = (uint)(char)bVar2;
    if (-1 < (char)bVar2) {
      pbVar10 = param_3;
      if ((int)param_4 < 0x80) {
        uVar8 = 0;
        uVar9 = param_4;
      }
      else {
        if (((ulong)param_3 & 7) != 0) {
          if (bVar2 == 0) {
            uVar8 = 0;
            uVar11 = param_4;
            do {
              pbVar10 = pbVar10 + 1;
              uVar8 = uVar8 + 8;
              uVar12 = uVar11 - 8;
              if (((ulong)pbVar10 & 7) == 0) {
                uVar9 = uVar12;
                if ((int)uVar11 < 0x48) goto joined_r0x00dda18c;
                goto LAB_00dda10c;
              }
              uVar9 = (uint)*pbVar10;
              uVar11 = uVar12;
            } while (*pbVar10 == 0);
          }
          else {
            uVar8 = 0;
          }
          uVar8 = uVar8 + (byte)(&DAT_019560ec)[uVar9 & 0xff];
          goto LAB_00dda1b8;
        }
        uVar8 = 0;
        uVar12 = param_4;
LAB_00dda10c:
        do {
          uVar9 = uVar12;
          if (*(long *)pbVar10 != 0) break;
          uVar9 = uVar12 - 0x40;
          uVar8 = uVar8 + 0x40;
          pbVar10 = pbVar10 + 8;
          bVar1 = 0x7f < (int)uVar12;
          uVar12 = uVar9;
        } while (bVar1);
      }
joined_r0x00dda18c:
      if (7 < (int)uVar9) {
        iVar4 = -uVar8;
        uVar8 = uVar9;
        do {
          if ((ulong)*pbVar10 != 0) {
            uVar8 = (uint)(byte)(&DAT_019560ec)[*pbVar10] - iVar4;
            goto LAB_00dda1b8;
          }
          uVar9 = uVar8 - 8;
          pbVar10 = pbVar10 + 1;
          iVar4 = iVar4 + -8;
          bVar1 = 0xf < (int)uVar8;
          uVar8 = uVar9;
        } while (bVar1);
        uVar8 = -iVar4;
      }
      if (0 < (int)uVar9) {
        if ((int)(uint)(byte)(&DAT_019560ec)[*pbVar10] <= (int)uVar9) {
          uVar9 = (uint)(byte)(&DAT_019560ec)[*pbVar10];
        }
        uVar8 = uVar9 + uVar8;
      }
    }
  }
LAB_00dda1b8:
  uVar9 = 0;
  while( true ) {
    uVar11 = param_4;
    if (uVar8 < param_4) {
      if ((1 << (ulong)(~uVar8 & 7) & (uint)param_3[uVar8 >> 3]) == 0) {
        iVar4 = FUN_00dda404(param_3,uVar8,param_4);
      }
      else {
        iVar4 = FUN_00dda904();
      }
      uVar11 = iVar4 + uVar8;
    }
    if (uVar11 < uVar13) {
      FUN_00ddaa8c(param_1,1,4);
      uVar9 = uVar11;
    }
    else {
      uVar8 = (uVar8 - uVar13) + 3;
      if (uVar8 < 7) {
        lVar3 = (long)(int)uVar8 * 6;
        FUN_00ddaa8c(param_1,*(undefined2 *)(&DAT_019562ee + lVar3),
                     *(undefined2 *)(&DAT_019562ec + lVar3));
        uVar9 = uVar13;
      }
      else {
        uVar8 = param_4;
        if (uVar13 < param_4) {
          if ((1 << (ulong)(~uVar13 & 7) & (uint)param_2[uVar13 >> 3]) == 0) {
            iVar4 = FUN_00dda404(param_2,uVar13,param_4);
          }
          else {
            iVar4 = FUN_00dda904();
          }
          uVar8 = iVar4 + uVar13;
        }
        FUN_00ddaa8c(param_1,1,3);
        if ((uVar9 + uVar13 == 0) || ((1 << (ulong)(~uVar9 & 7) & (uint)param_2[uVar9 >> 3]) == 0))
        {
          FUN_00dda580(param_1,uVar13 - uVar9,TIFFFaxWhiteCodes);
          puVar7 = TIFFFaxBlackCodes;
        }
        else {
          FUN_00dda580(param_1,uVar13 - uVar9,TIFFFaxBlackCodes);
          puVar7 = TIFFFaxWhiteCodes;
        }
        FUN_00dda580(param_1,uVar8 - uVar13,puVar7);
        uVar9 = uVar8;
      }
    }
    if (param_4 <= uVar9) break;
    if ((1 << (ulong)(~uVar9 & 7) & (uint)param_2[uVar9 >> 3]) == 0) {
      iVar5 = FUN_00dda404(param_2,uVar9,param_4);
      iVar4 = FUN_00dda904(param_3,uVar9,param_4);
      iVar4 = iVar4 + uVar9;
      iVar6 = FUN_00dda404(param_3,iVar4,param_4);
    }
    else {
      iVar5 = FUN_00dda904();
      iVar4 = FUN_00dda404(param_3,uVar9,param_4);
      iVar4 = iVar4 + uVar9;
      iVar6 = FUN_00dda904(param_3,iVar4,param_4);
    }
    uVar13 = iVar5 + uVar9;
    uVar8 = iVar6 + iVar4;
  }
  return;
}

