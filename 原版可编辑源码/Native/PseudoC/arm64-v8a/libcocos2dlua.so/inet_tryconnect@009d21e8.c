
long inet_tryconnect(undefined8 param_1,int *param_2,char *param_3,char *param_4,undefined8 param_5,
                    addrinfo *param_6)

{
  long lVar1;
  int iVar2;
  long lVar3;
  addrinfo *__ai;
  addrinfo *paVar4;
  addrinfo *local_50;
  long local_48;
  
                    /* try { // try from 009d2200 to 00ad256f has its CatchHandler @ 009cee70 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = (addrinfo *)0x0;
  iVar2 = getaddrinfo(param_3,param_4,param_6,&local_50);
  lVar3 = socket_gaistrerror(iVar2);
  if (lVar3 == 0) {
    paVar4 = local_50;
    if (local_50 != (addrinfo *)0x0) {
      do {
        timeout_markstart(param_5);
        if (*param_2 != paVar4->ai_family) {
          socket_destroy(param_1);
          socket_create(param_1,paVar4->ai_family,paVar4->ai_socktype,paVar4->ai_protocol);
          lVar3 = socket_strerror();
          __ai = local_50;
          if (lVar3 != 0) goto LAB_009d22dc;
          *param_2 = paVar4->ai_family;
          socket_setnonblocking(param_1);
        }
        socket_connect(param_1,paVar4->ai_canonname,paVar4->ai_addrlen,param_5);
        lVar3 = socket_strerror();
        __ai = local_50;
        if ((lVar3 == 0) || (paVar4 = paVar4->ai_next, paVar4 == (addrinfo *)0x0))
        goto LAB_009d22dc;
      } while( true );
    }
    lVar3 = 0;
    __ai = (addrinfo *)0x0;
  }
  else {
    __ai = local_50;
    if (local_50 == (addrinfo *)0x0) goto LAB_009d22e0;
  }
LAB_009d22dc:
  freeaddrinfo(__ai);
LAB_009d22e0:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar3;
}

