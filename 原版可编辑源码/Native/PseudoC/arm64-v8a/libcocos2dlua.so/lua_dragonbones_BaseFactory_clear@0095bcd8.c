
/* lua_dragonbones_BaseFactory_clear(lua_State*) */

undefined4 lua_dragonbones_BaseFactory_clear(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    uVar4 = luaval_to_boolean(param_1,2,local_3c,"db.BaseFactory:clear");
    if ((uVar4 & 1) == 0) {
      tolua_error(param_1,&DAT_012d3a09,0);
      goto LAB_0095bdbc;
    }
                    /* try { // try from 0095bd70 to 00a5bdbb has its CatchHandler @ 0095bd70
                       catch() { ... } // from try @ 0095bd70 with catch @ 0095bd70
                       catch() { ... } // from try @ 0095bdc0 with catch @ 0095bd70 */
    (**(code **)(*plVar3 + 0x98))(plVar3,local_3c[0]);
  }
  else {
    if (iVar2 + -1 != 0) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "db.BaseFactory:clear",iVar2 + -1,0);
LAB_0095bdbc:
                    /* try { // try from 0095bdbc to 00a5bdbf has its CatchHandler @ 0095bdf4 */
      uVar5 = 0;
      goto LAB_0095bdc0;
    }
    (**(code **)(*plVar3 + 0x98))(plVar3,1);
  }
  uVar5 = 1;
  lua_settop(param_1,1);
LAB_0095bdc0:
                    /* try { // try from 0095bdc0 to 00a5be07 has its CatchHandler @ 0095bd70 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

