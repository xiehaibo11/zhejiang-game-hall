
bool FUN_008ab9c0(lua_State *param_1)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  Mat4 aMStack_e8 [64];
  Mat4 aMStack_a8 [64];
  Mat4 aMStack_68 [64];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  cocos2d::Mat4::Mat4(aMStack_68);
  uVar2 = luaval_to_mat4(param_1,1,aMStack_68,"");
  if ((uVar2 & 1) == 0) {
    bVar3 = false;
  }
  else {
    cocos2d::Mat4::Mat4(aMStack_a8);
    uVar2 = luaval_to_mat4(param_1,2,aMStack_a8,"");
    bVar3 = (uVar2 & 1) != 0;
    if (bVar3) {
      cocos2d::Mat4::Mat4(aMStack_e8,aMStack_68);
      cocos2d::Mat4::multiply(aMStack_e8,aMStack_a8);
      mat4_to_luaval(param_1,aMStack_e8);
      cocos2d::Mat4::~Mat4(aMStack_e8);
    }
    cocos2d::Mat4::~Mat4(aMStack_a8);
  }
  cocos2d::Mat4::~Mat4(aMStack_68);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}

