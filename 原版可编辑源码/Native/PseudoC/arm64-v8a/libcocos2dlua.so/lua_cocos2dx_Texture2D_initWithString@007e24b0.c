
/* lua_cocos2dx_Texture2D_initWithString(lua_State*) */

void lua_cocos2dx_Texture2D_initWithString(lua_State *param_1)

{
  char *pcVar1;
  void *pvVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  Texture2D *this;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  int local_f0;
  bool local_ec [4];
  int local_e8;
  int local_e4;
  Size aSStack_e0 [8];
  double local_d8;
  ulong local_d0;
  undefined8 local_c8;
  char *local_c0;
  ulong local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  Size aSStack_90 [8];
  undefined2 local_88;
  undefined1 local_86;
  undefined2 local_85;
  Size aSStack_80 [8];
  undefined8 local_78;
  undefined1 local_70;
  undefined2 local_6f;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  this = (Texture2D *)tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  switch(iVar4) {
  case 3:
    local_c8 = 0;
    local_c0 = (char *)0x0;
    local_d0 = 0;
    uVar6 = luaval_to_std_string(param_1,2,(basic_string *)&local_d0,"cc.Texture2D:initWithString");
    pcVar1 = (char *)((ulong)&local_d0 | 1);
    if ((local_d0 & 1) != 0) {
      pcVar1 = local_c0;
    }
    if ((uVar6 & 1) == 0) {
      iVar8 = 2;
    }
    else {
      local_b0 = 0;
      local_a8 = (void *)0x0;
      local_b8 = 0;
      local_a0 = 0;
      local_94 = 0;
      local_9c = 1;
      cocos2d::Size::Size(aSStack_90,(Size *)&cocos2d::Size::ZERO);
      local_85 = 0xff;
      local_88 = cocos2d::Color3B::WHITE;
      local_86 = DAT_01792432;
      cocos2d::Size::Size(aSStack_80);
      local_70 = 0;
      local_78 = 0;
      local_6c = 0xff;
      local_68 = 0;
      local_6f = cocos2d::Color3B::BLACK;
      local_6d = DAT_01792444;
      local_64 = 1;
      local_60 = 0;
      uVar6 = luaval_to_fontdefinition
                        (param_1,3,(FontDefinition *)&local_b8,"cc.Texture2D:initWithString");
      if ((uVar6 & 1) == 0) {
        iVar8 = 2;
      }
      else {
        uVar5 = cocos2d::Texture2D::initWithString(this,pcVar1,(FontDefinition *)&local_b8);
        tolua_pushboolean(param_1,uVar5 & 1);
        iVar8 = 1;
      }
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
    }
    if ((local_d0 & 1) != 0) {
      operator_delete(local_c0);
    }
    if (iVar8 != 2) {
LAB_007e2cf8:
      uVar7 = 1;
      goto LAB_007e2cfc;
    }
    break;
  case 4:
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_b8 = 0;
    uVar6 = luaval_to_std_string(param_1,2,(basic_string *)&local_b8,"cc.Texture2D:initWithString");
    pvVar2 = (void *)((ulong)&local_b8 | 1);
    if ((local_b8 & 1) != 0) {
      pvVar2 = local_a8;
    }
    if ((uVar6 & 1) == 0) {
      iVar8 = 4;
    }
    else {
      local_c8 = 0;
      local_c0 = (char *)0x0;
      local_d0 = 0;
      uVar6 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_d0,"cc.Texture2D:initWithString");
      if (((uVar6 & 1) == 0) ||
         (uVar6 = luaval_to_number(param_1,4,&local_d8,"cc.Texture2D:initWithString"),
         (uVar6 & 1) == 0)) {
        iVar8 = 4;
      }
      else {
        cocos2d::Size::Size(aSStack_e0,0.0,0.0);
        uVar5 = cocos2d::Texture2D::initWithString
                          ((Texture2D *)(float)local_d8,this,pvVar2,&local_d0,aSStack_e0,1,0,1,0);
        tolua_pushboolean(param_1,uVar5 & 1);
        iVar8 = 1;
      }
      if ((local_d0 & 1) != 0) {
        operator_delete(local_c0);
      }
    }
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (iVar8 != 4) goto LAB_007e2cf8;
    break;
  case 5:
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_b8 = 0;
    uVar6 = luaval_to_std_string(param_1,2,(basic_string *)&local_b8,"cc.Texture2D:initWithString");
    pvVar2 = (void *)((ulong)&local_b8 | 1);
    if ((local_b8 & 1) != 0) {
      pvVar2 = local_a8;
    }
    if ((uVar6 & 1) == 0) {
      iVar8 = 6;
    }
    else {
      local_c8 = 0;
      local_c0 = (char *)0x0;
      local_d0 = 0;
      uVar6 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_d0,"cc.Texture2D:initWithString");
      if (((uVar6 & 1) == 0) ||
         (uVar6 = luaval_to_number(param_1,4,&local_d8,"cc.Texture2D:initWithString"),
         (uVar6 & 1) == 0)) {
LAB_007e2e5c:
        iVar8 = 6;
      }
      else {
        cocos2d::Size::Size(aSStack_e0);
        uVar6 = luaval_to_size(param_1,5,aSStack_e0,"cc.Texture2D:initWithString");
        if ((uVar6 & 1) == 0) goto LAB_007e2e5c;
        uVar5 = cocos2d::Texture2D::initWithString
                          ((Texture2D *)(float)local_d8,this,pvVar2,&local_d0,aSStack_e0,1,0,1,0);
        tolua_pushboolean(param_1,uVar5 & 1);
        iVar8 = 1;
      }
      if ((local_d0 & 1) != 0) {
        operator_delete(local_c0);
      }
    }
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (iVar8 != 6) goto LAB_007e2cf8;
    break;
  case 6:
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_b8 = 0;
    uVar6 = luaval_to_std_string(param_1,2,(basic_string *)&local_b8,"cc.Texture2D:initWithString");
    pvVar2 = (void *)((ulong)&local_b8 | 1);
    if ((local_b8 & 1) != 0) {
      pvVar2 = local_a8;
    }
    if ((uVar6 & 1) == 0) {
      iVar8 = 8;
    }
    else {
      local_c8 = 0;
      local_c0 = (char *)0x0;
      local_d0 = 0;
      uVar6 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_d0,"cc.Texture2D:initWithString");
      if (((uVar6 & 1) == 0) ||
         (uVar6 = luaval_to_number(param_1,4,&local_d8,"cc.Texture2D:initWithString"),
         (uVar6 & 1) == 0)) {
LAB_007e2e38:
        iVar8 = 8;
      }
      else {
        cocos2d::Size::Size(aSStack_e0);
        uVar6 = luaval_to_size(param_1,5,aSStack_e0,"cc.Texture2D:initWithString");
        if (((uVar6 & 1) == 0) ||
           (uVar6 = luaval_to_int32(param_1,6,&local_e4,"cc.Texture2D:initWithString"),
           (uVar6 & 1) == 0)) goto LAB_007e2e38;
        uVar5 = cocos2d::Texture2D::initWithString
                          ((Texture2D *)(float)local_d8,this,pvVar2,&local_d0,aSStack_e0,local_e4,0,
                           1,0);
        tolua_pushboolean(param_1,uVar5 & 1);
        iVar8 = 1;
      }
      if ((local_d0 & 1) != 0) {
        operator_delete(local_c0);
      }
    }
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (iVar8 != 8) goto LAB_007e2cf8;
    break;
  case 7:
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_b8 = 0;
    uVar6 = luaval_to_std_string(param_1,2,(basic_string *)&local_b8,"cc.Texture2D:initWithString");
    pvVar2 = (void *)((ulong)&local_b8 | 1);
    if ((local_b8 & 1) != 0) {
      pvVar2 = local_a8;
    }
    if ((uVar6 & 1) == 0) {
      iVar8 = 10;
    }
    else {
      local_c8 = 0;
      local_c0 = (char *)0x0;
      local_d0 = 0;
      uVar6 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_d0,"cc.Texture2D:initWithString");
      if (((uVar6 & 1) == 0) ||
         (uVar6 = luaval_to_number(param_1,4,&local_d8,"cc.Texture2D:initWithString"),
         (uVar6 & 1) == 0)) {
LAB_007e2e14:
        iVar8 = 10;
      }
      else {
        cocos2d::Size::Size(aSStack_e0);
        uVar6 = luaval_to_size(param_1,5,aSStack_e0,"cc.Texture2D:initWithString");
        if (((uVar6 & 1) == 0) ||
           ((uVar6 = luaval_to_int32(param_1,6,&local_e4,"cc.Texture2D:initWithString"),
            (uVar6 & 1) == 0 ||
            (uVar6 = luaval_to_int32(param_1,7,&local_e8,"cc.Texture2D:initWithString"),
            (uVar6 & 1) == 0)))) goto LAB_007e2e14;
        uVar5 = cocos2d::Texture2D::initWithString
                          ((Texture2D *)(float)local_d8,this,pvVar2,&local_d0,aSStack_e0,local_e4,
                           local_e8,1,0);
        tolua_pushboolean(param_1,uVar5 & 1);
        iVar8 = 1;
      }
      if ((local_d0 & 1) != 0) {
        operator_delete(local_c0);
      }
    }
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (iVar8 != 10) goto LAB_007e2cf8;
    break;
  case 8:
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_b8 = 0;
    uVar6 = luaval_to_std_string(param_1,2,(basic_string *)&local_b8,"cc.Texture2D:initWithString");
    pvVar2 = (void *)((ulong)&local_b8 | 1);
    if ((local_b8 & 1) != 0) {
      pvVar2 = local_a8;
    }
    if ((uVar6 & 1) == 0) {
      iVar8 = 0xc;
    }
    else {
      local_c8 = 0;
      local_c0 = (char *)0x0;
      local_d0 = 0;
      uVar6 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_d0,"cc.Texture2D:initWithString");
      if (((uVar6 & 1) == 0) ||
         (uVar6 = luaval_to_number(param_1,4,&local_d8,"cc.Texture2D:initWithString"),
         (uVar6 & 1) == 0)) {
LAB_007e2df0:
        iVar8 = 0xc;
      }
      else {
        cocos2d::Size::Size(aSStack_e0);
        uVar6 = luaval_to_size(param_1,5,aSStack_e0,"cc.Texture2D:initWithString");
        if ((((uVar6 & 1) == 0) ||
            ((uVar6 = luaval_to_int32(param_1,6,&local_e4,"cc.Texture2D:initWithString"),
             (uVar6 & 1) == 0 ||
             (uVar6 = luaval_to_int32(param_1,7,&local_e8,"cc.Texture2D:initWithString"),
             (uVar6 & 1) == 0)))) ||
           (uVar6 = luaval_to_boolean(param_1,8,(bool *)&local_f0,"cc.Texture2D:initWithString"),
           (uVar6 & 1) == 0)) goto LAB_007e2df0;
        uVar5 = cocos2d::Texture2D::initWithString
                          ((Texture2D *)(float)local_d8,this,pvVar2,&local_d0,aSStack_e0,local_e4,
                           local_e8,local_f0._0_1_,0);
        tolua_pushboolean(param_1,uVar5 & 1);
        iVar8 = 1;
      }
      if ((local_d0 & 1) != 0) {
        operator_delete(local_c0);
      }
    }
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (iVar8 != 0xc) goto LAB_007e2cf8;
    break;
  case 9:
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_b8 = 0;
    uVar6 = luaval_to_std_string(param_1,2,(basic_string *)&local_b8,"cc.Texture2D:initWithString");
    pvVar2 = (void *)((ulong)&local_b8 | 1);
    if ((local_b8 & 1) != 0) {
      pvVar2 = local_a8;
    }
    if ((uVar6 & 1) == 0) {
      iVar8 = 0xe;
    }
    else {
      local_c8 = 0;
      local_c0 = (char *)0x0;
      local_d0 = 0;
      uVar6 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_d0,"cc.Texture2D:initWithString");
      if (((uVar6 & 1) == 0) ||
         (uVar6 = luaval_to_number(param_1,4,&local_d8,"cc.Texture2D:initWithString"),
         (uVar6 & 1) == 0)) {
LAB_007e2dcc:
        iVar8 = 0xe;
      }
      else {
        cocos2d::Size::Size(aSStack_e0);
        uVar6 = luaval_to_size(param_1,5,aSStack_e0,"cc.Texture2D:initWithString");
        if (((uVar6 & 1) == 0) ||
           ((((uVar6 = luaval_to_int32(param_1,6,&local_e4,"cc.Texture2D:initWithString"),
              (uVar6 & 1) == 0 ||
              (uVar6 = luaval_to_int32(param_1,7,&local_e8,"cc.Texture2D:initWithString"),
              (uVar6 & 1) == 0)) ||
             (uVar6 = luaval_to_boolean(param_1,8,local_ec,"cc.Texture2D:initWithString"),
             (uVar6 & 1) == 0)) ||
            (uVar6 = luaval_to_int32(param_1,9,&local_f0,"cc.Texture2D:initWithString"),
            (uVar6 & 1) == 0)))) goto LAB_007e2dcc;
        uVar5 = cocos2d::Texture2D::initWithString
                          ((Texture2D *)(float)local_d8,this,pvVar2,&local_d0,aSStack_e0,local_e4,
                           local_e8,local_ec[0],local_f0);
        tolua_pushboolean(param_1,uVar5 & 1);
        iVar8 = 1;
      }
      if ((local_d0 & 1) != 0) {
        operator_delete(local_c0);
      }
    }
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (iVar8 != 0xe) goto LAB_007e2cf8;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.Texture2D:initWithString",iVar4 + -1,3);
  uVar7 = 0;
LAB_007e2cfc:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

