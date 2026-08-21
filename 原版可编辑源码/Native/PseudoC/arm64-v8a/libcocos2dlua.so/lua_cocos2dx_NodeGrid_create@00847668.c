
/* lua_cocos2dx_NodeGrid_create(lua_State*) */

void lua_cocos2dx_NodeGrid_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 0) {
    pvVar4 = (void *)cocos2d::NodeGrid::create();
    if (pvVar4 == (void *)0x0) {
LAB_008476d0:
      lua_pushnil(param_1);
    }
    else {
LAB_0084770c:
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "cc.NodeGrid");
    }
    uVar5 = 1;
  }
  else {
    if (iVar2 == 2) {
      cocos2d::Rect::Rect(aRStack_48);
      uVar3 = luaval_to_rect(param_1,2,aRStack_48,"cc.NodeGrid:create");
      if ((uVar3 & 1) != 0) {
        pvVar4 = (void *)cocos2d::NodeGrid::create(aRStack_48);
        if (pvVar4 != (void *)0x0) goto LAB_0084770c;
        goto LAB_008476d0;
      }
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d","cc.NodeGrid:create"
               ,iVar2 + -1,0);
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

