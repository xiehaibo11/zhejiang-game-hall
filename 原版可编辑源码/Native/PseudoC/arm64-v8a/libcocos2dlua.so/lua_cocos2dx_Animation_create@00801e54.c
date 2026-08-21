
/* lua_cocos2dx_Animation_create(lua_State*) */

void lua_cocos2dx_Animation_create(lua_State *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  void *pvVar8;
  undefined8 uVar9;
  int iVar10;
  uint local_6c;
  double local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar6 = lua_gettop();
  if (iVar6 + -1 == 0) {
    pvVar8 = (void *)cocos2d::Animation::create();
    if (pvVar8 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar8 + 0xc),(int *)((long)pvVar8 + 0x10),pvVar8,
                 "cc.Animation");
    }
LAB_0080209c:
    uVar9 = 1;
  }
  else {
    if (iVar6 == 4) {
      local_58 = (undefined8 *)0x0;
      uStack_50 = 0;
      local_60 = (undefined8 *)0x0;
      bVar5 = luaval_to_ccvector<cocos2d::AnimationFrame*>
                        (param_1,2,(Vector *)&local_60,"cc.Animation:create");
      if (((bVar5) &&
          (uVar7 = luaval_to_number(param_1,3,&local_68,"cc.Animation:create"), (uVar7 & 1) != 0))
         && (uVar7 = luaval_to_uint32(param_1,4,&local_6c,"cc.Animation:create"), (uVar7 & 1) != 0))
      {
        pvVar8 = (void *)cocos2d::Animation::create((Vector *)&local_60,(float)local_68,local_6c);
        if (pvVar8 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar8 + 0xc),(int *)((long)pvVar8 + 0x10),pvVar8,
                     "cc.Animation");
        }
        iVar10 = 1;
        puVar2 = local_60;
        puVar3 = local_58;
      }
      else {
        iVar10 = 4;
        puVar2 = local_60;
        puVar3 = local_58;
      }
      for (; puVar4 = local_58, puVar2 != local_58; puVar2 = puVar2 + 1) {
        local_58 = puVar3;
        cocos2d::Ref::release((Ref *)*puVar2);
        puVar3 = local_58;
        local_58 = puVar4;
      }
      local_58 = local_60;
      if (local_60 != (undefined8 *)0x0) {
        operator_delete(local_60);
      }
      if (iVar10 != 4) goto LAB_0080209c;
    }
    else if (iVar6 == 3) {
      local_58 = (undefined8 *)0x0;
      uStack_50 = 0;
      local_60 = (undefined8 *)0x0;
      bVar5 = luaval_to_ccvector<cocos2d::AnimationFrame*>
                        (param_1,2,(Vector *)&local_60,"cc.Animation:create");
      if ((bVar5) &&
         (uVar7 = luaval_to_number(param_1,3,&local_68,"cc.Animation:create"), (uVar7 & 1) != 0)) {
        pvVar8 = (void *)cocos2d::Animation::create((Vector *)&local_60,(float)local_68,1);
        if (pvVar8 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar8 + 0xc),(int *)((long)pvVar8 + 0x10),pvVar8,
                     "cc.Animation");
        }
        iVar10 = 1;
        puVar2 = local_60;
        puVar3 = local_58;
      }
      else {
        iVar10 = 2;
        puVar2 = local_60;
        puVar3 = local_58;
      }
      for (; puVar4 = local_58, puVar2 != local_58; puVar2 = puVar2 + 1) {
        local_58 = puVar3;
        cocos2d::Ref::release((Ref *)*puVar2);
        puVar3 = local_58;
        local_58 = puVar4;
      }
      local_58 = local_60;
      if (local_60 != (undefined8 *)0x0) {
        operator_delete(local_60);
      }
      if (iVar10 != 2) goto LAB_0080209c;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
               "cc.Animation:create",iVar6 + -1,0);
    uVar9 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}

