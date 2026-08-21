
long lua_tolstring(long param_1,undefined4 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  
  puVar1 = (ulong *)FUN_00c03214();
  uVar3 = (uint)((long)*puVar1 >> 0x2f);
  if (uVar3 == 0xfffffffb) {
    uVar2 = *puVar1 & 0x7fffffffffff;
  }
  else {
    if (0xfffffff2 < uVar3) {
      if (param_3 != (ulong *)0x0) {
        *param_3 = 0;
        return 0;
      }
      return 0;
    }
    if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x28) <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x20)
       ) {
      FUN_00c19f80(param_1);
    }
    puVar1 = (ulong *)FUN_00c03214(param_1,param_2);
    uVar2 = FUN_00c006c0(param_1,puVar1);
    *puVar1 = uVar2 | 0xfffd800000000000;
  }
  if (param_3 != (ulong *)0x0) {
    *param_3 = (ulong)*(uint *)(uVar2 + 0x10);
  }
  return uVar2 + 0x18;
}

