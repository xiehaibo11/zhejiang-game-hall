
undefined4 FUN_0089fbe0(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  ulong local_a0;
  int local_94;
  double local_90;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  ulong local_70;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar8 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  switch(iVar2) {
  case 3:
    local_68 = 0;
    local_60 = (void *)0x0;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_70,"cc.LabelBMFont:initWithString");
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_88,"cc.LabelBMFont:initWithString");
    if ((uVar3 & uVar4 & 1) != 0) {
      uVar3 = cocos2d::LabelBMFont::initWithString
                        ((LabelBMFont *)0x0,uVar8,&local_70,&local_88,0,&cocos2d::Vec2::ZERO);
      tolua_pushboolean(param_1,uVar3 & 1);
      break;
    }
LAB_0089ff00:
    uVar9 = 0;
    goto joined_r0x0089fef8;
  case 4:
    local_68 = 0;
    local_60 = (void *)0x0;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_70,"cc.LabelBMFont:initWithString");
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_88,"cc.LabelBMFont:initWithString");
    uVar5 = luaval_to_number(param_1,4,&local_90,"cc.LabelBMFont:initWithString");
    if ((uVar3 & uVar4 & uVar5 & 1) == 0) goto LAB_0089ff00;
    uVar3 = cocos2d::LabelBMFont::initWithString
                      ((LabelBMFont *)(float)local_90,uVar8,&local_70,&local_88,0,
                       &cocos2d::Vec2::ZERO);
    tolua_pushboolean(param_1,uVar3 & 1);
    break;
  case 5:
    local_68 = 0;
    local_60 = (void *)0x0;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_70,"cc.LabelBMFont:initWithString");
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_88,"cc.LabelBMFont:initWithString");
    uVar5 = luaval_to_number(param_1,4,&local_90,"cc.LabelBMFont:initWithString");
    uVar6 = luaval_to_int32(param_1,5,(int *)&local_a0,"cc.LabelBMFont:initWithString");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & 1) == 0) goto LAB_0089ff00;
    uVar3 = cocos2d::LabelBMFont::initWithString
                      ((LabelBMFont *)(float)local_90,uVar8,&local_70,&local_88,
                       local_a0 & 0xffffffff,&cocos2d::Vec2::ZERO);
    tolua_pushboolean(param_1,uVar3 & 1);
    break;
  case 6:
    local_68 = 0;
    local_60 = (void *)0x0;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_a0 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_70,"cc.LabelBMFont:initWithString");
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_88,"cc.LabelBMFont:initWithString");
    uVar5 = luaval_to_number(param_1,4,&local_90,"cc.LabelBMFont:initWithString");
    uVar6 = luaval_to_int32(param_1,5,&local_94,"cc.LabelBMFont:initWithString");
    uVar7 = luaval_to_vec2(param_1,6,(Vec2 *)&local_a0,"cc.LabelBMFont:initWithString");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & 1) == 0) goto LAB_0089ff00;
    uVar3 = cocos2d::LabelBMFont::initWithString
                      ((LabelBMFont *)(float)local_90,uVar8,&local_70,&local_88,local_94,&local_a0);
    tolua_pushboolean(param_1,uVar3 & 1);
    break;
  default:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.LabelBMFont:initWithString",iVar2 + -1,2);
    uVar9 = 0;
    goto LAB_0089ff4c;
  }
  uVar9 = 1;
joined_r0x0089fef8:
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
LAB_0089ff4c:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

