
/* lua_cocos2dx_Director_loadProjectionMatrix(lua_State*) */

bool lua_cocos2dx_Director_loadProjectionMatrix(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  Director *this;
  bool bVar5;
  uint local_7c;
  Mat4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Director *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    cocos2d::Mat4::Mat4(aMStack_78);
    uVar3 = luaval_to_mat4(param_1,2,aMStack_78,"cc.Director:loadProjectionMatrix");
    uVar4 = luaval_to_uint32(param_1,3,&local_7c,"cc.Director:loadProjectionMatrix");
    bVar5 = (uVar3 & uVar4 & 1) == 0;
    if (bVar5) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_Director_loadProjectionMatrix\'",0);
    }
    else {
      cocos2d::Director::loadProjectionMatrix(this,aMStack_78,(ulong)local_7c);
      lua_settop(param_1,1);
    }
    bVar5 = !bVar5;
    cocos2d::Mat4::~Mat4(aMStack_78);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Director:loadProjectionMatrix",iVar2 + -1,2);
    bVar5 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

