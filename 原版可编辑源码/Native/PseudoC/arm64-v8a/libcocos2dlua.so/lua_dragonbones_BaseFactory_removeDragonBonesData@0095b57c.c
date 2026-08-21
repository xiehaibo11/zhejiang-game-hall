
/* lua_dragonbones_BaseFactory_removeDragonBonesData(lua_State*) */

undefined4 lua_dragonbones_BaseFactory_removeDragonBonesData(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 uVar7;
  bool local_54 [4];
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0095b5a4 to 00a5b5d7 has its CatchHandler @ 0095b6a4 */
  plVar5 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 0095b624 to 00a5b6bf has its CatchHandler @ 0095b4ec */
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"db.BaseFactory:removeDragonBonesData");
    uVar4 = luaval_to_boolean(param_1,3,local_54,"db.BaseFactory:removeDragonBonesData");
    if ((uVar3 & uVar4 & 1) != 0) {
                    /* catch() { ... } // from try @ 0095b5d8 with catch @ 0095b670 */
      (**(code **)(*plVar5 + 0x78))(plVar5,&local_50,local_54[0]);
                    /* catch() { ... } // from try @ 0095b5f0 with catch @ 0095b674 */
      lua_settop(param_1,1);
      goto LAB_0095b684;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_dragonbones_BaseFactory_removeDragonBonesData\'"
                ,0);
LAB_0095b6e4:
    uVar7 = 0;
  }
  else {
    if (iVar2 != 2) {
                    /* catch() { ... } // from try @ 0095b5a4 with catch @ 0095b6a4 */
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d3891,
                 iVar2 + -1,1);
      uVar7 = 0;
      goto LAB_0095b6f8;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 0095b5d8 to 00a5b5eb has its CatchHandler @ 0095b670 */
    uVar6 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"db.BaseFactory:removeDragonBonesData");
    if ((uVar6 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_dragonbones_BaseFactory_removeDragonBonesData\'"
                  ,0);
      goto LAB_0095b6e4;
    }
                    /* try { // try from 0095b5f0 to 00a5b623 has its CatchHandler @ 0095b674 */
    (**(code **)(*plVar5 + 0x78))(plVar5,&local_50,1);
    lua_settop(param_1,1);
LAB_0095b684:
    uVar7 = 1;
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_0095b6f8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

