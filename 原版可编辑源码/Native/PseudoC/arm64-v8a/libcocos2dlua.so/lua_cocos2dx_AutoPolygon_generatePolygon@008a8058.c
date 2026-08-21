
/* lua_cocos2dx_AutoPolygon_generatePolygon(lua_State*) */

undefined4 lua_cocos2dx_AutoPolygon_generatePolygon(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  PolygonInfo *pPVar9;
  double local_80;
  double local_78;
  Rect aRStack_70 [16];
  ulong local_60 [2];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  switch(iVar2) {
  case 2:
    local_60[1] = 0;
    local_50 = (void *)0x0;
    local_60[0] = 0;
    uVar8 = luaval_to_std_string
                      (param_1,2,(basic_string *)local_60,"cc.AutoPolygon:generatePolygon");
    if ((uVar8 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_AutoPolygon_generatePolygon\'",0);
      break;
    }
    pPVar9 = operator_new(0x48,(nothrow_t *)&std::nothrow);
    if (pPVar9 != (PolygonInfo *)0x0) {
      cocos2d::AutoPolygon::generatePolygon((basic_string *)local_60,cocos2d::Rect::ZERO,2.0,0.05);
    }
    object_to_luaval<cocos2d::PolygonInfo>(param_1,"cc.PolygonInfo",pPVar9);
    uVar7 = lua_gettop(param_1);
    tolua_register_gc(param_1,uVar7);
LAB_008a83a0:
    uVar7 = 1;
    if ((local_60[0] & 1) == 0) goto LAB_008a8448;
    goto LAB_008a8440;
  case 3:
    local_60[1] = 0;
    local_50 = (void *)0x0;
    local_60[0] = 0;
    cocos2d::Rect::Rect(aRStack_70);
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)local_60,"cc.AutoPolygon:generatePolygon");
    uVar4 = luaval_to_rect(param_1,3,aRStack_70,"cc.AutoPolygon:generatePolygon");
    if ((uVar3 & uVar4 & 1) != 0) {
      pPVar9 = operator_new(0x48,(nothrow_t *)&std::nothrow);
      if (pPVar9 != (PolygonInfo *)0x0) {
        cocos2d::AutoPolygon::generatePolygon((basic_string *)local_60,aRStack_70,2.0,0.05);
      }
      object_to_luaval<cocos2d::PolygonInfo>(param_1,"cc.PolygonInfo",pPVar9);
      uVar7 = lua_gettop(param_1);
      tolua_register_gc(param_1,uVar7);
      goto LAB_008a83a0;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_AutoPolygon_generatePolygon\'"
                ,0);
    break;
  case 4:
    local_60[1] = 0;
    local_50 = (void *)0x0;
    local_60[0] = 0;
    cocos2d::Rect::Rect(aRStack_70);
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)local_60,"cc.AutoPolygon:generatePolygon");
    uVar4 = luaval_to_rect(param_1,3,aRStack_70,"cc.AutoPolygon:generatePolygon");
    uVar5 = luaval_to_number(param_1,4,&local_78,"cc.AutoPolygon:generatePolygon");
    if ((uVar3 & uVar4 & uVar5 & 1) != 0) {
      pPVar9 = operator_new(0x48,(nothrow_t *)&std::nothrow);
      if (pPVar9 != (PolygonInfo *)0x0) {
        cocos2d::AutoPolygon::generatePolygon
                  ((basic_string *)local_60,aRStack_70,(float)local_78,0.05);
      }
      object_to_luaval<cocos2d::PolygonInfo>(param_1,"cc.PolygonInfo",pPVar9);
      uVar7 = lua_gettop(param_1);
      tolua_register_gc(param_1,uVar7);
      goto LAB_008a83a0;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_AutoPolygon_generatePolygon\'"
                ,0);
    break;
  case 5:
    local_60[1] = 0;
    local_50 = (void *)0x0;
    local_60[0] = 0;
    cocos2d::Rect::Rect(aRStack_70);
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)local_60,"cc.AutoPolygon:generatePolygon");
    uVar4 = luaval_to_rect(param_1,3,aRStack_70,"cc.AutoPolygon:generatePolygon");
    uVar5 = luaval_to_number(param_1,4,&local_78,"cc.AutoPolygon:generatePolygon");
    uVar6 = luaval_to_number(param_1,5,&local_80,"cc.AutoPolygon:generatePolygon");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & 1) != 0) {
      pPVar9 = operator_new(0x48,(nothrow_t *)&std::nothrow);
      if (pPVar9 != (PolygonInfo *)0x0) {
        cocos2d::AutoPolygon::generatePolygon
                  ((basic_string *)local_60,aRStack_70,(float)local_78,(float)local_80);
      }
      object_to_luaval<cocos2d::PolygonInfo>(param_1,"cc.PolygonInfo",pPVar9);
      uVar7 = lua_gettop(param_1);
      tolua_register_gc(param_1,uVar7);
      goto LAB_008a83a0;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_AutoPolygon_generatePolygon\'"
                ,0);
    break;
  default:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.AutoPolygon:generatePolygon",iVar2 + -1,1);
    uVar7 = 0;
    goto LAB_008a8448;
  }
  uVar7 = 0;
  if ((local_60[0] & 1) != 0) {
LAB_008a8440:
    operator_delete(local_50);
  }
LAB_008a8448:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

