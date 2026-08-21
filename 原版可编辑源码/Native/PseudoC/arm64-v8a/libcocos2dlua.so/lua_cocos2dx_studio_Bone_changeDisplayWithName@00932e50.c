
/* lua_cocos2dx_studio_Bone_changeDisplayWithName(lua_State*) */

bool lua_cocos2dx_studio_Bone_changeDisplayWithName(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  Bone *this;
  bool bVar5;
  bool local_54 [4];
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
                    /* try { // try from 00932e58 to 00a32e8b has its CatchHandler @ 00932f58 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Bone *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 00932e8c to 00a32e9f has its CatchHandler @ 00932f24 */
  if (iVar2 + -1 == 2) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 00932ea4 to 00a32ed7 has its CatchHandler @ 00932f28 */
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"ccs.Bone:changeDisplayWithName");
    uVar4 = luaval_to_boolean(param_1,3,local_54,"ccs.Bone:changeDisplayWithName");
                    /* try { // try from 00932ed8 to 00a32f73 has its CatchHandler @ 00932d28 */
    bVar5 = (uVar3 & uVar4 & 1) == 0;
    if (bVar5) {
      tolua_error(param_1,&DAT_012cb605,0);
    }
    else {
      cocostudio::Bone::changeDisplayWithName(this,(basic_string *)&local_50,local_54[0]);
      lua_settop(param_1,1);
    }
    bVar5 = !bVar5;
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Bone:changeDisplayWithName",iVar2 + -1,2);
                    /* catch() { ... } // from try @ 00932e8c with catch @ 00932f24 */
    bVar5 = false;
                    /* catch() { ... } // from try @ 00932ea4 with catch @ 00932f28 */
  }
                    /* catch() { ... } // from try @ 00932e58 with catch @ 00932f58 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

