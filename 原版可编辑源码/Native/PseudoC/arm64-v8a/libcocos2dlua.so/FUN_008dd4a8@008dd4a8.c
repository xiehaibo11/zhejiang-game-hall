
undefined8 FUN_008dd4a8(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GImage *pGVar3;
  ulong uVar4;
  int local_3c;
  long local_38;
  
                    /* try { // try from 008dd4bc to 009dd687 has its CatchHandler @ 008dd744 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pGVar3 = (GImage *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"fairygui.GImage:setFlip");
    if ((uVar4 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GImage_setFlip\'",0);
    }
    else {
      fairygui::GImage::setFlip(pGVar3,local_3c);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GImage:setFlip",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

