
/* lua_cocos2dx_TurnOffTiles_create(lua_State*) */

void lua_cocos2dx_TurnOffTiles_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  uint local_4c;
  Size aSStack_48 [8];
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 3) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"cc.TurnOffTiles:create");
    if ((uVar3 & 1) != 0) {
      cocos2d::Size::Size(aSStack_48);
      uVar3 = luaval_to_size(param_1,3,aSStack_48,"cc.TurnOffTiles:create");
      if ((uVar3 & 1) != 0) {
        pvVar4 = (void *)cocos2d::TurnOffTiles::create((float)local_40,aSStack_48);
        goto joined_r0x00831a88;
      }
    }
  }
  else if ((iVar2 == 4) &&
          (uVar3 = luaval_to_number(param_1,2,&local_40,"cc.TurnOffTiles:create"), (uVar3 & 1) != 0)
          ) {
    cocos2d::Size::Size(aSStack_48);
    uVar3 = luaval_to_size(param_1,3,aSStack_48,"cc.TurnOffTiles:create");
    if (((uVar3 & 1) != 0) &&
       (uVar3 = luaval_to_uint32(param_1,4,&local_4c,"cc.TurnOffTiles:create"), (uVar3 & 1) != 0)) {
      pvVar4 = (void *)cocos2d::TurnOffTiles::create((float)local_40,aSStack_48,local_4c);
joined_r0x00831a88:
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar5 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.TurnOffTiles");
        uVar5 = 1;
      }
      goto LAB_00831ad4;
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "cc.TurnOffTiles:create",iVar2 + -1,2);
  uVar5 = 0;
LAB_00831ad4:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

