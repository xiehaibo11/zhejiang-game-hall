
/* lua_cocos2dx_TransitionPageTurn_actionWithSize(lua_State*) */

void lua_cocos2dx_TransitionPageTurn_actionWithSize(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  TransitionPageTurn *this;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (TransitionPageTurn *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Size::Size(aSStack_40);
    uVar3 = luaval_to_size(param_1,2,aSStack_40,"cc.TransitionPageTurn:actionWithSize");
    if ((uVar3 & 1) != 0) {
      pvVar4 = (void *)cocos2d::TransitionPageTurn::actionWithSize(this,aSStack_40);
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar5 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.ActionInterval");
        uVar5 = 1;
      }
      goto LAB_00861f34;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_TransitionPageTurn_actionWithSize\'",0
               );
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TransitionPageTurn:actionWithSize",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00861f34:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

