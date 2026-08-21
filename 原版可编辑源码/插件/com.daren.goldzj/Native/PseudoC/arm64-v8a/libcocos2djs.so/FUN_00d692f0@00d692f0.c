
undefined8 FUN_00d692f0(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  
  lVar2 = *(long *)*param_1;
  lVar3 = ((long *)*param_1)[1];
  png_set_benign_errors(lVar2,1);
  png_read_info(lVar2,lVar3);
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)(lVar2 + 0x230);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar2 + 0x234);
  bVar4 = *(byte *)(lVar2 + 0x2af);
  if ((bVar4 >> 2 & 1) == 0) {
    uVar5 = (uint)(*(short *)(lVar2 + 0x2a8) != 0) | bVar4 & 2;
  }
  else {
    uVar5 = bVar4 & 2 | 1;
  }
  uVar1 = uVar5 | 4;
  if (*(char *)(lVar2 + 0x2b0) != '\x10') {
    uVar1 = uVar5;
  }
  uVar5 = (uint)bVar4;
  *(uint *)((long)param_1 + 0x14) = uVar1 | (uVar5 & 1) << 3;
  if (((uVar1 >> 1 & 1) != 0) && ((*(ushort *)(lVar2 + 0x55a) & 0x8042) == 2)) {
    *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | 1;
  }
  if (uVar5 == 3) {
    uVar5 = (uint)*(ushort *)(lVar2 + 0x2a0);
  }
  else if (uVar5 == 0) {
    uVar5 = 1 << (ulong)(*(byte *)(lVar2 + 0x2b0) & 0x1f);
  }
  else {
    uVar5 = 0x100;
  }
  if (0xff < uVar5) {
    uVar5 = 0x100;
  }
  *(uint *)((long)param_1 + 0x1c) = uVar5;
  return 1;
}

