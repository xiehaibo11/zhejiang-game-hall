
/* lua_cocos2dx_AnimationFrame_initWithSpriteFrame(lua_State*) */

bool lua_cocos2dx_AnimationFrame_initWithSpriteFrame(lua_State *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  AnimationFrame *this;
  ulong uVar8;
  bool bVar9;
  SpriteFrame *unaff_x21;
  void *pvVar10;
  double local_78;
  void *local_70;
  undefined8 uStack_68;
  void *local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (AnimationFrame *)tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  if (iVar4 + -1 == 3) {
    uStack_68 = 0;
    local_70 = (void *)0x0;
    uStack_58 = 0;
    local_60 = (void *)0x0;
    local_50 = 0x3f800000;
    if (((param_1 == (lua_State *)0x0) || (iVar4 = lua_gettop(param_1), iVar4 < 2)) ||
       (uVar8 = luaval_is_usertype(param_1,2,"cc.SpriteFrame",0), (uVar8 & 1) == 0)) {
      uVar7 = 0;
    }
    else {
      unaff_x21 = (SpriteFrame *)tolua_tousertype(param_1,2,0);
      uVar7 = 1;
    }
    uVar5 = luaval_to_number(param_1,3,&local_78,"cc.AnimationFrame:initWithSpriteFrame");
    uVar6 = luaval_to_ccvaluemap
                      (param_1,4,(unordered_map *)&local_70,"cc.AnimationFrame:initWithSpriteFrame")
    ;
    bVar9 = (uVar7 & uVar5 & uVar6) == 0;
    if (bVar9) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_AnimationFrame_initWithSpriteFrame\'"
                  ,0);
    }
    else {
      uVar7 = cocos2d::AnimationFrame::initWithSpriteFrame
                        (this,unaff_x21,(float)local_78,(unordered_map *)&local_70);
      tolua_pushboolean(param_1,uVar7 & 1);
    }
    bVar9 = !bVar9;
    pvVar2 = local_70;
    puVar3 = local_60;
    while (puVar3 != (void *)0x0) {
      pvVar10 = (void *)*puVar3;
      local_70 = pvVar2;
      cocos2d::Value::~Value((Value *)(puVar3 + 5));
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        operator_delete((void *)puVar3[4]);
      }
      operator_delete(puVar3);
      pvVar2 = local_70;
      puVar3 = pvVar10;
    }
    local_70 = (void *)0x0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.AnimationFrame:initWithSpriteFrame",iVar4 + -1,3);
    bVar9 = false;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar9;
}

