
/* lua_cocos2dx_ParticleSystemQuad_create(lua_State*) */

void lua_cocos2dx_ParticleSystemQuad_create(lua_State *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar4 = lua_gettop();
  if (iVar4 + -1 == 0) {
    pvVar6 = (void *)cocos2d::ParticleSystemQuad::create();
    if (pvVar6 == (void *)0x0) {
      lua_pushnil(param_1);
      uVar7 = 1;
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                 "cc.ParticleSystemQuad");
      uVar7 = 1;
    }
    goto LAB_0084f3cc;
  }
  if (iVar4 == 2) {
    uStack_68 = 0;
    local_60 = (undefined8 *)0x0;
    local_70 = (undefined8 *)0x0;
    uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_70,"cc.ParticleSystemQuad:create")
    ;
    if ((uVar5 & 1) == 0) {
      if (((ulong)local_70 & 1) != 0) {
        operator_delete(local_60);
      }
      uStack_68 = 0;
      local_70 = (undefined8 *)0x0;
      uStack_58 = 0;
      local_60 = (undefined8 *)0x0;
      local_50 = 0x3f800000;
      uVar5 = luaval_to_ccvaluemap
                        (param_1,2,(unordered_map *)&local_70,"cc.ParticleSystemQuad:create");
      puVar2 = local_70;
      puVar3 = local_60;
      if ((uVar5 & 1) == 0) {
        while (puVar3 != (void *)0x0) {
          pvVar6 = (void *)*puVar3;
          local_70 = puVar2;
          cocos2d::Value::~Value((Value *)(puVar3 + 5));
          if ((*(byte *)(puVar3 + 2) & 1) != 0) {
            operator_delete((void *)puVar3[4]);
          }
          operator_delete(puVar3);
          puVar2 = local_70;
          puVar3 = pvVar6;
        }
        local_70 = (undefined8 *)0x0;
        if (puVar2 != (undefined8 *)0x0) {
          operator_delete(puVar2);
        }
        goto LAB_0084f390;
      }
      pvVar6 = (void *)cocos2d::ParticleSystemQuad::create((unordered_map *)&local_70);
      if (pvVar6 == (void *)0x0) {
        lua_pushnil(param_1);
        puVar2 = local_70;
        puVar3 = local_60;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                   "cc.ParticleSystemQuad");
        puVar2 = local_70;
        puVar3 = local_60;
      }
      while (puVar3 != (undefined8 *)0x0) {
        puVar8 = (undefined8 *)*puVar3;
        local_70 = puVar2;
        cocos2d::Value::~Value((Value *)(puVar3 + 5));
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          operator_delete((void *)puVar3[4]);
        }
        operator_delete(puVar3);
        puVar2 = local_70;
        puVar3 = puVar8;
      }
      local_70 = (undefined8 *)0x0;
      puVar3 = puVar2;
    }
    else {
      pvVar6 = (void *)cocos2d::ParticleSystemQuad::create((basic_string *)&local_70);
      if (pvVar6 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                   "cc.ParticleSystemQuad");
      }
      puVar2 = (undefined8 *)((ulong)local_70 & 1);
      puVar3 = local_60;
    }
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete(puVar3);
    }
    uVar7 = 1;
  }
  else {
LAB_0084f390:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
               "cc.ParticleSystemQuad:create",iVar4 + -1,1);
    uVar7 = 0;
  }
LAB_0084f3cc:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

