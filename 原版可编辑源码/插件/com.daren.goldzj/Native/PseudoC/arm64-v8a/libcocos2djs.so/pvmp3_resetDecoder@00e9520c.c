
void pvmp3_resetDecoder(long param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x4b78) = 0;
  *(long *)(param_1 + 0x4b68) = param_1 + 0x4b80;
  *(undefined4 *)(param_1 + 0x4b70) = 0;
  *(undefined4 *)(param_1 + 0x6b88) = 0;
  *(undefined4 *)(param_1 + 0x324) = 0x23f;
  *(undefined4 *)(param_1 + 0x25a8) = 0x23f;
  memset((void *)(param_1 + 0x1e28),0,0x780);
  memset((void *)(param_1 + 0x328),0,0x900);
  memset((void *)(param_1 + 0x25ac),0,0x900);
  memset((void *)(param_1 + 0x40ac),0,0xab8);
  return;
}

