
byte * FUN_00e62148(byte *param_1,long param_2,ulong *param_3,undefined4 *param_4)

{
  byte bVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  do {
    pbVar9 = param_1 + 1;
    bVar1 = *param_1;
    uVar2 = (ulong)bVar1;
    param_1 = pbVar9;
  } while (uVar2 == 0x20);
  if ((char)bVar1 < '\0') {
    if (bVar1 < 0xe0) {
      iVar5 = 1;
      uVar8 = 0x1f;
    }
    else {
      uVar8 = 0xf;
      if (0xef < bVar1) {
        uVar8 = 7;
      }
      iVar5 = 2;
      if (0xef < bVar1) {
        iVar5 = 3;
      }
    }
    lVar4 = 0;
    uVar2 = uVar8 & uVar2;
    do {
      pbVar10 = pbVar9 + lVar4;
      lVar4 = lVar4 + 1;
      uVar2 = (ulong)*pbVar10 & 0x3f | uVar2 << 6;
    } while (iVar5 != (int)lVar4);
    pbVar9 = pbVar9 + (ulong)(iVar5 - 1) + 1;
    bVar1 = *pbVar9;
  }
  else {
    bVar1 = *pbVar9;
  }
  if ((bVar1 | 0x20) != 0x20) {
    uVar8 = (ulong)bVar1;
    pbVar10 = pbVar9;
    do {
      while (uVar7 = uVar8, pbVar9 = pbVar10 + 1, -1 < (char)uVar7) {
        uVar8 = (ulong)*pbVar9;
        pbVar10 = pbVar9;
        if ((*pbVar9 | 0x20) == 0x20) goto LAB_00e62288;
      }
      uVar6 = (uint)uVar7;
      if (uVar6 < 0xe0) {
        iVar5 = 1;
        uVar8 = 0x1f;
      }
      else {
        uVar8 = 0xf;
        if (0xef < uVar6) {
          uVar8 = 7;
        }
        iVar5 = 2;
        if (0xef < uVar6) {
          iVar5 = 3;
        }
      }
      uVar7 = uVar8 & uVar7;
      uVar6 = iVar5 - 1;
      do {
        iVar5 = iVar5 + -1;
        uVar7 = (ulong)*pbVar9 & 0x3f | uVar7 << 6;
        pbVar9 = pbVar9 + 1;
      } while (iVar5 != 0);
      pbVar10 = pbVar10 + (ulong)uVar6 + 2;
      uVar8 = (ulong)*pbVar10;
      pbVar9 = pbVar10;
    } while ((*pbVar10 | 0x20) != 0x20);
LAB_00e62288:
    if (uVar7 != 0) {
      uVar2 = 0;
      uVar3 = 0;
      goto LAB_00e622a8;
    }
  }
  uVar2 = FT_Get_Char_Index(**(undefined8 **)(param_2 + 0x40),uVar2);
  uVar2 = uVar2 & 0xffffffff;
  uVar3 = 1;
LAB_00e622a8:
  *param_3 = uVar2;
  *param_4 = uVar3;
  return pbVar9;
}

