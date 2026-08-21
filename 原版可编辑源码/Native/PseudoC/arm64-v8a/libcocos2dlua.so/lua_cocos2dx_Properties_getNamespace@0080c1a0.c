
/* lua_cocos2dx_Properties_getNamespace(lua_State*) */

void lua_cocos2dx_Properties_getNamespace(lua_State *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  Properties *pPVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  bool local_68 [4];
  bool local_64 [4];
  ulong local_60;
  undefined8 local_58;
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pPVar4 = (Properties *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  switch(iVar3 + -1) {
  case 0:
    uVar6 = cocos2d::Properties::getNamespace(pPVar4);
    tolua_pushstring(param_1,uVar6);
    break;
  case 1:
    local_58 = 0;
    local_50 = (char *)0x0;
    local_60 = 0;
    uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"cc.Properties:getNamespace");
    if ((uVar5 & 1) == 0) {
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
      goto switchD_0080c200_default;
    }
    pcVar1 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pcVar1 = local_50;
    }
    pPVar4 = (Properties *)cocos2d::Properties::getNamespace(pPVar4,pcVar1,false,true);
    object_to_luaval<cocos2d::Properties>(param_1,"cc.Properties",pPVar4);
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    break;
  case 2:
    local_58 = 0;
    local_50 = (char *)0x0;
    local_60 = 0;
    uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"cc.Properties:getNamespace");
    pcVar1 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pcVar1 = local_50;
    }
    if ((uVar5 & 1) == 0) {
      iVar7 = 6;
    }
    else {
      uVar5 = luaval_to_boolean(param_1,3,local_64,"cc.Properties:getNamespace");
      if ((uVar5 & 1) == 0) {
        iVar7 = 6;
      }
      else {
        pPVar4 = (Properties *)cocos2d::Properties::getNamespace(pPVar4,pcVar1,local_64[0],true);
        object_to_luaval<cocos2d::Properties>(param_1,"cc.Properties",pPVar4);
        iVar7 = 1;
      }
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    if (iVar7 == 6) goto switchD_0080c200_default;
    break;
  case 3:
    local_58 = 0;
    local_50 = (char *)0x0;
    local_60 = 0;
    uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"cc.Properties:getNamespace");
    pcVar1 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pcVar1 = local_50;
    }
    if ((uVar5 & 1) == 0) {
      iVar7 = 8;
    }
    else {
      uVar5 = luaval_to_boolean(param_1,3,local_64,"cc.Properties:getNamespace");
      if (((uVar5 & 1) == 0) ||
         (uVar5 = luaval_to_boolean(param_1,4,local_68,"cc.Properties:getNamespace"),
         (uVar5 & 1) == 0)) {
        iVar7 = 8;
      }
      else {
        pPVar4 = (Properties *)
                 cocos2d::Properties::getNamespace(pPVar4,pcVar1,local_64[0],local_68[0]);
        object_to_luaval<cocos2d::Properties>(param_1,"cc.Properties",pPVar4);
        iVar7 = 1;
      }
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    if (iVar7 == 8) goto switchD_0080c200_default;
    break;
  default:
switchD_0080c200_default:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Properties:getNamespace",iVar3 + -1,1);
    uVar6 = 0;
    goto LAB_0080c430;
  }
  uVar6 = 1;
LAB_0080c430:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

