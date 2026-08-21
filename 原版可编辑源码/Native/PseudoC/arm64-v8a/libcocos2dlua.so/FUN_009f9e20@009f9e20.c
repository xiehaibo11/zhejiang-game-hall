
void FUN_009f9e20(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_type();
  if (iVar2 == 7) {
    plVar4 = (long *)lua_touserdata(param_1,param_2);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f9ef8 with catch @ 009f9e88
                       catch(type#1 @ 00000000) { ... } // from try @ 009f9f28 with catch @ 009f9e88
                       catch(type#1 @ 00000000) { ... } // from try @ 009f9f58 with catch @ 009f9e88
                       catch(type#1 @ 00000000) { ... } // from try @ 009f9f80 with catch @ 009f9e88
                       catch(type#1 @ 00000000) { ... } // from try @ 009f9fac with catch @ 009f9e88
                        */
    if ((plVar4 != (long *)0x0) && (iVar2 = lua_getmetatable(param_1,param_2), iVar2 != 0)) {
      lua_getfield(param_1,0xffffd8f0,"pb.Buffer");
      iVar2 = lua_rawequal(param_1,0xfffffffe,0xffffffff);
      lua_settop(param_1,0xfffffffd);
      if (iVar2 != 0) {
        lVar3 = plVar4[2];
        local_50 = lVar3 + *plVar4;
        goto LAB_009f9f54;
      }
    }
                    /* try { // try from 009f9ef0 to 00af9ef7 has its CatchHandler @ 009f9fec */
    plVar4 = (long *)lua_touserdata(param_1,param_2);
    if (plVar4 == (long *)0x0) {
      local_50 = 0;
      lVar3 = 0;
                    /* try { // try from 009f9f80 to 00af9f9f has its CatchHandler @ 009f9e88 */
      goto LAB_009f9f54;
    }
                    /* try { // try from 009f9ef8 to 00af9f1b has its CatchHandler @ 009f9e88 */
    iVar2 = lua_getmetatable(param_1,param_2);
    if (iVar2 != 0) {
                    /* try { // try from 009f9f1c to 00af9f27 has its CatchHandler @ 009f9fec */
      lua_getfield(param_1,0xffffd8f0,"pb.Slice");
                    /* try { // try from 009f9f28 to 00af9f4f has its CatchHandler @ 009f9e88 */
      iVar2 = lua_rawequal(param_1,0xfffffffe,0xffffffff);
      lua_settop(param_1,0xfffffffd);
      if (iVar2 != 0) {
        lVar3 = *plVar4;
        local_50 = plVar4[1];
        goto LAB_009f9f54;
      }
    }
  }
  else if (iVar2 == 4) {
    lVar3 = lua_tolstring(param_1,param_2,&local_50);
    local_50 = lVar3 + local_50;
    goto LAB_009f9f54;
  }
  local_50 = 0;
                    /* try { // try from 009f9f50 to 00af9f57 has its CatchHandler @ 009f9fe8 */
  lVar3 = 0;
LAB_009f9f54:
                    /* try { // try from 009f9f58 to 00af9f77 has its CatchHandler @ 009f9e88 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 009f9f78 to 00af9f7f has its CatchHandler @ 009f9fe8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3,local_50);
}

