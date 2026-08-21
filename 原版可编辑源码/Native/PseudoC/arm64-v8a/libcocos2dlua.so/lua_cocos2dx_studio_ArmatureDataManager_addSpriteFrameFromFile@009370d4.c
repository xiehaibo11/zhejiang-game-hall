
/* WARNING: Type propagation algorithm not settling */
/* lua_cocos2dx_studio_ArmatureDataManager_addSpriteFrameFromFile(lua_State*) */

undefined1 lua_cocos2dx_studio_ArmatureDataManager_addSpriteFrameFromFile(lua_State *param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ArmatureDataManager *this;
  undefined1 uVar7;
  ulong local_90;
  undefined8 local_88;
  void *local_80;
  ulong local_78;
  undefined8 uStack_70;
  void *local_68;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this = (ArmatureDataManager *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 == 4) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,
                       "ccs.ArmatureDataManager:addSpriteFrameFromFile");
    uVar5 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_78,
                       "ccs.ArmatureDataManager:addSpriteFrameFromFile");
    uVar6 = luaval_to_std_string
                      (param_1,4,(basic_string *)&local_90,
                       "ccs.ArmatureDataManager:addSpriteFrameFromFile");
    bVar1 = (uVar4 & uVar5 & uVar6 & 1) == 0;
    if (bVar1) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_studio_ArmatureDataManager_addSpriteFrameFromFile\'"
                  ,0);
    }
    else {
      cocostudio::ArmatureDataManager::addSpriteFrameFromFile
                (this,(basic_string *)&local_60,(basic_string *)&local_78,(basic_string *)&local_90)
      ;
      lua_settop(param_1,1);
    }
    uVar7 = !bVar1;
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
  }
  else {
    if (iVar3 != 3) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "ccs.ArmatureDataManager:addSpriteFrameFromFile",iVar3 + -1,2);
      uVar7 = 0;
      goto LAB_00937298;
    }
    local_58 = 0;
    local_50 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,
                       "ccs.ArmatureDataManager:addSpriteFrameFromFile");
    uVar5 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_78,
                       "ccs.ArmatureDataManager:addSpriteFrameFromFile");
    if ((uVar4 & uVar5 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_studio_ArmatureDataManager_addSpriteFrameFromFile\'"
                  ,0);
      uVar7 = 0;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_90,"");
      cocostudio::ArmatureDataManager::addSpriteFrameFromFile
                (this,(basic_string *)&local_60,(basic_string *)&local_78,(basic_string *)&local_90)
      ;
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      uVar7 = 1;
      lua_settop(param_1,1);
    }
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00937298:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

