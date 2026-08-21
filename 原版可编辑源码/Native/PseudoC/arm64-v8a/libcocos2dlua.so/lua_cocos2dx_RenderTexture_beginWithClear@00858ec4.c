
/* WARNING: Removing unreachable block (ram,0x008591b8) */
/* WARNING: Removing unreachable block (ram,0x00859220) */
/* lua_cocos2dx_RenderTexture_beginWithClear(lua_State*) */

void lua_cocos2dx_RenderTexture_beginWithClear(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  int local_74;
  double local_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 5) {
    uVar4 = luaval_to_number(param_1,2,&dStack_50,"cc.RenderTexture:beginWithClear");
    if (((((uVar4 & 1) != 0) &&
         (uVar4 = luaval_to_number(param_1,3,&local_58,"cc.RenderTexture:beginWithClear"),
         (uVar4 & 1) != 0)) &&
        (uVar4 = luaval_to_number(param_1,4,&dStack_60,"cc.RenderTexture:beginWithClear"),
        (uVar4 & 1) != 0)) &&
       (uVar4 = luaval_to_number(param_1,5,&local_68,"cc.RenderTexture:beginWithClear"),
       (uVar4 & 1) != 0)) {
      (**(code **)(*plVar3 + 0x538))
                ((float)dStack_50,(float)local_58,(float)dStack_60,(float)local_68,plVar3);
      lua_settop(param_1,1);
      goto LAB_00859230;
    }
  }
  else if (iVar2 == 7) {
    uVar4 = luaval_to_number(param_1,2,&dStack_50,"cc.RenderTexture:beginWithClear");
    if (((((uVar4 & 1) != 0) &&
         (uVar4 = luaval_to_number(param_1,3,&local_58,"cc.RenderTexture:beginWithClear"),
         (uVar4 & 1) != 0)) &&
        ((uVar4 = luaval_to_number(param_1,4,&dStack_60,"cc.RenderTexture:beginWithClear"),
         (uVar4 & 1) != 0 &&
         ((uVar4 = luaval_to_number(param_1,5,&local_68,"cc.RenderTexture:beginWithClear"),
          (uVar4 & 1) != 0 &&
          (uVar4 = luaval_to_number(param_1,6,&local_70,"cc.RenderTexture:beginWithClear"),
          (uVar4 & 1) != 0)))))) &&
       (uVar4 = luaval_to_int32(param_1,7,&local_74,"cc.RenderTexture:beginWithClear"),
       (uVar4 & 1) != 0)) {
      (**(code **)(*plVar3 + 0x548))
                ((float)dStack_50,(float)local_58,(float)dStack_60,(float)local_68,(float)local_70,
                 plVar3,local_74);
      lua_settop(param_1,1);
      goto LAB_00859230;
    }
  }
  else if (((((iVar2 == 6) &&
             (uVar4 = luaval_to_number(param_1,2,&dStack_50,"cc.RenderTexture:beginWithClear"),
             (uVar4 & 1) != 0)) &&
            (uVar4 = luaval_to_number(param_1,3,&local_58,"cc.RenderTexture:beginWithClear"),
            (uVar4 & 1) != 0)) &&
           ((uVar4 = luaval_to_number(param_1,4,&dStack_60,"cc.RenderTexture:beginWithClear"),
            (uVar4 & 1) != 0 &&
            (uVar4 = luaval_to_number(param_1,5,&local_68,"cc.RenderTexture:beginWithClear"),
            (uVar4 & 1) != 0)))) &&
          (uVar4 = luaval_to_number(param_1,6,&local_70,"cc.RenderTexture:beginWithClear"),
          (uVar4 & 1) != 0)) {
    (**(code **)(*plVar3 + 0x540))
              ((float)dStack_50,(float)local_58,(float)dStack_60,(float)local_68,(float)local_70,
               plVar3);
    lua_settop(param_1,1);
LAB_00859230:
    uVar5 = 1;
    goto LAB_008591ec;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.RenderTexture:beginWithClear",iVar2 + -1,6);
  uVar5 = 0;
LAB_008591ec:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

