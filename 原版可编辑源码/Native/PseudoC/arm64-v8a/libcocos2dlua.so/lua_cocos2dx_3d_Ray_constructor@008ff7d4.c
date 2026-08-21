
/* lua_cocos2dx_3d_Ray_constructor(lua_State*) */

void lua_cocos2dx_3d_Ray_constructor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  Ray *this;
  undefined8 uVar5;
  Vec3 aVStack_58 [16];
  Vec3 aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 0) {
    this = operator_new(0x18,(nothrow_t *)&std::nothrow);
    if (this != (Ray *)0x0) {
      cocos2d::Ray::Ray(this);
    }
LAB_008ff8c8:
    tolua_pushusertype(param_1,this,&DAT_012b193f);
    uVar3 = lua_gettop(param_1);
    tolua_register_gc(param_1,uVar3);
    uVar5 = 1;
  }
  else {
    if (iVar2 == 3) {
      cocos2d::Vec3::Vec3(aVStack_48);
      uVar4 = luaval_to_vec3(param_1,2,aVStack_48,"cc.Ray:Ray");
      if ((uVar4 & 1) != 0) {
        cocos2d::Vec3::Vec3(aVStack_58);
        uVar4 = luaval_to_vec3(param_1,3,aVStack_58,"cc.Ray:Ray");
        if ((uVar4 & 1) != 0) {
          this = operator_new(0x18,(nothrow_t *)&std::nothrow);
          if (this != (Ray *)0x0) {
            cocos2d::Ray::Ray(this,aVStack_48,aVStack_58);
          }
          goto LAB_008ff8c8;
        }
      }
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","cc.Ray:Ray",
               iVar2 + -1,0);
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

