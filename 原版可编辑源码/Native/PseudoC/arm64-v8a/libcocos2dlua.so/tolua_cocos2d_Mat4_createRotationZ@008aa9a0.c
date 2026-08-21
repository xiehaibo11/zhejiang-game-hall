
/* tolua_cocos2d_Mat4_createRotationZ(lua_State*) */

bool tolua_cocos2d_Mat4_createRotationZ(lua_State *param_1)

{
  long lVar1;
  double dVar2;
  int iVar3;
  ulong uVar4;
  bool bVar5;
  Mat4 aMStack_68 [64];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar3 = lua_gettop();
  if (iVar3 == 2) {
    cocos2d::Mat4::Mat4(aMStack_68);
    uVar4 = luaval_to_mat4(param_1,1,aMStack_68,"");
    bVar5 = (uVar4 & 1) != 0;
    if (bVar5) {
      dVar2 = (double)lua_tonumber(param_1,2);
      cocos2d::Mat4::createRotationZ((float)dVar2,aMStack_68);
      mat4_to_luaval(param_1,aMStack_68);
    }
    cocos2d::Mat4::~Mat4(aMStack_68);
  }
  else {
    bVar5 = false;
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}

