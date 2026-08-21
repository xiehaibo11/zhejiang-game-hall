
/* lua_dragonbones_CCArmatureDisplay_removeDBEventListener(lua_State*) */

bool lua_dragonbones_CCArmatureDisplay_removeDBEventListener(lua_State *param_1)

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
                    /* try { // try from 0095dfec to 00a5e087 has its CatchHandler @ 0095deb4 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 2) {
                    /* catch() { ... } // from try @ 0095df6c with catch @ 0095e06c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.CCArmatureDisplay:removeDBEventListener",iVar2 + -1,2);
    bVar6 = false;
    goto LAB_0095e0d0;
  }
  local_88[1] = 0;
  local_78 = (void *)0x0;
  local_88[0] = 0;
  local_50 = (long *)0x0;
  uVar4 = luaval_to_std_string
                    (param_1,2,(basic_string *)local_88,"db.CCArmatureDisplay:removeDBEventListener"
                    );
  bVar6 = (uVar4 & 1) == 0;
  if (bVar6) {
    tolua_error(param_1,
                "invalid arguments in function \'lua_dragonbones_CCArmatureDisplay_removeDBEventListener\'"
                ,0);
  }
  else {
                    /* catch() { ... } // from try @ 0095dfa0 with catch @ 0095e038 */
                    /* catch() { ... } // from try @ 0095dfb8 with catch @ 0095e03c */
    (**(code **)(*plVar3 + 0x568))(plVar3,local_88,alStack_70);
    lua_settop(param_1,1);
  }
  bVar6 = !bVar6;
  if (alStack_70 == local_50) {
    pcVar5 = *(code **)(*local_50 + 0x20);
LAB_0095e0bc:
    (*pcVar5)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar5 = *(code **)(*local_50 + 0x28);
    goto LAB_0095e0bc;
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
LAB_0095e0d0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

