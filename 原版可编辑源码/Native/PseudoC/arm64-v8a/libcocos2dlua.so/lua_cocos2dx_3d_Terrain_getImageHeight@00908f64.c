
/* lua_cocos2dx_3d_Terrain_getImageHeight(lua_State*) */

void lua_cocos2dx_3d_Terrain_getImageHeight(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Terrain *this;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  float fVar6;
  int local_50;
  int iStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (Terrain *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    uVar3 = luaval_to_int32(param_1,2,&iStack_4c,"cc.Terrain:getImageHeight");
    uVar4 = luaval_to_int32(param_1,3,&local_50,"cc.Terrain:getImageHeight");
    if (((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) {
      fVar6 = (float)cocos2d::Terrain::getImageHeight(this,iStack_4c,local_50);
      tolua_pushnumber((double)fVar6,param_1);
      uVar5 = 1;
      goto LAB_00909044;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Terrain_getImageHeight\'",0
               );
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Terrain:getImageHeight",iVar2 + -1,2);
  }
  uVar5 = 0;
LAB_00909044:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

