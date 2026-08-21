
int FUN_00afa3a4(byte *param_1,int param_2,uint param_3,uint param_4,undefined8 param_5,
                undefined8 param_6,undefined8 param_7)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  byte *pbVar10;
  uchar local_70 [8];
  ulong local_68;
  
  if (param_2 == 0) {
    iVar8 = 0;
  }
  else {
    pbVar1 = param_1 + param_2;
    if ((param_3 & 7) == 4) {
      iVar8 = 0;
      pbVar6 = param_1;
      do {
        bVar3 = (param_4 & 1) != 0;
        pbVar10 = pbVar6 + 4;
        uVar2 = 0;
        if (bVar3 && pbVar6 == param_1) {
          uVar2 = 0x20;
        }
        local_68 = (ulong)*pbVar6 << 0x18 | (ulong)pbVar6[1] << 0x10 | (ulong)pbVar6[2] << 8 |
                   (ulong)pbVar6[3];
        if (bVar3 && pbVar10 == pbVar1) {
          uVar2 = 0x40;
        }
        if ((param_3 >> 3 & 1) == 0) {
          iVar4 = FUN_00afa64c(local_68,uVar2 | param_4,param_5,param_6,param_7);
          if (iVar4 < 0) {
            return -1;
          }
          iVar8 = iVar4 + iVar8;
        }
        else {
          iVar4 = UTF8_putc(local_70,6,local_68);
          if (0 < iVar4) {
            lVar9 = 0;
            do {
              iVar5 = FUN_00afa64c(local_70[lVar9],uVar2 | param_4,param_5,param_6,param_7);
              if (iVar5 < 0) {
                return -1;
              }
              lVar9 = lVar9 + 1;
              iVar8 = iVar5 + iVar8;
            } while (lVar9 < iVar4);
          }
        }
        pbVar6 = pbVar10;
      } while (pbVar10 != pbVar1);
    }
    else {
      iVar8 = 0;
      pbVar6 = param_1;
      do {
        uVar2 = param_3 & 7;
        uVar7 = 0;
        if (pbVar6 == param_1 && (param_4 & 1) != 0) {
          uVar7 = 0x20;
        }
        if (uVar2 == 0) {
          iVar4 = UTF8_getc(pbVar6,param_2,&local_68);
          if (iVar4 < 0) {
            return -1;
          }
          pbVar10 = pbVar6 + iVar4;
        }
        else if (uVar2 == 1) {
          pbVar10 = pbVar6 + 1;
          local_68 = (ulong)*pbVar6;
        }
        else {
          if (uVar2 != 2) {
            return -1;
          }
          pbVar10 = pbVar6 + 2;
          local_68 = (ulong)CONCAT11(*pbVar6,pbVar6[1]);
        }
        if (pbVar10 == pbVar1 && (param_4 & 1) != 0) {
          uVar7 = 0x40;
        }
        if ((param_3 >> 3 & 1) == 0) {
          iVar4 = FUN_00afa64c(local_68,uVar7 | param_4,param_5,param_6,param_7);
          if (iVar4 < 0) {
            return -1;
          }
          iVar8 = iVar4 + iVar8;
        }
        else {
          iVar4 = UTF8_putc(local_70,6,local_68);
          if (0 < iVar4) {
            lVar9 = 0;
            do {
              iVar5 = FUN_00afa64c(local_70[lVar9],uVar7 | param_4,param_5,param_6,param_7);
              if (iVar5 < 0) {
                return -1;
              }
              lVar9 = lVar9 + 1;
              iVar8 = iVar5 + iVar8;
            } while (lVar9 < iVar4);
          }
        }
        pbVar6 = pbVar10;
      } while (pbVar10 != pbVar1);
    }
  }
  return iVar8;
}

