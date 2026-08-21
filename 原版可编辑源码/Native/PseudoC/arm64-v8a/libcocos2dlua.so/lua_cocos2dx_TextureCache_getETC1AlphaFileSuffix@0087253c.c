
/* lua_cocos2dx_TextureCache_getETC1AlphaFileSuffix(lua_State*) */

void lua_cocos2dx_TextureCache_getETC1AlphaFileSuffix(lua_State *param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  TextureCache *this;
  undefined8 uVar5;
  byte local_50 [8];
  ulong local_48;
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this = (TextureCache *)lua_gettop();
  iVar2 = (int)this + -1;
  if (iVar2 == 0) {
    cocos2d::TextureCache::getETC1AlphaFileSuffix(this);
    uVar1 = (ulong)(local_50[0] >> 1);
    pvVar4 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      uVar1 = local_48;
      pvVar4 = local_40;
    }
    lua_pushlstring(param_1,pvVar4,uVar1);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    uVar5 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.TextureCache:getETC1AlphaFileSuffix",iVar2,0);
    uVar5 = 0;
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

