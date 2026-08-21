
/* lua_cocos2dx_extension_ControlSwitch_create(lua_State*) */

undefined8 lua_cocos2dx_extension_ControlSwitch_create(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  Sprite *pSVar4;
  Sprite *pSVar5;
  Sprite *pSVar6;
  Sprite *pSVar7;
  void *pvVar8;
  Label *pLVar9;
  Label *pLVar10;
  
  iVar1 = lua_gettop();
  if (iVar1 == 7) {
    if (((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 1 < iVar2)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"cc.Sprite",0), (uVar3 & 1) != 0)) {
      pSVar4 = (Sprite *)tolua_tousertype(param_1,2,0);
      iVar2 = lua_gettop(param_1);
      if ((2 < iVar2) && (uVar3 = luaval_is_usertype(param_1,3,"cc.Sprite",0), (uVar3 & 1) != 0)) {
        pSVar5 = (Sprite *)tolua_tousertype(param_1,3,0);
        iVar2 = lua_gettop(param_1);
        if ((3 < iVar2) && (uVar3 = luaval_is_usertype(param_1,4,"cc.Sprite",0), (uVar3 & 1) != 0))
        {
          pSVar6 = (Sprite *)tolua_tousertype(param_1,4,0);
          iVar2 = lua_gettop(param_1);
          if ((4 < iVar2) && (uVar3 = luaval_is_usertype(param_1,5,"cc.Sprite",0), (uVar3 & 1) != 0)
             ) {
            pSVar7 = (Sprite *)tolua_tousertype(param_1,5,0);
            iVar2 = lua_gettop(param_1);
            if ((5 < iVar2) &&
               (uVar3 = luaval_is_usertype(param_1,6,"cc.Label",0), (uVar3 & 1) != 0)) {
              pLVar9 = (Label *)tolua_tousertype(param_1,6,0);
              iVar2 = lua_gettop(param_1);
              if ((6 < iVar2) &&
                 (uVar3 = luaval_is_usertype(param_1,7,"cc.Label",0), (uVar3 & 1) != 0)) {
                pLVar10 = (Label *)tolua_tousertype(param_1,7,0);
                pvVar8 = (void *)cocos2d::extension::ControlSwitch::create
                                           (pSVar4,pSVar5,pSVar6,pSVar7,pLVar9,pLVar10);
                goto joined_r0x009aa404;
              }
            }
          }
        }
      }
    }
  }
  else if ((((iVar1 == 5) && (param_1 != (lua_State *)0x0)) &&
           (iVar2 = lua_gettop(param_1), 1 < iVar2)) &&
          (uVar3 = luaval_is_usertype(param_1,2,"cc.Sprite",0), (uVar3 & 1) != 0)) {
    pSVar4 = (Sprite *)tolua_tousertype(param_1,2,0);
    iVar2 = lua_gettop(param_1);
    if ((2 < iVar2) && (uVar3 = luaval_is_usertype(param_1,3,"cc.Sprite",0), (uVar3 & 1) != 0)) {
      pSVar5 = (Sprite *)tolua_tousertype(param_1,3,0);
      iVar2 = lua_gettop(param_1);
      if ((3 < iVar2) && (uVar3 = luaval_is_usertype(param_1,4,"cc.Sprite",0), (uVar3 & 1) != 0)) {
        pSVar6 = (Sprite *)tolua_tousertype(param_1,4,0);
        iVar2 = lua_gettop(param_1);
        if ((4 < iVar2) && (uVar3 = luaval_is_usertype(param_1,5,"cc.Sprite",0), (uVar3 & 1) != 0))
        {
          pSVar7 = (Sprite *)tolua_tousertype(param_1,5,0);
          pvVar8 = (void *)cocos2d::extension::ControlSwitch::create(pSVar4,pSVar5,pSVar6,pSVar7);
joined_r0x009aa404:
          if (pvVar8 != (void *)0x0) {
            toluafix_pushusertype_ccobject
                      (param_1,*(int *)((long)pvVar8 + 0xc),(int *)((long)pvVar8 + 0x10),pvVar8,
                       "cc.ControlSwitch");
            return 1;
          }
          lua_pushnil(param_1);
          return 1;
        }
      }
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "cc.ControlSwitch:create",iVar1 + -1,6);
  return 0;
}

