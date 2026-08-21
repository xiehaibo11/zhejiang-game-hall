
/* lua_dragonbones_BaseFactory_replaceSlotDisplay(lua_State*) */

undefined4 lua_dragonbones_BaseFactory_replaceSlotDisplay(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 unaff_x25;
  uint uVar12;
  int local_cc;
  ulong local_c8;
  undefined8 uStack_c0;
  void *local_b8;
  ulong local_b0;
  undefined8 local_a8;
  void *local_a0;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  ulong local_80;
  undefined8 local_78;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar8 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 7) {
    local_78 = 0;
    local_70 = (void *)0x0;
    local_88 = (void *)0x0;
    local_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    local_a0 = (void *)0x0;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_80,"db.BaseFactory:replaceSlotDisplay");
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_98,"db.BaseFactory:replaceSlotDisplay");
    uVar5 = luaval_to_std_string
                      (param_1,4,(basic_string *)&local_b0,"db.BaseFactory:replaceSlotDisplay");
    uVar6 = luaval_to_std_string
                      (param_1,5,(basic_string *)&local_c8,"db.BaseFactory:replaceSlotDisplay");
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 6)) ||
       (uVar9 = luaval_is_usertype(param_1,6,"db.Slot",0), (uVar9 & 1) == 0)) {
      uVar12 = 0;
    }
    else {
      unaff_x25 = tolua_tousertype(param_1,6,0);
      uVar12 = 1;
    }
    uVar7 = luaval_to_int32(param_1,7,&local_cc,"db.BaseFactory:replaceSlotDisplay");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar12 & uVar7) == 0) {
                    /* try { // try from 0095ce20 to 00a5ce23 has its CatchHandler @ 0095ce58 */
                    /* try { // try from 0095ce24 to 00a5ce6b has its CatchHandler @ 0095cdd4 */
      tolua_error(param_1,&DAT_012d3c4c,0);
      goto LAB_0095ce2c;
    }
                    /* try { // try from 0095cdd4 to 00a5ce1f has its CatchHandler @ 0095cdd4
                       catch() { ... } // from try @ 0095cdd4 with catch @ 0095cdd4
                       catch() { ... } // from try @ 0095ce24 with catch @ 0095cdd4 */
    uVar3 = (**(code **)(*plVar8 + 0xb0))
                      (plVar8,&local_80,&local_98,&local_b0,&local_c8,unaff_x25,local_cc);
    tolua_pushboolean(param_1,uVar3 & 1);
LAB_0095ce08:
    uVar11 = 1;
  }
  else {
    if (iVar2 != 6) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "db.BaseFactory:replaceSlotDisplay",iVar2 + -1,5);
      uVar11 = 0;
      goto LAB_0095ce60;
    }
    local_78 = 0;
    local_70 = (void *)0x0;
                    /* try { // try from 0095cb80 to 00a5cbb3 has its CatchHandler @ 0095cc80 */
    local_88 = (void *)0x0;
    local_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    local_a0 = (void *)0x0;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_80,"db.BaseFactory:replaceSlotDisplay");
                    /* try { // try from 0095cbb4 to 00a5cbc7 has its CatchHandler @ 0095cc4c */
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_98,"db.BaseFactory:replaceSlotDisplay");
                    /* try { // try from 0095cbcc to 00a5cbff has its CatchHandler @ 0095cc50 */
    uVar5 = luaval_to_std_string
                      (param_1,4,(basic_string *)&local_b0,"db.BaseFactory:replaceSlotDisplay");
    uVar6 = luaval_to_std_string
                      (param_1,5,(basic_string *)&local_c8,"db.BaseFactory:replaceSlotDisplay");
                    /* try { // try from 0095cc00 to 00a5cc9b has its CatchHandler @ 0095ca98 */
                    /* catch() { ... } // from try @ 0095cbb4 with catch @ 0095cc4c */
                    /* catch() { ... } // from try @ 0095cbcc with catch @ 0095cc50 */
    if (((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 5 < iVar2)) &&
       ((uVar9 = luaval_is_usertype(param_1,6,"db.Slot",0), (uVar9 & 1) != 0 &&
        (uVar10 = tolua_tousertype(param_1,6,0), (uVar3 & uVar4 & uVar5 & uVar6 & 1) != 0)))) {
      uVar3 = (**(code **)(*plVar8 + 0xb0))
                        (plVar8,&local_80,&local_98,&local_b0,&local_c8,uVar10,0xffffffff);
                    /* catch() { ... } // from try @ 0095cb80 with catch @ 0095cc80 */
      tolua_pushboolean(param_1,uVar3 & 1);
      goto LAB_0095ce08;
    }
    tolua_error(param_1,&DAT_012d3c4c,0);
LAB_0095ce2c:
    uVar11 = 0;
  }
  if ((local_c8 & 1) != 0) {
    operator_delete(local_b8);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_80 & 1) != 0) {
                    /* catch() { ... } // from try @ 0095ce20 with catch @ 0095ce58 */
    operator_delete(local_70);
  }
LAB_0095ce60:
                    /* try { // try from 0095ce6c to 00a5cf23 has its CatchHandler @ 0095ce6c
                       catch() { ... } // from try @ 0095ce6c with catch @ 0095ce6c
                       catch() { ... } // from try @ 0095cfa4 with catch @ 0095ce6c */
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}

