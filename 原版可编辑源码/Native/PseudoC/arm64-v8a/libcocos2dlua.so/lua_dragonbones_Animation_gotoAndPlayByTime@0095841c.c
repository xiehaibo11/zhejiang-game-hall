
/* lua_dragonbones_Animation_gotoAndPlayByTime(lua_State*) */

undefined4 lua_dragonbones_Animation_gotoAndPlayByTime(lua_State *param_1)

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
  int local_6c;
  double local_68;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (Animation *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 4) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,"db.Animation:gotoAndPlayByTime");
    uVar4 = luaval_to_number(param_1,3,&local_68,"db.Animation:gotoAndPlayByTime");
    uVar5 = luaval_to_int32(param_1,4,&local_6c,"db.Animation:gotoAndPlayByTime");
    if ((uVar3 & uVar4 & uVar5 & 1) != 0) {
                    /* try { // try from 009585c8 to 00a585df has its CatchHandler @ 00958c50 */
      pAVar7 = (AnimationState *)
               dragonBones::Animation::gotoAndPlayByTime
                         (this,(basic_string *)&local_60,(float)local_68,local_6c);
      if (pAVar7 == (AnimationState *)0x0) {
        lua_pushnil(param_1);
      }
      else {
                    /* try { // try from 009585e8 to 00a585ff has its CatchHandler @ 00958c08 */
        pcVar8 = getLuaTypeName<dragonBones::AnimationState>(pAVar7,"db.AnimationState");
        tolua_pushusertype(param_1,pAVar7,pcVar8);
      }
      goto LAB_009586d4;
    }
                    /* try { // try from 00958660 to 00a58677 has its CatchHandler @ 00958bec */
    tolua_error(param_1,&DAT_012d30f7,0);
LAB_00958674:
    uVar9 = 0;
  }
  else {
    if (iVar2 == 3) {
      local_58 = 0;
      local_50 = (void *)0x0;
      local_60 = 0;
      uVar3 = luaval_to_std_string
                        (param_1,2,(basic_string *)&local_60,"db.Animation:gotoAndPlayByTime");
      uVar4 = luaval_to_number(param_1,3,&local_68,"db.Animation:gotoAndPlayByTime");
      if ((uVar3 & uVar4 & 1) == 0) {
        tolua_error(param_1,&DAT_012d30f7,0);
        goto LAB_00958674;
      }
      pAVar7 = (AnimationState *)
               dragonBones::Animation::gotoAndPlayByTime
                         (this,(basic_string *)&local_60,(float)local_68,-1);
      if (pAVar7 == (AnimationState *)0x0) {
                    /* try { // try from 009586c4 to 00a586db has its CatchHandler @ 00958c38 */
        lua_pushnil(param_1);
      }
      else {
        pcVar8 = getLuaTypeName<dragonBones::AnimationState>(pAVar7,"db.AnimationState");
                    /* try { // try from 00958554 to 00a585c7 has its CatchHandler @ 00958554
                       catch() { ... } // from try @ 00958554 with catch @ 00958554
                       catch() { ... } // from try @ 00958910 with catch @ 00958554
                       catch() { ... } // from try @ 009589c0 with catch @ 00958554
                       catch() { ... } // from try @ 00958a18 with catch @ 00958554
                       catch() { ... } // from try @ 00958a40 with catch @ 00958554
                       catch() { ... } // from try @ 00958a68 with catch @ 00958554
                       catch() { ... } // from try @ 00958aa0 with catch @ 00958554
                       catch() { ... } // from try @ 00958ad8 with catch @ 00958554 */
        tolua_pushusertype(param_1,pAVar7,pcVar8);
      }
    }
    else {
      if (iVar2 != 2) {
        luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                   "db.Animation:gotoAndPlayByTime",iVar2 + -1,1);
                    /* try { // try from 00958628 to 00a5863f has its CatchHandler @ 00958c4c */
        uVar9 = 0;
        goto LAB_00958688;
      }
      local_58 = 0;
      local_50 = (void *)0x0;
      local_60 = 0;
      uVar6 = luaval_to_std_string
                        (param_1,2,(basic_string *)&local_60,"db.Animation:gotoAndPlayByTime");
      if ((uVar6 & 1) == 0) {
        tolua_error(param_1,&DAT_012d30f7,0);
                    /* try { // try from 00958644 to 00a5865b has its CatchHandler @ 00958c04 */
        goto LAB_00958674;
      }
      pAVar7 = (AnimationState *)
               dragonBones::Animation::gotoAndPlayByTime(this,(basic_string *)&local_60,0.0,-1);
      if (pAVar7 == (AnimationState *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        pcVar8 = getLuaTypeName<dragonBones::AnimationState>(pAVar7,"db.AnimationState");
        tolua_pushusertype(param_1,pAVar7,pcVar8);
      }
    }
LAB_009586d4:
    uVar9 = 1;
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00958688:
                    /* try { // try from 00958688 to 00a5869b has its CatchHandler @ 00958bb4 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

