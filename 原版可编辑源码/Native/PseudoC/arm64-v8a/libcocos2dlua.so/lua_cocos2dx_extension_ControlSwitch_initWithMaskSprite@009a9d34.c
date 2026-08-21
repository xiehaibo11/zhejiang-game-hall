
/* lua_cocos2dx_extension_ControlSwitch_initWithMaskSprite(lua_State*) */

undefined8 lua_cocos2dx_extension_ControlSwitch_initWithMaskSprite(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ControlSwitch *this;
  ulong uVar4;
  Sprite *pSVar5;
  Sprite *pSVar6;
  Sprite *pSVar7;
  Sprite *pSVar8;
  Label *pLVar9;
  Label *pLVar10;
  
  this = (ControlSwitch *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 == 5) {
    if (((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 1 < iVar2)) &&
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Sprite",0), (uVar4 & 1) != 0)) {
      pSVar5 = (Sprite *)tolua_tousertype(param_1,2,0);
      iVar2 = lua_gettop(param_1);
      if ((2 < iVar2) && (uVar4 = luaval_is_usertype(param_1,3,"cc.Sprite",0), (uVar4 & 1) != 0)) {
        pSVar6 = (Sprite *)tolua_tousertype(param_1,3,0);
        iVar2 = lua_gettop(param_1);
        if ((3 < iVar2) && (uVar4 = luaval_is_usertype(param_1,4,"cc.Sprite",0), (uVar4 & 1) != 0))
        {
          pSVar7 = (Sprite *)tolua_tousertype(param_1,4,0);
          iVar2 = lua_gettop(param_1);
          if ((4 < iVar2) && (uVar4 = luaval_is_usertype(param_1,5,"cc.Sprite",0), (uVar4 & 1) != 0)
             ) {
            pSVar8 = (Sprite *)tolua_tousertype(param_1,5,0);
            uVar3 = cocos2d::extension::ControlSwitch::initWithMaskSprite
                              (this,pSVar5,pSVar6,pSVar7,pSVar8);
LAB_009aa038:
            tolua_pushboolean(param_1,uVar3 & 1);
            return 1;
          }
        }
      }
    }
  }
  else if ((((iVar1 == 7) && (param_1 != (lua_State *)0x0)) &&
           (iVar2 = lua_gettop(param_1), 1 < iVar2)) &&
          (uVar4 = luaval_is_usertype(param_1,2,"cc.Sprite",0), (uVar4 & 1) != 0)) {
    pSVar5 = (Sprite *)tolua_tousertype(param_1,2,0);
    iVar2 = lua_gettop(param_1);
    if ((2 < iVar2) && (uVar4 = luaval_is_usertype(param_1,3,"cc.Sprite",0), (uVar4 & 1) != 0)) {
      pSVar6 = (Sprite *)tolua_tousertype(param_1,3,0);
      iVar2 = lua_gettop(param_1);
      if ((3 < iVar2) && (uVar4 = luaval_is_usertype(param_1,4,"cc.Sprite",0), (uVar4 & 1) != 0)) {
        pSVar7 = (Sprite *)tolua_tousertype(param_1,4,0);
        iVar2 = lua_gettop(param_1);
        if ((4 < iVar2) && (uVar4 = luaval_is_usertype(param_1,5,"cc.Sprite",0), (uVar4 & 1) != 0))
        {
          pSVar8 = (Sprite *)tolua_tousertype(param_1,5,0);
          iVar2 = lua_gettop(param_1);
          if ((5 < iVar2) && (uVar4 = luaval_is_usertype(param_1,6,"cc.Label",0), (uVar4 & 1) != 0))
          {
            pLVar9 = (Label *)tolua_tousertype(param_1,6,0);
            iVar2 = lua_gettop(param_1);
            if ((6 < iVar2) &&
               (uVar4 = luaval_is_usertype(param_1,7,"cc.Label",0), (uVar4 & 1) != 0)) {
              pLVar10 = (Label *)tolua_tousertype(param_1,7,0);
              uVar3 = cocos2d::extension::ControlSwitch::initWithMaskSprite
                                (this,pSVar5,pSVar6,pSVar7,pSVar8,pLVar9,pLVar10);
              goto LAB_009aa038;
            }
          }
        }
      }
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.ControlSwitch:initWithMaskSprite",iVar1 + -1,4);
  return 0;
}

