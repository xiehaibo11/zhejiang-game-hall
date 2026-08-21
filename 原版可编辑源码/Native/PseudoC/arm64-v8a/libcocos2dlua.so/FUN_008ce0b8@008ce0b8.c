
undefined8 FUN_008ce0b8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = tolua_tousertype(param_1,1,0);
  tolua_pushnumber(*(undefined8 *)(lVar1 + 0x20),param_1);
  return 1;
}

