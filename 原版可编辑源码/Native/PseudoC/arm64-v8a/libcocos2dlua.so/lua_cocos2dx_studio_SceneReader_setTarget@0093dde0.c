
/* lua_cocos2dx_studio_SceneReader_setTarget(lua_State*) */

void lua_cocos2dx_studio_SceneReader_setTarget(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  SceneReader *this;
  undefined8 uVar3;
  code *pcVar4;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (SceneReader *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 1) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.SceneReader:setTarget",iVar2 + -1,1);
                    /* try { // try from 0093de84 to 00a3de97 has its CatchHandler @ 0093df1c */
    uVar3 = 0;
    goto LAB_0093de9c;
  }
  local_50 = (long *)0x0;
  cocostudio::SceneReader::setTarget(this,(function *)alStack_70);
  lua_settop(param_1,1);
                    /* try { // try from 0093de50 to 00a3de83 has its CatchHandler @ 0093df50 */
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_0093de94:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_0093de94;
  }
  uVar3 = 1;
LAB_0093de9c:
                    /* try { // try from 0093de9c to 00a3decf has its CatchHandler @ 0093df20 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

