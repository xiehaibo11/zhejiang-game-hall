
/* lua_cocos2dx_extension_ControlPotentiometer_initWithTrackSprite_ProgressTimer_ThumbSprite(lua_State*)
    */

undefined8
lua_cocos2dx_extension_ControlPotentiometer_initWithTrackSprite_ProgressTimer_ThumbSprite
          (lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  ControlPotentiometer *this;
  ulong uVar3;
  Sprite *pSVar4;
  Sprite *unaff_x21;
  ProgressTimer *unaff_x22;
  byte bVar5;
  byte bVar6;
  
  this = (ControlPotentiometer *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 3) {
    if (param_1 != (lua_State *)0x0) {
      iVar1 = lua_gettop(param_1);
      if ((iVar1 < 2) || (uVar3 = luaval_is_usertype(param_1,2,"cc.Sprite",0), (uVar3 & 1) == 0)) {
        bVar5 = 0;
      }
      else {
        unaff_x21 = (Sprite *)tolua_tousertype(param_1,2,0);
        bVar5 = 1;
      }
      iVar1 = lua_gettop(param_1);
      if ((iVar1 < 3) ||
         (uVar3 = luaval_is_usertype(param_1,3,"cc.ProgressTimer",0), (uVar3 & 1) == 0)) {
        bVar6 = 0;
      }
      else {
        unaff_x22 = (ProgressTimer *)tolua_tousertype(param_1,3,0);
        bVar6 = 1;
      }
      iVar1 = lua_gettop(param_1);
      if (((3 < iVar1) && (uVar3 = luaval_is_usertype(param_1,4,"cc.Sprite",0), (uVar3 & 1) != 0))
         && (pSVar4 = (Sprite *)tolua_tousertype(param_1,4,0), (bool)(bVar5 & bVar6))) {
        uVar2 = cocos2d::extension::ControlPotentiometer::
                initWithTrackSprite_ProgressTimer_ThumbSprite(this,unaff_x21,unaff_x22,pSVar4);
        tolua_pushboolean(param_1,uVar2 & 1);
        return 1;
      }
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_ControlPotentiometer_initWithTrackSprite_ProgressTimer_ThumbSprite\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e58e4,
               iVar1 + -1,3);
  }
  return 0;
}

