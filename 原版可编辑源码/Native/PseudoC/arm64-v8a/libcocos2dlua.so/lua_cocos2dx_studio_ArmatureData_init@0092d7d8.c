
/* lua_cocos2dx_studio_ArmatureData_init(lua_State*) */

bool lua_cocos2dx_studio_ArmatureData_init(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  
                    /* try { // try from 0092d7e8 to 00a2d837 has its CatchHandler @ 0092d7e8
                       catch(type#1 @ 00000000) { ... } // from try @ 0092d7e8 with catch @ 0092d7e8
                       catch(type#1 @ 00000000) { ... } // from try @ 0092d878 with catch @ 0092d7e8
                       catch(type#1 @ 00000000) { ... } // from try @ 0092d8cc with catch @ 0092d7e8
                       catch(type#1 @ 00000000) { ... } // from try @ 0092d934 with catch @ 0092d7e8
                        */
  tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocostudio::ArmatureData::init();
                    /* try { // try from 0092d838 to 00a2d877 has its CatchHandler @ 0092d91c */
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ArmatureData:init",iVar1,0);
  }
  return iVar1 == 0;
}

