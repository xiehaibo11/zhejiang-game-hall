
/* lua_cocos2dx_ParticleSystem_initWithDictionary(lua_State*) */

void lua_cocos2dx_ParticleSystem_initWithDictionary(lua_State *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  ParticleSystem *this;
  ulong uVar6;
  undefined8 uVar7;
  void *pvVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong local_98;
  undefined8 local_90;
  void *local_88;
  void *local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = (ParticleSystem *)tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  if (iVar4 == 2) {
    uStack_78 = 0;
    local_80 = (void *)0x0;
    uStack_68 = 0;
    local_70 = (undefined8 *)0x0;
    local_60 = 0x3f800000;
    uVar6 = luaval_to_ccvaluemap
                      (param_1,2,(unordered_map *)&local_80,"cc.ParticleSystem:initWithDictionary");
    pvVar2 = local_80;
    puVar3 = local_70;
    if ((uVar6 & 1) != 0) {
      uVar5 = cocos2d::ParticleSystem::initWithDictionary(this,(unordered_map *)&local_80);
      tolua_pushboolean(param_1,uVar5 & 1);
      pvVar2 = local_80;
      puVar3 = local_70;
      while (puVar3 != (void *)0x0) {
        pvVar8 = (void *)*puVar3;
        local_80 = pvVar2;
        cocos2d::Value::~Value((Value *)(puVar3 + 5));
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          operator_delete((void *)puVar3[4]);
        }
        operator_delete(puVar3);
        pvVar2 = local_80;
        puVar3 = pvVar8;
      }
      local_80 = (void *)0x0;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
LAB_0084d934:
      uVar7 = 1;
      goto LAB_0084d938;
    }
    while (puVar3 != (void *)0x0) {
      pvVar8 = (void *)*puVar3;
      local_80 = pvVar2;
      cocos2d::Value::~Value((Value *)(puVar3 + 5));
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        operator_delete((void *)puVar3[4]);
      }
      operator_delete(puVar3);
      pvVar2 = local_80;
      puVar3 = pvVar8;
    }
    local_80 = (void *)0x0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
  }
  else if (iVar4 == 3) {
    uStack_78 = 0;
    local_80 = (void *)0x0;
    uStack_68 = 0;
    local_70 = (undefined8 *)0x0;
    local_60 = 0x3f800000;
    uVar6 = luaval_to_ccvaluemap
                      (param_1,2,(unordered_map *)&local_80,"cc.ParticleSystem:initWithDictionary");
    if ((uVar6 & 1) == 0) {
      iVar9 = 2;
      pvVar2 = local_80;
      puVar3 = local_70;
    }
    else {
      local_90 = 0;
      local_88 = (void *)0x0;
      local_98 = 0;
      uVar6 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_98,"cc.ParticleSystem:initWithDictionary")
      ;
      if ((uVar6 & 1) == 0) {
        iVar9 = 2;
      }
      else {
        uVar5 = cocos2d::ParticleSystem::initWithDictionary
                          (this,(unordered_map *)&local_80,(basic_string *)&local_98);
        tolua_pushboolean(param_1,uVar5 & 1);
        iVar9 = 1;
      }
      pvVar2 = local_80;
      puVar3 = local_70;
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
        pvVar2 = local_80;
        puVar3 = local_70;
      }
    }
    while (puVar3 != (undefined8 *)0x0) {
      puVar10 = (undefined8 *)*puVar3;
      local_80 = pvVar2;
      cocos2d::Value::~Value((Value *)(puVar3 + 5));
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        operator_delete((void *)puVar3[4]);
      }
      operator_delete(puVar3);
      pvVar2 = local_80;
      puVar3 = puVar10;
    }
    local_80 = (void *)0x0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    if (iVar9 != 2) goto LAB_0084d934;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.ParticleSystem:initWithDictionary",iVar4 + -1,1);
  uVar7 = 0;
LAB_0084d938:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

