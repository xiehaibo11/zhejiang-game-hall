
/* lua_dragonbones_Animation_gotoAndPlayByFrame(lua_State*) */

undefined4 lua_dragonbones_Animation_gotoAndPlayByFrame(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  Animation *this;
  ulong uVar6;
  AnimationState *pAVar7;
  char *pcVar8;
  undefined4 uVar9;
  int local_68;
  uint local_64;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (Animation *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0095a1a4 to 00a5a1d7 has its CatchHandler @ 0095a2a4 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 4) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,"db.Animation:gotoAndPlayByFrame");
    uVar4 = luaval_to_uint32(param_1,3,&local_64,"db.Animation:gotoAndPlayByFrame");
    uVar5 = luaval_to_int32(param_1,4,&local_68,"db.Animation:gotoAndPlayByFrame");
    if ((uVar3 & uVar4 & uVar5 & 1) != 0) {
      pAVar7 = (AnimationState *)
               dragonBones::Animation::gotoAndPlayByFrame
                         (this,(basic_string *)&local_60,local_64,local_68);
      if (pAVar7 == (AnimationState *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        pcVar8 = getLuaTypeName<dragonBones::AnimationState>(pAVar7,"db.AnimationState");
        tolua_pushusertype(param_1,pAVar7,pcVar8);
      }
      goto LAB_0095a414;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_dragonbones_Animation_gotoAndPlayByFrame\'",0);
LAB_0095a3b4:
    uVar9 = 0;
  }
  else {
    if (iVar2 == 3) {
                    /* try { // try from 0095a224 to 00a5a2bf has its CatchHandler @ 0095a108 */
      local_58 = 0;
      local_50 = (void *)0x0;
      local_60 = 0;
      uVar3 = luaval_to_std_string
                        (param_1,2,(basic_string *)&local_60,"db.Animation:gotoAndPlayByFrame");
      uVar4 = luaval_to_uint32(param_1,3,&local_64,"db.Animation:gotoAndPlayByFrame");
      if ((uVar3 & uVar4 & 1) == 0) {
        tolua_error(param_1,
                    "invalid arguments in function \'lua_dragonbones_Animation_gotoAndPlayByFrame\'"
                    ,0);
        goto LAB_0095a3b4;
      }
                    /* catch() { ... } // from try @ 0095a1d8 with catch @ 0095a270 */
                    /* catch() { ... } // from try @ 0095a1f0 with catch @ 0095a274 */
      pAVar7 = (AnimationState *)
               dragonBones::Animation::gotoAndPlayByFrame
                         (this,(basic_string *)&local_60,local_64,-1);
      if (pAVar7 == (AnimationState *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        pcVar8 = getLuaTypeName<dragonBones::AnimationState>(pAVar7,"db.AnimationState");
        tolua_pushusertype(param_1,pAVar7,pcVar8);
                    /* catch() { ... } // from try @ 0095a1a4 with catch @ 0095a2a4 */
      }
    }
    else {
      if (iVar2 != 2) {
        luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                   "db.Animation:gotoAndPlayByFrame",iVar2 + -1,1);
        uVar9 = 0;
        goto LAB_0095a3c8;
      }
      local_58 = 0;
      local_50 = (void *)0x0;
      local_60 = 0;
                    /* try { // try from 0095a1d8 to 00a5a1eb has its CatchHandler @ 0095a270 */
      uVar6 = luaval_to_std_string
                        (param_1,2,(basic_string *)&local_60,"db.Animation:gotoAndPlayByFrame");
      if ((uVar6 & 1) == 0) {
        tolua_error(param_1,
                    "invalid arguments in function \'lua_dragonbones_Animation_gotoAndPlayByFrame\'"
                    ,0);
        goto LAB_0095a3b4;
      }
                    /* try { // try from 0095a1f0 to 00a5a223 has its CatchHandler @ 0095a274 */
      pAVar7 = (AnimationState *)
               dragonBones::Animation::gotoAndPlayByFrame(this,(basic_string *)&local_60,0,-1);
      if (pAVar7 == (AnimationState *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        pcVar8 = getLuaTypeName<dragonBones::AnimationState>(pAVar7,"db.AnimationState");
        tolua_pushusertype(param_1,pAVar7,pcVar8);
      }
    }
LAB_0095a414:
    uVar9 = 1;
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_0095a3c8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

