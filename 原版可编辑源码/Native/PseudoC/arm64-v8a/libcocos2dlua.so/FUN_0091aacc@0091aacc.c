
undefined8 FUN_0091aacc(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)lua_newuserdata(param_1,0x70);
  iVar1 = lua_isnumber(param_1,1);
  if (iVar1 == 0) {
    uVar4 = 0x2f;
  }
  else {
    uVar4 = lua_tointeger(param_1,1);
                    /* try { // try from 0091ab08 to 00a1abd7 has its CatchHandler @ 0091ab08
                       catch() { ... } // from try @ 0091ab08 with catch @ 0091ab08
                       catch() { ... } // from try @ 0091abe0 with catch @ 0091ab08
                       catch() { ... } // from try @ 0091ac80 with catch @ 0091ab08 */
  }
  *puVar3 = 0;
  *(undefined4 *)(puVar3 + 1) = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  uVar2 = inflateInit2_(puVar3,uVar4,"1.2.8",0x70);
  FUN_0091ada0(param_1,uVar2,puVar3,0x108);
  lua_getfield(param_1,0xffffd8f0,"lz.inflate.meta");
  lua_setmetatable(param_1,0xfffffffe);
  lua_pushnil(param_1);
  lua_pushcclosure(param_1,FUN_0091b228,2);
  return 1;
}

