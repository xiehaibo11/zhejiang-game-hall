
/* lua_cocos2dx_Camera_lookAt(lua_State*) */

undefined4 lua_cocos2dx_Camera_lookAt(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  code *pcVar7;
  undefined4 uVar8;
  Vec3 aVStack_68 [16];
  Vec3 aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    cocos2d::Vec3::Vec3(aVStack_58);
    cocos2d::Vec3::Vec3(aVStack_68);
    uVar4 = luaval_to_vec3(param_1,2,aVStack_58,"cc.Camera:lookAt");
    uVar5 = luaval_to_vec3(param_1,3,aVStack_68,"cc.Camera:lookAt");
    if (((uVar4 & 1) == 0) || ((uVar5 & 1) == 0)) {
LAB_00864294:
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Camera_lookAt\'",0);
      goto LAB_008642cc;
    }
    puVar6 = aVStack_68;
    pcVar7 = *(code **)(*plVar3 + 0x530);
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.Camera:lookAt",iVar2 + -1,1);
LAB_008642cc:
      uVar8 = 0;
      goto LAB_008642d0;
    }
    cocos2d::Vec3::Vec3(aVStack_58);
    uVar4 = luaval_to_vec3(param_1,2,aVStack_58,"cc.Camera:lookAt");
    if ((uVar4 & 1) == 0) goto LAB_00864294;
    pcVar7 = *(code **)(*plVar3 + 0x530);
    puVar6 = cocos2d::Vec3::UNIT_Y;
  }
  (*pcVar7)(plVar3,aVStack_58,puVar6);
  uVar8 = 1;
  lua_settop(param_1,1);
LAB_008642d0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

