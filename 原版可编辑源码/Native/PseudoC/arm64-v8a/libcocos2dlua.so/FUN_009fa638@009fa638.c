
void FUN_009fa638(undefined8 param_1,int param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined1 **ppuStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  local_a0 = param_5;
  uStack_98 = param_6;
  local_90 = param_7;
  uStack_88 = param_8;
  if (param_2 == 0) {
    puStack_70 = &local_a0;
                    /* try { // try from 009fa684 to 00afa6a7 has its CatchHandler @ 009fa704 */
    ppuStack_78 = &local_80;
                    /* try { // try from 009fa6a8 to 00afa71f has its CatchHandler @ 009fa634 */
    uStack_68 = 0xffffff80ffffffe0;
    local_80 = (undefined1 *)register0x00000008;
    lua_pushvfstring(param_1,param_4,&local_80);
    uVar2 = lua_tolstring(param_1,0xffffffff,0);
    luaL_argerror(param_1,param_3,uVar2);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

