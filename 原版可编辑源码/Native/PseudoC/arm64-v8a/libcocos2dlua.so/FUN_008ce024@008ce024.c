
undefined8 FUN_008ce024(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = tolua_tousertype(param_1,1,0);
  uVar2 = NEON_ucvtf((ulong)*(uint *)(lVar1 + 0x18));
  tolua_pushnumber(uVar2,param_1);
  return 1;
}

