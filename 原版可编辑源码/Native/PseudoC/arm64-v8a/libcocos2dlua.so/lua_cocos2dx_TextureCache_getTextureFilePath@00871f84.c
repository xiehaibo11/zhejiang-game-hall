
/* lua_cocos2dx_TextureCache_getTextureFilePath(lua_State*) */

void lua_cocos2dx_TextureCache_getTextureFilePath(lua_State *param_1)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  Texture2D *pTVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte local_50 [8];
  ulong local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pTVar4 = (Texture2D *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar5 = luaval_is_usertype(param_1,2,"cc.Texture2D",0), (uVar5 & 1) != 0)) {
      tolua_tousertype(param_1,2,0);
      cocos2d::TextureCache::getTextureFilePath(pTVar4);
      uVar5 = (ulong)(local_50[0] >> 1);
      pvVar2 = (void *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        uVar5 = local_48;
        pvVar2 = local_40;
      }
      lua_pushlstring(param_1,pvVar2,uVar5);
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      uVar6 = 1;
      goto LAB_00872094;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_TextureCache_getTextureFilePath\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TextureCache:getTextureFilePath",iVar3 + -1,1);
  }
  uVar6 = 0;
LAB_00872094:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

