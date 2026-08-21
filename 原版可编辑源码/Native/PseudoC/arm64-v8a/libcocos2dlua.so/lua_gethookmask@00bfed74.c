
byte lua_gethookmask(long param_1)

{
  return *(byte *)(*(long *)(param_1 + 0x10) + 0xc1) & 0xf;
}

