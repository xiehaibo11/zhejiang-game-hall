
undefined8
png_icc_check_tag_table
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar5;
  uint *puVar6;
  uint uVar4;
  
  uVar2 = (*(uint *)(param_5 + 0x80) & 0xff00ff00) >> 8 |
          (*(uint *)(param_5 + 0x80) & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  if (uVar2 != 0) {
    uVar5 = 0;
    puVar6 = (uint *)(param_5 + 0x84);
    do {
      uVar1 = puVar6[2];
      uVar3 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
      uVar4 = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = (uint)(byte)puVar6[1] << 0x18 | (uint)*(byte *)((long)puVar6 + 5) << 0x10 |
              (uint)*(byte *)((long)puVar6 + 6) << 8 | (uint)*(byte *)((long)puVar6 + 7);
      if ((*(byte *)((long)puVar6 + 7) & 3) != 0) {
        FUN_00d62294(param_1,0,param_3,uVar4,"ICC profile tag start not a multiple of 4");
      }
      if ((param_4 < uVar3) ||
         (uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8,
         param_4 - uVar3 < (uVar1 >> 0x10 | uVar1 << 0x10))) {
        FUN_00d62294(param_1,param_2,param_3,uVar4,"ICC profile tag outside profile");
        return 0;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 3;
    } while (uVar5 < uVar2);
  }
  return 1;
}

