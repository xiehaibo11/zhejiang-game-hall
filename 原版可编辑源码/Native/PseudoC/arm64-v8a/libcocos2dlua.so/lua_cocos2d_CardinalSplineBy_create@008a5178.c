
/* WARNING: Removing unreachable block (ram,0x008a52fc) */
/* WARNING: Removing unreachable block (ram,0x008a52f0) */
/* WARNING: Removing unreachable block (ram,0x008a52c0) */
/* WARNING: Removing unreachable block (ram,0x008a52d0) */
/* lua_cocos2d_CardinalSplineBy_create(lua_State*) */

void lua_cocos2d_CardinalSplineBy_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  PointArray *this;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  double local_68;
  Vec2 *local_60;
  int local_54;
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar5 = 0;
  if (param_1 == (lua_State *)0x0) goto LAB_008a533c;
  iVar2 = lua_gettop();
  if (iVar2 + -1 != 3) goto LAB_008a5318;
  local_50 = 0.0;
  uVar3 = luaval_to_number(param_1,2,&local_50,"cc.CardinalSplineBy:create");
  if ((uVar3 & 1) != 0) {
    local_54 = 0;
    local_60 = (Vec2 *)0x0;
    uVar3 = luaval_to_array_of_vec2(param_1,3,&local_60,&local_54,"cc.CardinalSplineBy:create");
    if ((uVar3 & 1) == 0) {
      uVar5 = 0;
      goto LAB_008a533c;
    }
    local_68 = 0.0;
    uVar3 = luaval_to_number(param_1,4,&local_68,"cc.CardinalSplineBy:create");
    if ((uVar3 & 1) == 0) {
LAB_008a52d4:
      if (local_60 == (Vec2 *)0x0) {
        uVar5 = 0;
      }
      else {
        operator_delete__(local_60);
        uVar5 = 0;
        local_60 = (Vec2 *)0x0;
      }
      goto LAB_008a533c;
    }
    if (0 < local_54) {
      this = (PointArray *)cocos2d::PointArray::create((long)local_54);
      if (this == (PointArray *)0x0) goto LAB_008a52d4;
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
      pvVar4 = (void *)cocos2d::CardinalSplineBy::create((float)local_50,this,(float)local_68);
      if (pvVar4 != (void *)0x0) {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.CardinalSplineBy");
        uVar5 = 1;
        goto LAB_008a533c;
      }
    }
LAB_008a5318:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
               "cc.CardinalSplineBy:create",iVar2 + -1,3);
  }
  uVar5 = 0;
LAB_008a533c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

