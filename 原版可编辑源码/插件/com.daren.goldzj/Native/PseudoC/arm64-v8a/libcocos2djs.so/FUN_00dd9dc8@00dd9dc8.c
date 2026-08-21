
void FUN_00dd9dc8(long param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x350);
  uVar4 = 0;
  do {
    iVar2 = FUN_00dda404(param_2,uVar4,param_3);
    FUN_00dda580(param_1,iVar2,TIFFFaxWhiteCodes);
    uVar4 = iVar2 + uVar4;
    if (param_3 <= uVar4) break;
    iVar2 = FUN_00dda904(param_2,uVar4,param_3);
    FUN_00dda580(param_1,iVar2,TIFFFaxBlackCodes);
    uVar4 = iVar2 + uVar4;
  } while (uVar4 < param_3);
  uVar4 = *(uint *)(lVar5 + 4);
  if ((uVar4 & 0xc) != 0) {
    if (*(int *)(lVar5 + 0x4c) != 8) {
      if (*(long *)(param_1 + 0x370) <= *(long *)(param_1 + 0x390)) {
        TIFFFlushData1(param_1);
      }
      puVar3 = *(undefined1 **)(param_1 + 0x388);
      uVar1 = *(undefined4 *)(lVar5 + 0x48);
      *(undefined1 **)(param_1 + 0x388) = puVar3 + 1;
      *puVar3 = (char)uVar1;
      *(long *)(param_1 + 0x390) = *(long *)(param_1 + 0x390) + 1;
      uVar4 = *(uint *)(lVar5 + 4);
      *(undefined8 *)(lVar5 + 0x48) = 0x800000000;
    }
    if (((uVar4 >> 3 & 1) != 0) &&
       (puVar3 = *(undefined1 **)(param_1 + 0x388), ((ulong)puVar3 & 1) != 0)) {
      if (*(long *)(param_1 + 0x370) <= *(long *)(param_1 + 0x390)) {
        TIFFFlushData1(param_1);
        puVar3 = *(undefined1 **)(param_1 + 0x388);
      }
      uVar1 = *(undefined4 *)(lVar5 + 0x48);
      *(undefined1 **)(param_1 + 0x388) = puVar3 + 1;
      *puVar3 = (char)uVar1;
      *(long *)(param_1 + 0x390) = *(long *)(param_1 + 0x390) + 1;
      *(undefined8 *)(lVar5 + 0x48) = 0x800000000;
    }
  }
  return;
}

