
void opt_get_reuseaddr(undefined8 param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_30;
  socklen_t sStack_2c;
  long local_28;
  
                    /* try { // try from 009d2f74 to 00ad2fdf has its CatchHandler @ 009d8114 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  sStack_2c = 4;
  iVar2 = getsockopt(*param_2,1,2,&local_30,&sStack_2c);
  if (iVar2 < 0) {
    lua_pushnil(param_1);
    lua_pushstring(param_1,"getsockopt failed");
    uVar3 = 2;
  }
  else {
    lua_pushboolean(param_1,local_30);
    uVar3 = 1;
  }
                    /* try { // try from 009d2fe0 to 00ad31b7 has its CatchHandler @ 009cee70 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

