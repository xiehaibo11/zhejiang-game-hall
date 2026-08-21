
/* lua_cocos2dx_Animation_createWithSpriteFrames(lua_State*) */

undefined4 lua_cocos2dx_Animation_createWithSpriteFrames(lua_State *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  void *pvVar9;
  undefined4 uVar10;
  uint local_5c;
  double local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar8 = lua_gettop();
  if (iVar8 == 4) {
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    local_50 = (undefined8 *)0x0;
    bVar5 = luaval_to_ccvector<cocos2d::SpriteFrame*>
                      (param_1,2,(Vector *)&local_50,"cc.Animation:createWithSpriteFrames");
    bVar6 = luaval_to_number(param_1,3,&local_58,"cc.Animation:createWithSpriteFrames");
    bVar7 = luaval_to_uint32(param_1,4,&local_5c,"cc.Animation:createWithSpriteFrames");
    if ((bVar5 & bVar6 & bVar7) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_Animation_createWithSpriteFrames\'",
                  0);
      uVar10 = 0;
      puVar2 = local_50;
      puVar3 = local_48;
    }
    else {
      pvVar9 = (void *)cocos2d::Animation::createWithSpriteFrames
                                 ((Vector *)&local_50,(float)local_58,local_5c);
      if (pvVar9 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar9 + 0xc),(int *)((long)pvVar9 + 0x10),pvVar9,
                   "cc.Animation");
      }
      uVar10 = 1;
      puVar2 = local_50;
      puVar3 = local_48;
    }
    for (; puVar4 = local_48, puVar2 != local_48; puVar2 = puVar2 + 1) {
      local_48 = puVar3;
      cocos2d::Ref::release((Ref *)*puVar2);
      puVar3 = local_48;
      local_48 = puVar4;
    }
  }
  else if (iVar8 == 3) {
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    local_50 = (undefined8 *)0x0;
    bVar5 = luaval_to_ccvector<cocos2d::SpriteFrame*>
                      (param_1,2,(Vector *)&local_50,"cc.Animation:createWithSpriteFrames");
    bVar6 = luaval_to_number(param_1,3,&local_58,"cc.Animation:createWithSpriteFrames");
    if ((bVar5 & bVar6) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_Animation_createWithSpriteFrames\'",
                  0);
      uVar10 = 0;
      puVar2 = local_50;
      puVar3 = local_48;
    }
    else {
      pvVar9 = (void *)cocos2d::Animation::createWithSpriteFrames
                                 ((Vector *)&local_50,(float)local_58,1);
      if (pvVar9 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar9 + 0xc),(int *)((long)pvVar9 + 0x10),pvVar9,
                   "cc.Animation");
      }
      uVar10 = 1;
      puVar2 = local_50;
      puVar3 = local_48;
    }
    for (; puVar4 = local_48, puVar2 != local_48; puVar2 = puVar2 + 1) {
      local_48 = puVar3;
      cocos2d::Ref::release((Ref *)*puVar2);
      puVar3 = local_48;
      local_48 = puVar4;
    }
  }
  else {
    if (iVar8 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
                 "cc.Animation:createWithSpriteFrames",iVar8 + -1,1);
      uVar10 = 0;
      goto LAB_0080244c;
    }
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    local_50 = (undefined8 *)0x0;
    bVar5 = luaval_to_ccvector<cocos2d::SpriteFrame*>
                      (param_1,2,(Vector *)&local_50,"cc.Animation:createWithSpriteFrames");
    if (bVar5) {
      pvVar9 = (void *)cocos2d::Animation::createWithSpriteFrames((Vector *)&local_50,0.0,1);
      if (pvVar9 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar9 + 0xc),(int *)((long)pvVar9 + 0x10),pvVar9,
                   "cc.Animation");
      }
      uVar10 = 1;
      puVar2 = local_50;
      puVar3 = local_48;
    }
    else {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_Animation_createWithSpriteFrames\'",
                  0);
      uVar10 = 0;
      puVar2 = local_50;
      puVar3 = local_48;
    }
    for (; puVar4 = local_48, puVar2 != local_48; puVar2 = puVar2 + 1) {
      local_48 = puVar3;
      cocos2d::Ref::release((Ref *)*puVar2);
      puVar3 = local_48;
      local_48 = puVar4;
    }
  }
  local_48 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    operator_delete(local_50);
  }
LAB_0080244c:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}

