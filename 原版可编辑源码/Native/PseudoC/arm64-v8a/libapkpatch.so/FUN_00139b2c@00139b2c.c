
undefined8
FUN_00139b2c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,long param_7)

{
  uint uVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (*param_1 == 0) {
    param_1[1] = param_2;
    param_1[2] = param_7;
    uVar2 = FUN_0013991c(param_1,param_3,param_4,param_5,param_6);
    if ((uVar2 & 1) != 0) {
      uVar1 = *(uint *)(param_1[7] + param_1[10] * 4 + -4);
      *param_1 = (long)(param_1 + 3);
      param_1[3] = (long)param_1;
      param_1[4] = (ulong)uVar1;
      param_1[5] = (long)FUN_00139be8;
      return 1;
    }
    puts("_createRange(self,refList,refCount,refNotDecompressList,refNotDecompressCount) ERROR!");
    pcVar3 = "_createRange(self,refList,refCount,refNotDecompressList,refNotDecompressCount)";
  }
  else {
    puts("self->stream==0 ERROR!");
    pcVar3 = "self->stream==0";
  }
  FUN_0013fb24(&DAT_0016ba71,pcVar3,"in OldStream");
  return 0;
}

