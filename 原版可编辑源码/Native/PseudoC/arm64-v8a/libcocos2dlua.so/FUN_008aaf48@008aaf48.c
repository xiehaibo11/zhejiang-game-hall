
bool FUN_008aaf48(lua_State *param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  Mat4 aMStack_a8 [64];
  Mat4 aMStack_68 [64];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  cocos2d::Mat4::Mat4(aMStack_68);
  uVar3 = luaval_to_mat4(param_1,1,aMStack_68,"");
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    cocos2d::Mat4::getInversed();
    mat4_to_luaval(param_1,aMStack_a8);
    cocos2d::Mat4::~Mat4(aMStack_a8);
  }
  cocos2d::Mat4::~Mat4(aMStack_68);
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar1;
}

