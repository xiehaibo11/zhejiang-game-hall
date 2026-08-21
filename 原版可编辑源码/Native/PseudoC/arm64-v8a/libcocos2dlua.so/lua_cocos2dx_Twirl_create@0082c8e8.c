
/* lua_cocos2dx_Twirl_create(lua_State*) */

void lua_cocos2dx_Twirl_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  undefined8 uVar9;
  double local_80;
  uint local_74;
  undefined8 local_70;
  Size aSStack_68 [8];
  double local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 5) {
    cocos2d::Size::Size(aSStack_68);
    local_70 = 0;
    uVar3 = luaval_to_number(param_1,2,&local_60,"cc.Twirl:create");
    uVar4 = luaval_to_size(param_1,3,aSStack_68,"cc.Twirl:create");
    uVar5 = luaval_to_vec2(param_1,4,(Vec2 *)&local_70,"cc.Twirl:create");
    uVar6 = luaval_to_uint32(param_1,5,&local_74,"cc.Twirl:create");
    uVar7 = luaval_to_number(param_1,6,&local_80,"cc.Twirl:create");
    if (((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) &&
       (((uVar6 & 1) != 0 && ((uVar7 & 1) != 0)))) {
      pvVar8 = (void *)cocos2d::Twirl::create
                                 ((float)local_60,aSStack_68,(Vec2 *)&local_70,local_74,
                                  (float)local_80);
      if (pvVar8 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar9 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar8 + 0xc),(int *)((long)pvVar8 + 0x10),pvVar8,
                   "cc.Twirl");
        uVar9 = 1;
      }
      goto LAB_0082ca40;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Twirl_create\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ","cc.Twirl:create"
               ,iVar2 + -1,5);
  }
  uVar9 = 0;
LAB_0082ca40:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}

