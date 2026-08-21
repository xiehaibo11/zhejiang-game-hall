
/* tolua_cocos2d_CatmullRomTo_create(lua_State*) */

void tolua_cocos2d_CatmullRomTo_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  PointArray *this;
  void *pvVar5;
  long lVar6;
  long lVar7;
  Vec2 *local_60;
  int local_54;
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = 0;
  if (param_1 == (lua_State *)0x0) goto LAB_008a563c;
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 2) {
    local_50 = 0.0;
    uVar3 = luaval_to_number(param_1,2,&local_50,"cc.CatmullRomTo:create");
    if ((uVar3 & 1) != 0) {
      local_54 = 0;
      local_60 = (Vec2 *)0x0;
      uVar3 = luaval_to_array_of_vec2(param_1,3,&local_60,&local_54,"cc.CatmullRomTo:create");
      uVar4 = 0;
      if ((uVar3 & 1) == 0) goto LAB_008a563c;
      if (0 < local_54) {
        this = (PointArray *)cocos2d::PointArray::create((long)local_54);
        if (this == (PointArray *)0x0) {
          uVar4 = 0;
          if (local_60 != (Vec2 *)0x0) {
            operator_delete__(local_60);
            uVar4 = 0;
            local_60 = (Vec2 *)0x0;
          }
          goto LAB_008a563c;
        }
        if (0 < local_54) {
          lVar6 = 0;
          lVar7 = 0;
          do {
            cocos2d::PointArray::addControlPoint(this,local_60 + lVar6);
            lVar7 = lVar7 + 1;
            lVar6 = lVar6 + 8;
          } while (lVar7 < local_54);
        }
        if (local_60 != (Vec2 *)0x0) {
          operator_delete__(local_60);
          local_60 = (Vec2 *)0x0;
        }
        pvVar5 = (void *)cocos2d::CatmullRomTo::create((float)local_50,this);
        if (pvVar5 != (void *)0x0) {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                     "cc.CatmullRomTo");
          uVar4 = 1;
          goto LAB_008a563c;
        }
      }
      goto LAB_008a5618;
    }
  }
  else {
LAB_008a5618:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
               "cc.CatmullRomTo:create",iVar2 + -1,2);
  }
  uVar4 = 0;
LAB_008a563c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

