
/* lua_cocos2dx_ParallaxNode_addChild(lua_State*) */

undefined4 lua_cocos2dx_ParallaxNode_addChild(lua_State *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ParallaxNode *this;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  Node *unaff_x21;
  undefined8 local_70;
  undefined8 uStack_68;
  int local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = (ParallaxNode *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 4) {
    local_70 = 0;
    uStack_68 = 0;
    if (((param_1 == (lua_State *)0x0) || (iVar3 = lua_gettop(param_1), iVar3 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar4 & 1) == 0)) {
      bVar2 = false;
    }
    else {
      unaff_x21 = (Node *)tolua_tousertype(param_1,2,0);
      bVar2 = true;
    }
    uVar4 = luaval_to_int32(param_1,3,&local_5c,"cc.ParallaxNode:addChild");
    uVar5 = luaval_to_vec2(param_1,4,(Vec2 *)&uStack_68,"cc.ParallaxNode:addChild");
    uVar6 = luaval_to_vec2(param_1,5,(Vec2 *)&local_70,"cc.ParallaxNode:addChild");
    if (((bVar2) && ((uVar4 & 1) != 0)) && (((uVar5 & 1) != 0 && ((uVar6 & 1) != 0)))) {
      cocos2d::ParallaxNode::addChild(this,unaff_x21,local_5c,(Vec2 *)&uStack_68,(Vec2 *)&local_70);
      uVar7 = 1;
      lua_settop(param_1,1);
      goto LAB_00877ae8;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ParallaxNode_addChild\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ParallaxNode:addChild",iVar3 + -1,4);
  }
  uVar7 = 0;
LAB_00877ae8:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

