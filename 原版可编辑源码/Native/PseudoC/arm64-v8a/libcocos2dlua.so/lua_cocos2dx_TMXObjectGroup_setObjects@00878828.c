
/* lua_cocos2dx_TMXObjectGroup_setObjects(lua_State*) */

undefined4 lua_cocos2dx_TMXObjectGroup_setObjects(lua_State *param_1)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  Value *local_50;
  Value *local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar5 = tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  if (iVar4 + -1 == 1) {
    local_48 = (Value *)0x0;
    uStack_40 = 0;
    local_50 = (Value *)0x0;
    uVar6 = luaval_to_ccvaluevector(param_1,2,(vector *)&local_50,"cc.TMXObjectGroup:setObjects");
    if ((uVar6 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_TMXObjectGroup_setObjects\'"
                  ,0);
      uVar7 = 0;
      pVVar2 = local_50;
    }
    else {
      if ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)&local_50 !=
          (vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)(lVar5 + 0x70)) {
        std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
        assign<cocos2d::Value*>
                  ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)(lVar5 + 0x70),
                   local_50,local_48);
      }
      uVar7 = 1;
      lua_settop(param_1,1);
      pVVar2 = local_50;
    }
    local_50 = pVVar2;
    pVVar3 = local_48;
    if (pVVar2 != (Value *)0x0) {
      while (pVVar3 != pVVar2) {
        cocos2d::Value::~Value(pVVar3 + -0x10);
        pVVar3 = pVVar3 + -0x10;
      }
      local_48 = pVVar2;
      operator_delete(local_50);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TMXObjectGroup:setObjects",iVar4 + -1,1);
    uVar7 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

