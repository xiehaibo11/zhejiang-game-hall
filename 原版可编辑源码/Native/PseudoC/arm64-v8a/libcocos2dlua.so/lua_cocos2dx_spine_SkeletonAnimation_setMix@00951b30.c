
/* lua_cocos2dx_spine_SkeletonAnimation_setMix(lua_State*) */

bool lua_cocos2dx_spine_SkeletonAnimation_setMix(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  basic_string *pbVar6;
  bool bVar7;
  double local_80;
  ulong local_78;
  undefined8 uStack_70;
  void *local_68;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pbVar6 = (basic_string *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 3) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
                    /* try { // try from 00951b90 to 00a51bdb has its CatchHandler @ 00951b90
                       catch() { ... } // from try @ 00951b90 with catch @ 00951b90
                       catch() { ... } // from try @ 00951be0 with catch @ 00951b90 */
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"sp.SkeletonAnimation:setMix");
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_78,"sp.SkeletonAnimation:setMix");
    uVar5 = luaval_to_number(param_1,4,&local_80,"sp.SkeletonAnimation:setMix");
                    /* try { // try from 00951bdc to 00a51bdf has its CatchHandler @ 00951c3c */
                    /* try { // try from 00951be0 to 00a51c4f has its CatchHandler @ 00951b90 */
    bVar7 = (uVar3 & uVar4 & uVar5 & 1) == 0;
    if (bVar7) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_spine_SkeletonAnimation_setMix\'",0)
      ;
    }
    else {
      spine::SkeletonAnimation::setMix(pbVar6,(basic_string *)&local_60,(float)local_80);
      lua_settop(param_1,1);
    }
    bVar7 = !bVar7;
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  else {
                    /* catch() { ... } // from try @ 00951bdc with catch @ 00951c3c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",0x12d1b75,
               iVar2 + -1,3);
    bVar7 = false;
  }
                    /* try { // try from 00951c50 to 00a51d4f has its CatchHandler @ 00951c50
                       catch() { ... } // from try @ 00951c50 with catch @ 00951c50
                       catch() { ... } // from try @ 00951dd0 with catch @ 00951c50 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

