
void FUN_00c1a0c0(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  bVar2 = *(byte *)(lVar3 + 0x31);
  uVar1 = *(undefined4 *)(lVar3 + 0x80);
  *(undefined4 *)(lVar3 + 0x80) = 0xfffffffd;
  if (bVar2 < 3) {
    *(long *)(lVar3 + 0x40) = lVar3 + 0x38;
    *(undefined8 *)(lVar3 + 0x48) = 0;
    *(undefined1 *)(lVar3 + 0x31) = 3;
    *(undefined8 *)(lVar3 + 0x50) = 0;
    *(undefined8 *)(lVar3 + 0x58) = 0;
    *(undefined4 *)(lVar3 + 0x34) = 0;
    FUN_00c197fc(param_1);
    bVar2 = *(byte *)(lVar3 + 0x31);
  }
  while ((byte)(bVar2 - 3) < 2) {
    FUN_00c197fc(param_1);
    bVar2 = *(byte *)(lVar3 + 0x31);
  }
  *(undefined1 *)(lVar3 + 0x31) = 0;
  do {
    FUN_00c197fc(param_1);
  } while (*(char *)(lVar3 + 0x31) != '\0');
  *(undefined4 *)(lVar3 + 0x80) = uVar1;
  *(ulong *)(lVar3 + 0x28) = (ulong)*(uint *)(lVar3 + 0x7c) * (*(ulong *)(lVar3 + 0x70) / 100);
  return;
}

