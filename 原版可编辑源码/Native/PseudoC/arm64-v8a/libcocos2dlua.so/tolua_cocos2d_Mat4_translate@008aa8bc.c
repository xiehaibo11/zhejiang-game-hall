
/* tolua_cocos2d_Mat4_translate(lua_State*) */

undefined4 tolua_cocos2d_Mat4_translate(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  Vec3 aVStack_78 [16];
  Mat4 aMStack_68 [64];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 1) {
    cocos2d::Mat4::Mat4(aMStack_68);
    cocos2d::Vec3::Vec3(aVStack_78);
    uVar3 = luaval_to_mat4(param_1,1,aMStack_68,"");
    if (((uVar3 & 1) == 0) || (uVar3 = luaval_to_vec3(param_1,2,aVStack_78,""), (uVar3 & 1) == 0)) {
      uVar4 = 0;
    }
    else {
      cocos2d::Mat4::translate(aMStack_68,aVStack_78);
      mat4_to_luaval(param_1,aMStack_68);
      uVar4 = 1;
    }
    cocos2d::Mat4::~Mat4(aMStack_68);
  }
  else {
    uVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

