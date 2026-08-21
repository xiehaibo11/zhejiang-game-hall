
/* lua_dragonbones_BaseFactory_replaceSlotDisplayList(lua_State*) */

undefined4 lua_dragonbones_BaseFactory_replaceSlotDisplayList(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  ulong local_90;
  undefined8 local_88;
  void *local_80;
  ulong local_78;
  undefined8 uStack_70;
  void *local_68;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 0095b234 with catch @ 0095b2cc */
                    /* catch() { ... } // from try @ 0095b24c with catch @ 0095b2d0 */
  plVar6 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 4) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    local_80 = (void *)0x0;
                    /* catch() { ... } // from try @ 0095b200 with catch @ 0095b300 */
    local_90 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,"db.BaseFactory:replaceSlotDisplayList");
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_78,"db.BaseFactory:replaceSlotDisplayList");
    uVar5 = luaval_to_std_string
                      (param_1,4,(basic_string *)&local_90,"db.BaseFactory:replaceSlotDisplayList");
    if ((((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 5)) ||
        (uVar7 = luaval_is_usertype(param_1,5,"db.Slot",0), (uVar7 & 1) == 0)) ||
       (uVar8 = tolua_tousertype(param_1,5,0), (uVar3 & uVar4 & uVar5 & 1) == 0)) {
      tolua_error(param_1,&DAT_012d3826,0);
      uVar9 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar6 + 0xb8))(plVar6,&local_60,&local_78,&local_90,uVar8);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar9 = 1;
    }
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.BaseFactory:replaceSlotDisplayList",iVar2 + -1,4);
    uVar9 = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 0095b454 to 00a5b49f has its CatchHandler @ 0095b454
                       catch() { ... } // from try @ 0095b454 with catch @ 0095b454
                       catch() { ... } // from try @ 0095b4a4 with catch @ 0095b454 */
  return uVar9;
}

