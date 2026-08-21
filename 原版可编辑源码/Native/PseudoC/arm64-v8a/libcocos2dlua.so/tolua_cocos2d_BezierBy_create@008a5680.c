
/* WARNING: Removing unreachable block (ram,0x008a57b4) */
/* WARNING: Removing unreachable block (ram,0x008a57a8) */
/* WARNING: Removing unreachable block (ram,0x008a5728) */
/* WARNING: Removing unreachable block (ram,0x008a5738) */
/* tolua_cocos2d_BezierBy_create(lua_State*) */

void tolua_cocos2d_BezierBy_create(lua_State *param_1)

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
  if (param_1 == (lua_State *)0x0) goto LAB_008a57e8;
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 2) {
    local_40 = 0.0;
    uVar3 = luaval_to_number(param_1,2,&local_40,"cc.BezierBy:create");
    if ((uVar3 & 1) != 0) {
      local_44 = 0;
      local_50 = (undefined8 *)0x0;
      uVar3 = luaval_to_array_of_vec2(param_1,3,(Vec2 **)&local_50,&local_44,"cc.BezierBy:create");
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
        goto LAB_008a57e8;
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
        goto LAB_008a57e8;
      }
      local_60 = *local_50;
      local_58 = local_50[1];
      local_68 = local_50[2];
      if (local_50 != (undefined8 *)0x0) {
        operator_delete__(local_50);
        local_50 = (undefined8 *)0x0;
      }
      pvVar5 = (void *)cocos2d::BezierBy::create((float)local_40,(_ccBezierConfig *)&local_68);
      if (pvVar5 != (void *)0x0) {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                   "cc.BezierBy");
        uVar4 = 1;
        goto LAB_008a57e8;
      }
      goto LAB_008a57c4;
    }
  }
  else {
LAB_008a57c4:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
               "cc.BezierBy:create",iVar2 + -1,2);
  }
  uVar4 = 0;
LAB_008a57e8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

