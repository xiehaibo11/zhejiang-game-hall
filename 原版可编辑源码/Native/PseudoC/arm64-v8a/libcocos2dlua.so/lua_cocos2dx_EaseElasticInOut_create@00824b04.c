
/* lua_cocos2dx_EaseElasticInOut_create(lua_State*) */

void lua_cocos2dx_EaseElasticInOut_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ActionInterval *pAVar4;
  void *pvVar5;
  undefined8 uVar6;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 3) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar3 = luaval_is_usertype(param_1,2,"cc.ActionInterval",0), (uVar3 & 1) == 0)) {
      luaval_to_number(param_1,3,&local_40,"cc.EaseElasticInOut:create");
    }
    else {
      pAVar4 = (ActionInterval *)tolua_tousertype(param_1,2,0);
      uVar3 = luaval_to_number(param_1,3,&local_40,"cc.EaseElasticInOut:create");
      if ((uVar3 & 1) != 0) {
        pvVar5 = (void *)cocos2d::EaseElasticInOut::create(pAVar4,(float)local_40);
        goto joined_r0x00824c24;
      }
    }
LAB_00824c74:
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_EaseElasticInOut_create\'",0);
  }
  else {
    if (iVar2 == 2) {
      if (((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 1 < iVar2)) &&
         (uVar3 = luaval_is_usertype(param_1,2,"cc.ActionInterval",0), (uVar3 & 1) != 0)) {
        pAVar4 = (ActionInterval *)tolua_tousertype(param_1,2,0);
        pvVar5 = (void *)cocos2d::EaseElasticInOut::create(pAVar4,0.3);
joined_r0x00824c24:
        if (pvVar5 == (void *)0x0) {
          lua_pushnil(param_1);
          uVar6 = 1;
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                     "cc.EaseElasticInOut");
          uVar6 = 1;
        }
        goto LAB_00824c8c;
      }
      goto LAB_00824c74;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.EaseElasticInOut:create",iVar2 + -1,1);
  }
  uVar6 = 0;
LAB_00824c8c:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

