
/* lua_cocos2dx_Follow_initWithTargetAndOffset(lua_State*) */

void lua_cocos2dx_Follow_initWithTargetAndOffset(lua_State *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  Follow *this;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  Node *unaff_x21;
  double local_78 [2];
  double local_68;
  double local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = (Follow *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 == 5) {
    cocos2d::Rect::Rect((Rect *)local_78);
    if (((param_1 == (lua_State *)0x0) || (iVar3 = lua_gettop(param_1), iVar3 < 2)) ||
       (uVar5 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar5 & 1) == 0)) {
      bVar2 = false;
    }
    else {
      unaff_x21 = (Node *)tolua_tousertype(param_1,2,0);
      bVar2 = true;
    }
    uVar5 = luaval_to_number(param_1,3,&local_60,"cc.Follow:initWithTargetAndOffset");
    uVar6 = luaval_to_number(param_1,4,&local_68,"cc.Follow:initWithTargetAndOffset");
    uVar7 = luaval_to_rect(param_1,5,(Rect *)local_78,"cc.Follow:initWithTargetAndOffset");
    if (((!bVar2) || ((uVar5 & 1) == 0)) || (((uVar6 & 1) == 0 || ((uVar7 & 1) == 0)))) {
LAB_007f91e8:
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_Follow_initWithTargetAndOffset\'",0)
      ;
      goto LAB_007f91fc;
    }
    puVar9 = (undefined1 *)local_78;
    local_78[0] = local_60;
    local_60 = local_68;
  }
  else {
    if (iVar3 != 4) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.Follow:initWithTargetAndOffset",iVar3 + -1,3);
LAB_007f91fc:
      uVar8 = 0;
      goto LAB_007f9200;
    }
    if (((param_1 == (lua_State *)0x0) || (iVar3 = lua_gettop(param_1), iVar3 < 2)) ||
       (uVar5 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar5 & 1) == 0)) {
      bVar2 = false;
    }
    else {
      unaff_x21 = (Node *)tolua_tousertype(param_1,2,0);
      bVar2 = true;
    }
    uVar5 = luaval_to_number(param_1,3,local_78,"cc.Follow:initWithTargetAndOffset");
    uVar6 = luaval_to_number(param_1,4,&local_60,"cc.Follow:initWithTargetAndOffset");
    if (((!bVar2) || ((uVar5 & 1) == 0)) || ((uVar6 & 1) == 0)) goto LAB_007f91e8;
    puVar9 = cocos2d::Rect::ZERO;
  }
  uVar4 = cocos2d::Follow::initWithTargetAndOffset
                    (this,unaff_x21,(float)local_78[0],(float)local_60,puVar9);
  tolua_pushboolean(param_1,uVar4 & 1);
  uVar8 = 1;
LAB_007f9200:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

