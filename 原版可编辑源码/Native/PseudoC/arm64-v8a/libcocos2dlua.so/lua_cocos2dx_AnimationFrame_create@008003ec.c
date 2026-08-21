
/* lua_cocos2dx_AnimationFrame_create(lua_State*) */

undefined4 lua_cocos2dx_AnimationFrame_create(lua_State *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  void *pvVar7;
  undefined4 uVar8;
  SpriteFrame *unaff_x20;
  void *pvVar9;
  uint uVar10;
  double local_78;
  void *local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar3 = lua_gettop();
  if (iVar3 + -1 == 3) {
    uStack_68 = 0;
    local_70 = (void *)0x0;
    uStack_58 = 0;
    local_60 = (undefined8 *)0x0;
    local_50 = 0x3f800000;
    if (((param_1 == (lua_State *)0x0) || (iVar3 = lua_gettop(param_1), iVar3 < 2)) ||
       (uVar6 = luaval_is_usertype(param_1,2,"cc.SpriteFrame",0), (uVar6 & 1) == 0)) {
      uVar10 = 0;
    }
    else {
      unaff_x20 = (SpriteFrame *)tolua_tousertype(param_1,2,0);
      uVar10 = 1;
    }
    uVar4 = luaval_to_number(param_1,3,&local_78,"cc.AnimationFrame:create");
    uVar5 = luaval_to_ccvaluemap(param_1,4,(unordered_map *)&local_70,"cc.AnimationFrame:create");
    if ((uVar10 & uVar4 & uVar5) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_AnimationFrame_create\'",0);
      uVar8 = 0;
      pvVar7 = local_70;
      puVar2 = local_60;
    }
    else {
      pvVar7 = (void *)cocos2d::AnimationFrame::create
                                 (unaff_x20,(float)local_78,(unordered_map *)&local_70);
      if (pvVar7 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
                   "cc.AnimationFrame");
      }
      uVar8 = 1;
      pvVar7 = local_70;
      puVar2 = local_60;
    }
    while (puVar2 != (void *)0x0) {
      pvVar9 = (void *)*puVar2;
      local_70 = pvVar7;
      cocos2d::Value::~Value((Value *)(puVar2 + 5));
      if ((*(byte *)(puVar2 + 2) & 1) != 0) {
        operator_delete((void *)puVar2[4]);
      }
      operator_delete(puVar2);
      pvVar7 = local_70;
      puVar2 = pvVar9;
    }
    local_70 = (void *)0x0;
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.AnimationFrame:create",iVar3 + -1,3);
    uVar8 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

