
undefined8 FUN_008cdf74(undefined8 param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)tolua_tousertype(param_1,1,0);
  if ((*pbVar1 & 1) == 0) {
    pbVar1 = pbVar1 + 1;
  }
  else {
    pbVar1 = *(byte **)(pbVar1 + 0x10);
  }
  lua_pushstring(param_1,pbVar1);
  return 1;
}

