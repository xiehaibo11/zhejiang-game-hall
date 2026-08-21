
/* lua_cocos2dx_RenderTexture_clear(lua_State*) */

undefined4 lua_cocos2dx_RenderTexture_clear(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 4) {
    uVar3 = luaval_to_number(param_1,2,&dStack_60,"cc.RenderTexture:clear");
    uVar4 = luaval_to_number(param_1,3,&local_68,"cc.RenderTexture:clear");
    uVar5 = luaval_to_number(param_1,4,&dStack_70,"cc.RenderTexture:clear");
    uVar6 = luaval_to_number(param_1,5,&local_78,"cc.RenderTexture:clear");
    if (((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) && ((uVar6 & 1) != 0)) {
      cocos2d::RenderTexture::clear
                ((float)dStack_60,(float)local_68,(float)dStack_70,(float)local_78);
      uVar7 = 1;
      lua_settop(param_1,1);
      goto LAB_008594d0;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_RenderTexture_clear\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.RenderTexture:clear",iVar2 + -1,4);
  }
  uVar7 = 0;
LAB_008594d0:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

