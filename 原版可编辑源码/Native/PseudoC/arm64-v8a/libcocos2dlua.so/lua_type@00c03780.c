
uint lua_type(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  puVar2 = (undefined8 *)FUN_00c03214();
  uVar1 = 3;
  uVar3 = (uint)((long)*puVar2 >> 0x2f);
  if (0xfffffff2 < uVar3) {
    if (puVar2 != (undefined8 *)(*(long *)(param_1 + 0x10) + 0xe8)) {
      return (uint)(0x75a0698042110 >> ((ulong)(~uVar3 << 2) & 0x3f)) & 0xf;
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

