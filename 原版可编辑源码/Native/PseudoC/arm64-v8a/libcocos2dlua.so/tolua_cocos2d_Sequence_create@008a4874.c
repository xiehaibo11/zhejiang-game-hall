
/* tolua_cocos2d_Sequence_create(lua_State*) */

void tolua_cocos2d_Sequence_create(lua_State *param_1)

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
  undefined1 auStack_50 [16];
  Ref *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  uVar9 = 0;
  if (param_1 != (lua_State *)0x0) {
    iVar6 = lua_gettop();
    uVar3 = iVar6 - 1;
    if ((int)uVar3 < 1) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.Sequence:create",uVar3,1);
      uVar9 = 0;
    }
    else {
      local_60 = (long *)0x0;
      plStack_58 = (long *)0x0;
      local_68 = (long *)0x0;
      if ((uVar3 == 1) && (iVar6 = tolua_istable(param_1,2,0,auStack_50), iVar6 != 0)) {
        luaval_to_ccvector<cocos2d::FiniteTimeAction*>
                  (param_1,2,(Vector *)&local_68,"cc.Sequence:create");
      }
      else {
        uVar10 = 1;
        do {
          uVar10 = uVar10 + 1;
          pRVar7 = (Ref *)tolua_tousertype(param_1,uVar10,0);
          if (pRVar7 != (Ref *)0x0) {
            local_40 = pRVar7;
            if (local_60 == plStack_58) {
              std::__ndk1::
              vector<cocos2d::FiniteTimeAction*,std::__ndk1::allocator<cocos2d::FiniteTimeAction*>>
              ::__push_back_slow_path<cocos2d::FiniteTimeAction*const&>
                        ((vector<cocos2d::FiniteTimeAction*,std::__ndk1::allocator<cocos2d::FiniteTimeAction*>>
                          *)&local_68,(FiniteTimeAction **)&local_40);
            }
            else {
              *local_60 = (long)pRVar7;
              local_60 = local_60 + 1;
            }
            cocos2d::Ref::retain(local_40);
          }
        } while (uVar10 <= uVar3);
      }
      pvVar8 = (void *)cocos2d::Sequence::create((Vector *)&local_68);
      piVar2 = (int *)((long)pvVar8 + 0x10);
      if (pvVar8 == (void *)0x0) {
        iVar6 = -1;
        piVar2 = (int *)0x0;
      }
      else {
        iVar6 = *(int *)((long)pvVar8 + 0xc);
      }
      toluafix_pushusertype_ccobject(param_1,iVar6,piVar2,pvVar8,"cc.Sequence");
      plVar5 = local_60;
      for (plVar1 = local_68; plVar1 != plVar5; plVar1 = plVar1 + 1) {
        cocos2d::Ref::release((Ref *)*plVar1);
      }
      local_60 = local_68;
      if (local_68 != (long *)0x0) {
        operator_delete(local_68);
      }
      uVar9 = 1;
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}

