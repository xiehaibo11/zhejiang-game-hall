
undefined8 FUN_009d1c24(undefined8 param_1)

{
  int iVar1;
  
  lua_settop(param_1,1);
  iVar1 = lua_type(param_1,1);
  if (iVar1 == 0) {
    lua_pushcclosure(param_1,FUN_009d1ca8,0);
  }
                    /* try { // try from 009d1c70 to 00ad1ebf has its CatchHandler @ 009cee70 */
  lua_pushcclosure(param_1,FUN_009d1cb0,1);
  return 1;
}

