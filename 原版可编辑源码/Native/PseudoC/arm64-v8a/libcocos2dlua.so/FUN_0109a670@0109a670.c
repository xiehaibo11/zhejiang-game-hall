
short FUN_0109a670(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  
  lVar5 = *(long *)(param_1 + 0x18);
  uVar4 = (*(uint *)(lVar5 + 0xc) & 0xff00ff00) >> 8 | (*(uint *)(lVar5 + 0xc) & 0xff00ff) << 8;
  uVar1 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar4 = uVar1;
                    /* try { // try from 0109a688 to 0119a693 has its CatchHandler @ 0109a760 */
  if (uVar1 <= *param_2 + 1) {
    uVar4 = *param_2 + 1;
  }
  uVar2 = (*(uint *)(lVar5 + 0x10) & 0xff00ff00) >> 8 | (*(uint *)(lVar5 + 0x10) & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
                    /* try { // try from 0109a694 to 0119a79f has its CatchHandler @ 0109a610 */
  if (uVar4 - uVar1 < uVar2) {
    puVar6 = (undefined1 *)(lVar5 + (ulong)((uVar4 - uVar1) * 2) + 0x14);
    do {
      sVar3 = CONCAT11(*puVar6,puVar6[1]);
      if (sVar3 != 0) goto LAB_0109a6d4;
      uVar4 = uVar4 + 1;
      puVar6 = puVar6 + 2;
    } while (uVar4 - uVar1 < uVar2);
  }
  sVar3 = 0;
LAB_0109a6d4:
  *param_2 = uVar4;
  return sVar3;
}

