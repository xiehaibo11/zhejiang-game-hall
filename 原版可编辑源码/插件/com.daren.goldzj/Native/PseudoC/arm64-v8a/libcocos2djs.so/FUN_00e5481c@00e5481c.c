
int FUN_00e5481c(long param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = *(uint *)(*(long *)(param_1 + 0x18) + 0xc);
  uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
  uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
  if (uVar5 != 0) {
    uVar6 = 0;
    do {
      uVar3 = uVar5 + uVar6 >> 1;
      puVar1 = (uint *)(*(long *)(param_1 + 0x18) + 0x14 + (ulong)(uVar3 * 0xc));
      uVar4 = (puVar1[-1] & 0xff00ff00) >> 8 | (puVar1[-1] & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      if (uVar4 <= param_2) {
        uVar6 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
        if (param_2 <= (uVar6 >> 0x10 | uVar6 << 0x10)) {
          param_2 = param_2 - uVar4;
          uVar5 = (puVar1[1] & 0xff00ff00) >> 8 | (puVar1[1] & 0xff00ff) << 8;
          uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
          iVar2 = 0;
          if (uVar5 <= ~param_2) {
            iVar2 = uVar5 + param_2;
          }
          return iVar2;
        }
        uVar6 = uVar3 + 1;
        uVar3 = uVar5;
      }
      uVar5 = uVar3;
    } while (uVar6 < uVar5);
  }
  return 0;
}

