
void FUN_008b1f10(lua_State *param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  void *pvVar6;
  long *plVar7;
  long *local_60;
  long *local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar5 = 0;
  if (param_1 != (lua_State *)0x0) {
    lVar4 = tolua_tousertype(param_1,1,0);
    iVar3 = lua_gettop(param_1);
    if (iVar3 + -1 == 0) {
      std::__ndk1::vector<cocos2d::Sprite*,std::__ndk1::allocator<cocos2d::Sprite*>>::vector
                ((vector<cocos2d::Sprite*,std::__ndk1::allocator<cocos2d::Sprite*>> *)&local_60,
                 (vector *)(lVar4 + 0x388));
      lua_createtable(param_1,0,0);
      if (local_60 != local_58) {
        iVar3 = 1;
        lVar4 = *local_60;
        plVar2 = local_60;
        plVar7 = local_58;
        while( true ) {
          if (lVar4 != 0) {
            lua_pushnumber((double)iVar3,param_1);
            pvVar6 = (void *)*plVar2;
            toluafix_pushusertype_ccobject
                      (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                       "cc.Sprite");
            lua_rawset(param_1,0xfffffffd);
            cocos2d::Ref::retain((Ref *)*plVar2);
            iVar3 = iVar3 + 1;
            plVar7 = local_58;
          }
          plVar2 = plVar2 + 1;
          if (plVar2 == plVar7) break;
          lVar4 = *plVar2;
        }
      }
      if (local_60 != (long *)0x0) {
        operator_delete(local_60);
      }
      uVar5 = 1;
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.SpriteBatchNode:getDescendants",iVar3 + -1,0);
      uVar5 = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

