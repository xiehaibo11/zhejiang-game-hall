
/* lua_cocos2dx_physics3d_Physics3DShape_createCompoundShape(lua_State*) */

void lua_cocos2dx_physics3d_Physics3DShape_createCompoundShape(lua_State *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined8 *puStack_120;
  undefined1 auStack_118 [16];
  undefined8 local_108;
  Mat4 aMStack_100 [64];
  Mat4 aMStack_c0 [64];
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009b7264 to 00ab730f has its CatchHandler @ 009b7264
                       catch() { ... } // from try @ 009b7264 with catch @ 009b7264
                       catch() { ... } // from try @ 009b7320 with catch @ 009b7264 */
  iVar4 = lua_gettop();
  if (iVar4 + -1 == 1) {
    local_128 = (undefined8 *)0x0;
    puStack_120 = (undefined8 *)0x0;
    local_130 = (undefined8 *)0x0;
    iVar4 = tolua_istable(param_1,2,0,auStack_118);
    if (iVar4 != 0) {
      uVar6 = lua_objlen(param_1,2);
      cocos2d::Mat4::Mat4(aMStack_c0);
      uVar9 = 0;
      uVar10 = 0;
      if (uVar6 != 0) {
        do {
                    /* try { // try from 009b7310 to 00ab731f has its CatchHandler @ 009b73a8 */
          uVar10 = uVar10 + 1;
          lua_pushnumber((double)uVar10,param_1);
                    /* try { // try from 009b7320 to 00ab73ff has its CatchHandler @ 009b7264 */
          lua_gettable(param_1,2);
          iVar4 = lua_type(param_1,0xffffffff);
          if (iVar4 == 5) {
            lua_pushnumber(0x3ff0000000000000,param_1);
            lua_gettable(param_1,0xfffffffe);
            iVar4 = lua_gettop(param_1);
            if (((param_1 != (lua_State *)0x0) && (iVar5 = lua_gettop(param_1), iVar4 <= iVar5)) &&
               (uVar7 = luaval_is_usertype(param_1,iVar4,"cc.Physics3DShape",0), (uVar7 & 1) != 0))
            {
              uVar9 = tolua_tousertype(param_1,iVar4,0);
            }
                    /* catch() { ... } // from try @ 009b7310 with catch @ 009b73a8 */
            lua_settop(param_1,0xfffffffe);
            lua_pushnumber(0x4000000000000000,param_1);
            lua_gettable(param_1,0xfffffffe);
            iVar4 = lua_gettop(param_1);
            luaval_to_mat4(param_1,iVar4,aMStack_c0,"");
            lua_settop(param_1,0xfffffffe);
            local_108 = uVar9;
            cocos2d::Mat4::Mat4(aMStack_100,aMStack_c0);
            puVar2 = local_128;
            if (local_128 < puStack_120) {
              *local_128 = local_108;
              cocos2d::Mat4::Mat4((Mat4 *)(local_128 + 1),aMStack_100);
              local_128 = puVar2 + 9;
            }
            else {
              std::__ndk1::
              vector<std::__ndk1::pair<cocos2d::Physics3DShape*,cocos2d::Mat4>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::Physics3DShape*,cocos2d::Mat4>>>
              ::__push_back_slow_path<std::__ndk1::pair<cocos2d::Physics3DShape*,cocos2d::Mat4>>
                        ((vector<std::__ndk1::pair<cocos2d::Physics3DShape*,cocos2d::Mat4>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::Physics3DShape*,cocos2d::Mat4>>>
                          *)&local_130,(pair *)&local_108);
            }
            cocos2d::Mat4::~Mat4(aMStack_100);
          }
          lua_settop(param_1,0xfffffffe);
        } while (uVar6 != uVar10);
      }
      cocos2d::Mat4::~Mat4(aMStack_c0);
    }
    pvVar8 = (void *)cocos2d::Physics3DShape::createCompoundShape((vector *)&local_130);
    if (pvVar8 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar8 + 0xc),(int *)((long)pvVar8 + 0x10),pvVar8,
                 "cc.Physics3DShape");
    }
    puVar3 = local_130;
    puVar2 = local_128;
    if (local_130 != (undefined8 *)0x0) {
      for (; puVar2 != puVar3; puVar2 = puVar2 + -9) {
        cocos2d::Mat4::~Mat4((Mat4 *)(puVar2 + -8));
      }
      local_128 = puVar3;
      operator_delete(local_130);
    }
    uVar9 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.Physics3DShape:createCompoundShape",iVar4 + -1,1);
    uVar9 = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}

