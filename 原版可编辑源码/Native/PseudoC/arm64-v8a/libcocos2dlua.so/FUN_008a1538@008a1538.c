
undefined4 FUN_008a1538(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  int local_a0;
  int local_9c;
  Size aSStack_98 [8];
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
  uVar9 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  switch(iVar2) {
  case 4:
    local_68 = 0;
    local_60 = (void *)0x0;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_70,"cc.LabelTTF:initWithString");
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_88,"cc.LabelTTF:initWithString");
    uVar5 = luaval_to_number(param_1,4,&local_90,"cc.LabelTTF:initWithString");
    if ((uVar3 & uVar4 & uVar5 & 1) != 0) {
      uVar3 = cocos2d::LabelTTF::initWithString
                        ((LabelTTF *)(float)local_90,uVar9,&local_70,&local_88,&cocos2d::Size::ZERO,
                         0,0);
      tolua_pushboolean(param_1,uVar3 & 1);
      break;
    }
LAB_008a18f4:
    uVar10 = 0;
    goto joined_r0x008a18ec;
  case 5:
    local_68 = 0;
    local_60 = (void *)0x0;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    cocos2d::Size::Size(aSStack_98);
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_70,"cc.LabelTTF:initWithString");
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_88,"cc.LabelTTF:initWithString");
    uVar5 = luaval_to_number(param_1,4,&local_90,"cc.LabelTTF:initWithString");
    uVar6 = luaval_to_size(param_1,5,aSStack_98,"cc.LabelTTF:initWithString");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & 1) == 0) goto LAB_008a18f4;
    uVar3 = cocos2d::LabelTTF::initWithString
                      ((LabelTTF *)(float)local_90,uVar9,&local_70,&local_88,aSStack_98,0,0);
    tolua_pushboolean(param_1,uVar3 & 1);
    break;
  case 6:
    local_68 = 0;
    local_60 = (void *)0x0;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    cocos2d::Size::Size(aSStack_98);
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_70,"cc.LabelTTF:initWithString");
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_88,"cc.LabelTTF:initWithString");
    uVar5 = luaval_to_number(param_1,4,&local_90,"cc.LabelTTF:initWithString");
    uVar6 = luaval_to_size(param_1,5,aSStack_98,"cc.LabelTTF:initWithString");
    uVar7 = luaval_to_int32(param_1,6,&local_9c,"cc.LabelTTF:initWithString");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & 1) == 0) goto LAB_008a18f4;
    uVar3 = cocos2d::LabelTTF::initWithString
                      ((LabelTTF *)(float)local_90,uVar9,&local_70,&local_88,aSStack_98,local_9c,0);
    tolua_pushboolean(param_1,uVar3 & 1);
    break;
  case 7:
    local_68 = 0;
    local_60 = (void *)0x0;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    cocos2d::Size::Size(aSStack_98);
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_70,"cc.LabelTTF:initWithString");
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_88,"cc.LabelTTF:initWithString");
    uVar5 = luaval_to_number(param_1,4,&local_90,"cc.LabelTTF:initWithString");
    uVar6 = luaval_to_size(param_1,5,aSStack_98,"cc.LabelTTF:initWithString");
    uVar7 = luaval_to_int32(param_1,6,&local_9c,"cc.LabelTTF:initWithString");
    uVar8 = luaval_to_int32(param_1,7,&local_a0,"cc.LabelTTF:initWithString");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & 1) == 0) goto LAB_008a18f4;
    uVar3 = cocos2d::LabelTTF::initWithString
                      ((LabelTTF *)(float)local_90,uVar9,&local_70,&local_88,aSStack_98,local_9c,
                       local_a0);
    tolua_pushboolean(param_1,uVar3 & 1);
    break;
  default:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.LabelTTF:initWithString",iVar2 + -1,3);
    uVar10 = 0;
    goto LAB_008a1940;
  }
  uVar10 = 1;
joined_r0x008a18ec:
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
LAB_008a1940:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

