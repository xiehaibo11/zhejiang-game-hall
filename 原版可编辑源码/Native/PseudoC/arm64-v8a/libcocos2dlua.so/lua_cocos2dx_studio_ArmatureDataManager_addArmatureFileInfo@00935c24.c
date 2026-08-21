
/* lua_cocos2dx_studio_ArmatureDataManager_addArmatureFileInfo(lua_State*) */

void lua_cocos2dx_studio_ArmatureDataManager_addArmatureFileInfo(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ArmatureDataManager *this;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  ulong local_80;
  undefined8 local_78;
  void *local_70;
  ulong local_68;
  undefined8 local_60;
  void *local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ArmatureDataManager *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,
                       "ccs.ArmatureDataManager:addArmatureFileInfo");
    if ((uVar3 & 1) != 0) {
      cocostudio::ArmatureDataManager::addArmatureFileInfo(this,(basic_string *)&local_50);
      lua_settop(param_1,1);
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
      }
LAB_00935d7c:
      uVar4 = 1;
      goto LAB_00935dc8;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else if (iVar2 == 4) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,
                       "ccs.ArmatureDataManager:addArmatureFileInfo");
    if ((uVar3 & 1) == 0) {
      iVar5 = 2;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      uVar3 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_68,
                         "ccs.ArmatureDataManager:addArmatureFileInfo");
      if ((uVar3 & 1) == 0) {
        iVar5 = 2;
      }
      else {
        local_78 = 0;
        local_70 = (void *)0x0;
        local_80 = 0;
        uVar3 = luaval_to_std_string
                          (param_1,4,(basic_string *)&local_80,
                           "ccs.ArmatureDataManager:addArmatureFileInfo");
        if ((uVar3 & 1) == 0) {
          iVar5 = 2;
        }
        else {
          cocostudio::ArmatureDataManager::addArmatureFileInfo
                    (this,(basic_string *)&local_50,(basic_string *)&local_68,
                     (basic_string *)&local_80);
          iVar5 = 1;
          lua_settop(param_1,1);
        }
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
      }
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if (iVar5 != 2) goto LAB_00935d7c;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "ccs.ArmatureDataManager:addArmatureFileInfo",iVar2 + -1,1);
  uVar4 = 0;
LAB_00935dc8:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

