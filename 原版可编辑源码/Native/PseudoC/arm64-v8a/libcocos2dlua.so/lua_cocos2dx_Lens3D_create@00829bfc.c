
/* WARNING: Type propagation algorithm not settling */
/* lua_cocos2dx_Lens3D_create(lua_State*) */

void lua_cocos2dx_Lens3D_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  undefined8 uVar8;
  double local_68 [2];
  Size aSStack_58 [8];
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 4) {
    cocos2d::Size::Size(aSStack_58);
    local_68[1] = 0.0;
    uVar3 = luaval_to_number(param_1,2,&local_50,"cc.Lens3D:create");
    uVar4 = luaval_to_size(param_1,3,aSStack_58,"cc.Lens3D:create");
    uVar5 = luaval_to_vec2(param_1,4,(Vec2 *)(local_68 + 1),"cc.Lens3D:create");
    uVar6 = luaval_to_number(param_1,5,local_68,"cc.Lens3D:create");
    if (((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) && ((uVar6 & 1) != 0)) {
      pvVar7 = (void *)cocos2d::Lens3D::create
                                 ((float)local_50,aSStack_58,(Vec2 *)(local_68 + 1),
                                  (float)local_68[0]);
      if (pvVar7 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar8 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
                   "cc.Lens3D");
        uVar8 = 1;
      }
      goto LAB_00829d30;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Lens3D_create\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.Lens3D:create",iVar2 + -1,4);
  }
  uVar8 = 0;
LAB_00829d30:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

