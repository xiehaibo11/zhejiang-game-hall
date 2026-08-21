
void FUN_01149740(short *param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_1 + 4 >> 3;
  uVar2 = iVar1 + (uint)*param_2;
  if (0xff < uVar2) {
    uVar2 = ((int)uVar2 >> 0x1f & 0xffffff01U) + 0xff;
  }
  *param_2 = (byte)uVar2;
  uVar2 = iVar1 + (uint)param_2[1];
  if (0xff < uVar2) {
    uVar2 = ((int)uVar2 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[1] = (byte)uVar2;
  uVar2 = iVar1 + (uint)param_2[2];
  if (0xff < uVar2) {
    uVar2 = ((int)uVar2 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[2] = (byte)uVar2;
  uVar2 = iVar1 + (uint)param_2[3];
  if (0xff < uVar2) {
    uVar2 = ((int)uVar2 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[3] = (byte)uVar2;
  uVar2 = iVar1 + (uint)param_2[0x20];
  if (0xff < uVar2) {
    uVar2 = ((int)uVar2 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x20] = (byte)uVar2;
  uVar2 = iVar1 + (uint)param_2[0x21];
  if (0xff < uVar2) {
    uVar2 = ((int)uVar2 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x21] = (byte)uVar2;
  uVar2 = iVar1 + (uint)param_2[0x22];
  if (0xff < uVar2) {
    uVar2 = ((int)uVar2 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x22] = (byte)uVar2;
  uVar2 = iVar1 + (uint)param_2[0x23];
  if (0xff < uVar2) {
    uVar2 = ((int)uVar2 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x23] = (byte)uVar2;
  uVar2 = iVar1 + (uint)param_2[0x40];
  if (0xff < uVar2) {
    uVar2 = ((int)uVar2 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x40] = (byte)uVar2;
  uVar2 = iVar1 + (uint)param_2[0x41];
  if (0xff < uVar2) {
    uVar2 = ((int)uVar2 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x41] = (byte)uVar2;
  uVar2 = iVar1 + (uint)param_2[0x42];
  if (0xff < uVar2) {
    uVar2 = ((int)uVar2 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x42] = (byte)uVar2;
  uVar2 = iVar1 + (uint)param_2[0x43];
  if (0xff < uVar2) {
    uVar2 = ((int)uVar2 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x43] = (byte)uVar2;
  uVar2 = iVar1 + (uint)param_2[0x60];
  if (0xff < uVar2) {
    uVar2 = ((int)uVar2 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x60] = (byte)uVar2;
  uVar2 = iVar1 + (uint)param_2[0x61];
  if (0xff < uVar2) {
    uVar2 = ((int)uVar2 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x61] = (byte)uVar2;
  uVar2 = iVar1 + (uint)param_2[0x62];
  if (0xff < uVar2) {
    uVar2 = ((int)uVar2 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x62] = (byte)uVar2;
  uVar2 = iVar1 + (uint)param_2[99];
  if (0xff < uVar2) {
    uVar2 = ((int)uVar2 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[99] = (byte)uVar2;
  return;
}

