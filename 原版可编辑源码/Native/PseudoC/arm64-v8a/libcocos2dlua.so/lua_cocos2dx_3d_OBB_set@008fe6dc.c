
/* lua_cocos2dx_3d_OBB_set(lua_State*) */

undefined8 lua_cocos2dx_3d_OBB_set(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  OBB *this;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  Vec3 aVStack_a8 [16];
  Vec3 aVStack_98 [16];
  Vec3 aVStack_88 [16];
  Vec3 aVStack_78 [16];
  Vec3 aVStack_68 [16];
  long local_58;
  
                    /* try { // try from 008fe6f8 to 009fe70f has its CatchHandler @ 008fe89c */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = (OBB *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 008fe718 to 009fe72f has its CatchHandler @ 008fe898 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 5) {
    cocos2d::Vec3::Vec3(aVStack_68);
                    /* try { // try from 008fe734 to 009fe753 has its CatchHandler @ 008fe894 */
    cocos2d::Vec3::Vec3(aVStack_78);
    cocos2d::Vec3::Vec3(aVStack_88);
    cocos2d::Vec3::Vec3(aVStack_98);
    cocos2d::Vec3::Vec3(aVStack_a8);
                    /* try { // try from 008fe75c to 009fe77f has its CatchHandler @ 008fe890 */
    uVar3 = luaval_to_vec3(param_1,2,aVStack_68,"cc.OBB:set");
    uVar4 = luaval_to_vec3(param_1,3,aVStack_78,"cc.OBB:set");
                    /* try { // try from 008fe798 to 009fe7af has its CatchHandler @ 008fe8a8 */
    uVar5 = luaval_to_vec3(param_1,4,aVStack_88,"cc.OBB:set");
                    /* try { // try from 008fe7b4 to 009fe7d3 has its CatchHandler @ 008fe8a4 */
    uVar6 = luaval_to_vec3(param_1,5,aVStack_98,"cc.OBB:set");
    uVar7 = luaval_to_vec3(param_1,6,aVStack_a8,"cc.OBB:set");
                    /* try { // try from 008fe7d8 to 009fe7f3 has its CatchHandler @ 008fe8a0 */
    if (((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) &&
       (((uVar6 & 1) != 0 && ((uVar7 & 1) != 0)))) {
                    /* try { // try from 008fe7f4 to 009fe8cb has its CatchHandler @ 008fe660 */
      cocos2d::OBB::set(this,aVStack_68,aVStack_78,aVStack_88,aVStack_98,aVStack_a8);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","cc.OBB:set",
               iVar2 + -1,5);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

