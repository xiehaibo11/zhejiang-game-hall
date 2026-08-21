
/* lua_cocos2dx_TMXLayerInfo_setProperties(lua_State*) */

undefined4 lua_cocos2dx_TMXLayerInfo_setProperties(lua_State *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  int iVar4;
  TMXLayerInfo *pTVar5;
  ulong uVar6;
  undefined4 uVar7;
  void *pvVar8;
  void *local_88 [2];
  void *local_78;
  void *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pTVar5 = (TMXLayerInfo *)tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  if (iVar4 + -1 == 1) {
    uStack_58 = 0;
    local_60 = (void *)0x0;
    uStack_48 = 0;
    local_50 = (undefined8 *)0x0;
    local_40 = 0x3f800000;
    uVar6 = luaval_to_ccvaluemap
                      (param_1,2,(unordered_map *)&local_60,"cc.TMXLayerInfo:setProperties");
    if ((uVar6 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_TMXLayerInfo_setProperties\'",0);
      uVar7 = 0;
      pvVar2 = local_60;
      puVar3 = local_50;
    }
    else {
      std::__ndk1::
      unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
      ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
                       *)local_88,(unordered_map *)&local_60);
      cocos2d::TMXLayerInfo::setProperties(pTVar5,local_88);
      pvVar2 = local_88[0];
      puVar3 = local_78;
      while (puVar3 != (void *)0x0) {
        pvVar8 = (void *)*puVar3;
        local_88[0] = pvVar2;
        cocos2d::Value::~Value((Value *)(puVar3 + 5));
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          operator_delete((void *)puVar3[4]);
        }
        operator_delete(puVar3);
        pvVar2 = local_88[0];
        puVar3 = pvVar8;
      }
      local_88[0] = (void *)0x0;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
      uVar7 = 1;
      lua_settop(param_1,1);
      pvVar2 = local_60;
      puVar3 = local_50;
    }
    while (puVar3 != (void *)0x0) {
      pvVar8 = (void *)*puVar3;
      local_60 = pvVar2;
      cocos2d::Value::~Value((Value *)(puVar3 + 5));
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        operator_delete((void *)puVar3[4]);
      }
      operator_delete(puVar3);
      pvVar2 = local_60;
      puVar3 = pvVar8;
    }
    local_60 = (void *)0x0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TMXLayerInfo:setProperties",iVar4 + -1,1);
    uVar7 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

