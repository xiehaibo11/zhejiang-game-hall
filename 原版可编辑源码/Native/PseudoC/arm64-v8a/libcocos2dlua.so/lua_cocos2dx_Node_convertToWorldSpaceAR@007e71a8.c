
/* lua_cocos2dx_Node_convertToWorldSpaceAR(lua_State*) */

void lua_cocos2dx_Node_convertToWorldSpaceAR(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Node *this;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 local_48 [2];
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Node *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_40 = 0;
    uVar3 = luaval_to_vec2(param_1,2,(Vec2 *)&local_40,"cc.Node:convertToWorldSpaceAR");
    if ((uVar3 & 1) != 0) {
      local_48[0] = cocos2d::Node::convertToWorldSpaceAR(this,(Vec2 *)&local_40);
      vec2_to_luaval(param_1,(Vec2 *)local_48);
      uVar4 = 1;
      goto LAB_007e726c;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Node_convertToWorldSpaceAR\'",
                0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Node:convertToWorldSpaceAR",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_007e726c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

