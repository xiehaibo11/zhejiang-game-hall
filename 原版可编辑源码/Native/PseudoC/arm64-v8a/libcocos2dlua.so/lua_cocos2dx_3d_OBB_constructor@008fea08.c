
/* lua_cocos2dx_3d_OBB_constructor(lua_State*) */

void lua_cocos2dx_3d_OBB_constructor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  AABB *pAVar6;
  OBB *this;
  Vec3 *pVVar7;
  undefined8 uVar8;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 0) {
    this = operator_new(0x60,(nothrow_t *)&std::nothrow);
    if (this != (OBB *)0x0) {
      cocos2d::OBB::OBB(this);
    }
LAB_008feb88:
    tolua_pushusertype(param_1,this,&DAT_012b1872);
    uVar4 = lua_gettop(param_1);
    tolua_register_gc(param_1,uVar4);
    uVar8 = 1;
  }
  else {
    if (iVar2 == 3) {
      if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
         (uVar5 = luaval_is_usertype(param_1,2,"cc.Vec3",0), (uVar5 & 1) != 0)) {
        pVVar7 = (Vec3 *)tolua_tousertype(param_1,2,0);
        uVar5 = luaval_to_int32(param_1,3,&local_3c,"cc.OBB:OBB");
        if ((uVar5 & 1) != 0) {
          this = operator_new(0x60,(nothrow_t *)&std::nothrow);
          if (this != (OBB *)0x0) {
            cocos2d::OBB::OBB(this,pVVar7,local_3c);
          }
          goto LAB_008feb88;
        }
      }
    }
    else if (((iVar2 == 2) && (param_1 != (lua_State *)0x0)) &&
            ((iVar3 = lua_gettop(param_1), 1 < iVar3 &&
             (uVar5 = luaval_is_usertype(param_1,2,"cc.AABB",0), (uVar5 & 1) != 0)))) {
      pAVar6 = (AABB *)tolua_tousertype(param_1,2,0);
      this = operator_new(0x60,(nothrow_t *)&std::nothrow);
      if (this != (OBB *)0x0) {
        cocos2d::OBB::OBB(this,pAVar6);
      }
      goto LAB_008feb88;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","cc.OBB:OBB",
               iVar2 + -1,2);
    uVar8 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

