
/* lua_cocos2dx_3d_Animate3D_create(lua_State*) */

void lua_cocos2dx_3d_Animate3D_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  Animation3D *pAVar5;
  void *pvVar6;
  undefined8 uVar7;
  double local_48;
  double dStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 2) {
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Animation3D",0), (uVar4 & 1) != 0)) {
      pAVar5 = (Animation3D *)tolua_tousertype(param_1,2,0);
      pvVar6 = (void *)cocos2d::Animate3D::create(pAVar5);
joined_r0x00901530:
      if (pvVar6 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar7 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                   "cc.Animate3D");
        uVar7 = 1;
      }
      goto LAB_0090157c;
    }
  }
  else if (((iVar2 == 4) && (param_1 != (lua_State *)0x0)) &&
          ((iVar3 = lua_gettop(param_1), 1 < iVar3 &&
           (uVar4 = luaval_is_usertype(param_1,2,"cc.Animation3D",0), (uVar4 & 1) != 0)))) {
    pAVar5 = (Animation3D *)tolua_tousertype(param_1,2,0);
    uVar4 = luaval_to_number(param_1,3,&dStack_40,"cc.Animate3D:create");
    if (((uVar4 & 1) != 0) &&
       (uVar4 = luaval_to_number(param_1,4,&local_48,"cc.Animate3D:create"), (uVar4 & 1) != 0)) {
      pvVar6 = (void *)cocos2d::Animate3D::create(pAVar5,(float)dStack_40,(float)local_48);
      goto joined_r0x00901530;
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d","cc.Animate3D:create",
             iVar2 + -1,1);
  uVar7 = 0;
LAB_0090157c:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

