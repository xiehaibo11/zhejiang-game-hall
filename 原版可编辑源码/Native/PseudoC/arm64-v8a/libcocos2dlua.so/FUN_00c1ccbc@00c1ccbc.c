
long * FUN_00c1ccbc(long param_1,uint param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00c1bc28(param_1,param_3);
  if ((plVar1 == (long *)0x0) || (*plVar1 == -1)) {
    plVar1 = (long *)0x0;
    *(byte *)(param_1 + 10) = (byte)(1 << (ulong)(param_2 & 0x1f)) | *(byte *)(param_1 + 10);
  }
  return plVar1;
}

