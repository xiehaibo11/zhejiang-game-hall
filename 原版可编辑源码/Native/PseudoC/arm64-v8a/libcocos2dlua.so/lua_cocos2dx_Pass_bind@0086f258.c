
/* lua_cocos2dx_Pass_bind(lua_State*) */

void lua_cocos2dx_Pass_bind(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Pass *this;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  bool local_7c [4];
  Mat4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Pass *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    cocos2d::Mat4::Mat4(aMStack_78);
    uVar3 = luaval_to_mat4(param_1,2,aMStack_78,"cc.Pass:bind");
    if ((uVar3 & 1) != 0) {
      cocos2d::Pass::bind(this,aMStack_78);
      lua_settop(param_1,1);
      cocos2d::Mat4::~Mat4(aMStack_78);
      uVar4 = 1;
      goto LAB_0086f3a0;
    }
    cocos2d::Mat4::~Mat4(aMStack_78);
  }
  else if (iVar2 == 3) {
    cocos2d::Mat4::Mat4(aMStack_78);
    uVar3 = luaval_to_mat4(param_1,2,aMStack_78,"cc.Pass:bind");
    if (((uVar3 & 1) == 0) ||
       (uVar3 = luaval_to_boolean(param_1,3,local_7c,"cc.Pass:bind"), (uVar3 & 1) == 0)) {
      iVar5 = 2;
    }
    else {
      cocos2d::Pass::bind(this,aMStack_78,local_7c[0]);
      iVar5 = 1;
      lua_settop(param_1,1);
    }
    cocos2d::Mat4::~Mat4(aMStack_78);
    if (iVar5 != 2) {
      uVar4 = 1;
      goto LAB_0086f3a0;
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","cc.Pass:bind",
             iVar2 + -1,1);
  uVar4 = 0;
LAB_0086f3a0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

