
/* lua_cocos2dx_Texture2D_setMaxS(lua_State*) */

undefined4 lua_cocos2dx_Texture2D_setMaxS(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Texture2D *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Texture2D *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"cc.Texture2D:setMaxS");
    if ((uVar3 & 1) != 0) {
      cocos2d::Texture2D::setMaxS(this,(float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_007e3b60;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Texture2D_setMaxS\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Texture2D:setMaxS",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_007e3b60:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

