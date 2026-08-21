
/* lua_dragonbones_Slot_update(lua_State*) */

undefined4 lua_dragonbones_Slot_update(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Slot *this;
  ulong uVar3;
  undefined4 uVar4;
  int local_3c;
  long local_38;
  
                    /* try { // try from 00957564 to 00a5758b has its CatchHandler @ 009574e8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Slot *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0095758c to 00a5759f has its CatchHandler @ 009575f8 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"db.Slot:update");
    if ((uVar3 & 1) != 0) {
      dragonBones::Slot::update(this,local_3c);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00957610;
    }
                    /* catch() { ... } // from try @ 00957520 with catch @ 009575f8
                       catch() { ... } // from try @ 0095758c with catch @ 009575f8 */
    tolua_error(param_1,"invalid arguments in function \'lua_dragonbones_Slot_update\'",0);
  }
  else {
                    /* try { // try from 009575d8 to 00a575df has its CatchHandler @ 009575f4 */
                    /* try { // try from 009575e0 to 00a57613 has its CatchHandler @ 009574e8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",0x12d2dd1,
               iVar2 + -1,1);
                    /* catch() { ... } // from try @ 0095753c with catch @ 009575f4
                       catch() { ... } // from try @ 009575d8 with catch @ 009575f4 */
  }
  uVar4 = 0;
LAB_00957610:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

