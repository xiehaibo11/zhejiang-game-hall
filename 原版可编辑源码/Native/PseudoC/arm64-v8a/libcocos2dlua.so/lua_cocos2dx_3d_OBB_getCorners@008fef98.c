
/* lua_cocos2dx_3d_OBB_getCorners(lua_State*) */

void lua_cocos2dx_3d_OBB_getCorners(lua_State *param_1)

{
  undefined1 auVar1 [16];
  long lVar2;
  int iVar3;
  OBB *this;
  ulong uVar4;
  Vec3 *pVVar5;
  undefined8 uVar6;
  char *pcVar7;
  Vec3 *pVVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  this = (OBB *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    uVar4 = lua_objlen(param_1,2);
    if (uVar4 == 0) {
      pcVar7 = "Table\'s len equal 0";
    }
    else {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar10 = uVar4 * 0xc;
      if (SUB168(auVar1 * ZEXT816(0xc),8) != 0) {
        uVar10 = 0xffffffffffffffff;
      }
      pVVar5 = operator_new__(uVar10,(nothrow_t *)&std::nothrow);
      if (pVVar5 != (Vec3 *)0x0) {
        lVar9 = 0;
        do {
          cocos2d::Vec3::Vec3(pVVar5 + lVar9);
          lVar9 = lVar9 + 0xc;
        } while (uVar4 * 0xc - lVar9 != 0);
        uVar10 = 0;
        pVVar8 = pVVar5;
        do {
          lua_pushnumber((double)((int)uVar10 + 1),param_1);
          lua_gettable(param_1,2);
          iVar3 = lua_type(param_1,0xffffffff);
          if (iVar3 == 0) {
            cocos2d::Vec3::Vec3((Vec3 *)&local_68,0.0,0.0,0.0);
            *(undefined4 *)(pVVar8 + 8) = local_60;
            *(undefined8 *)pVVar8 = local_68;
          }
          else {
            luaval_to_vec3(param_1,-1,pVVar8,"cc.OBB:getCorners");
          }
          lua_settop(param_1,0xfffffffe);
          uVar10 = uVar10 + 1;
          pVVar8 = pVVar8 + 0xc;
        } while (uVar4 != uVar10);
        cocos2d::OBB::getCorners(this,pVVar5);
        lua_createtable(param_1,0,0);
        uVar10 = 0;
        pVVar8 = pVVar5;
        do {
          uVar10 = uVar10 + 1;
          lua_pushnumber((double)(int)uVar10,param_1);
          vec3_to_luaval(param_1,pVVar8);
          lua_rawset(param_1,0xfffffffd);
          pVVar8 = pVVar8 + 0xc;
        } while (uVar4 != uVar10);
        operator_delete__(pVVar5);
        uVar6 = 1;
        goto LAB_008ff180;
      }
      pcVar7 = "Allocate cocos2d::Vec3 array in the lua_cocos2dx_3d_OBB_getCorners failed!";
    }
    luaL_error(param_1,pcVar7);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.OBB:getCorners",iVar3 + -1,1);
  }
  uVar6 = 0;
LAB_008ff180:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

