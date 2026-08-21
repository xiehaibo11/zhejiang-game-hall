
undefined2 FUN_00e545e0(long param_1,uint param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  uVar2 = (*(uint *)(lVar3 + 0xc) & 0xff00ff00) >> 8 | (*(uint *)(lVar3 + 0xc) & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  if (param_2 < uVar2) {
    return 0;
  }
  param_2 = param_2 - uVar2;
  uVar2 = (*(uint *)(lVar3 + 0x10) & 0xff00ff00) >> 8 | (*(uint *)(lVar3 + 0x10) & 0xff00ff) << 8;
  if (param_2 < (uVar2 >> 0x10 | uVar2 << 0x10)) {
    puVar1 = (undefined1 *)(lVar3 + 0x14 + (ulong)(param_2 * 2));
    return CONCAT11(*puVar1,puVar1[1]);
  }
  return 0;
}

