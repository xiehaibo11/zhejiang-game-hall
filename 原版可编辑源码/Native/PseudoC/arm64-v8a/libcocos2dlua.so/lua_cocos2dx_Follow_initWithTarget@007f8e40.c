
/* lua_cocos2dx_Follow_initWithTarget(lua_State*) */

void lua_cocos2dx_Follow_initWithTarget(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  Follow *this;
  ulong uVar4;
  Node *pNVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Follow *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    cocos2d::Rect::Rect(aRStack_48);
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar4 & 1) == 0)) {
      luaval_to_rect(param_1,3,aRStack_48,"cc.Follow:initWithTarget");
    }
    else {
      pNVar5 = (Node *)tolua_tousertype(param_1,2,0);
      uVar4 = luaval_to_rect(param_1,3,aRStack_48,"cc.Follow:initWithTarget");
      if ((uVar4 & 1) != 0) {
        puVar7 = aRStack_48;
        goto LAB_007f8f54;
      }
    }
LAB_007f8fa8:
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Follow_initWithTarget\'",0);
  }
  else {
    if (iVar2 == 2) {
      if (((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 1 < iVar2)) &&
         (uVar4 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar4 & 1) != 0)) {
        pNVar5 = (Node *)tolua_tousertype(param_1,2,0);
        puVar7 = cocos2d::Rect::ZERO;
LAB_007f8f54:
        uVar3 = cocos2d::Follow::initWithTarget(this,pNVar5,puVar7);
        tolua_pushboolean(param_1,uVar3 & 1);
        uVar6 = 1;
        goto LAB_007f8fc0;
      }
      goto LAB_007f8fa8;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Follow:initWithTarget",iVar2 + -1,1);
  }
  uVar6 = 0;
LAB_007f8fc0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

