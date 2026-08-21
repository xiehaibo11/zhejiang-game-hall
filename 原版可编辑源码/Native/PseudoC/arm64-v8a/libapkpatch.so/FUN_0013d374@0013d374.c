
undefined8 FUN_0013d374(long *param_1,undefined4 param_2,undefined4 param_3)

{
  ulong uVar1;
  char *pcVar2;
  
  uVar1 = FUN_0013ce0c();
  if ((uVar1 & 1) == 0) {
    pcVar2 = "_UnZipper_open_begin(self)";
  }
  else {
    uVar1 = FUN_0013cf88(param_1,param_2,param_3);
    if ((uVar1 & 1) != 0) {
      FUN_00135780(param_1 + 1,param_1[0x13],param_1[0x13] + (ulong)*(uint *)(param_1 + 0x14));
      *param_1 = (long)(param_1 + 1);
      return 1;
    }
    pcVar2 = "_UnZipper_open_fvce(self,fvce_size,fileCount)";
  }
  FUN_0013fb24(&DAT_0016ba80,pcVar2,DAT_0016ba88);
  return 0;
}

