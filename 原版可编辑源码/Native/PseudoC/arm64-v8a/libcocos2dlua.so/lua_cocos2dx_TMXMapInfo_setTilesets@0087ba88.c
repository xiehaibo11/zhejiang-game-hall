
/* lua_cocos2dx_TMXMapInfo_setTilesets(lua_State*) */

undefined4 lua_cocos2dx_TMXMapInfo_setTilesets(lua_State *param_1)

{
  vector<cocos2d::TMXTilesetInfo*,std::__ndk1::allocator<cocos2d::TMXTilesetInfo*>> *this;
  undefined8 *puVar1;
  long lVar2;
  TMXTilesetInfo **ppTVar3;
  TMXTilesetInfo **ppTVar4;
  TMXTilesetInfo **ppTVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  TMXTilesetInfo **local_60;
  TMXTilesetInfo **local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar8 = tolua_tousertype(param_1,1,0);
  iVar7 = lua_gettop(param_1);
  if (iVar7 + -1 == 1) {
    local_58 = (TMXTilesetInfo **)0x0;
    uStack_50 = 0;
    local_60 = (TMXTilesetInfo **)0x0;
    bVar6 = luaval_to_ccvector<cocos2d::TMXTilesetInfo*>
                      (param_1,2,(Vector *)&local_60,"cc.TMXMapInfo:setTilesets");
    if (bVar6) {
      this = (vector<cocos2d::TMXTilesetInfo*,std::__ndk1::allocator<cocos2d::TMXTilesetInfo*>> *)
             (lVar8 + 0x68);
      if ((vector<cocos2d::TMXTilesetInfo*,std::__ndk1::allocator<cocos2d::TMXTilesetInfo*>> *)
          &local_60 != this) {
        puVar10 = *(undefined8 **)(lVar8 + 0x68);
        puVar1 = *(undefined8 **)(lVar8 + 0x70);
        if (puVar10 != puVar1) {
          do {
            cocos2d::Ref::release((Ref *)*puVar10);
            puVar10 = puVar10 + 1;
          } while (puVar1 != puVar10);
          puVar10 = *(undefined8 **)this;
        }
        *(undefined8 **)(lVar8 + 0x70) = puVar10;
        std::__ndk1::
        vector<cocos2d::TMXTilesetInfo*,std::__ndk1::allocator<cocos2d::TMXTilesetInfo*>>::
        assign<cocos2d::TMXTilesetInfo**>(this,local_60,local_58);
        puVar1 = *(undefined8 **)(lVar8 + 0x70);
        for (puVar10 = *(undefined8 **)(lVar8 + 0x68); puVar10 != puVar1; puVar10 = puVar10 + 1) {
          cocos2d::Ref::retain((Ref *)*puVar10);
        }
      }
      uVar9 = 1;
      lua_settop(param_1,1);
      ppTVar3 = local_60;
      ppTVar4 = local_58;
    }
    else {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_TMXMapInfo_setTilesets\'",0)
      ;
      uVar9 = 0;
      ppTVar3 = local_60;
      ppTVar4 = local_58;
    }
    for (; ppTVar5 = local_58, ppTVar3 != local_58; ppTVar3 = ppTVar3 + 1) {
      local_58 = ppTVar4;
      cocos2d::Ref::release((Ref *)*ppTVar3);
      ppTVar4 = local_58;
      local_58 = ppTVar5;
    }
    local_58 = local_60;
    if (local_60 != (TMXTilesetInfo **)0x0) {
      operator_delete(local_60);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TMXMapInfo:setTilesets",iVar7 + -1,1);
    uVar9 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

