
undefined8 FUN_008abeb8(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Node *this;
  ulong uVar3;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != (lua_State *)0x0) {
    this = (Node *)tolua_tousertype(param_1,1,0);
    iVar2 = lua_gettop(param_1);
    if (iVar2 + -1 == 2) {
      iVar2 = toluafix_ref_function(param_1,2,0);
      local_3c = 0;
      uVar3 = luaval_to_int32(param_1,3,&local_3c,"cc.Node:scheduleUpdateWithPriorityLua");
      if ((uVar3 & 1) != 0) {
        cocos2d::Node::scheduleUpdateWithPriorityLua(this,iVar2,local_3c);
      }
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.Node:scheduleUpdateWithPriorityLua",iVar2 + -1,2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

