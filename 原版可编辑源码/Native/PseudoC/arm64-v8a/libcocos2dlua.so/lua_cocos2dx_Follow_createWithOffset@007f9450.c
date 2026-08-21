
/* lua_cocos2dx_Follow_createWithOffset(lua_State*) */

void lua_cocos2dx_Follow_createWithOffset(lua_State *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  Node *unaff_x20;
  double local_78 [2];
  double local_68;
  double local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar3 = lua_gettop();
  if (iVar3 == 5) {
    cocos2d::Rect::Rect((Rect *)local_78);
    if (((param_1 == (lua_State *)0x0) || (iVar3 = lua_gettop(param_1), iVar3 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar4 & 1) == 0)) {
      bVar2 = false;
    }
    else {
      unaff_x20 = (Node *)tolua_tousertype(param_1,2,0);
      bVar2 = true;
    }
    uVar4 = luaval_to_number(param_1,3,&local_60,"cc.Follow:createWithOffset");
    uVar5 = luaval_to_number(param_1,4,&local_68,"cc.Follow:createWithOffset");
    uVar6 = luaval_to_rect(param_1,5,(Rect *)local_78,"cc.Follow:createWithOffset");
    if (((!bVar2) || ((uVar4 & 1) == 0)) || (((uVar5 & 1) == 0 || ((uVar6 & 1) == 0)))) {
LAB_007f964c:
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Follow_createWithOffset\'",0
                 );
      goto LAB_007f9660;
    }
    puVar9 = (undefined1 *)local_78;
    local_78[0] = local_60;
    local_60 = local_68;
  }
  else {
    if (iVar3 != 4) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
                 "cc.Follow:createWithOffset",iVar3 + -1,3);
LAB_007f9660:
      uVar8 = 0;
      goto LAB_007f9664;
    }
    if (((param_1 == (lua_State *)0x0) || (iVar3 = lua_gettop(param_1), iVar3 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar4 & 1) == 0)) {
      bVar2 = false;
    }
    else {
      unaff_x20 = (Node *)tolua_tousertype(param_1,2,0);
      bVar2 = true;
    }
    uVar4 = luaval_to_number(param_1,3,local_78,"cc.Follow:createWithOffset");
    uVar5 = luaval_to_number(param_1,4,&local_60,"cc.Follow:createWithOffset");
    if (((!bVar2) || ((uVar4 & 1) == 0)) || ((uVar5 & 1) == 0)) goto LAB_007f964c;
    puVar9 = cocos2d::Rect::ZERO;
  }
  pvVar7 = (void *)cocos2d::Follow::createWithOffset
                             (unaff_x20,(float)local_78[0],(float)local_60,puVar9);
  if (pvVar7 == (void *)0x0) {
    lua_pushnil(param_1);
    uVar8 = 1;
  }
  else {
    toluafix_pushusertype_ccobject
              (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,"cc.Follow")
    ;
    uVar8 = 1;
  }
LAB_007f9664:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

