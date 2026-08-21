
/* lua_cocos2dx_Animation_initWithSpriteFrames(lua_State*) */

bool lua_cocos2dx_Animation_initWithSpriteFrames(lua_State *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  Animation *this;
  uint local_6c;
  double local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this = (Animation *)tolua_tousertype(param_1,1,0);
  iVar7 = lua_gettop(param_1);
  if (iVar7 == 4) {
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    local_60 = (undefined8 *)0x0;
    bVar4 = luaval_to_ccvector<cocos2d::SpriteFrame*>
                      (param_1,2,(Vector *)&local_60,"cc.Animation:initWithSpriteFrames");
    bVar5 = luaval_to_number(param_1,3,&local_68,"cc.Animation:initWithSpriteFrames");
    bVar6 = luaval_to_uint32(param_1,4,&local_6c,"cc.Animation:initWithSpriteFrames");
    bVar4 = (bVar4 & bVar5 & bVar6) == 0;
    if (bVar4) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_Animation_initWithSpriteFrames\'",0)
      ;
    }
    else {
      uVar8 = cocos2d::Animation::initWithSpriteFrames
                        (this,(Vector *)&local_60,(float)local_68,local_6c);
      tolua_pushboolean(param_1,uVar8 & 1);
    }
    puVar3 = local_58;
    bVar4 = !bVar4;
    for (puVar1 = local_60; puVar1 != puVar3; puVar1 = puVar1 + 1) {
      cocos2d::Ref::release((Ref *)*puVar1);
    }
  }
  else if (iVar7 == 3) {
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    local_60 = (undefined8 *)0x0;
    bVar4 = luaval_to_ccvector<cocos2d::SpriteFrame*>
                      (param_1,2,(Vector *)&local_60,"cc.Animation:initWithSpriteFrames");
    bVar5 = luaval_to_number(param_1,3,&local_68,"cc.Animation:initWithSpriteFrames");
    bVar4 = (bVar4 & bVar5) == 0;
    if (bVar4) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_Animation_initWithSpriteFrames\'",0)
      ;
    }
    else {
      uVar8 = cocos2d::Animation::initWithSpriteFrames(this,(Vector *)&local_60,(float)local_68,1);
      tolua_pushboolean(param_1,uVar8 & 1);
    }
    puVar3 = local_58;
    bVar4 = !bVar4;
    for (puVar1 = local_60; puVar1 != puVar3; puVar1 = puVar1 + 1) {
      cocos2d::Ref::release((Ref *)*puVar1);
    }
  }
  else {
    if (iVar7 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.Animation:initWithSpriteFrames",iVar7 + -1,1);
      bVar4 = false;
      goto LAB_00801a60;
    }
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    local_60 = (undefined8 *)0x0;
    bVar4 = luaval_to_ccvector<cocos2d::SpriteFrame*>
                      (param_1,2,(Vector *)&local_60,"cc.Animation:initWithSpriteFrames");
    if (!bVar4) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_Animation_initWithSpriteFrames\'",0)
      ;
    }
    else {
      uVar8 = cocos2d::Animation::initWithSpriteFrames(this,(Vector *)&local_60,0.0,1);
      tolua_pushboolean(param_1,uVar8 & 1);
    }
    puVar3 = local_58;
    bVar4 = bVar4;
    for (puVar1 = local_60; puVar1 != puVar3; puVar1 = puVar1 + 1) {
      cocos2d::Ref::release((Ref *)*puVar1);
    }
  }
  local_58 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    operator_delete(local_60);
  }
LAB_00801a60:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

