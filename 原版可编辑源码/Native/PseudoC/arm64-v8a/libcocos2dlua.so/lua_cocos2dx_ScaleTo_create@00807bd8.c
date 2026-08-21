
/* lua_cocos2dx_ScaleTo_create(lua_State*) */

void lua_cocos2dx_ScaleTo_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  double local_58;
  double local_50;
  double local_48;
  double dStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 3) {
    uVar3 = luaval_to_number(param_1,2,&dStack_40,"cc.ScaleTo:create");
    if (((uVar3 & 1) != 0) &&
       (uVar3 = luaval_to_number(param_1,3,&local_48,"cc.ScaleTo:create"), (uVar3 & 1) != 0)) {
      pvVar4 = (void *)cocos2d::ScaleTo::create((float)dStack_40,(float)local_48);
joined_r0x00807d94:
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar5 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.ScaleTo");
        uVar5 = 1;
      }
      goto LAB_00807dec;
    }
  }
  else if (iVar2 == 5) {
    uVar3 = luaval_to_number(param_1,2,&dStack_40,"cc.ScaleTo:create");
    if (((((uVar3 & 1) != 0) &&
         (uVar3 = luaval_to_number(param_1,3,&local_48,"cc.ScaleTo:create"), (uVar3 & 1) != 0)) &&
        (uVar3 = luaval_to_number(param_1,4,&local_50,"cc.ScaleTo:create"), (uVar3 & 1) != 0)) &&
       (uVar3 = luaval_to_number(param_1,5,&local_58,"cc.ScaleTo:create"), (uVar3 & 1) != 0)) {
      pvVar4 = (void *)cocos2d::ScaleTo::create
                                 ((float)dStack_40,(float)local_48,(float)local_50,(float)local_58);
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.ScaleTo");
      }
      uVar5 = 1;
      goto LAB_00807dec;
    }
  }
  else if (((iVar2 == 4) &&
           (uVar3 = luaval_to_number(param_1,2,&dStack_40,"cc.ScaleTo:create"), (uVar3 & 1) != 0))
          && ((uVar3 = luaval_to_number(param_1,3,&local_48,"cc.ScaleTo:create"), (uVar3 & 1) != 0
              && (uVar3 = luaval_to_number(param_1,4,&local_50,"cc.ScaleTo:create"),
                 (uVar3 & 1) != 0)))) {
    pvVar4 = (void *)cocos2d::ScaleTo::create((float)dStack_40,(float)local_48,(float)local_50);
    goto joined_r0x00807d94;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d","cc.ScaleTo:create",
             iVar2 + -1,4);
  uVar5 = 0;
LAB_00807dec:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

