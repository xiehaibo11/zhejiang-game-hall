
undefined4 TIFFCheckpointDirectory(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0xe8) == 0) {
    TIFFSetupStrips(param_1);
  }
  uVar1 = FUN_00dd1b14(param_1,1,0,0);
  uVar2 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),0,2);
  TIFFSetWriteOffset(param_1,uVar2);
  return uVar1;
}

