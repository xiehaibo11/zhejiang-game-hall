
/* WARNING: Removing unreachable block (ram,0x008a5944) */
/* WARNING: Removing unreachable block (ram,0x008a5938) */
/* WARNING: Removing unreachable block (ram,0x008a58b8) */
/* WARNING: Removing unreachable block (ram,0x008a58c8) */
/* tolua_cocos2d_BezierTo_create(lua_State*) */

void tolua_cocos2d_BezierTo_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_50;
  int local_44;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar4 = 0;
  if (param_1 == (lua_State *)0x0) goto LAB_008a5978;
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 2) {
    local_40 = 0.0;
    uVar3 = luaval_to_number(param_1,2,&local_40,"cc.BezierTo:create");
    if ((uVar3 & 1) != 0) {
      local_44 = 0;
      local_50 = (undefined8 *)0x0;
      uVar3 = luaval_to_array_of_vec2(param_1,3,(Vec2 **)&local_50,&local_44,"cc.BezierTo:create");
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
        goto LAB_008a5978;
      }
      if (local_44 < 3) {
        if (local_50 == (undefined8 *)0x0) {
          uVar4 = 0;
        }
        else {
          operator_delete__(local_50);
          uVar4 = 0;
          local_50 = (undefined8 *)0x0;
        }
        goto LAB_008a5978;
      }
      local_60 = *local_50;
      local_58 = local_50[1];
      local_68 = local_50[2];
      if (local_50 != (undefined8 *)0x0) {
        operator_delete__(local_50);
        local_50 = (undefined8 *)0x0;
      }
      pvVar5 = (void *)cocos2d::BezierTo::create((float)local_40,(_ccBezierConfig *)&local_68);
      if (pvVar5 != (void *)0x0) {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                   "cc.BezierTo");
        uVar4 = 1;
        goto LAB_008a5978;
      }
      goto LAB_008a5954;
    }
  }
  else {
LAB_008a5954:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
               "cc.BezierTo:create",iVar2 + -1,2);
  }
  uVar4 = 0;
LAB_008a5978:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

