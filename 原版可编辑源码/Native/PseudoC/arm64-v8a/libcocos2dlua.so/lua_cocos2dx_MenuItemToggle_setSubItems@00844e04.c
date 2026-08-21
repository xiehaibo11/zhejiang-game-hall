
/* lua_cocos2dx_MenuItemToggle_setSubItems(lua_State*) */

undefined4 lua_cocos2dx_MenuItemToggle_setSubItems(lua_State *param_1)

{
  vector<cocos2d::MenuItem*,std::__ndk1::allocator<cocos2d::MenuItem*>> *this;
  long lVar1;
  MenuItem **ppMVar2;
  MenuItem **ppMVar3;
  MenuItem **ppMVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  MenuItem **local_60;
  MenuItem **local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar7 = tolua_tousertype(param_1,1,0);
  iVar6 = lua_gettop(param_1);
  if (iVar6 + -1 == 1) {
    local_58 = (MenuItem **)0x0;
    uStack_50 = 0;
    local_60 = (MenuItem **)0x0;
    bVar5 = luaval_to_ccvector<cocos2d::MenuItem*>
                      (param_1,2,(Vector *)&local_60,"cc.MenuItemToggle:setSubItems");
    if (bVar5) {
      this = (vector<cocos2d::MenuItem*,std::__ndk1::allocator<cocos2d::MenuItem*>> *)
             (lVar7 + 0x340);
      if ((vector<cocos2d::MenuItem*,std::__ndk1::allocator<cocos2d::MenuItem*>> *)&local_60 != this
         ) {
        puVar9 = *(undefined8 **)(lVar7 + 0x340);
        puVar10 = *(undefined8 **)(lVar7 + 0x348);
        if (puVar9 != puVar10) {
          do {
            cocos2d::Ref::release((Ref *)*puVar9);
            puVar9 = puVar9 + 1;
          } while (puVar10 != puVar9);
          puVar9 = *(undefined8 **)this;
        }
        *(undefined8 **)(lVar7 + 0x348) = puVar9;
        std::__ndk1::vector<cocos2d::MenuItem*,std::__ndk1::allocator<cocos2d::MenuItem*>>::
        assign<cocos2d::MenuItem**>(this,local_60,local_58);
        puVar10 = *(undefined8 **)(lVar7 + 0x348);
        for (puVar9 = *(undefined8 **)(lVar7 + 0x340); puVar9 != puVar10; puVar9 = puVar9 + 1) {
          cocos2d::Ref::retain((Ref *)*puVar9);
        }
      }
      uVar8 = 1;
      lua_settop(param_1,1);
      ppMVar2 = local_60;
      ppMVar3 = local_58;
    }
    else {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_MenuItemToggle_setSubItems\'",0);
      uVar8 = 0;
      ppMVar2 = local_60;
      ppMVar3 = local_58;
    }
    for (; ppMVar4 = local_58, ppMVar2 != local_58; ppMVar2 = ppMVar2 + 1) {
      local_58 = ppMVar3;
      cocos2d::Ref::release((Ref *)*ppMVar2);
      ppMVar3 = local_58;
      local_58 = ppMVar4;
    }
    local_58 = local_60;
    if (local_60 != (MenuItem **)0x0) {
      operator_delete(local_60);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.MenuItemToggle:setSubItems",iVar6 + -1,1);
    uVar8 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

