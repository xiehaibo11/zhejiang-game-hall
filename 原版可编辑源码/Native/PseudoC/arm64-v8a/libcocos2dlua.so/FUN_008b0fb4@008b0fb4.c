
undefined8 FUN_008b0fb4(lua_State *param_1)

{
  int *piVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar9 = 0;
  if (param_1 == (lua_State *)0x0) goto LAB_008b10b8;
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  local_50 = (undefined8 *)0x0;
  iVar7 = lua_gettop(param_1);
  iVar7 = iVar7 + -1;
  if (iVar7 < 1) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
               "cc.LayerMultiplex:create",iVar7,1);
LAB_008b1054:
    uVar9 = 0;
    puVar3 = local_50;
    puVar4 = local_48;
  }
  else {
    bVar6 = luavals_variadic_to_ccvector<cocos2d::Layer*>(param_1,iVar7,(Vector *)&local_50);
    if (!bVar6) {
      luaL_error(param_1,"error in tolua_cocos2dx_LayerMultiplex_create \n");
      goto LAB_008b1054;
    }
    pvVar8 = (void *)cocos2d::LayerMultiplex::createWithArray((Vector *)&local_50);
    piVar1 = (int *)((long)pvVar8 + 0x10);
    if (pvVar8 == (void *)0x0) {
      iVar7 = -1;
      piVar1 = (int *)0x0;
    }
    else {
      iVar7 = *(int *)((long)pvVar8 + 0xc);
    }
    toluafix_pushusertype_ccobject(param_1,iVar7,piVar1,pvVar8,"cc.LayerMultiplex");
    uVar9 = 1;
    puVar3 = local_50;
    puVar4 = local_48;
  }
  for (; puVar5 = local_48, puVar3 != local_48; puVar3 = puVar3 + 1) {
    local_48 = puVar4;
    cocos2d::Ref::release((Ref *)*puVar3);
    puVar4 = local_48;
    local_48 = puVar5;
  }
  local_48 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    operator_delete(local_50);
  }
LAB_008b10b8:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

