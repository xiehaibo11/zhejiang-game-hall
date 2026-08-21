
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_009e6350(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  Downloader2 *this;
  int local_a8;
  int iStack_a4;
  bool local_a0 [4];
  bool local_9c [4];
  bool local_98 [4];
  uint local_94;
  uint local_90;
  uint uStack_8c;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  ulong local_70;
  undefined8 local_68;
  void *local_60;
  ulong local_58;
  undefined8 uStack_50;
  void *local_48;
  ulong local_40;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 0xc) {
    luaL_argerror(param_1,0xc,"lua_universe_Downloader2_add: expected 12 argument");
  }
  local_38 = 0;
  local_30 = (void *)0x0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  local_60 = (void *)0x0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uVar3 = universe::get_string(param_1,1,(basic_string *)&local_40,"lua_universe_Downloader2_add");
  if ((((((uVar3 & 1) != 0) &&
        (uVar3 = universe::get_string
                           (param_1,2,(basic_string *)&local_58,"lua_universe_Downloader2_add"),
        (uVar3 & 1) != 0)) &&
       (uVar3 = universe::get_string
                          (param_1,3,(basic_string *)&local_70,"lua_universe_Downloader2_add"),
       (uVar3 & 1) != 0)) &&
      ((((uVar3 = universe::get_uint(param_1,4,&uStack_8c,"lua_universe_Downloader2_add"),
         (uVar3 & 1) != 0 &&
         (uVar3 = universe::get_uint(param_1,5,&local_90,"lua_universe_Downloader2_add"),
         (uVar3 & 1) != 0)) &&
        ((uVar3 = universe::get_uint(param_1,6,&local_94,"lua_universe_Downloader2_add"),
         (uVar3 & 1) != 0 &&
         ((uVar3 = universe::get_bool(param_1,7,local_98,"lua_universe_Downloader2_add"),
          (uVar3 & 1) != 0 &&
          (uVar3 = universe::get_bool(param_1,8,local_9c,"lua_universe_Downloader2_add"),
          (uVar3 & 1) != 0)))))) &&
       (uVar3 = universe::get_bool(param_1,9,local_a0,"lua_universe_Downloader2_add"),
       (uVar3 & 1) != 0)))) &&
     (((uVar3 = universe::get_int(param_1,10,&iStack_a4,"lua_universe_Downloader2_add"),
       (uVar3 & 1) != 0 &&
       (uVar3 = universe::get_string
                          (param_1,0xb,(basic_string *)&local_88,"lua_universe_Downloader2_add"),
       (uVar3 & 1) != 0)) &&
      (uVar3 = universe::get_int(param_1,0xc,&local_a8,"lua_universe_Downloader2_add"),
      (uVar3 & 1) != 0)))) {
    this = (Downloader2 *)universe::Downloader2::getInstance();
                    /* try { // try from 009e64fc to 00ae6553 has its CatchHandler @ 009e64fc
                       catch() { ... } // from try @ 009e64fc with catch @ 009e64fc
                       catch() { ... } // from try @ 009e6558 with catch @ 009e64fc */
    universe::Downloader2::add
              (this,(basic_string *)&local_40,(basic_string *)&local_58,(basic_string *)&local_70,
               (ulong)uStack_8c,(ulong)local_90,(ulong)local_94,local_98[0],local_9c[0],local_a0[0],
               iStack_a4,(basic_string *)&local_88,local_a8);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
                    /* catch() { ... } // from try @ 009e6554 with catch @ 009e65b4 */
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

