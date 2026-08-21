
ulong FUN_001653f0(ulong param_1)

{
  uint uVar1;
  
  if (DAT_0016c520 == '\x01') {
    uVar1 = pthread_key_delete(DAT_0016c524);
    param_1 = (ulong)uVar1;
    DAT_0016c520 = '\0';
  }
  return param_1;
}

