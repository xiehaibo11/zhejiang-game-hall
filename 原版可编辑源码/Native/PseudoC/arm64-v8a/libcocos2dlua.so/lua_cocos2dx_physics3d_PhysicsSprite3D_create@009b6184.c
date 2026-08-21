
/* lua_cocos2dx_physics3d_PhysicsSprite3D_create(lua_State*) */

undefined4 lua_cocos2dx_physics3d_PhysicsSprite3D_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  char *pcVar8;
  undefined4 uVar9;
  Vec3 aVStack_e0 [16];
  Vec3 aVStack_d0 [16];
  ulong local_c0 [2];
  void *local_b0;
  undefined4 local_a8 [4];
  undefined8 local_98;
  Mat4 aMStack_90 [64];
  undefined1 local_50;
  long local_48;
  
                    /* try { // try from 009b618c to 00ab6193 has its CatchHandler @ 009b61a4 */
                    /* catch() { ... } // from try @ 009b6168 with catch @ 009b6194
                       try { // try from 009b6194 to 00ab61f3 has its CatchHandler @ 009b5f48 */
                    /* catch() { ... } // from try @ 009b60e8 with catch @ 009b6198 */
                    /* catch() { ... } // from try @ 009b60d0 with catch @ 009b619c */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 009b60bc with catch @ 009b61a0 */
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 009b6028 with catch @ 009b61a4
                       catch() { ... } // from try @ 009b618c with catch @ 009b61a4 */
  iVar2 = lua_gettop();
  if (iVar2 == 5) {
    local_c0[1] = 0;
    local_b0 = (void *)0x0;
    local_c0[0] = 0;
    local_a8[0] = 0;
    cocos2d::Vec3::Vec3((Vec3 *)((ulong)local_a8 | 4),0.0,0.0,0.0);
    local_98 = 0;
                    /* try { // try from 009b6370 to 00ab637f has its CatchHandler @ 009b644c */
    cocos2d::Mat4::Mat4(aMStack_90);
    local_50 = 0;
    cocos2d::Vec3::Vec3(aVStack_d0);
                    /* try { // try from 009b6384 to 00ab6393 has its CatchHandler @ 009b6448 */
    cocos2d::Quaternion::Quaternion((Quaternion *)aVStack_e0);
    pcVar8 = "cc.PhysicsSprite3D:create";
                    /* try { // try from 009b63a0 to 00ab63b3 has its CatchHandler @ 009b6444 */
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)local_c0,"cc.PhysicsSprite3D:create");
                    /* try { // try from 009b63b4 to 00ab6403 has its CatchHandler @ 009b61f4 */
    uVar4 = luaval_to_Physics3DRigidBodyDes(param_1,3,(Physics3DRigidBodyDes *)local_a8,pcVar8);
    uVar5 = luaval_to_vec3(param_1,4,aVStack_d0,"cc.PhysicsSprite3D:create");
    uVar6 = luaval_to_quaternion(param_1,5,(Quaternion *)aVStack_e0,"");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & 1) == 0) {
                    /* try { // try from 009b64a0 to 00ab6513 has its CatchHandler @ 009b64a0
                       catch() { ... } // from try @ 009b64a0 with catch @ 009b64a0
                       catch() { ... } // from try @ 009b6520 with catch @ 009b64a0 */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_physics3d_PhysicsSprite3D_create\'",
                  0);
      uVar9 = 0;
    }
    else {
                    /* try { // try from 009b6404 to 00ab6413 has its CatchHandler @ 009b6440 */
      pvVar7 = (void *)cocos2d::PhysicsSprite3D::create
                                 ((basic_string *)local_c0,(Physics3DRigidBodyDes *)local_a8,
                                  aVStack_d0,(Quaternion *)aVStack_e0);
                    /* try { // try from 009b6414 to 00ab649f has its CatchHandler @ 009b61f4 */
      if (pvVar7 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
                   "cc.PhysicsSprite3D");
      }
      uVar9 = 1;
    }
    cocos2d::Quaternion::~Quaternion((Quaternion *)aVStack_e0);
  }
  else {
                    /* catch() { ... } // from try @ 009b6074 with catch @ 009b61b8 */
    if (iVar2 == 4) {
      local_c0[1] = 0;
      local_b0 = (void *)0x0;
      local_c0[0] = 0;
      local_a8[0] = 0;
      cocos2d::Vec3::Vec3((Vec3 *)((ulong)local_a8 | 4),0.0,0.0,0.0);
      local_98 = 0;
      cocos2d::Mat4::Mat4(aMStack_90);
      local_50 = 0;
      cocos2d::Vec3::Vec3(aVStack_e0);
      pcVar8 = "cc.PhysicsSprite3D:create";
      uVar3 = luaval_to_std_string(param_1,2,(basic_string *)local_c0,"cc.PhysicsSprite3D:create");
      uVar4 = luaval_to_Physics3DRigidBodyDes(param_1,3,(Physics3DRigidBodyDes *)local_a8,pcVar8);
      uVar5 = luaval_to_vec3(param_1,4,aVStack_e0,"cc.PhysicsSprite3D:create");
                    /* try { // try from 009b6304 to 00ab631f has its CatchHandler @ 009b6454 */
      if ((uVar3 & uVar4 & uVar5 & 1) == 0) {
        tolua_error(param_1,
                    "invalid arguments in function \'lua_cocos2dx_physics3d_PhysicsSprite3D_create\'"
                    ,0);
LAB_009b648c:
        uVar9 = 0;
        goto LAB_009b64e0;
      }
      pvVar7 = (void *)cocos2d::PhysicsSprite3D::create
                                 ((basic_string *)local_c0,(Physics3DRigidBodyDes *)local_a8,
                                  aVStack_e0,(Quaternion *)cocos2d::Quaternion::ZERO);
                    /* try { // try from 009b6320 to 00ab632f has its CatchHandler @ 009b6450 */
      if (pvVar7 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
                    /* try { // try from 009b6334 to 00ab636f has its CatchHandler @ 009b6464 */
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
                   "cc.PhysicsSprite3D");
      }
    }
    else {
      if (iVar2 != 3) {
                    /* catch() { ... } // from try @ 009b6404 with catch @ 009b6440 */
                    /* catch() { ... } // from try @ 009b63a0 with catch @ 009b6444 */
                    /* catch() { ... } // from try @ 009b6384 with catch @ 009b6448 */
                    /* catch() { ... } // from try @ 009b6370 with catch @ 009b644c */
                    /* catch() { ... } // from try @ 009b6320 with catch @ 009b6450 */
                    /* catch() { ... } // from try @ 009b6304 with catch @ 009b6454 */
        luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
                   "cc.PhysicsSprite3D:create",iVar2 + -1,2);
        uVar9 = 0;
        goto LAB_009b64f8;
      }
                    /* catch() { ... } // from try @ 009b6084 with catch @ 009b61c8 */
      local_c0[1] = 0;
      local_b0 = (void *)0x0;
      local_c0[0] = 0;
      local_a8[0] = 0;
      cocos2d::Vec3::Vec3((Vec3 *)((ulong)local_a8 | 4),0.0,0.0,0.0);
      local_98 = 0;
                    /* try { // try from 009b61f4 to 00ab6303 has its CatchHandler @ 009b61f4
                       catch() { ... } // from try @ 009b61f4 with catch @ 009b61f4
                       catch() { ... } // from try @ 009b63b4 with catch @ 009b61f4
                       catch() { ... } // from try @ 009b6414 with catch @ 009b61f4 */
      cocos2d::Mat4::Mat4(aMStack_90);
      local_50 = 0;
      pcVar8 = "cc.PhysicsSprite3D:create";
      uVar3 = luaval_to_std_string(param_1,2,(basic_string *)local_c0,"cc.PhysicsSprite3D:create");
      uVar4 = luaval_to_Physics3DRigidBodyDes(param_1,3,(Physics3DRigidBodyDes *)local_a8,pcVar8);
      if ((uVar3 & uVar4 & 1) == 0) {
                    /* catch() { ... } // from try @ 009b6334 with catch @ 009b6464 */
        tolua_error(param_1,
                    "invalid arguments in function \'lua_cocos2dx_physics3d_PhysicsSprite3D_create\'"
                    ,0);
        goto LAB_009b648c;
      }
      pvVar7 = (void *)cocos2d::PhysicsSprite3D::create
                                 ((basic_string *)local_c0,(Physics3DRigidBodyDes *)local_a8,
                                  (Vec3 *)&cocos2d::Vec3::ZERO,
                                  (Quaternion *)cocos2d::Quaternion::ZERO);
      if (pvVar7 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
                   "cc.PhysicsSprite3D");
      }
    }
    uVar9 = 1;
  }
LAB_009b64e0:
  cocos2d::Mat4::~Mat4(aMStack_90);
  if ((local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
LAB_009b64f8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 009b6514 to 00ab651f has its CatchHandler @ 009b6578 */
                    /* try { // try from 009b6520 to 00ab658b has its CatchHandler @ 009b64a0 */
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

