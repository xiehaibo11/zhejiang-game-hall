
uint FUN_01044514(char *param_1)

{
  char cVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  sockaddr *__sa;
  ulong uVar5;
  long *plVar6;
  long *local_458;
  char local_44c [1028];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_01058d04(&local_458);
  plVar6 = local_458;
  do {
    if (plVar6 == (long *)0x0) {
      uVar4 = 0;
LAB_010445cc:
      FUN_01058f58(local_458);
      if (*(long *)(lVar2 + 0x28) == local_48) {
        return uVar4;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    __sa = (sockaddr *)plVar6[3];
    if ((__sa != (sockaddr *)0x0) && (__sa->sa_family == 10)) {
      getnameinfo(__sa,0x1c,local_44c,0x401,(char *)0x0,0,2);
      uVar5 = 0;
      cVar1 = local_44c[0];
      while (cVar1 != '\0') {
        if (cVar1 == '%') {
          local_44c[uVar5] = '\0';
          break;
        }
        uVar5 = (ulong)((int)uVar5 + 1);
        cVar1 = local_44c[uVar5];
      }
      iVar3 = strcmp(local_44c,param_1);
      if (iVar3 == 0) {
        uVar4 = if_nametoindex((char *)plVar6[1]);
                    /* try { // try from 01044608 to 0114460f has its CatchHandler @ 01044670 */
        goto LAB_010445cc;
      }
    }
    plVar6 = (long *)*plVar6;
  } while( true );
}

