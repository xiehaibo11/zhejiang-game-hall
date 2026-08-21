
void FUN_008afc4c(lua_State *param_1)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  Ref *pRVar7;
  void *pvVar8;
  undefined8 uVar9;
  uint uVar10;
  long *local_68;
  long *local_60;
  long *plStack_58;
  Ref *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar9 = 0;
  if (param_1 != (lua_State *)0x0) {
    iVar6 = lua_gettop();
    uVar3 = iVar6 - 1;
    if ((int)uVar3 < 1) {
      if (uVar3 != 0) {
        luaL_error(param_1,"create wrong number of arguments: %d, was expecting %d\n",uVar3,0);
        uVar9 = 0;
        goto LAB_008afdc0;
      }
      pvVar8 = (void *)cocos2d::Menu::create();
      piVar2 = (int *)((long)pvVar8 + 0x10);
      if (pvVar8 == (void *)0x0) {
        iVar6 = -1;
        piVar2 = (int *)0x0;
      }
      else {
        iVar6 = *(int *)((long)pvVar8 + 0xc);
      }
      toluafix_pushusertype_ccobject(param_1,iVar6,piVar2,pvVar8,"cc.Menu");
    }
    else {
      uVar10 = 1;
      local_60 = (long *)0x0;
      plStack_58 = (long *)0x0;
      local_68 = (long *)0x0;
      do {
        pRVar7 = (Ref *)tolua_tousertype(param_1,uVar10 + 1,0);
        if (pRVar7 != (Ref *)0x0) {
          local_50 = pRVar7;
          if (local_60 == plStack_58) {
            std::__ndk1::vector<cocos2d::MenuItem*,std::__ndk1::allocator<cocos2d::MenuItem*>>::
            __push_back_slow_path<cocos2d::MenuItem*const&>
                      ((vector<cocos2d::MenuItem*,std::__ndk1::allocator<cocos2d::MenuItem*>> *)
                       &local_68,(MenuItem **)&local_50);
          }
          else {
            *local_60 = (long)pRVar7;
            local_60 = local_60 + 1;
          }
          cocos2d::Ref::retain(local_50);
          uVar10 = uVar10 + 1;
        }
      } while (uVar10 <= uVar3);
      pvVar8 = (void *)cocos2d::Menu::createWithArray((Vector *)&local_68);
      piVar2 = (int *)((long)pvVar8 + 0x10);
      if (pvVar8 == (void *)0x0) {
        iVar6 = -1;
        piVar2 = (int *)0x0;
      }
      else {
        iVar6 = *(int *)((long)pvVar8 + 0xc);
      }
      toluafix_pushusertype_ccobject(param_1,iVar6,piVar2,pvVar8,"cc.Menu");
      plVar5 = local_60;
      for (plVar1 = local_68; plVar1 != plVar5; plVar1 = plVar1 + 1) {
        cocos2d::Ref::release((Ref *)*plVar1);
      }
      local_60 = local_68;
      if (local_68 != (long *)0x0) {
        operator_delete(local_68);
      }
    }
    uVar9 = 1;
  }
LAB_008afdc0:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}

