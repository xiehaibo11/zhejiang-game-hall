
/* lua_cocos2dx_physics3d_Physics3DSliderConstraint_create(lua_State*) */

undefined4 lua_cocos2dx_physics3d_Physics3DSliderConstraint_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  void *pvVar7;
  undefined4 uVar8;
  Physics3DRigidBody *unaff_x20;
  Physics3DRigidBody *unaff_x21;
  uint uVar9;
  uint uVar10;
  bool local_dc [4];
  Mat4 aMStack_d8 [64];
  Mat4 aMStack_98 [64];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 5) {
    cocos2d::Mat4::Mat4(aMStack_98);
    cocos2d::Mat4::Mat4(aMStack_d8);
    if (param_1 == (lua_State *)0x0) {
      uVar9 = 0;
      uVar10 = 0;
    }
    else {
      iVar2 = lua_gettop(param_1);
      if ((iVar2 < 2) ||
         (uVar6 = luaval_is_usertype(param_1,2,"cc.Physics3DRigidBody",0), (uVar6 & 1) == 0)) {
        uVar9 = 0;
      }
      else {
        unaff_x20 = (Physics3DRigidBody *)tolua_tousertype(param_1,2,0);
        uVar9 = 1;
      }
      iVar2 = lua_gettop(param_1);
      if ((iVar2 < 3) ||
         (uVar6 = luaval_is_usertype(param_1,3,"cc.Physics3DRigidBody",0), (uVar6 & 1) == 0)) {
        uVar10 = 0;
      }
      else {
        unaff_x21 = (Physics3DRigidBody *)tolua_tousertype(param_1,3,0);
        uVar10 = 1;
      }
    }
    uVar3 = luaval_to_mat4(param_1,4,aMStack_98,"cc.Physics3DSliderConstraint:create");
    uVar4 = luaval_to_mat4(param_1,5,aMStack_d8,"cc.Physics3DSliderConstraint:create");
    uVar5 = luaval_to_boolean(param_1,6,local_dc,"cc.Physics3DSliderConstraint:create");
    if ((uVar9 & uVar10 & uVar3 & uVar4 & uVar5) == 0) {
      tolua_error(param_1,&DAT_012ee021,0);
      uVar8 = 0;
    }
    else {
      pvVar7 = (void *)cocos2d::Physics3DSliderConstraint::create
                                 (unaff_x20,unaff_x21,aMStack_98,aMStack_d8,local_dc[0]);
      if (pvVar7 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
                   "cc.Physics3DSliderConstraint");
      }
      uVar8 = 1;
    }
    cocos2d::Mat4::~Mat4(aMStack_d8);
    cocos2d::Mat4::~Mat4(aMStack_98);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",&DAT_012edffd,
               iVar2 + -1,5);
    uVar8 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

