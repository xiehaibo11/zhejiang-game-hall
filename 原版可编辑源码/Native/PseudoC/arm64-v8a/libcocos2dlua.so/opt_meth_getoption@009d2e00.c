
void opt_meth_getoption(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  char *__s1;
  char *__s2;
  code *pcVar3;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __s1 = (char *)luaL_checklstring(param_1,2,0);
  __s2 = (char *)*param_2;
  while ((__s2 != (char *)0x0 && (iVar2 = strcmp(__s1,__s2), iVar2 != 0))) {
    param_2 = param_2 + 2;
    __s2 = (char *)*param_2;
  }
  pcVar3 = (code *)param_2[1];
  if (pcVar3 == (code *)0x0) {
    FUN_009d2d5c(auStack_78);
                    /* try { // try from 009d2e70 to 00ad2edb has its CatchHandler @ 009d8118 */
    luaL_argerror(param_1,2,auStack_78);
    pcVar3 = (code *)param_2[1];
  }
  (*pcVar3)(param_1,param_3);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

