
long FUN_00bfbec8(undefined8 param_1,long param_2,undefined8 param_3)

{
  ushort *puVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  lVar4 = FUN_00c1a314(param_1,((ulong)*(byte *)(param_2 + 0x3c) + 5) * 8);
  *(undefined8 *)(lVar4 + 0x10) = param_3;
  *(undefined1 *)(lVar4 + 9) = 8;
  *(undefined1 *)(lVar4 + 10) = 0;
  *(undefined1 *)(lVar4 + 0xb) = 0;
  *(long *)(lVar4 + 0x20) = param_2 + 0x68;
  bVar3 = *(byte *)(param_2 + 0x3c);
  uVar2 = *(byte *)(param_2 + 0x3d) + 0x20;
  *(byte *)(param_2 + 0x3d) = (char)uVar2 - ((byte)(uVar2 >> 3) & 0x20);
  if (bVar3 != 0) {
    lVar8 = 0;
    plVar7 = (long *)(lVar4 + 0x28);
    do {
      lVar5 = FUN_00c1a314(param_1,0x30);
      *(undefined1 *)(lVar5 + 9) = 5;
      *(undefined1 *)(lVar5 + 10) = 1;
      *(undefined8 *)(lVar5 + 0x10) = 0xffffffffffffffff;
      lVar6 = *(long *)(param_2 + 0x28);
      *(undefined8 **)(lVar5 + 0x20) = (undefined8 *)(lVar5 + 0x10);
      puVar1 = (ushort *)(lVar8 + lVar6);
      lVar8 = lVar8 + 2;
      *(uint *)(lVar5 + 0x28) = (uint)param_2 ^ (uint)*puVar1 << 0x18;
      *plVar7 = lVar5;
      plVar7 = plVar7 + 1;
    } while (lVar8 != ((ulong)(bVar3 - 1) + 1) * 2);
  }
  *(byte *)(lVar4 + 0xb) = bVar3;
  return lVar4;
}

