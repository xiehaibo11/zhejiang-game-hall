
void FUN_008b0624(lua_State *param_1)

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
  long *local_78;
  long *local_70;
  long *plStack_68;
  undefined1 auStack_60 [16];
  Ref *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar9 = 0;
  if (param_1 != (lua_State *)0x0) {
    iVar6 = lua_gettop();
    uVar3 = iVar6 - 1;
    if ((int)uVar3 < 1) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.Spawn:create",uVar3,1);
      uVar9 = 0;
    }
    else {
      local_70 = (long *)0x0;
      plStack_68 = (long *)0x0;
      local_78 = (long *)0x0;
      if ((uVar3 == 1) && (iVar6 = tolua_istable(param_1,2,0,auStack_60), iVar6 != 0)) {
        luaval_to_ccvector<cocos2d::FiniteTimeAction*>
                  (param_1,2,(Vector *)&local_78,"cc.Spawn:create");
      }
      else {
        uVar10 = 1;
        do {
          pRVar7 = (Ref *)tolua_tousertype(param_1,uVar10 + 1,0);
          if (pRVar7 != (Ref *)0x0) {
            local_50 = pRVar7;
            if (local_70 == plStack_68) {
              std::__ndk1::
              vector<cocos2d::FiniteTimeAction*,std::__ndk1::allocator<cocos2d::FiniteTimeAction*>>
              ::__push_back_slow_path<cocos2d::FiniteTimeAction*const&>
                        ((vector<cocos2d::FiniteTimeAction*,std::__ndk1::allocator<cocos2d::FiniteTimeAction*>>
                          *)&local_78,(FiniteTimeAction **)&local_50);
            }
            else {
              *local_70 = (long)pRVar7;
              local_70 = local_70 + 1;
            }
            cocos2d::Ref::retain(local_50);
            uVar10 = uVar10 + 1;
          }
        } while (uVar10 <= uVar3);
      }
      pvVar8 = (void *)cocos2d::Spawn::create((Vector *)&local_78);
      piVar2 = (int *)((long)pvVar8 + 0x10);
      if (pvVar8 == (void *)0x0) {
        iVar6 = -1;
        piVar2 = (int *)0x0;
      }
      else {
        iVar6 = *(int *)((long)pvVar8 + 0xc);
      }
      toluafix_pushusertype_ccobject(param_1,iVar6,piVar2,pvVar8,"cc.Spawn");
      plVar5 = local_70;
      for (plVar1 = local_78; plVar1 != plVar5; plVar1 = plVar1 + 1) {
        cocos2d::Ref::release((Ref *)*plVar1);
      }
      local_70 = local_78;
      if (local_78 != (long *)0x0) {
        operator_delete(local_78);
      }
      uVar9 = 1;
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}

