
undefined4 lua_objlen(undefined8 param_1)

{
  undefined4 uVar1;
  ulong *puVar2;
  ulong uVar3;
  uint uVar4;
  
  puVar2 = (ulong *)FUN_00c03214();
  uVar3 = *puVar2;
  uVar4 = (uint)((long)uVar3 >> 0x2f);
  if (uVar4 == 0xfffffffb) {
    return *(undefined4 *)((uVar3 & 0x7fffffffffff) + 0x10);
  }
  if (uVar4 == 0xfffffff4) {
    uVar1 = FUN_00c1c99c(uVar3 & 0x7fffffffffff);
  }
  else {
    if (uVar4 == 0xfffffff3) {
      return *(undefined4 *)((uVar3 & 0x7fffffffffff) + 0x18);
    }
    uVar1 = 0;
    if (uVar4 < 0xfffffff3) {
      uVar3 = FUN_00c006c0(param_1,puVar2);
      *puVar2 = uVar3 | 0xfffd800000000000;
      return *(undefined4 *)(uVar3 + 0x10);
    }
  }
  return uVar1;
}

