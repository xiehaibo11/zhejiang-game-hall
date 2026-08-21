
void ssl_set_default_md(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x90);
  uVar1 = ssl_md(1);
  *(undefined8 *)(lVar2 + 0x2e8) = uVar1;
  uVar1 = ssl_md((*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) & 2) << 2 ^ 9);
  *(undefined8 *)(lVar2 + 0x2e0) = uVar1;
  *(undefined8 *)(lVar2 + 0x2d8) = uVar1;
  uVar1 = ssl_md(1);
  *(undefined8 *)(lVar2 + 0x2f0) = uVar1;
  uVar1 = ssl_md(2);
  *(undefined8 *)(lVar2 + 0x2f8) = uVar1;
  uVar1 = ssl_md(6);
  *(undefined8 *)(lVar2 + 0x300) = uVar1;
  uVar1 = ssl_md(8);
  *(undefined8 *)(lVar2 + 0x308) = uVar1;
  return;
}

