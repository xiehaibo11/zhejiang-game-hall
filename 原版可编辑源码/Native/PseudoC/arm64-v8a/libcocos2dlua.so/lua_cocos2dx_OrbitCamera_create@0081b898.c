
/* lua_cocos2dx_OrbitCamera_create(lua_State*) */

void lua_cocos2dx_OrbitCamera_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  void *pvVar10;
  undefined8 uVar11;
  double local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 7) {
    uVar3 = luaval_to_number(param_1,2,&dStack_70,"cc.OrbitCamera:create");
    uVar4 = luaval_to_number(param_1,3,&local_78,"cc.OrbitCamera:create");
    uVar5 = luaval_to_number(param_1,4,&dStack_80,"cc.OrbitCamera:create");
    uVar6 = luaval_to_number(param_1,5,&local_88,"cc.OrbitCamera:create");
    uVar7 = luaval_to_number(param_1,6,&dStack_90,"cc.OrbitCamera:create");
    uVar8 = luaval_to_number(param_1,7,&local_98,"cc.OrbitCamera:create");
    uVar9 = luaval_to_number(param_1,8,&local_a0,"cc.OrbitCamera:create");
    if (((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) &&
       ((((uVar6 & 1) != 0 && ((uVar7 & 1) != 0)) && (((uVar8 & 1) != 0 && ((uVar9 & 1) != 0)))))) {
      pvVar10 = (void *)cocos2d::OrbitCamera::create
                                  ((float)dStack_70,(float)local_78,(float)dStack_80,(float)local_88
                                   ,(float)dStack_90,(float)local_98,(float)local_a0);
      if (pvVar10 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar11 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar10 + 0xc),(int *)((long)pvVar10 + 0x10),pvVar10,
                   "cc.OrbitCamera");
        uVar11 = 1;
      }
      goto LAB_0081ba30;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_OrbitCamera_create\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.OrbitCamera:create",iVar2 + -1,7);
  }
  uVar11 = 0;
LAB_0081ba30:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}

