
/* lua_cocos2dx_studio_ArmatureAnimation_init(lua_State*) */

undefined8 lua_cocos2dx_studio_ArmatureAnimation_init(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 0093498c to 00a34993 has its CatchHandler @ 009349a8 */
  if (iVar1 + -1 == 1) {
                    /* try { // try from 00934994 to 00a349c7 has its CatchHandler @ 00934824 */
                    /* catch() { ... } // from try @ 009348e8 with catch @ 009349a8
                       catch() { ... } // from try @ 0093498c with catch @ 009349a8 */
                    /* catch() { ... } // from try @ 00934864 with catch @ 009349ac
                       catch() { ... } // from try @ 00934938 with catch @ 009349ac */
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar4 = luaval_is_usertype(param_1,2,"ccs.Armature",0), (uVar4 & 1) != 0)) {
                    /* try { // try from 009349c8 to 00a34a13 has its CatchHandler @ 009349c8
                       catch() { ... } // from try @ 009349c8 with catch @ 009349c8
                       catch() { ... } // from try @ 00934a18 with catch @ 009349c8 */
      uVar5 = tolua_tousertype(param_1,2,0);
      uVar2 = (**(code **)(*plVar3 + 0xa0))(plVar3,uVar5);
      tolua_pushboolean(param_1,uVar2 & 1);
      return 1;
    }
                    /* try { // try from 00934a18 to 00a34a5f has its CatchHandler @ 009349c8 */
    tolua_error(param_1,&DAT_012cbba4,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ArmatureAnimation:init",iVar1 + -1,1);
                    /* try { // try from 00934a14 to 00a34a17 has its CatchHandler @ 00934a4c */
  }
  return 0;
}

