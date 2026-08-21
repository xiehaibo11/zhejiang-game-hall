
/* WARNING: Type propagation algorithm not settling */
/* lua_cocos2dx_3d_TextureCube_create(lua_State*) */

undefined4 lua_cocos2dx_3d_TextureCube_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  void *pvVar9;
  undefined4 uVar10;
  ulong local_e8;
  undefined8 local_e0;
  void *local_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  void *local_c0;
  ulong local_b8;
  undefined8 local_b0;
  void *local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  void *local_90;
  ulong local_88;
  undefined8 local_80;
  void *local_78;
  ulong local_70;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
                    /* try { // try from 00901ea0 to 00a01eb7 has its CatchHandler @ 00902118 */
  if (iVar2 + -1 == 6) {
    local_68 = 0;
    local_60 = (void *)0x0;
    local_70 = 0;
    local_80 = 0;
    local_78 = (void *)0x0;
    local_90 = (void *)0x0;
    local_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = (void *)0x0;
                    /* try { // try from 00901ebc to 00a01ed3 has its CatchHandler @ 009020ec */
    local_c0 = (void *)0x0;
    local_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (void *)0x0;
    local_e8 = 0;
                    /* try { // try from 00901ee0 to 00a01f0b has its CatchHandler @ 009020e4 */
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_70,"cc.TextureCube:create");
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_88,"cc.TextureCube:create");
                    /* try { // try from 00901f18 to 00a01f2f has its CatchHandler @ 009020f0 */
    uVar5 = luaval_to_std_string(param_1,4,(basic_string *)&local_a0,"cc.TextureCube:create");
                    /* try { // try from 00901f34 to 00a01f4b has its CatchHandler @ 009020e8 */
    uVar6 = luaval_to_std_string(param_1,5,(basic_string *)&local_b8,"cc.TextureCube:create");
                    /* try { // try from 00901f50 to 00a01f67 has its CatchHandler @ 009020e0 */
    uVar7 = luaval_to_std_string(param_1,6,(basic_string *)&local_d0,"cc.TextureCube:create");
    uVar8 = luaval_to_std_string(param_1,7,(basic_string *)&local_e8,"cc.TextureCube:create");
                    /* try { // try from 00901f78 to 00a01f9f has its CatchHandler @ 009020dc */
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_TextureCube_create\'",0);
      uVar10 = 0;
    }
    else {
      pvVar9 = (void *)cocos2d::TextureCube::create
                                 ((basic_string *)&local_70,(basic_string *)&local_88,
                                  (basic_string *)&local_a0,(basic_string *)&local_b8,
                                  (basic_string *)&local_d0,(basic_string *)&local_e8);
      if (pvVar9 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
                    /* try { // try from 00901fb8 to 00a01fbb has its CatchHandler @ 00902168 */
                    /* try { // try from 00901fbc to 00a02027 has its CatchHandler @ 00901e54 */
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar9 + 0xc),(int *)((long)pvVar9 + 0x10),pvVar9,
                   "cc.TextureCube");
      }
      uVar10 = 1;
                    /* try { // try from 009020c8 to 00a020cf has its CatchHandler @ 009020dc */
    }
    if ((local_e8 & 1) != 0) {
      operator_delete(local_d8);
    }
    if ((local_d0 & 1) != 0) {
      operator_delete(local_c0);
    }
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
                    /* try { // try from 00902028 to 00a0202f has its CatchHandler @ 009020e4 */
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.TextureCube:create",iVar2 + -1,6);
    uVar10 = 0;
  }
                    /* try { // try from 00902044 to 00a02047 has its CatchHandler @ 00902164 */
                    /* try { // try from 00902048 to 00a020c7 has its CatchHandler @ 00901e54 */
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009020d0 to 00a02103 has its CatchHandler @ 00901e54 */
    __stack_chk_fail();
  }
  return uVar10;
}

