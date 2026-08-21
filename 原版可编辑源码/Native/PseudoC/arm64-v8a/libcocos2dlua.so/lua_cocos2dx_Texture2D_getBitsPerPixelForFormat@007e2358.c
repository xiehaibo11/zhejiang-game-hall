
/* lua_cocos2dx_Texture2D_getBitsPerPixelForFormat(lua_State*) */

void lua_cocos2dx_Texture2D_getBitsPerPixelForFormat(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  Texture2D *this;
  ulong uVar4;
  undefined8 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Texture2D *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 0) {
    uVar3 = cocos2d::Texture2D::getBitsPerPixelForFormat(this);
  }
  else {
    if ((iVar2 != 2) ||
       (uVar4 = luaval_to_int32(param_1,2,&local_3c,"cc.Texture2D:getBitsPerPixelForFormat"),
       (uVar4 & 1) == 0)) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.Texture2D:getBitsPerPixelForFormat",iVar2 + -1,0);
      uVar5 = 0;
      goto LAB_007e2410;
    }
    uVar3 = cocos2d::Texture2D::getBitsPerPixelForFormat(this,local_3c);
  }
  tolua_pushnumber((double)uVar3,param_1);
  uVar5 = 1;
LAB_007e2410:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

