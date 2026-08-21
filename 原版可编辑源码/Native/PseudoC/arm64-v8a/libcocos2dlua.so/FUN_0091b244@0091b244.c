
undefined8 FUN_0091b244(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 < 1) {
    lua_pushvalue(param_1,0xffffd8eb);
    lua_pushvalue(param_1,0xffffd8ea);
  }
  else {
    iVar2 = lua_type(param_1,1);
    if (iVar2 == 6) {
      pcVar3 = (code *)lua_touserdata(param_1,0xffffd8ec);
      lua_pushvalue(param_1,1);
      lua_call(param_1,0,2);
      iVar2 = lua_isnumber(param_1,0xfffffffe);
      if ((iVar2 == 0) || (iVar2 = lua_isnumber(param_1,0xffffffff), iVar2 == 0)) {
        luaL_argerror(param_1,1,"expected function to return two numbers");
      }
      dVar6 = (double)lua_tonumber(param_1,0xffffd8eb);
      dVar7 = (double)lua_tonumber(param_1,0xfffffffe);
      dVar8 = (double)lua_tonumber(param_1,0xffffffff);
      uVar4 = (*pcVar3)((long)dVar6,(long)dVar7,(long)dVar8);
      lua_pushnumber((double)uVar4,param_1);
      lua_pushvalue(param_1,0xffffffff);
      lua_replace(param_1,0xffffd8eb);
      dVar6 = (double)lua_tonumber(param_1,0xffffd8ea);
      dVar7 = (double)lua_tonumber(param_1,0xfffffffe);
      dVar6 = dVar6 + dVar7;
    }
    else {
      pcVar3 = (code *)lua_touserdata(param_1,0xffffd8ed);
      uVar5 = luaL_checklstring(param_1,1,&local_50);
      dVar6 = (double)lua_tonumber(param_1,0xffffd8eb);
      uVar4 = (*pcVar3)((long)dVar6,uVar5,local_50);
      lua_pushnumber((double)uVar4,param_1);
                    /* try { // try from 0091b3e4 to 00a1b42f has its CatchHandler @ 0091b3e4
                       catch() { ... } // from try @ 0091b3e4 with catch @ 0091b3e4
                       catch() { ... } // from try @ 0091b434 with catch @ 0091b3e4 */
      lua_pushvalue(param_1,0xffffffff);
      lua_replace(param_1,0xffffd8eb);
      dVar6 = (double)lua_tonumber(param_1,0xffffd8ea);
      dVar7 = (double)NEON_ucvtf(CONCAT44(uStack_4c,local_50));
      dVar6 = dVar6 + dVar7;
    }
    lua_pushnumber(dVar6,param_1);
    lua_pushvalue(param_1,0xffffffff);
    lua_replace(param_1,0xffffd8ea);
  }
                    /* try { // try from 0091b430 to 00a1b433 has its CatchHandler @ 0091b468 */
                    /* try { // try from 0091b434 to 00a1b47b has its CatchHandler @ 0091b3e4 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

