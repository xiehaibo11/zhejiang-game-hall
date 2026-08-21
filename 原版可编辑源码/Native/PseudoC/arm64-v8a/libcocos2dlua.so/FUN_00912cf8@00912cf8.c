
undefined8 FUN_00912cf8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = tolua_tousertype(param_1,1,0);
  tolua_pushboolean(param_1,*(undefined1 *)(lVar1 + 0xc9));
  return 1;
}

