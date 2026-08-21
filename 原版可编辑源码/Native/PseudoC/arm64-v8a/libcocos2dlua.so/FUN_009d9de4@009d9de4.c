
bool FUN_009d9de4(lua_State *param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong local_40;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
                    /* try { // try from 009d9df4 to 00ad9e43 has its CatchHandler @ 009d9df4
                       catch() { ... } // from try @ 009d9df4 with catch @ 009d9df4
                       catch() { ... } // from try @ 009d9e6c with catch @ 009d9df4
                       catch() { ... } // from try @ 009d9ea4 with catch @ 009d9df4 */
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  iVar3 = lua_gettop();
  if (iVar3 != 1) {
    luaL_argerror(param_1,1,"lua_universe_FileSystem_createDirectory: expected 1 argument");
  }
  local_38 = 0;
  local_30 = (void *)0x0;
  local_40 = 0;
  uVar5 = universe::get_string
                    (param_1,1,(basic_string *)&local_40,"lua_universe_FileSystem_createDirectory");
                    /* try { // try from 009d9e44 to 00ad9e6b has its CatchHandler @ 009d9ed8 */
  bVar1 = (uVar5 & 1) != 0;
  if (bVar1) {
    uVar4 = (**(code **)(*DAT_01782208 + 0x30))(DAT_01782208,&local_40);
    lua_pushboolean(param_1,uVar4 & 1);
                    /* try { // try from 009d9e6c to 00ad9e8f has its CatchHandler @ 009d9df4 */
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
                    /* try { // try from 009d9e90 to 00ad9ea3 has its CatchHandler @ 009d9ed8 */
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 009d9ea4 to 00ad9eeb has its CatchHandler @ 009d9df4 */
  return bVar1;
}

