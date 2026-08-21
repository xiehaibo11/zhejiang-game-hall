
/* lua_cocos2dx_LabelAtlas_initWithString(lua_State*) */

void lua_cocos2dx_LabelAtlas_initWithString(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  LabelAtlas *this;
  ulong uVar5;
  Texture2D *pTVar6;
  undefined8 uVar7;
  int iVar8;
  int local_84;
  int local_80;
  int local_7c;
  ulong local_78;
  undefined8 local_70;
  void *local_68;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (LabelAtlas *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 6) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"cc.LabelAtlas:initWithString")
    ;
    if ((uVar5 & 1) == 0) {
      iVar4 = 4;
    }
    else {
      local_70 = 0;
      local_68 = (void *)0x0;
      local_78 = 0;
      uVar5 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_78,"cc.LabelAtlas:initWithString");
      if (((((uVar5 & 1) == 0) ||
           (uVar5 = luaval_to_int32(param_1,4,&local_7c,"cc.LabelAtlas:initWithString"),
           (uVar5 & 1) == 0)) ||
          (uVar5 = luaval_to_int32(param_1,5,&local_80,"cc.LabelAtlas:initWithString"),
          (uVar5 & 1) == 0)) ||
         (uVar5 = luaval_to_int32(param_1,6,&local_84,"cc.LabelAtlas:initWithString"),
         (uVar5 & 1) == 0)) {
        iVar4 = 4;
      }
      else {
        uVar3 = cocos2d::LabelAtlas::initWithString
                          (this,(basic_string *)&local_60,(basic_string *)&local_78,local_7c,
                           local_80,local_84);
        tolua_pushboolean(param_1,uVar3 & 1);
        iVar4 = 1;
      }
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    if (iVar4 == 4) {
      local_58 = 0;
      local_50 = (void *)0x0;
      local_60 = 0;
      uVar3 = luaval_to_std_string
                        (param_1,2,(basic_string *)&local_60,"cc.LabelAtlas:initWithString");
      if (((((param_1 == (lua_State *)0x0) || (((uVar3 ^ 1) & 1) != 0)) ||
           ((iVar4 = lua_gettop(param_1), iVar4 < 3 ||
            ((uVar5 = luaval_is_usertype(param_1,3,"cc.Texture2D",0), (uVar5 & 1) == 0 ||
             (pTVar6 = (Texture2D *)tolua_tousertype(param_1,3,0), (uVar3 & 1) == 0)))))) ||
          (uVar5 = luaval_to_int32(param_1,4,(int *)&local_78,"cc.LabelAtlas:initWithString"),
          (uVar5 & 1) == 0)) ||
         ((uVar5 = luaval_to_int32(param_1,5,&local_7c,"cc.LabelAtlas:initWithString"),
          (uVar5 & 1) == 0 ||
          (uVar5 = luaval_to_int32(param_1,6,&local_80,"cc.LabelAtlas:initWithString"),
          (uVar5 & 1) == 0)))) {
        iVar8 = 6;
        iVar4 = 6;
      }
      else {
        uVar3 = cocos2d::LabelAtlas::initWithString
                          (this,(basic_string *)&local_60,pTVar6,(int)local_78,local_7c,local_80);
        tolua_pushboolean(param_1,uVar3 & 1);
        iVar8 = 1;
        iVar4 = 1;
      }
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
        iVar4 = iVar8;
      }
      if (iVar4 == 6) goto LAB_0083d7c4;
    }
LAB_0083d808:
    uVar7 = 1;
  }
  else {
    if (iVar2 == 3) {
      local_58 = 0;
      local_50 = (void *)0x0;
      local_60 = 0;
      uVar5 = luaval_to_std_string
                        (param_1,2,(basic_string *)&local_60,"cc.LabelAtlas:initWithString");
      if ((uVar5 & 1) == 0) {
        iVar4 = 2;
      }
      else {
        local_70 = 0;
        local_68 = (void *)0x0;
        local_78 = 0;
        uVar5 = luaval_to_std_string
                          (param_1,3,(basic_string *)&local_78,"cc.LabelAtlas:initWithString");
        if ((uVar5 & 1) == 0) {
          iVar4 = 2;
        }
        else {
          uVar3 = cocos2d::LabelAtlas::initWithString
                            (this,(basic_string *)&local_60,(basic_string *)&local_78);
          tolua_pushboolean(param_1,uVar3 & 1);
          iVar4 = 1;
        }
        if ((local_78 & 1) != 0) {
          operator_delete(local_68);
        }
      }
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
      if (iVar4 != 2) goto LAB_0083d808;
    }
LAB_0083d7c4:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.LabelAtlas:initWithString",iVar2 + -1,5);
    uVar7 = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

