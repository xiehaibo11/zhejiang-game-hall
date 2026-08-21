
/* lua_cocos2dx_Director_getMatrix(lua_State*) */

void lua_cocos2dx_Director_getMatrix(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Director *pDVar3;
  ulong uVar4;
  Mat4 *pMVar5;
  undefined8 uVar6;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pDVar3 = (Director *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"cc.Director:getMatrix");
    if ((uVar4 & 1) != 0) {
      pMVar5 = (Mat4 *)cocos2d::Director::getMatrix(pDVar3,local_3c);
      mat4_to_luaval(param_1,pMVar5);
      uVar6 = 1;
      goto LAB_007f3944;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Director_getMatrix\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Director:getMatrix",iVar2 + -1,1);
  }
  uVar6 = 0;
LAB_007f3944:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

