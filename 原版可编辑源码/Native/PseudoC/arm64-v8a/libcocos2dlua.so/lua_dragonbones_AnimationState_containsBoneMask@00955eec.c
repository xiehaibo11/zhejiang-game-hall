
/* lua_dragonbones_AnimationState_containsBoneMask(lua_State*) */

bool lua_dragonbones_AnimationState_containsBoneMask(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  AnimationState *this;
  ulong uVar4;
  bool bVar5;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00955f10 to 00a55f27 has its CatchHandler @ 00955fd8 */
  this = (AnimationState *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 00955f34 to 00a55f4b has its CatchHandler @ 00955fd4 */
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 00955f4c to 00a55f7f has its CatchHandler @ 00955ec0 */
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"db.AnimationState:containsBoneMask");
    bVar5 = (uVar4 & 1) == 0;
    if (bVar5) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_dragonbones_AnimationState_containsBoneMask\'"
                  ,0);
    }
    else {
      uVar3 = dragonBones::AnimationState::containsBoneMask(this,(basic_string *)&local_50);
      tolua_pushboolean(param_1,uVar3 & 1);
    }
    bVar5 = !bVar5;
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
                    /* try { // try from 00955f80 to 00a55f93 has its CatchHandler @ 00955fd8 */
                    /* try { // try from 00955f94 to 00a55ff3 has its CatchHandler @ 00955ec0 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.AnimationState:containsBoneMask",iVar2 + -1,1);
    bVar5 = false;
  }
                    /* catch() { ... } // from try @ 00955f34 with catch @ 00955fd4 */
                    /* catch() { ... } // from try @ 00955f10 with catch @ 00955fd8
                       catch() { ... } // from try @ 00955f80 with catch @ 00955fd8 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

