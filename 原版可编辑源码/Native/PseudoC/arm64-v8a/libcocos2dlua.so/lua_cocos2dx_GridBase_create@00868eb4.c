
/* lua_cocos2dx_GridBase_create(lua_State*) */

void lua_cocos2dx_GridBase_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong uVar7;
  Texture2D *pTVar8;
  bool local_54 [4];
  Size aSStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 4) {
    cocos2d::Size::Size(aSStack_50);
    uVar4 = luaval_to_size(param_1,2,aSStack_50,"cc.GridBase:create");
    if ((((param_1 != (lua_State *)0x0) && ((uVar4 & 1) != 0)) &&
        (iVar3 = lua_gettop(param_1), 2 < iVar3)) &&
       (((uVar7 = luaval_is_usertype(param_1,3,"cc.Texture2D",0), (uVar7 & 1) != 0 &&
         (pTVar8 = (Texture2D *)tolua_tousertype(param_1,3,0), (uVar4 & 1) != 0)) &&
        (uVar4 = luaval_to_boolean(param_1,4,local_54,"cc.GridBase:create"), (uVar4 & 1) != 0)))) {
      pvVar5 = (void *)cocos2d::GridBase::create(aSStack_50,pTVar8,local_54[0]);
joined_r0x00868fe4:
      if (pvVar5 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar6 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                   "cc.GridBase");
        uVar6 = 1;
      }
      goto LAB_0086901c;
    }
  }
  else if (iVar2 == 2) {
    cocos2d::Size::Size(aSStack_50);
    uVar4 = luaval_to_size(param_1,2,aSStack_50,"cc.GridBase:create");
    if ((uVar4 & 1) != 0) {
      pvVar5 = (void *)cocos2d::GridBase::create(aSStack_50);
      goto joined_r0x00868fe4;
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d","cc.GridBase:create",
             iVar2 + -1,3);
  uVar6 = 0;
LAB_0086901c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

