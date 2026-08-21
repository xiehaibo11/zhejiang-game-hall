
bool FUN_008ab010(lua_State *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  Vec4 aVStack_a8 [16];
  Vec4 aVStack_98 [16];
  Mat4 aMStack_88 [64];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = lua_gettop();
  if ((uVar2 | 1) == 3) {
    cocos2d::Mat4::Mat4(aMStack_88);
    cocos2d::Vec4::Vec4(aVStack_98);
    cocos2d::Vec4::Vec4(aVStack_a8);
    uVar3 = luaval_to_mat4(param_1,1,aMStack_88,"");
    if (((uVar3 & 1) == 0) || (uVar3 = luaval_to_vec4(param_1,2,aVStack_98,""), (uVar3 & 1) == 0)) {
      bVar4 = false;
    }
    else {
      cocos2d::Mat4::transformVector(aMStack_88,aVStack_98,aVStack_a8);
      vec4_to_luaval(param_1,aVStack_a8);
      bVar4 = true;
    }
    cocos2d::Vec4::~Vec4(aVStack_a8);
    cocos2d::Vec4::~Vec4(aVStack_98);
  }
  else {
    if (1 < uVar2 - 5) {
      bVar4 = false;
      goto LAB_008ab1ac;
    }
    cocos2d::Mat4::Mat4(aMStack_88);
    cocos2d::Vec3::Vec3((Vec3 *)aVStack_98);
    uVar3 = luaval_to_mat4(param_1,1,aMStack_88,"");
    bVar4 = (uVar3 & 1) != 0;
    if (bVar4) {
      dVar5 = (double)tolua_tonumber(0,param_1,2);
      dVar6 = (double)tolua_tonumber(0,param_1,3);
      dVar7 = (double)tolua_tonumber(0,param_1,4);
      dVar8 = (double)tolua_tonumber(0,param_1,5);
      cocos2d::Mat4::transformVector
                (aMStack_88,(float)dVar5,(float)dVar6,(float)dVar7,(float)dVar8,(Vec3 *)aVStack_98);
      vec3_to_luaval(param_1,(Vec3 *)aVStack_98);
    }
  }
  cocos2d::Mat4::~Mat4(aMStack_88);
LAB_008ab1ac:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

