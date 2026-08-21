
/* lua_cocos2dx_RenderTexture_newImage(lua_State*) */

void lua_cocos2dx_RenderTexture_newImage(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  RenderTexture *this;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (RenderTexture *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"cc.RenderTexture:newImage");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_RenderTexture_newImage\'",0)
      ;
      goto LAB_00859660;
    }
  }
  else {
    if (iVar2 + -1 != 0) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.RenderTexture:newImage",iVar2 + -1,0);
LAB_00859660:
      uVar5 = 0;
      goto LAB_00859664;
    }
    local_3c[0] = true;
  }
  pvVar4 = (void *)cocos2d::RenderTexture::newImage(this,local_3c[0]);
  if (pvVar4 == (void *)0x0) {
    lua_pushnil(param_1);
    uVar5 = 1;
  }
  else {
    toluafix_pushusertype_ccobject
              (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,"cc.Image");
    uVar5 = 1;
  }
LAB_00859664:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

