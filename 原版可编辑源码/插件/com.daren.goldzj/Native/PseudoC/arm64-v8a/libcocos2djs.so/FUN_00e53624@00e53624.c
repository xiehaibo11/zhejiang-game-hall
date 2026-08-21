
short FUN_00e53624(long param_1,uint param_2)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  short sVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  if (param_2 >> 0x10 != 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x18) + 6;
  puVar6 = (undefined1 *)(*(long *)(param_1 + 0x18) + 0x206);
  if (param_2 >> 8 == 0) {
    puVar7 = (undefined1 *)(lVar2 + ((ulong)(param_2 << 1) & 0x1fe));
    if (CONCAT11(*puVar7,puVar7[1]) != 0) {
      return 0;
    }
  }
  else {
    pbVar1 = (byte *)(lVar2 + (ulong)(param_2 >> 8) * 2);
    uVar3 = (ulong)pbVar1[1] & 0xf8 | (ulong)*pbVar1 << 8;
    if (uVar3 == 0) {
      return 0;
    }
    puVar6 = puVar6 + uVar3;
  }
  puVar7 = puVar6 + 6;
  uVar4 = (param_2 & 0xff) - (uint)CONCAT11(*puVar6,puVar6[1]);
  sVar5 = 0;
  if ((uVar4 < CONCAT11(puVar6[2],puVar6[3])) && (CONCAT11(*puVar7,puVar6[7]) != 0)) {
    sVar5 = CONCAT11(puVar7[(uint)CONCAT11(*puVar7,puVar6[7]) + uVar4 * 2],
                     (puVar7 + ((uint)CONCAT11(*puVar7,puVar6[7]) + uVar4 * 2))[1]);
    if (sVar5 == 0) {
      return 0;
    }
    sVar5 = sVar5 + CONCAT11(puVar6[4],puVar6[5]);
  }
  return sVar5;
}

