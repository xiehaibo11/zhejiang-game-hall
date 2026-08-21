
/* lua_dragonbones_AnimationState_fadeOut(lua_State*) */

undefined4 lua_dragonbones_AnimationState_fadeOut(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  AnimationState *this;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  bool local_54 [4];
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (AnimationState *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    uVar3 = luaval_to_number(param_1,2,&local_50,"db.AnimationState:fadeOut");
    uVar4 = luaval_to_boolean(param_1,3,local_54,"db.AnimationState:fadeOut");
    if (((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) {
LAB_009557ec:
      tolua_error(param_1,"invalid arguments in function \'lua_dragonbones_AnimationState_fadeOut\'"
                  ,0);
      goto LAB_00955824;
    }
    dragonBones::AnimationState::fadeOut(this,(float)local_50,local_54[0]);
                    /* try { // try from 009557d8 to 00a55827 has its CatchHandler @ 009557d8
                       catch() { ... } // from try @ 009557d8 with catch @ 009557d8
                       catch() { ... } // from try @ 0095588c with catch @ 009557d8
                       catch() { ... } // from try @ 009558d0 with catch @ 009557d8 */
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "db.AnimationState:fadeOut",iVar2 + -1,1);
LAB_00955824:
      uVar5 = 0;
      goto LAB_00955828;
    }
    uVar3 = luaval_to_number(param_1,2,&local_50,"db.AnimationState:fadeOut");
    if ((uVar3 & 1) == 0) goto LAB_009557ec;
    dragonBones::AnimationState::fadeOut(this,(float)local_50,true);
  }
  uVar5 = 1;
  lua_settop(param_1,1);
LAB_00955828:
                    /* try { // try from 00955828 to 00a5588b has its CatchHandler @ 00955910 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

