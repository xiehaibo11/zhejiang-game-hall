
ulong FUN_01044614(ulong param_1)

{
  uint uVar1;
  timeval local_30;
  ulong uVar2;
  
  uVar2 = param_1;
  if ((*(short *)(*(long *)(param_1 + 0x220) + 0xcae) != 0) &&
     (*(char *)(param_1 + 0x2ff) == '\x05')) {
    uVar1 = gettimeofday(&local_30,(__timezone_ptr_t)0x0);
    uVar2 = (ulong)uVar1;
    *(ulong *)(param_1 + 0x58) =
         local_30.tv_sec + (ulong)*(ushort *)(*(long *)(param_1 + 0x220) + 0xcae);
  }
  return uVar2;
}

