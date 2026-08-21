
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_009e5894(lua_State *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  Downloader *this;
  ulong local_98;
  undefined8 local_90;
  void *local_88;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  ulong local_68;
  undefined8 local_60;
  void *local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
                    /* try { // try from 009e589c to 00ae589f has its CatchHandler @ 009e58fc */
                    /* try { // try from 009e58a0 to 00ae5917 has its CatchHandler @ 009e5844 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = lua_gettop();
  if (iVar3 != 5) {
    luaL_argerror(param_1,5,"lua_universe_Downloader_add: expected 5 argument");
  }
  uVar4 = universe::is_class(param_1,1,"un.Downloader");
  if ((uVar4 & 1) == 0) {
    luaL_error(param_1,&DAT_012f3553);
  }
  else {
    this = (Downloader *)universe::get_instance(param_1,1);
                    /* catch() { ... } // from try @ 009e589c with catch @ 009e58fc */
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    local_60 = 0;
    local_58 = (void *)0x0;
    local_70 = (char *)0x0;
    local_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    local_88 = (void *)0x0;
    local_98 = 0;
    uVar4 = universe::get_string(param_1,2,(basic_string *)&local_50,"lua_universe_Downloader_add");
    if (((((uVar4 & 1) != 0) &&
         (uVar4 = universe::get_string
                            (param_1,3,(basic_string *)&local_68,"lua_universe_Downloader_add"),
         (uVar4 & 1) != 0)) &&
        (uVar4 = universe::get_string
                           (param_1,4,(basic_string *)&local_80,"lua_universe_Downloader_add"),
        (uVar4 & 1) != 0)) &&
       (uVar4 = universe::get_string
                          (param_1,5,(basic_string *)&local_98,"lua_universe_Downloader_add"),
       (uVar4 & 1) != 0)) {
      pcVar1 = (char *)((ulong)&local_80 | 1);
      if ((local_80 & 1) != 0) {
        pcVar1 = local_70;
      }
      universe::Downloader::add
                (this,(basic_string *)&local_50,(basic_string *)&local_68,pcVar1,
                 (basic_string *)&local_98);
    }
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

