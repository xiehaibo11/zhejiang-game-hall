
/* lua_cocos2dx_DrawNode_create(lua_State*) */

void lua_cocos2dx_DrawNode_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong uVar5;
  double local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 2) {
    uVar5 = luaval_to_number(param_1,2,&local_30,"cc.DrawNode:create");
    if ((uVar5 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_DrawNode_create\'",0);
      goto LAB_0083781c;
    }
    pvVar3 = (void *)cocos2d::DrawNode::create((float)local_30);
  }
  else {
    if (iVar2 + -1 != 0) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
                 "cc.DrawNode:create",iVar2 + -1,0);
LAB_0083781c:
      uVar4 = 0;
      goto LAB_00837820;
    }
    pvVar3 = (void *)cocos2d::DrawNode::create(2.0);
  }
  if (pvVar3 == (void *)0x0) {
    lua_pushnil(param_1);
    uVar4 = 1;
  }
  else {
    toluafix_pushusertype_ccobject
              (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
               "cc.DrawNode");
    uVar4 = 1;
  }
LAB_00837820:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

