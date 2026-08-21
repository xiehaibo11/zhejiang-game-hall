
/* lua_dragonbones_CCArmatureDisplay_addDBEventListener(lua_State*) */

bool lua_dragonbones_CCArmatureDisplay_addDBEventListener(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  ulong local_88 [2];
  void *local_78;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 2) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.CCArmatureDisplay:addDBEventListener",iVar2 + -1,2);
                    /* try { // try from 0095db2c to 00a5db5f has its CatchHandler @ 0095dc2c */
    bVar6 = false;
    goto LAB_0095db88;
  }
  local_88[1] = 0;
  local_78 = (void *)0x0;
  local_88[0] = 0;
  local_50 = (long *)0x0;
  uVar4 = luaval_to_std_string
                    (param_1,2,(basic_string *)local_88,"db.CCArmatureDisplay:addDBEventListener");
  bVar6 = (uVar4 & 1) == 0;
  if (bVar6) {
    tolua_error(param_1,
                "invalid arguments in function \'lua_dragonbones_CCArmatureDisplay_addDBEventListener\'"
                ,0);
  }
  else {
    (**(code **)(*plVar3 + 0x560))(plVar3,local_88,alStack_70);
    lua_settop(param_1,1);
  }
  bVar6 = !bVar6;
  if (alStack_70 == local_50) {
    pcVar5 = *(code **)(*local_50 + 0x20);
LAB_0095db74:
    (*pcVar5)();
  }
  else if (local_50 != (long *)0x0) {
                    /* try { // try from 0095db60 to 00a5db73 has its CatchHandler @ 0095dbf8 */
    pcVar5 = *(code **)(*local_50 + 0x28);
    goto LAB_0095db74;
  }
                    /* try { // try from 0095db78 to 00a5dbab has its CatchHandler @ 0095dbfc */
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
LAB_0095db88:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0095dbac to 00a5dc47 has its CatchHandler @ 0095da5c */
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

