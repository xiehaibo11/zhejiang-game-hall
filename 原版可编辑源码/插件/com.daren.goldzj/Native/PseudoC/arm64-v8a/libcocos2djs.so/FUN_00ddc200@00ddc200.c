
undefined8 FUN_00ddc200(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined4 uVar10;
  long local_40;
  long lStack_38;
  long local_30;
  long lStack_28;
  
  puVar7 = (undefined4 *)param_1[0x6a];
  if ((int)param_2 == 0x10019) {
    iVar3 = (int)param_3[3];
    if ((iVar3 < 0) && (*(int *)(param_3 + 3) = iVar3 + 8, iVar3 + 8 < 1)) {
      puVar9 = (uint *)(param_3[1] + (long)iVar3);
    }
    else {
      puVar9 = (uint *)*param_3;
      *param_3 = (long)(puVar9 + 2);
    }
    uVar2 = *puVar9;
    puVar7[1] = uVar2;
    if (1 < uVar2) {
      uVar5 = param_1[0x77];
      pcVar4 = "LogLuvVSetField";
      pcVar6 = "Unknown encoding %d for LogLuv compression";
      goto LAB_00ddc314;
    }
  }
  else {
    if ((int)param_2 != 0x10018) {
      lStack_28 = param_3[3];
      local_30 = param_3[2];
      lStack_38 = param_3[1];
      local_40 = *param_3;
      uVar5 = (**(code **)(puVar7 + 0xc))(param_1,param_2,&local_40);
      return uVar5;
    }
    iVar3 = (int)param_3[3];
    if ((iVar3 < 0) && (*(int *)(param_3 + 3) = iVar3 + 8, iVar3 + 8 < 1)) {
      puVar8 = (undefined4 *)(param_3[1] + (long)iVar3);
    }
    else {
      puVar8 = (undefined4 *)*param_3;
      *param_3 = (long)(puVar8 + 2);
    }
    uVar1 = *puVar8;
    *puVar7 = uVar1;
    uVar10 = 3;
    uVar5 = 0x20;
    switch(uVar1) {
    case 0:
      break;
    case 1:
      uVar10 = 2;
      uVar5 = 0x10;
      break;
    case 2:
      uVar10 = 1;
      TIFFSetField(param_1,0x115,1);
      uVar5 = 0x20;
      break;
    case 3:
      uVar10 = 1;
      uVar5 = 8;
      break;
    default:
      uVar5 = param_1[0x77];
      pcVar4 = (char *)*param_1;
      pcVar6 = "Unknown data format %d for LogLuv compression";
LAB_00ddc314:
      TIFFErrorExt(uVar5,pcVar4,pcVar6);
      return 0;
    }
    TIFFSetField(param_1,0x102,uVar5);
    TIFFSetField(param_1,0x153,uVar10);
    if ((*(byte *)((long)param_1 + 0x11) >> 2 & 1) == 0) {
      uVar5 = 0xffffffffffffffff;
    }
    else {
      uVar5 = TIFFTileSize(param_1);
    }
    param_1[0x56] = uVar5;
    uVar5 = TIFFScanlineSize(param_1);
    param_1[0x6b] = uVar5;
  }
  return 1;
}

