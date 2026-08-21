
ulong FUN_00c062d0(long param_1)

{
  byte *pbVar1;
  ulong uVar2;
  long local_8;
  
  pbVar1 = (byte *)(**(code **)(param_1 + 0x60))
                             (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x68),&local_8)
  ;
  if ((pbVar1 == (byte *)0x0) || (local_8 == 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    *(byte **)(param_1 + 0x28) = pbVar1 + local_8;
    *(byte **)(param_1 + 0x20) = pbVar1 + 1;
    uVar2 = (ulong)*pbVar1;
  }
  return uVar2;
}

