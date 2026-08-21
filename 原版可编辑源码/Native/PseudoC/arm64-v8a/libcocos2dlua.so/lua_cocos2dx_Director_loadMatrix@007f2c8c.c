
/* lua_cocos2dx_Director_loadMatrix(lua_State*) */

bool lua_cocos2dx_Director_loadMatrix(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  Director *pDVar5;
  bool bVar6;
  int local_7c;
  Mat4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pDVar5 = (Director *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    cocos2d::Mat4::Mat4(aMStack_78);
    uVar3 = luaval_to_int32(param_1,2,&local_7c,"cc.Director:loadMatrix");
    uVar4 = luaval_to_mat4(param_1,3,aMStack_78,"cc.Director:loadMatrix");
    bVar6 = (uVar3 & uVar4 & 1) == 0;
    if (bVar6) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Director_loadMatrix\'",0);
    }
    else {
      cocos2d::Director::loadMatrix(pDVar5,local_7c,aMStack_78);
      lua_settop(param_1,1);
    }
    bVar6 = !bVar6;
    cocos2d::Mat4::~Mat4(aMStack_78);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Director:loadMatrix",iVar2 + -1,2);
    bVar6 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

