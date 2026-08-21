
/* lua_cocos2dx_3d_Mesh_draw(lua_State*) */

bool lua_cocos2dx_3d_Mesh_draw(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  Mesh *this;
  ulong uVar9;
  bool bVar10;
  Renderer *unaff_x21;
  uint uVar11;
  bool local_cc [4];
  Vec4 aVStack_c8 [16];
  uint local_b8;
  uint uStack_b4;
  double local_b0;
  Mat4 aMStack_a8 [64];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this = (Mesh *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 7) {
    cocos2d::Mat4::Mat4(aMStack_a8);
    cocos2d::Vec4::Vec4(aVStack_c8);
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar9 = luaval_is_usertype(param_1,2,"cc.Renderer",0), (uVar9 & 1) == 0)) {
      uVar11 = 0;
    }
    else {
      unaff_x21 = (Renderer *)tolua_tousertype(param_1,2,0);
      uVar11 = 1;
    }
    uVar3 = luaval_to_number(param_1,3,&local_b0,"cc.Mesh:draw");
    uVar4 = luaval_to_mat4(param_1,4,aMStack_a8,"cc.Mesh:draw");
    uVar5 = luaval_to_uint32(param_1,5,&uStack_b4,"cc.Mesh:draw");
    uVar6 = luaval_to_uint32(param_1,6,&local_b8,"cc.Mesh:draw");
    uVar7 = luaval_to_vec4(param_1,7,aVStack_c8,"cc.Mesh:draw");
    uVar8 = luaval_to_boolean(param_1,8,local_cc,"cc.Mesh:draw");
    bVar10 = (uVar11 & uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8) == 0;
    if (bVar10) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Mesh_draw\'",0);
    }
    else {
      cocos2d::Mesh::draw(this,unaff_x21,(float)local_b0,aMStack_a8,uStack_b4,local_b8,aVStack_c8,
                          local_cc[0]);
      lua_settop(param_1,1);
    }
    bVar10 = !bVar10;
    cocos2d::Vec4::~Vec4(aVStack_c8);
    cocos2d::Mat4::~Mat4(aMStack_a8);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","cc.Mesh:draw",
               iVar2 + -1,7);
    bVar10 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return bVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

