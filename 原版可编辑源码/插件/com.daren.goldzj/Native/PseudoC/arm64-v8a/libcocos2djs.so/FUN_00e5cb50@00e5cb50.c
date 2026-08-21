
long FUN_00e5cb50(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 uVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  int local_24;
  
  puVar6 = *(undefined1 **)(param_1 + 0x18);
  uVar3 = *(ushort *)(param_1 + 8) >> 1;
  lVar4 = FUN_00e13bcc(param_2,1,0,(ulong)uVar3 + 1,0,&local_24);
  if (local_24 != 0) {
    return 0;
  }
  if (uVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    do {
      uVar1 = (uint)CONCAT11(*puVar6,puVar6[1]);
      if (uVar1 == 0) break;
      uVar2 = 0x3f;
      if (uVar1 - 0x20 < 0x60) {
        uVar2 = puVar6[1];
      }
      *(undefined1 *)(lVar4 + uVar5) = uVar2;
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 2;
    } while (uVar5 < uVar3);
  }
  *(undefined1 *)(lVar4 + (uVar5 & 0xffffffff)) = 0;
  return lVar4;
}

