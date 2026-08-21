
void opt_get_ip6_unicast_hops(undefined8 param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = 0;
  local_30[1] = 4;
                    /* try { // try from 009d35f4 to 00ad3607 has its CatchHandler @ 009d8018 */
  iVar2 = getsockopt(*param_2,0x29,0x10,local_30,(socklen_t *)(local_30 + 1));
                    /* try { // try from 009d360c to 00ad3677 has its CatchHandler @ 009d8104 */
  if (iVar2 < 0) {
    lua_pushnil(param_1);
    lua_pushstring(param_1,"getsockopt failed");
    uVar3 = 2;
  }
  else {
    lua_pushnumber((double)(long)local_30[0],param_1);
    uVar3 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

