
/* tolua_cocos2d_Mat4_createTranslation(lua_State*) */

bool tolua_cocos2d_Mat4_createTranslation(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  Vec3 aVStack_88 [16];
  Mat4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 1) {
    cocos2d::Vec3::Vec3(aVStack_88);
    cocos2d::Mat4::Mat4(aMStack_78);
    uVar3 = luaval_to_vec3(param_1,1,aVStack_88,"cc.Mat4.createTranslation");
    bVar4 = (uVar3 & 1) != 0;
    if (bVar4) {
      cocos2d::Mat4::createTranslation(aVStack_88,aMStack_78);
      mat4_to_luaval(param_1,aMStack_78);
    }
    cocos2d::Mat4::~Mat4(aMStack_78);
  }
  else if (iVar2 == 3) {
    cocos2d::Mat4::Mat4(aMStack_78);
    dVar5 = (double)lua_tonumber(param_1,1);
    dVar6 = (double)lua_tonumber(param_1,2);
    dVar7 = (double)lua_tonumber(param_1,3);
    cocos2d::Mat4::createTranslation((float)dVar5,(float)dVar6,(float)dVar7,aMStack_78);
    mat4_to_luaval(param_1,aMStack_78);
    cocos2d::Mat4::~Mat4(aMStack_78);
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}

