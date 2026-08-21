
undefined8 FUN_009d9430(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  ulong local_90 [2];
  void *local_80;
  ulong local_78 [2];
  void *local_68;
  long alStack_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 2) {
                    /* try { // try from 009d9468 to 00ad9473 has its CatchHandler @ 009d94cc */
    luaL_argerror(param_1,2,"lua_universe_FileSystem_writeStringToFile: expected 2 argument");
  }
  local_78[1] = 0;
  local_68 = (void *)0x0;
                    /* try { // try from 009d9474 to 00ad94df has its CatchHandler @ 009d93fc */
  local_80 = (void *)0x0;
  local_78[0] = 0;
  local_90[0] = 0;
  local_90[1] = 0;
  uVar3 = universe::get_string
                    (param_1,1,(basic_string *)local_78,"lua_universe_FileSystem_writeStringToFile")
  ;
  if (((uVar3 & 1) != 0) &&
     (uVar3 = universe::get_string
                        (param_1,2,(basic_string *)local_90,
                         "lua_universe_FileSystem_writeStringToFile"), (uVar3 & 1) != 0)) {
    local_40 = (long *)0x0;
                    /* catch() { ... } // from try @ 009d9468 with catch @ 009d94cc */
    universe::TanGaoXiong::writeStringToFile
              (DAT_01782208,(basic_string *)local_78,(basic_string *)local_90,(function *)alStack_60
              );
    if (alStack_60 == local_40) {
      pcVar4 = *(code **)(*local_40 + 0x20);
    }
    else {
                    /* try { // try from 009d94e0 to 00ad952f has its CatchHandler @ 009d94e0
                       catch() { ... } // from try @ 009d94e0 with catch @ 009d94e0
                       catch() { ... } // from try @ 009d956c with catch @ 009d94e0 */
      if (local_40 == (long *)0x0) goto LAB_009d94fc;
      pcVar4 = *(code **)(*local_40 + 0x28);
    }
    (*pcVar4)();
  }
LAB_009d94fc:
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 009d9530 to 00ad956b has its CatchHandler @ 009d95c0 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

