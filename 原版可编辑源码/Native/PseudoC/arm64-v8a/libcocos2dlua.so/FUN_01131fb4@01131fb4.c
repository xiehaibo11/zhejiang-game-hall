
undefined8 FUN_01131fb4(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  iVar1 = _TIFFMergeFields(param_1,&DAT_0172cf60,5);
  if (iVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x3b8);
    pcVar4 = "Merging common CCITT Fax codec-specific tags failed";
  }
  else {
    piVar2 = _TIFFmalloc(0x98);
    *(int **)(param_1 + 0x350) = piVar2;
    if (piVar2 != (int *)0x0) {
      iVar1 = *(int *)(param_1 + 0xc);
      *piVar2 = iVar1;
      *(undefined8 *)(piVar2 + 10) = *(undefined8 *)(param_1 + 0x410);
      *(undefined8 *)(piVar2 + 0xc) = *(undefined8 *)(param_1 + 0x408);
      *(code **)(param_1 + 0x410) = FUN_011338bc;
      *(code **)(param_1 + 0x408) = FUN_01133a28;
      *(undefined8 *)(piVar2 + 0xe) = *(undefined8 *)(param_1 + 0x418);
      *(code **)(param_1 + 0x418) = FUN_01133c74;
      piVar2[8] = 0;
      if (iVar1 == 0) {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x100;
      }
      piVar2[0x18] = 0;
      piVar2[0x19] = 0;
      TIFFSetField(param_1,0x10004,_TIFFFax3fillruns);
      *(undefined8 *)(*(long *)(param_1 + 0x350) + 0x80) = 0;
      *(code **)(param_1 + 0x2d8) = FUN_01133ea0;
      *(code **)(param_1 + 0x2c8) = FUN_01133ea0;
      *(code **)(param_1 + 0x2c0) = FUN_01133e98;
      *(code **)(param_1 + 0x2e8) = FUN_01134964;
      *(code **)(param_1 + 0x2d0) = FUN_0113407c;
      *(code **)(param_1 + 0x2f0) = FUN_011349fc;
      *(code **)(param_1 + 0x300) = FUN_01134a6c;
      *(code **)(param_1 + 0x2f8) = FUN_011340cc;
      *(code **)(param_1 + 0x310) = FUN_01134a6c;
      *(code **)(param_1 + 0x308) = FUN_011340cc;
      *(code **)(param_1 + 800) = FUN_01134a6c;
      *(code **)(param_1 + 0x318) = FUN_011340cc;
      *(code **)(param_1 + 0x328) = FUN_01134df8;
      *(code **)(param_1 + 0x338) = FUN_01134ef0;
      return 1;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x3b8);
    pcVar4 = "No space for state block";
  }
  TIFFErrorExt(uVar3,"InitCCITTFax3",pcVar4);
  return 0;
}

