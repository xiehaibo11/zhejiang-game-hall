
short FUN_00e54070(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  
  uVar1 = *param_2 + 1;
  if (uVar1 >> 0x10 != 0) {
    return 0;
  }
  lVar5 = *(long *)(param_1 + 0x18);
  uVar2 = (uint)CONCAT11(*(undefined1 *)(lVar5 + 6),*(undefined1 *)(lVar5 + 7));
  uVar4 = uVar2;
  if (uVar2 <= uVar1) {
    uVar4 = uVar1;
  }
  uVar1 = (uint)CONCAT11(*(undefined1 *)(lVar5 + 8),*(undefined1 *)(lVar5 + 9));
  if (uVar4 - uVar2 < uVar1) {
    puVar6 = (undefined1 *)(lVar5 + (ulong)((uVar4 - uVar2) * 2) + 10);
    do {
      sVar3 = CONCAT11(*puVar6,puVar6[1]);
      if (sVar3 != 0) goto LAB_00e54100;
      if (0xfffe < uVar4) {
        return 0;
      }
      uVar4 = uVar4 + 1;
      puVar6 = puVar6 + 2;
    } while (uVar4 - uVar2 < uVar1);
  }
  sVar3 = 0;
  uVar4 = 0;
LAB_00e54100:
  *param_2 = uVar4;
  return sVar3;
}

