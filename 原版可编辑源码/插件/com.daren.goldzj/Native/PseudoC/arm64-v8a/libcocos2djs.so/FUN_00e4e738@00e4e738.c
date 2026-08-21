
undefined2 FUN_00e4e738(long param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined2 uVar3;
  ushort *puVar4;
  uint uVar5;
  
  puVar4 = *(ushort **)(param_1 + 0x18);
  uVar2 = puVar4[1];
  if ((uint)uVar2 + (uint)puVar4[3] * 0x100 < param_2) {
    return 0;
  }
  uVar5 = (uint)*puVar4;
  if (param_2 < uVar5 + (uint)puVar4[2] * 0x100) {
    return 0;
  }
  uVar1 = param_2 & 0xff;
  uVar3 = 0;
  if ((uVar1 < uVar2 || uVar1 == uVar2) && (uVar5 <= uVar1)) {
    uVar3 = *(undefined2 *)
             (*(long *)(puVar4 + 8) +
             (long)(int)((uVar1 - uVar5) +
                        ((uVar2 + 1) - (uint)*puVar4) * ((param_2 >> 8 & 0xffff) - (uint)puVar4[2]))
             * 2);
  }
  return uVar3;
}

