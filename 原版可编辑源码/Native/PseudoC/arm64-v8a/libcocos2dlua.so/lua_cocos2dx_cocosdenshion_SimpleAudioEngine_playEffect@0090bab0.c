
/* lua_cocos2dx_cocosdenshion_SimpleAudioEngine_playEffect(lua_State*) */

undefined4 lua_cocos2dx_cocosdenshion_SimpleAudioEngine_playEffect(lua_State *param_1)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  undefined4 uVar11;
  double local_90;
  bool local_84 [4];
  double local_80;
  double local_78;
  ulong local_70 [2];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
                    /* try { // try from 0090bad0 to 00a0bb6b has its CatchHandler @ 0090b980 */
  local_58 = *(long *)(lVar2 + 0x28);
  plVar9 = (long *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  switch(iVar3) {
  case 2:
    local_70[1] = 0;
    local_60 = (void *)0x0;
                    /* catch() { ... } // from try @ 0090ba84 with catch @ 0090bb1c */
    local_70[0] = 0;
                    /* catch() { ... } // from try @ 0090ba9c with catch @ 0090bb20 */
    uVar10 = luaval_to_std_string
                       (param_1,2,(basic_string *)local_70,"cc.SimpleAudioEngine:playEffect");
    if ((uVar10 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_playEffect\'"
                  ,0);
      break;
    }
                    /* catch() { ... } // from try @ 0090ba50 with catch @ 0090bb50 */
    pvVar1 = (void *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      pvVar1 = local_60;
    }
                    /* try { // try from 0090bb6c to 00a0bbc3 has its CatchHandler @ 0090bb6c
                       catch() { ... } // from try @ 0090bb6c with catch @ 0090bb6c
                       catch() { ... } // from try @ 0090bcb4 with catch @ 0090bb6c
                       catch() { ... } // from try @ 0090bd24 with catch @ 0090bb6c */
    uVar4 = (**(code **)(*plVar9 + 0x60))(0x3f800000,0,0x3f800000,plVar9,pvVar1,0);
    tolua_pushnumber((double)uVar4,param_1);
LAB_0090be90:
    uVar11 = 1;
    if ((local_70[0] & 1) == 0) goto LAB_0090bf50;
    goto LAB_0090bf48;
  case 3:
    local_70[1] = 0;
    local_60 = (void *)0x0;
    local_70[0] = 0;
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)local_70,"cc.SimpleAudioEngine:playEffect");
    pvVar1 = (void *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      pvVar1 = local_60;
    }
                    /* try { // try from 0090be44 to 00a0be5b has its CatchHandler @ 0090c020 */
    uVar5 = luaval_to_boolean(param_1,3,(bool *)&local_78,"cc.SimpleAudioEngine:playEffect");
    if ((uVar4 & uVar5 & 1) != 0) {
                    /* try { // try from 0090be78 to 00a0be8f has its CatchHandler @ 0090bffc */
      uVar4 = (**(code **)(*plVar9 + 0x60))(0x3f800000,0,0x3f800000,plVar9,pvVar1,local_78._0_1_);
      tolua_pushnumber((double)uVar4,param_1);
      goto LAB_0090be90;
    }
                    /* try { // try from 0090bee4 to 00a0befb has its CatchHandler @ 0090c000 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_playEffect\'"
                ,0);
    break;
  case 4:
    local_70[1] = 0;
    local_60 = (void *)0x0;
    local_70[0] = 0;
                    /* try { // try from 0090bc9c to 00a0bcb3 has its CatchHandler @ 0090bd78 */
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)local_70,"cc.SimpleAudioEngine:playEffect");
    pvVar1 = (void *)((ulong)local_70 | 1);
                    /* try { // try from 0090bcb4 to 00a0bceb has its CatchHandler @ 0090bb6c */
    if ((local_70[0] & 1) != 0) {
      pvVar1 = local_60;
    }
    uVar5 = luaval_to_boolean(param_1,3,(bool *)&local_80,"cc.SimpleAudioEngine:playEffect");
    uVar6 = luaval_to_number(param_1,4,&local_78,"cc.SimpleAudioEngine:playEffect");
                    /* try { // try from 0090bcec to 00a0bcff has its CatchHandler @ 0090bda4 */
    if ((uVar4 & uVar5 & uVar6 & 1) != 0) {
                    /* try { // try from 0090bd10 to 00a0bd23 has its CatchHandler @ 0090bd84 */
      uVar4 = (**(code **)(*plVar9 + 0x60))
                        ((float)(double)CONCAT71(local_78._1_7_,local_78._0_1_),0,0x3f800000,plVar9,
                         pvVar1,local_80._0_1_);
                    /* try { // try from 0090bd24 to 00a0bdbf has its CatchHandler @ 0090bb6c */
      tolua_pushnumber((double)uVar4,param_1);
      goto LAB_0090be90;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_playEffect\'"
                ,0);
    break;
  case 5:
    local_70[1] = 0;
    local_60 = (void *)0x0;
    local_70[0] = 0;
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)local_70,"cc.SimpleAudioEngine:playEffect");
    pvVar1 = (void *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      pvVar1 = local_60;
    }
                    /* catch() { ... } // from try @ 0090bc9c with catch @ 0090bd78 */
                    /* catch() { ... } // from try @ 0090bc28 with catch @ 0090bd7c */
                    /* catch() { ... } // from try @ 0090bbf8 with catch @ 0090bd80 */
    uVar5 = luaval_to_boolean(param_1,3,(bool *)&local_90,"cc.SimpleAudioEngine:playEffect");
                    /* catch() { ... } // from try @ 0090bc64 with catch @ 0090bd84
                       catch() { ... } // from try @ 0090bd10 with catch @ 0090bd84 */
    uVar6 = luaval_to_number(param_1,4,&local_78,"cc.SimpleAudioEngine:playEffect");
                    /* catch() { ... } // from try @ 0090bbc4 with catch @ 0090bda4
                       catch() { ... } // from try @ 0090bcec with catch @ 0090bda4 */
    uVar7 = luaval_to_number(param_1,5,&local_80,"cc.SimpleAudioEngine:playEffect");
                    /* try { // try from 0090bdc0 to 00a0be43 has its CatchHandler @ 0090bdc0
                       catch() { ... } // from try @ 0090bdc0 with catch @ 0090bdc0
                       catch() { ... } // from try @ 0090bf34 with catch @ 0090bdc0
                       catch() { ... } // from try @ 0090bfa0 with catch @ 0090bdc0 */
    if ((uVar4 & uVar5 & uVar6 & uVar7 & 1) != 0) {
      uVar4 = (**(code **)(*plVar9 + 0x60))
                        ((float)(double)CONCAT71(local_78._1_7_,local_78._0_1_),
                         (float)(double)CONCAT71(local_80._1_7_,local_80._0_1_),0x3f800000,plVar9,
                         pvVar1,local_90._0_1_);
      tolua_pushnumber((double)uVar4,param_1);
      goto LAB_0090be90;
    }
                    /* try { // try from 0090bf1c to 00a0bf33 has its CatchHandler @ 0090bff4 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_playEffect\'"
                ,0);
    break;
  case 6:
    local_70[1] = 0;
    local_60 = (void *)0x0;
    local_70[0] = 0;
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)local_70,"cc.SimpleAudioEngine:playEffect");
    pvVar1 = (void *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      pvVar1 = local_60;
    }
                    /* try { // try from 0090bbc4 to 00a0bbdb has its CatchHandler @ 0090bda4 */
    uVar5 = luaval_to_boolean(param_1,3,local_84,"cc.SimpleAudioEngine:playEffect");
    uVar6 = luaval_to_number(param_1,4,&local_78,"cc.SimpleAudioEngine:playEffect");
                    /* try { // try from 0090bbf8 to 00a0bc0f has its CatchHandler @ 0090bd80 */
    uVar7 = luaval_to_number(param_1,5,&local_80,"cc.SimpleAudioEngine:playEffect");
                    /* try { // try from 0090bc28 to 00a0bc43 has its CatchHandler @ 0090bd7c */
    uVar8 = luaval_to_number(param_1,6,&local_90,"cc.SimpleAudioEngine:playEffect");
    if ((uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & 1) != 0) {
                    /* try { // try from 0090bc64 to 00a0bc7b has its CatchHandler @ 0090bd84 */
      uVar4 = (**(code **)(*plVar9 + 0x60))
                        ((float)(double)CONCAT71(local_78._1_7_,local_78._0_1_),
                         (float)(double)CONCAT71(local_80._1_7_,local_80._0_1_),
                         (float)(double)CONCAT71(local_90._1_7_,local_90._0_1_),plVar9,pvVar1,
                         local_84[0]);
      tolua_pushnumber((double)uVar4,param_1);
      goto LAB_0090be90;
    }
                    /* try { // try from 0090bf34 to 00a0bf67 has its CatchHandler @ 0090bdc0 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_playEffect\'"
                ,0);
    break;
  default:
                    /* try { // try from 0090bea8 to 00a0bec3 has its CatchHandler @ 0090bff8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.SimpleAudioEngine:playEffect",iVar3 + -1,1);
    uVar11 = 0;
    goto LAB_0090bf50;
  }
  uVar11 = 0;
  if ((local_70[0] & 1) != 0) {
LAB_0090bf48:
    operator_delete(local_60);
  }
LAB_0090bf50:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 0090bf68 to 00a0bf7b has its CatchHandler @ 0090c020 */
  return uVar11;
}

