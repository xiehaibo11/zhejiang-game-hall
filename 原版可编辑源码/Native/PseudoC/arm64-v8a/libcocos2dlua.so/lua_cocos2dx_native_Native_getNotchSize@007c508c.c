
/* lua_cocos2dx_native_Native_getNotchSize(lua_State*) */

void lua_cocos2dx_native_Native_getNotchSize(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  Native *this;
  Size aSStack_30 [8];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  this = (Native *)lua_gettop();
  iVar1 = (int)this + -1;
  if (iVar1 == 0) {
    cocos2d::Native::getNotchSize(this);
    size_to_luaval(param_1,aSStack_30);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.Native:getNotchSize",iVar1,0);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 0);
}

