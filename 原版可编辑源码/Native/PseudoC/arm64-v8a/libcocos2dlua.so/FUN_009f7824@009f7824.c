
undefined8 FUN_009f7824(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined1 *local_450;
  undefined1 auStack_448 [1024];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar3 = (undefined8 *)lua_touserdata(param_1,1);
  puVar4 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    iVar2 = lua_getmetatable(param_1,1);
    if (iVar2 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      lua_getfield(param_1,0xffffd8f0,"pb.Buffer");
      iVar2 = lua_rawequal(param_1,0xfffffffe,0xffffffff);
                    /* try { // try from 009f789c to 00af78db has its CatchHandler @ 009f789c
                       catch() { ... } // from try @ 009f789c with catch @ 009f789c
                       catch() { ... } // from try @ 009f7924 with catch @ 009f789c
                       catch() { ... } // from try @ 009f79a0 with catch @ 009f789c */
      lua_settop(param_1,0xfffffffd);
      puVar4 = (undefined8 *)0x0;
      if (iVar2 != 0) {
        puVar4 = puVar3;
      }
    }
  }
  iVar2 = 1;
  if (puVar4 != (undefined8 *)0x0) {
    iVar2 = 2;
  }
  local_468 = luaL_checklstring(param_1,iVar2,0);
  if (puVar4 == (undefined8 *)0x0) {
    local_450 = auStack_448;
                    /* try { // try from 009f7924 to 00af798b has its CatchHandler @ 009f789c */
    uStack_458 = 0x400;
    local_460 = 0;
    FUN_009f9f88(param_1,iVar2 + 1,&local_460,&local_468,0);
  }
  else {
                    /* try { // try from 009f78dc to 00af7923 has its CatchHandler @ 009f79a8 */
    FUN_009f9f88(param_1,iVar2 + 1,puVar4,&local_468,0);
    if (&local_460 != puVar4) {
      lua_settop(param_1,1);
      goto LAB_009f796c;
    }
  }
  lua_pushlstring(param_1,local_450,local_460);
  if (local_450 != auStack_448) {
    free(local_450);
  }
  uStack_458 = 0x400;
  local_460 = 0;
  local_450 = auStack_448;
LAB_009f796c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 009f798c to 00af799f has its CatchHandler @ 009f79a8 */
  return 1;
}

