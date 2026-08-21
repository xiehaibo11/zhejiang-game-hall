
uint FUN_00e54c64(long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)(*(long *)(param_1 + 0x18) + 0xc);
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      uVar2 = uVar4 + uVar5 >> 1;
      puVar1 = (uint *)(*(long *)(param_1 + 0x18) + 0x14 + (ulong)(uVar2 * 0xc));
      uVar3 = (puVar1[-1] & 0xff00ff00) >> 8 | (puVar1[-1] & 0xff00ff) << 8;
      if ((uVar3 >> 0x10 | uVar3 << 0x10) <= param_2) {
        uVar5 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
        if (param_2 <= (uVar5 >> 0x10 | uVar5 << 0x10)) {
          uVar4 = (puVar1[1] & 0xff00ff00) >> 8 | (puVar1[1] & 0xff00ff) << 8;
          return uVar4 >> 0x10 | uVar4 << 0x10;
        }
        uVar5 = uVar2 + 1;
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
    } while (uVar5 < uVar4);
  }
  return 0;
}

