
/* WARNING: Type propagation algorithm not settling */
/* lua_cocos2dx_JumpTo_create(lua_State*) */

void lua_cocos2dx_JumpTo_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  undefined8 uVar8;
  int local_64;
  double local_60 [3];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 4) {
    local_60[1] = 0.0;
    uVar3 = luaval_to_number(param_1,2,local_60 + 2,"cc.JumpTo:create");
    uVar4 = luaval_to_vec2(param_1,3,(Vec2 *)(local_60 + 1),"cc.JumpTo:create");
    uVar5 = luaval_to_number(param_1,4,local_60,"cc.JumpTo:create");
    uVar6 = luaval_to_int32(param_1,5,&local_64,"cc.JumpTo:create");
    if (((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) && ((uVar6 & 1) != 0)) {
      pvVar7 = (void *)cocos2d::JumpTo::create
                                 ((float)local_60[2],(Vec2 *)(local_60 + 1),(float)local_60[0],
                                  local_64);
      if (pvVar7 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar8 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
                   "cc.JumpTo");
        uVar8 = 1;
      }
      goto LAB_0080701c;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_JumpTo_create\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.JumpTo:create",iVar2 + -1,4);
  }
  uVar8 = 0;
LAB_0080701c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

