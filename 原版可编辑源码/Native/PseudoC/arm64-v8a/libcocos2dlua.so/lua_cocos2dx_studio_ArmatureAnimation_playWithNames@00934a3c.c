
/* lua_cocos2dx_studio_ArmatureAnimation_playWithNames(lua_State*) */

bool lua_cocos2dx_studio_ArmatureAnimation_playWithNames(lua_State *param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  byte *pbVar12;
  bool bVar13;
  bool local_68 [4];
  int local_64;
  byte *local_60;
  byte *local_58;
  undefined8 uStack_50;
  long local_48;
  
                    /* catch() { ... } // from try @ 00934a14 with catch @ 00934a4c */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00934a60 to 00a34c1f has its CatchHandler @ 00934a60
                       catch() { ... } // from try @ 00934a60 with catch @ 00934a60
                       catch() { ... } // from try @ 00934ca0 with catch @ 00934a60 */
  plVar10 = (long *)tolua_tousertype(param_1,1,0);
  iVar6 = lua_gettop(param_1);
  if (iVar6 == 4) {
    local_58 = (byte *)0x0;
    uStack_50 = 0;
    local_60 = (byte *)0x0;
    uVar7 = luaval_to_std_vector_string
                      (param_1,2,(vector *)&local_60,"ccs.ArmatureAnimation:playWithNames");
    uVar8 = luaval_to_int32(param_1,3,&local_64,"ccs.ArmatureAnimation:playWithNames");
    uVar9 = luaval_to_boolean(param_1,4,local_68,"ccs.ArmatureAnimation:playWithNames");
    bVar13 = (uVar7 & uVar8 & uVar9 & 1) == 0;
    if (bVar13) {
                    /* catch() { ... } // from try @ 00934c54 with catch @ 00934cec */
                    /* catch() { ... } // from try @ 00934c6c with catch @ 00934cf0 */
      tolua_error(param_1,&DAT_012cbc13,0);
      pbVar12 = local_60;
    }
    else {
      (**(code **)(*plVar10 + 0xe8))(plVar10,&local_60,local_64,local_68[0]);
      lua_settop(param_1,1);
      pbVar12 = local_60;
    }
    bVar13 = !bVar13;
    local_60 = pbVar12;
    if (pbVar12 == (byte *)0x0) goto LAB_00934d4c;
    if (local_58 != pbVar12) {
      bVar1 = local_58[-0x18];
      pbVar5 = local_58 + -0x18;
      pbVar4 = local_58;
      while( true ) {
        pbVar3 = pbVar5;
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -8));
        }
                    /* catch() { ... } // from try @ 00934c20 with catch @ 00934d20 */
        if (pbVar12 == pbVar3) break;
        bVar1 = pbVar3[-0x18];
        pbVar5 = pbVar3 + -0x18;
        pbVar4 = pbVar3;
      }
    }
  }
  else if (iVar6 == 3) {
    local_58 = (byte *)0x0;
    uStack_50 = 0;
    local_60 = (byte *)0x0;
    uVar7 = luaval_to_std_vector_string
                      (param_1,2,(vector *)&local_60,"ccs.ArmatureAnimation:playWithNames");
    uVar8 = luaval_to_int32(param_1,3,&local_64,"ccs.ArmatureAnimation:playWithNames");
    bVar13 = (uVar7 & uVar8 & 1) == 0;
    if (bVar13) {
      tolua_error(param_1,&DAT_012cbc13,0);
      pbVar12 = local_60;
                    /* try { // try from 00934ca0 to 00a34d3b has its CatchHandler @ 00934a60 */
    }
    else {
      (**(code **)(*plVar10 + 0xe8))(plVar10,&local_60,local_64,1);
      lua_settop(param_1,1);
      pbVar12 = local_60;
    }
    bVar13 = !bVar13;
    local_60 = pbVar12;
    if (pbVar12 == (byte *)0x0) goto LAB_00934d4c;
    if (local_58 != pbVar12) {
      bVar1 = local_58[-0x18];
      pbVar5 = local_58 + -0x18;
      pbVar4 = local_58;
      while( true ) {
        pbVar3 = pbVar5;
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -8));
        }
        if (pbVar12 == pbVar3) break;
        bVar1 = pbVar3[-0x18];
        pbVar5 = pbVar3 + -0x18;
        pbVar4 = pbVar3;
      }
    }
  }
  else {
    if (iVar6 != 2) {
                    /* try { // try from 00934c20 to 00a34c53 has its CatchHandler @ 00934d20 */
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "ccs.ArmatureAnimation:playWithNames",iVar6 + -1,1);
      bVar13 = false;
      goto LAB_00934d4c;
    }
    local_58 = (byte *)0x0;
    uStack_50 = 0;
    local_60 = (byte *)0x0;
    uVar11 = luaval_to_std_vector_string
                       (param_1,2,(vector *)&local_60,"ccs.ArmatureAnimation:playWithNames");
    bVar13 = (uVar11 & 1) == 0;
    if (bVar13) {
      tolua_error(param_1,&DAT_012cbc13,0);
      pbVar12 = local_60;
    }
    else {
      (**(code **)(*plVar10 + 0xe8))(plVar10,&local_60,0xffffffff,1);
      lua_settop(param_1,1);
      pbVar12 = local_60;
    }
    bVar13 = !bVar13;
    local_60 = pbVar12;
    if (pbVar12 == (byte *)0x0) goto LAB_00934d4c;
                    /* try { // try from 00934c54 to 00a34c67 has its CatchHandler @ 00934cec */
    if (local_58 != pbVar12) {
      bVar1 = local_58[-0x18];
      pbVar5 = local_58 + -0x18;
      pbVar4 = local_58;
      while( true ) {
        pbVar3 = pbVar5;
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -8));
        }
                    /* try { // try from 00934c6c to 00a34c9f has its CatchHandler @ 00934cf0 */
        if (pbVar12 == pbVar3) break;
        bVar1 = pbVar3[-0x18];
        pbVar5 = pbVar3 + -0x18;
        pbVar4 = pbVar3;
      }
    }
  }
  local_58 = pbVar12;
  operator_delete(local_60);
LAB_00934d4c:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar13;
}

