
/* lua_cocos2dx_Waves_create(lua_State*) */

void lua_cocos2dx_Waves_create(lua_State *param_1)

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
  bool local_80 [4];
  bool local_7c [4];
  double local_78;
  uint local_6c;
  Size aSStack_68 [8];
  double local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 6) {
    cocos2d::Size::Size(aSStack_68);
    uVar3 = luaval_to_number(param_1,2,&local_60,"cc.Waves:create");
    uVar4 = luaval_to_size(param_1,3,aSStack_68,"cc.Waves:create");
    uVar5 = luaval_to_uint32(param_1,4,&local_6c,"cc.Waves:create");
    uVar6 = luaval_to_number(param_1,5,&local_78,"cc.Waves:create");
    uVar7 = luaval_to_boolean(param_1,6,local_7c,"cc.Waves:create");
    uVar8 = luaval_to_boolean(param_1,7,local_80,"cc.Waves:create");
    if (((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) &&
       ((((uVar6 & 1) != 0 && ((uVar7 & 1) != 0)) && ((uVar8 & 1) != 0)))) {
      pvVar9 = (void *)cocos2d::Waves::create
                                 ((float)local_60,aSStack_68,local_6c,(float)local_78,local_7c[0],
                                  local_80[0]);
      if (pvVar9 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar10 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar9 + 0xc),(int *)((long)pvVar9 + 0x10),pvVar9,
                   "cc.Waves");
        uVar10 = 1;
      }
      goto LAB_0082bfd8;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Waves_create\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ","cc.Waves:create"
               ,iVar2 + -1,6);
  }
  uVar10 = 0;
LAB_0082bfd8:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}

