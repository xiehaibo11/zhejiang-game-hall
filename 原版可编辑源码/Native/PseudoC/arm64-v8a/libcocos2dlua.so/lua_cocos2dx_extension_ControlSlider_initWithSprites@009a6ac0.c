
/* lua_cocos2dx_extension_ControlSlider_initWithSprites(lua_State*) */

undefined8 lua_cocos2dx_extension_ControlSlider_initWithSprites(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 == 4) {
    if (((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 1 < iVar2)) &&
       (uVar5 = luaval_is_usertype(param_1,2,"cc.Sprite",0), (uVar5 & 1) != 0)) {
      uVar6 = tolua_tousertype(param_1,2,0);
      iVar2 = lua_gettop(param_1);
      if ((2 < iVar2) && (uVar5 = luaval_is_usertype(param_1,3,"cc.Sprite",0), (uVar5 & 1) != 0)) {
        uVar7 = tolua_tousertype(param_1,3,0);
        iVar2 = lua_gettop(param_1);
        if ((3 < iVar2) && (uVar5 = luaval_is_usertype(param_1,4,"cc.Sprite",0), (uVar5 & 1) != 0))
        {
          uVar8 = tolua_tousertype(param_1,4,0);
          uVar3 = (**(code **)(*plVar4 + 0x6b8))(plVar4,uVar6,uVar7,uVar8);
LAB_009a6d04:
          tolua_pushboolean(param_1,uVar3 & 1);
          return 1;
        }
      }
    }
  }
  else if (((iVar1 == 5) && (param_1 != (lua_State *)0x0)) &&
          ((iVar2 = lua_gettop(param_1), 1 < iVar2 &&
           (uVar5 = luaval_is_usertype(param_1,2,"cc.Sprite",0), (uVar5 & 1) != 0)))) {
    uVar6 = tolua_tousertype(param_1,2,0);
    iVar2 = lua_gettop(param_1);
    if ((2 < iVar2) && (uVar5 = luaval_is_usertype(param_1,3,"cc.Sprite",0), (uVar5 & 1) != 0)) {
      uVar7 = tolua_tousertype(param_1,3,0);
      iVar2 = lua_gettop(param_1);
      if ((3 < iVar2) && (uVar5 = luaval_is_usertype(param_1,4,"cc.Sprite",0), (uVar5 & 1) != 0)) {
        uVar8 = tolua_tousertype(param_1,4,0);
        iVar2 = lua_gettop(param_1);
        if ((4 < iVar2) && (uVar5 = luaval_is_usertype(param_1,5,"cc.Sprite",0), (uVar5 & 1) != 0))
        {
          uVar9 = tolua_tousertype(param_1,5,0);
          uVar3 = (**(code **)(*plVar4 + 0x6c0))(plVar4,uVar6,uVar7,uVar8,uVar9);
          goto LAB_009a6d04;
        }
      }
    }
  }
                    /* try { // try from 009a6d20 to 00aa6d6f has its CatchHandler @ 009a6d20
                       catch() { ... } // from try @ 009a6d20 with catch @ 009a6d20
                       catch() { ... } // from try @ 009a6da8 with catch @ 009a6d20
                       catch() { ... } // from try @ 009a6e14 with catch @ 009a6d20 */
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.ControlSlider:initWithSprites",iVar1 + -1,3);
  return 0;
}

