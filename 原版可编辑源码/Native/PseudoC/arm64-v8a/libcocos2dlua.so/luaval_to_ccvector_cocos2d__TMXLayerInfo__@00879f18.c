
/* bool luaval_to_ccvector<cocos2d::TMXLayerInfo*>(lua_State*, int,
   cocos2d::Vector<cocos2d::TMXLayerInfo*>*, char const*) */

bool luaval_to_ccvector<cocos2d::TMXLayerInfo*>
               (lua_State *param_1,int param_2,Vector *param_3,char *param_4)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  Ref *pRVar6;
  ulong uVar7;
  undefined1 auStack_70 [16];
  Ref *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  bVar3 = false;
  if ((param_1 != (lua_State *)0x0) && (param_3 != (Vector *)0x0)) {
    iVar4 = tolua_istable(param_1,param_2,0,auStack_70);
    bVar3 = iVar4 != 0;
    if ((iVar4 != 0) && (uVar5 = lua_objlen(param_1,param_2), uVar5 != 0)) {
      uVar7 = 0;
      do {
        uVar7 = uVar7 + 1;
        lua_pushnumber((double)uVar7,param_1);
        lua_gettable(param_1,param_2);
        iVar4 = lua_type(param_1,0xffffffff);
        if (((iVar4 != 0) && (iVar4 = lua_isuserdata(param_1,0xffffffff), iVar4 != 0)) &&
           (pRVar6 = (Ref *)tolua_tousertype(param_1,0xffffffff,0), pRVar6 != (Ref *)0x0)) {
          plVar1 = *(long **)(param_3 + 8);
          local_60 = pRVar6;
          if (plVar1 == *(long **)(param_3 + 0x10)) {
            std::__ndk1::
            vector<cocos2d::TMXLayerInfo*,std::__ndk1::allocator<cocos2d::TMXLayerInfo*>>::
            __push_back_slow_path<cocos2d::TMXLayerInfo*const&>
                      ((vector<cocos2d::TMXLayerInfo*,std::__ndk1::allocator<cocos2d::TMXLayerInfo*>>
                        *)param_3,(TMXLayerInfo **)&local_60);
          }
          else {
            *plVar1 = (long)pRVar6;
            *(long **)(param_3 + 8) = plVar1 + 1;
          }
          cocos2d::Ref::retain(local_60);
        }
        lua_settop(param_1,0xfffffffe);
      } while (uVar5 != uVar7);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

