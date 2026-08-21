
/* lua_cocos2dx_studio_Skin_create(lua_State*) */

void lua_cocos2dx_studio_Skin_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 009397c0 to 00a397d7 has its CatchHandler @ 00939cbc */
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 0) {
    pvVar4 = (void *)cocostudio::Skin::create();
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 00939848 to 00a3986f has its CatchHandler @ 00939c44 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,"ccs.Skin"
                );
    }
LAB_009398a8:
    uVar5 = 1;
  }
  else {
    if (iVar2 == 2) {
      local_50[1] = 0;
      local_40 = (void *)0x0;
                    /* try { // try from 009397e4 to 00a397fb has its CatchHandler @ 00939c78 */
      local_50[0] = 0;
      uVar3 = luaval_to_std_string(param_1,2,(basic_string *)local_50,"ccs.Skin:create");
                    /* try { // try from 00939800 to 00a39817 has its CatchHandler @ 00939c60 */
      if ((uVar3 & 1) != 0) {
        pvVar4 = (void *)cocostudio::Skin::create((basic_string *)local_50);
        if (pvVar4 == (void *)0x0) {
                    /* try { // try from 009398d4 to 00a398eb has its CatchHandler @ 00939cec */
          lua_pushnil(param_1);
        }
        else {
                    /* try { // try from 0093981c to 00a3983b has its CatchHandler @ 00939c5c */
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                     "ccs.Skin");
        }
        if ((local_50[0] & 1) != 0) {
          operator_delete(local_40);
        }
        goto LAB_009398a8;
      }
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
    }
                    /* try { // try from 00939888 to 00a3988f has its CatchHandler @ 00939c94 */
                    /* try { // try from 00939890 to 00a398d3 has its CatchHandler @ 00939278 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",&DAT_012ccb06,
               iVar2 + -1,0);
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

