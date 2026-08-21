
/* tolua_cocos2d_Mat4_setIdentity(lua_State*) */

bool tolua_cocos2d_Mat4_setIdentity(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  bool bVar4;
  Mat4 aMStack_68 [64];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 1) {
    cocos2d::Mat4::Mat4(aMStack_68);
    uVar3 = luaval_to_mat4(param_1,1,aMStack_68,"");
    bVar4 = (uVar3 & 1) != 0;
    if (bVar4) {
      cocos2d::Mat4::setIdentity(aMStack_68);
      mat4_to_luaval(param_1,aMStack_68);
    }
    cocos2d::Mat4::~Mat4(aMStack_68);
  }
  else {
    bVar4 = false;
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}

