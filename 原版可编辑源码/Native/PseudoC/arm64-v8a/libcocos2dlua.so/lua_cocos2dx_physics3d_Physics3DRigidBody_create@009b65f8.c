
/* lua_cocos2dx_physics3d_Physics3DRigidBody_create(lua_State*) */

undefined4 lua_cocos2dx_physics3d_Physics3DRigidBody_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 local_98 [4];
  undefined8 local_88;
  Mat4 aMStack_80 [64];
  undefined1 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  pcVar5 = (char *)(ulong)(iVar2 - 1U);
  if (iVar2 - 1U == 1) {
    local_98[0] = 0;
    cocos2d::Vec3::Vec3((Vec3 *)((ulong)local_98 | 4),0.0,0.0,0.0);
    local_88 = 0;
                    /* try { // try from 009b6654 to 00ab66bf has its CatchHandler @ 009b6654
                       catch() { ... } // from try @ 009b6654 with catch @ 009b6654
                       catch() { ... } // from try @ 009b6710 with catch @ 009b6654 */
    cocos2d::Mat4::Mat4(aMStack_80);
    local_40 = 0;
    uVar3 = luaval_to_Physics3DRigidBodyDes(param_1,2,(Physics3DRigidBodyDes *)local_98,pcVar5);
    if ((uVar3 & 1) == 0) {
                    /* try { // try from 009b66c0 to 00ab670f has its CatchHandler @ 009b676c */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_physics3d_Physics3DRigidBody_create\'"
                  ,0);
      uVar6 = 0;
    }
    else {
      pvVar4 = (void *)cocos2d::Physics3DRigidBody::create((Physics3DRigidBodyDes *)local_98);
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.Physics3DRigidBody");
      }
      uVar6 = 1;
    }
    cocos2d::Mat4::~Mat4(aMStack_80);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.Physics3DRigidBody:create",pcVar5,1);
    uVar6 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009b6710 to 00ab6787 has its CatchHandler @ 009b6654 */
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

