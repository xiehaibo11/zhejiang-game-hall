
/* lua_cocos2dx_Image_setPNGPremultipliedAlphaEnabled(lua_State*) */

undefined4 lua_cocos2dx_Image_setPNGPremultipliedAlphaEnabled(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"cc.Image:setPNGPremultipliedAlphaEnabled");
    if ((uVar3 & 1) != 0) {
      uVar4 = 1;
      cocos2d::Image::PNG_PREMULTIPLIED_ALPHA_ENABLED = local_3c[0];
      lua_settop(param_1,1);
      goto LAB_007fa360;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_Image_setPNGPremultipliedAlphaEnabled\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.Image:setPNGPremultipliedAlphaEnabled",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_007fa360:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

