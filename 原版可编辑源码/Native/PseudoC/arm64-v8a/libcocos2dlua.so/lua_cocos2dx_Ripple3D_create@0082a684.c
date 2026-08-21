
/* WARNING: Type propagation algorithm not settling */
/* lua_cocos2dx_Ripple3D_create(lua_State*) */

void lua_cocos2dx_Ripple3D_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  void *pvVar9;
  undefined8 uVar10;
  double local_88;
  uint local_7c;
  double local_78 [2];
  Size aSStack_68 [8];
  double local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 6) {
    cocos2d::Size::Size(aSStack_68);
    local_78[1] = 0.0;
    uVar3 = luaval_to_number(param_1,2,&local_60,"cc.Ripple3D:create");
    uVar4 = luaval_to_size(param_1,3,aSStack_68,"cc.Ripple3D:create");
    uVar5 = luaval_to_vec2(param_1,4,(Vec2 *)(local_78 + 1),"cc.Ripple3D:create");
    uVar6 = luaval_to_number(param_1,5,local_78,"cc.Ripple3D:create");
    uVar7 = luaval_to_uint32(param_1,6,&local_7c,"cc.Ripple3D:create");
    uVar8 = luaval_to_number(param_1,7,&local_88,"cc.Ripple3D:create");
    if (((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) &&
       ((((uVar6 & 1) != 0 && ((uVar7 & 1) != 0)) && ((uVar8 & 1) != 0)))) {
      pvVar9 = (void *)cocos2d::Ripple3D::create
                                 ((float)local_60,aSStack_68,(Vec2 *)(local_78 + 1),
                                  (float)local_78[0],local_7c,(float)local_88);
      if (pvVar9 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar10 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar9 + 0xc),(int *)((long)pvVar9 + 0x10),pvVar9,
                   "cc.Ripple3D");
        uVar10 = 1;
      }
      goto LAB_0082a800;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Ripple3D_create\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.Ripple3D:create",iVar2 + -1,6);
  }
  uVar10 = 0;
LAB_0082a800:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}

