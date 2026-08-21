
undefined8 TIFFCheckTile(undefined8 *param_1,uint param_2,uint param_3,uint param_4,ushort param_5)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 < *(uint *)(param_1 + 0xb)) {
    if (param_3 < *(uint *)((long)param_1 + 0x5c)) {
      if (param_4 < *(uint *)(param_1 + 0xc)) {
        if (*(short *)((long)param_1 + 0xaa) != 2) {
          return 1;
        }
        if (param_5 < *(ushort *)((long)param_1 + 0x82)) {
          return 1;
        }
        uVar4 = param_1[0x77];
        uVar1 = *param_1;
        uVar3 = (ulong)*(ushort *)((long)param_1 + 0x82) - 1;
        pcVar2 = "%lu: Sample out of range, max %lu";
        param_3 = (uint)param_5;
      }
      else {
        uVar4 = param_1[0x77];
        uVar1 = *param_1;
        uVar3 = (ulong)(*(uint *)(param_1 + 0xc) - 1);
        pcVar2 = "%lu: Depth out of range, max %lu";
        param_3 = param_4;
      }
    }
    else {
      uVar4 = param_1[0x77];
      uVar1 = *param_1;
      uVar3 = (ulong)(*(uint *)((long)param_1 + 0x5c) - 1);
      pcVar2 = "%lu: Row out of range, max %lu";
    }
  }
  else {
    uVar4 = param_1[0x77];
    uVar1 = *param_1;
    uVar3 = (ulong)(*(uint *)(param_1 + 0xb) - 1);
    pcVar2 = "%lu: Col out of range, max %lu";
    param_3 = param_2;
  }
  TIFFErrorExt(uVar4,uVar1,pcVar2,param_3,uVar3);
  return 0;
}

