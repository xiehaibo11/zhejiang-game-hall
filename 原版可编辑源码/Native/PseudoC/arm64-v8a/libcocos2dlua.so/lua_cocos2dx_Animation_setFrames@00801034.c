
/* lua_cocos2dx_Animation_setFrames(lua_State*) */

undefined4 lua_cocos2dx_Animation_setFrames(lua_State *param_1)

{
  vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>> *this;
  undefined8 *puVar1;
  long lVar2;
  AnimationFrame **ppAVar3;
  AnimationFrame **ppAVar4;
  AnimationFrame **ppAVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  AnimationFrame **local_60;
  AnimationFrame **local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar8 = tolua_tousertype(param_1,1,0);
  iVar7 = lua_gettop(param_1);
  if (iVar7 + -1 == 1) {
    local_58 = (AnimationFrame **)0x0;
    uStack_50 = 0;
    local_60 = (AnimationFrame **)0x0;
    bVar6 = luaval_to_ccvector<cocos2d::AnimationFrame*>
                      (param_1,2,(Vector *)&local_60,"cc.Animation:setFrames");
    if (bVar6) {
      this = (vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>> *)
             (lVar8 + 0x40);
      if ((vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>> *)
          &local_60 != this) {
        puVar10 = *(undefined8 **)(lVar8 + 0x40);
        puVar1 = *(undefined8 **)(lVar8 + 0x48);
        if (puVar10 != puVar1) {
          do {
            cocos2d::Ref::release((Ref *)*puVar10);
            puVar10 = puVar10 + 1;
          } while (puVar1 != puVar10);
          puVar10 = *(undefined8 **)this;
        }
        *(undefined8 **)(lVar8 + 0x48) = puVar10;
        std::__ndk1::
        vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>>::
        assign<cocos2d::AnimationFrame**>(this,local_60,local_58);
        puVar1 = *(undefined8 **)(lVar8 + 0x48);
        for (puVar10 = *(undefined8 **)(lVar8 + 0x40); puVar10 != puVar1; puVar10 = puVar10 + 1) {
          cocos2d::Ref::retain((Ref *)*puVar10);
        }
      }
      uVar9 = 1;
      lua_settop(param_1,1);
      ppAVar3 = local_60;
      ppAVar4 = local_58;
    }
    else {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Animation_setFrames\'",0);
      uVar9 = 0;
      ppAVar3 = local_60;
      ppAVar4 = local_58;
    }
    for (; ppAVar5 = local_58, ppAVar3 != local_58; ppAVar3 = ppAVar3 + 1) {
      local_58 = ppAVar4;
      cocos2d::Ref::release((Ref *)*ppAVar3);
      ppAVar4 = local_58;
      local_58 = ppAVar5;
    }
    local_58 = local_60;
    if (local_60 != (AnimationFrame **)0x0) {
      operator_delete(local_60);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Animation:setFrames",iVar7 + -1,1);
    uVar9 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

