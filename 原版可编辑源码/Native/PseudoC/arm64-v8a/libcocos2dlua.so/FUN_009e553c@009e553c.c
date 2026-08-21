
undefined8 FUN_009e553c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  Literally *pLVar4;
  uint local_74;
  undefined **local_70;
  lua_State *plStack_68;
  ulong local_60;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 2) {
                    /* try { // try from 009e556c to 00ae5593 has its CatchHandler @ 009e5608 */
    luaL_argerror(param_1,2,"lua_universe_Decompressor_setListener: expected 2 argument");
  }
  uVar3 = universe::is_class(param_1,1,"un.Decompressor");
                    /* try { // try from 009e5594 to 00ae55eb has its CatchHandler @ 009e551c */
  if ((uVar3 & 1) == 0) {
    luaL_error(param_1,"lua_universe_Decompressor_setListener: invalid \'cobj\'");
  }
  else {
    pLVar4 = (Literally *)universe::get_instance(param_1,1);
    uVar3 = universe::create_function
                      (param_1,2,(int *)&local_74,pLVar4,"lua_universe_Decompressor_setListener");
    if ((uVar3 & 1) != 0) {
      local_60 = (ulong)local_74;
      local_70 = &PTR_FUN_016a05a8;
      plStack_68 = param_1;
      local_50 = &local_70;
                    /* try { // try from 009e55ec to 00ae55ff has its CatchHandler @ 009e5608 */
      universe::Decompressor::setListener((Decompressor *)pLVar4,&local_70);
      if (&local_70 == local_50) {
        (*(code *)(*local_50)[4])();
      }
      else if (local_50 != (undefined ***)0x0) {
                    /* try { // try from 009e5600 to 00ae5623 has its CatchHandler @ 009e551c */
                    /* catch() { ... } // from try @ 009e556c with catch @ 009e5608
                       catch() { ... } // from try @ 009e55ec with catch @ 009e5608 */
        (*(code *)(*local_50)[5])();
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

