
/* lua_cocos2dx_TintTo_create(lua_State*) */

void lua_cocos2dx_TintTo_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  uchar local_50 [4];
  uchar local_4c [4];
  Color3B local_48 [8];
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 5) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"cc.TintTo:create");
    if (((((uVar3 & 1) != 0) &&
         (uVar3 = luaval_to_uint16(param_1,3,(ushort *)local_48,"cc.TintTo:create"),
         (uVar3 & 1) != 0)) &&
        (uVar3 = luaval_to_uint16(param_1,4,(ushort *)local_4c,"cc.TintTo:create"), (uVar3 & 1) != 0
        )) && (uVar3 = luaval_to_uint16(param_1,5,(ushort *)local_50,"cc.TintTo:create"),
              (uVar3 & 1) != 0)) {
      pvVar4 = (void *)cocos2d::TintTo::create
                                 ((float)local_40,(uchar)local_48[0],local_4c[0],local_50[0]);
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.TintTo");
      }
      uVar5 = 1;
      goto LAB_00809b20;
    }
  }
  else if ((iVar2 == 3) &&
          (uVar3 = luaval_to_number(param_1,2,&local_40,"cc.TintTo:create"), (uVar3 & 1) != 0)) {
    cocos2d::Color3B::Color3B(local_48);
    uVar3 = luaval_to_color3b(param_1,3,local_48,"cc.TintTo:create");
    if ((uVar3 & 1) != 0) {
      pvVar4 = (void *)cocos2d::TintTo::create((float)local_40,local_48);
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar5 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.TintTo");
        uVar5 = 1;
      }
      goto LAB_00809b20;
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d","cc.TintTo:create",
             iVar2 + -1,4);
  uVar5 = 0;
LAB_00809b20:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

