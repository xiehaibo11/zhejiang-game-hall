
/* lua_cocos2dx_Properties_getBool(lua_State*) */

undefined4 lua_cocos2dx_Properties_getBool(lua_State *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  Properties *this;
  ulong uVar6;
  undefined4 uVar7;
  bool local_64 [4];
  ulong local_60;
  undefined8 local_58;
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this = (Properties *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 == 3) {
    local_58 = 0;
    local_50 = (char *)0x0;
    local_60 = 0;
    uVar4 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"cc.Properties:getBool");
    pcVar1 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pcVar1 = local_50;
    }
    uVar5 = luaval_to_boolean(param_1,3,local_64,"cc.Properties:getBool");
    if ((uVar4 & uVar5 & 1) != 0) {
      uVar4 = cocos2d::Properties::getBool(this,pcVar1,local_64[0]);
      tolua_pushboolean(param_1,uVar4 & 1);
      goto LAB_0080cf34;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Properties_getBool\'",0);
LAB_0080cf94:
    uVar7 = 0;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 + -1 == 0) {
        uVar4 = cocos2d::Properties::getBool(this,(char *)0x0,false);
        tolua_pushboolean(param_1,uVar4 & 1);
        uVar7 = 1;
      }
      else {
        luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                   "cc.Properties:getBool",iVar3 + -1,0);
        uVar7 = 0;
      }
      goto LAB_0080cfa8;
    }
    local_58 = 0;
    local_50 = (char *)0x0;
    local_60 = 0;
    uVar6 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"cc.Properties:getBool");
    if ((uVar6 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Properties_getBool\'",0);
      goto LAB_0080cf94;
    }
    pcVar1 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pcVar1 = local_50;
    }
    uVar4 = cocos2d::Properties::getBool(this,pcVar1,false);
    tolua_pushboolean(param_1,uVar4 & 1);
LAB_0080cf34:
    uVar7 = 1;
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_0080cfa8:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

