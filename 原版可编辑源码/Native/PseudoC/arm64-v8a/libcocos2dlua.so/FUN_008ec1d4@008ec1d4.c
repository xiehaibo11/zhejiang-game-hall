
undefined8 FUN_008ec1d4(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  Transition *this;
  double local_70;
  double dStack_68;
  ulong local_60 [2];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 008ec1f8 to 009ec247 has its CatchHandler @ 008ec1f8
                       catch() { ... } // from try @ 008ec1f8 with catch @ 008ec1f8
                       catch() { ... } // from try @ 008ec27c with catch @ 008ec1f8
                       catch() { ... } // from try @ 008ec2c4 with catch @ 008ec1f8 */
  this = (Transition *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 3) {
    local_60[1] = 0;
    local_50 = (void *)0x0;
    local_60[0] = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)local_60,"fairygui.Transition:updateFromRelations")
    ;
                    /* try { // try from 008ec248 to 009ec25f has its CatchHandler @ 008ec308 */
    uVar4 = luaval_to_number(param_1,3,&dStack_68,"fairygui.Transition:updateFromRelations");
                    /* try { // try from 008ec264 to 009ec27b has its CatchHandler @ 008ec304 */
    uVar5 = luaval_to_number(param_1,4,&local_70,"fairygui.Transition:updateFromRelations");
                    /* try { // try from 008ec27c to 009ec2af has its CatchHandler @ 008ec1f8 */
    if ((uVar3 & uVar4 & uVar5 & 1) == 0) {
                    /* catch() { ... } // from try @ 008ec264 with catch @ 008ec304 */
                    /* catch() { ... } // from try @ 008ec248 with catch @ 008ec308
                       catch() { ... } // from try @ 008ec2b0 with catch @ 008ec308 */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_fairygui_Transition_updateFromRelations\'",0)
      ;
    }
    else {
      fairygui::Transition::updateFromRelations
                (this,(basic_string *)local_60,(float)dStack_68,(float)local_70);
    }
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
  }
  else {
                    /* try { // try from 008ec2b0 to 009ec2c3 has its CatchHandler @ 008ec308 */
                    /* try { // try from 008ec2c4 to 009ec323 has its CatchHandler @ 008ec1f8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.Transition:updateFromRelations",iVar2 + -1,3);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

