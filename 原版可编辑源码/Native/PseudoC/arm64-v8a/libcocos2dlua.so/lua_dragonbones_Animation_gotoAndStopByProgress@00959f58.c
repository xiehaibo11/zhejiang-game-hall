
/* lua_dragonbones_Animation_gotoAndStopByProgress(lua_State*) */

undefined4 lua_dragonbones_Animation_gotoAndStopByProgress(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  Animation *this;
  ulong uVar5;
  AnimationState *pAVar6;
  char *pcVar7;
  undefined4 uVar8;
  double local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
                    /* try { // try from 00959f68 to 00a5a003 has its CatchHandler @ 00959c08 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Animation *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"db.Animation:gotoAndStopByProgress");
    uVar4 = luaval_to_number(param_1,3,&local_58,"db.Animation:gotoAndStopByProgress");
    if ((uVar3 & uVar4 & 1) != 0) {
      pAVar6 = (AnimationState *)
               dragonBones::Animation::gotoAndStopByProgress
                         (this,(basic_string *)&local_50,(float)local_58);
      if (pAVar6 == (AnimationState *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        pcVar7 = getLuaTypeName<dragonBones::AnimationState>(pAVar6,"db.AnimationState");
        tolua_pushusertype(param_1,pAVar6,pcVar7);
      }
      goto LAB_0095a12c;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_dragonbones_Animation_gotoAndStopByProgress\'",
                0);
LAB_0095a0dc:
    uVar8 = 0;
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",0x12d3555,
                 iVar2 + -1,1);
      uVar8 = 0;
      goto LAB_0095a0f0;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* catch() { ... } // from try @ 00959f1c with catch @ 00959fb4 */
                    /* catch() { ... } // from try @ 00959f34 with catch @ 00959fb8 */
    uVar5 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"db.Animation:gotoAndStopByProgress");
    if ((uVar5 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_dragonbones_Animation_gotoAndStopByProgress\'"
                  ,0);
      goto LAB_0095a0dc;
    }
    pAVar6 = (AnimationState *)
             dragonBones::Animation::gotoAndStopByProgress(this,(basic_string *)&local_50,0.0);
    if (pAVar6 == (AnimationState *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* catch() { ... } // from try @ 00959ee8 with catch @ 00959fe8 */
      pcVar7 = getLuaTypeName<dragonBones::AnimationState>(pAVar6,"db.AnimationState");
      tolua_pushusertype(param_1,pAVar6,pcVar7);
    }
LAB_0095a12c:
    uVar8 = 1;
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_0095a0f0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0095a108 to 00a5a1a3 has its CatchHandler @ 0095a108
                       catch() { ... } // from try @ 0095a108 with catch @ 0095a108
                       catch() { ... } // from try @ 0095a224 with catch @ 0095a108 */
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

