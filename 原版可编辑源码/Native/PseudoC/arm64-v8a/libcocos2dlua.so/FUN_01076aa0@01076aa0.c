
undefined8 FUN_01076aa0(long param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  puVar1 = *(undefined1 **)(param_1 + 0x160);
  if (*(undefined1 **)(param_1 + 0x168) < puVar1 + 10) {
    return 0x14;
  }
  *(ushort *)(param_1 + 0x3c) = CONCAT11(*puVar1,puVar1[1]);
  *(long *)(param_1 + 0x40) = (long)CONCAT11(puVar1[2],puVar1[3]);
  *(long *)(param_1 + 0x48) = (long)CONCAT11(puVar1[4],puVar1[5]);
  *(long *)(param_1 + 0x50) = (long)CONCAT11(puVar1[6],puVar1[7]);
  uVar2 = puVar1[8];
  uVar3 = puVar1[9];
  *(undefined1 **)(param_1 + 0x160) = puVar1 + 10;
  *(long *)(param_1 + 0x58) = (long)CONCAT11(uVar2,uVar3);
  return 0;
}

