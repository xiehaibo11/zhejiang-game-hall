
/* luaval_to_Physics3DRigidBodyDes(lua_State*, int, cocos2d::Physics3DRigidBodyDes*, char const*) */

bool luaval_to_Physics3DRigidBodyDes
               (lua_State *param_1,int param_2,Physics3DRigidBodyDes *param_3,char *param_4)

{
  long lVar1;
  bool bVar2;
  Physics3DRigidBodyDes PVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float fVar7;
  double dVar8;
  undefined1 auStack_98 [16];
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009b5c58 to 00ab5c67 has its CatchHandler @ 009b5d60 */
  bVar2 = false;
                    /* try { // try from 009b5c68 to 00ab5cb7 has its CatchHandler @ 009b5bb0 */
  if ((param_1 != (lua_State *)0x0) && (param_3 != (Physics3DRigidBodyDes *)0x0)) {
    iVar4 = tolua_istable(param_1,param_2,0,auStack_98);
    bVar2 = iVar4 != 0;
    if (iVar4 != 0) {
      lua_pushstring(param_1,"mass");
      lua_gettable(param_1,param_2);
      iVar4 = lua_type(param_1,0xffffffff);
      if (iVar4 == 0) {
        fVar7 = 0.0;
      }
      else {
                    /* try { // try from 009b5cb8 to 00ab5cc7 has its CatchHandler @ 009b5d5c */
        dVar8 = (double)lua_tonumber(param_1,0xffffffff);
        fVar7 = (float)dVar8;
                    /* try { // try from 009b5cc8 to 00ab5d7b has its CatchHandler @ 009b5bb0 */
      }
      *(float *)param_3 = fVar7;
      lua_settop(param_1,0xfffffffe);
      lua_pushstring(param_1,"localInertia");
      lua_gettable(param_1,param_2);
      iVar4 = lua_type(param_1,0xffffffff);
      if (iVar4 == 5) {
        iVar4 = lua_gettop(param_1);
        luaval_to_vec3(param_1,iVar4,(Vec3 *)(param_3 + 4),"");
      }
      else {
        cocos2d::Vec3::Vec3((Vec3 *)&local_88,0.0,0.0,0.0);
        *(undefined4 *)(param_3 + 0xc) = uStack_80;
        *(undefined8 *)(param_3 + 4) = local_88;
      }
                    /* catch() { ... } // from try @ 009b5cb8 with catch @ 009b5d5c */
                    /* catch() { ... } // from try @ 009b5c58 with catch @ 009b5d60 */
      lua_settop(param_1,0xfffffffe);
      lua_pushstring(param_1,"shape");
                    /* try { // try from 009b5d7c to 00ab5e23 has its CatchHandler @ 009b5d7c
                       catch() { ... } // from try @ 009b5d7c with catch @ 009b5d7c
                       catch() { ... } // from try @ 009b5e34 with catch @ 009b5d7c
                       catch() { ... } // from try @ 009b5e94 with catch @ 009b5d7c */
      lua_gettable(param_1,param_2);
      iVar4 = tolua_isusertype(param_1,0xffffffff,"cc.Physics3DShape",0,auStack_98);
      if (iVar4 == 0) {
        *(undefined8 *)(param_3 + 0x10) = 0;
      }
      else {
        uVar5 = lua_gettop(param_1);
        uVar6 = tolua_tousertype(param_1,uVar5,0);
        *(undefined8 *)(param_3 + 0x10) = uVar6;
      }
      lua_settop(param_1,0xfffffffe);
      lua_pushstring(param_1,"originalTransform");
      lua_gettable(param_1,param_2);
      iVar4 = lua_type(param_1,0xffffffff);
      if (iVar4 == 5) {
        iVar4 = lua_gettop(param_1);
        luaval_to_mat4(param_1,iVar4,(Mat4 *)(param_3 + 0x18),"");
      }
      else {
                    /* try { // try from 009b5e24 to 00ab5e33 has its CatchHandler @ 009b5f2c */
        cocos2d::Mat4::Mat4((Mat4 *)&local_88);
                    /* try { // try from 009b5e34 to 00ab5e83 has its CatchHandler @ 009b5d7c */
        *(undefined8 *)(param_3 + 0x50) = uStack_50;
        *(undefined8 *)(param_3 + 0x48) = local_58;
        *(undefined8 *)(param_3 + 0x40) = uStack_60;
        *(undefined8 *)(param_3 + 0x38) = local_68;
        *(undefined8 *)(param_3 + 0x30) = uStack_70;
        *(undefined8 *)(param_3 + 0x28) = local_78;
        *(ulong *)(param_3 + 0x20) = CONCAT44(uStack_7c,uStack_80);
        *(undefined8 *)(param_3 + 0x18) = local_88;
        cocos2d::Mat4::~Mat4((Mat4 *)&local_88);
      }
      lua_settop(param_1,0xfffffffe);
      lua_pushstring(param_1,"disableSleep");
      lua_gettable(param_1,param_2);
                    /* try { // try from 009b5e84 to 00ab5e93 has its CatchHandler @ 009b5f28 */
      iVar4 = lua_type(param_1,0xffffffff);
      if (iVar4 == 0) {
        PVar3 = (Physics3DRigidBodyDes)0x0;
      }
      else {
                    /* try { // try from 009b5e94 to 00ab5f47 has its CatchHandler @ 009b5d7c */
        iVar4 = lua_toboolean(param_1,0xffffffff);
        PVar3 = (Physics3DRigidBodyDes)(iVar4 != 0);
      }
      param_3[0x58] = PVar3;
      lua_settop(param_1,0xfffffffe);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

