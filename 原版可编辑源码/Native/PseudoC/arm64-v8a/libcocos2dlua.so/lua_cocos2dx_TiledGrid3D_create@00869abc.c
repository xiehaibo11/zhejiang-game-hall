
/* lua_cocos2dx_TiledGrid3D_create(lua_State*) */

void lua_cocos2dx_TiledGrid3D_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  Texture2D *pTVar6;
  void *pvVar7;
  undefined8 uVar8;
  bool local_64 [4];
  Size aSStack_60 [16];
  Size local_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  switch(iVar2) {
  case 2:
    cocos2d::Size::Size(aSStack_60);
    uVar4 = luaval_to_size(param_1,2,aSStack_60,"cc.TiledGrid3D:create");
    if ((uVar4 & 1) != 0) {
      pvVar7 = (void *)cocos2d::TiledGrid3D::create(aSStack_60);
joined_r0x00869c00:
      if (pvVar7 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar8 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
                   "cc.TiledGrid3D");
        uVar8 = 1;
      }
      goto LAB_00869d60;
    }
    break;
  case 3:
    cocos2d::Size::Size(local_50);
    uVar4 = luaval_to_size(param_1,2,local_50,"cc.TiledGrid3D:create");
    if ((uVar4 & 1) != 0) {
      cocos2d::Rect::Rect((Rect *)aSStack_60);
      uVar4 = luaval_to_rect(param_1,3,aSStack_60,"cc.TiledGrid3D:create");
      if ((uVar4 & 1) != 0) {
        pvVar7 = (void *)cocos2d::TiledGrid3D::create(local_50,aSStack_60);
        goto joined_r0x00869c00;
      }
    }
    break;
  case 4:
    cocos2d::Size::Size(aSStack_60);
    uVar4 = luaval_to_size(param_1,2,aSStack_60,"cc.TiledGrid3D:create");
    if (((param_1 != (lua_State *)0x0) && ((uVar4 & 1) != 0)) &&
       ((iVar3 = lua_gettop(param_1), 2 < iVar3 &&
        (((uVar5 = luaval_is_usertype(param_1,3,"cc.Texture2D",0), (uVar5 & 1) != 0 &&
          (pTVar6 = (Texture2D *)tolua_tousertype(param_1,3,0), (uVar4 & 1) != 0)) &&
         (uVar4 = luaval_to_boolean(param_1,4,(bool *)local_50,"cc.TiledGrid3D:create"),
         (uVar4 & 1) != 0)))))) {
      pvVar7 = (void *)cocos2d::TiledGrid3D::create(aSStack_60,pTVar6,(bool)local_50[0]);
      goto joined_r0x00869c00;
    }
    break;
  case 5:
    cocos2d::Size::Size(local_50);
    uVar4 = luaval_to_size(param_1,2,local_50,"cc.TiledGrid3D:create");
    if ((((param_1 != (lua_State *)0x0) && ((uVar4 & 1) != 0)) &&
        (iVar3 = lua_gettop(param_1), 2 < iVar3)) &&
       (((uVar5 = luaval_is_usertype(param_1,3,"cc.Texture2D",0), (uVar5 & 1) != 0 &&
         (pTVar6 = (Texture2D *)tolua_tousertype(param_1,3,0), (uVar4 & 1) != 0)) &&
        (uVar4 = luaval_to_boolean(param_1,4,local_64,"cc.TiledGrid3D:create"), (uVar4 & 1) != 0))))
    {
      cocos2d::Rect::Rect((Rect *)aSStack_60);
      uVar4 = luaval_to_rect(param_1,5,aSStack_60,"cc.TiledGrid3D:create");
      if ((uVar4 & 1) != 0) {
        pvVar7 = (void *)cocos2d::TiledGrid3D::create(local_50,pTVar6,local_64[0],aSStack_60);
        goto joined_r0x00869c00;
      }
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "cc.TiledGrid3D:create",iVar2 + -1,4);
  uVar8 = 0;
LAB_00869d60:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}

