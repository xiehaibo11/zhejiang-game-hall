
long inet_trybind(int *param_1,char *param_2,char *param_3,addrinfo *param_4)

{
  char *__service;
  int iVar1;
  long lVar2;
  socklen_t sVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  addrinfo *paVar9;
  char *pcVar10;
  addrinfo *paVar11;
  int local_54;
  addrinfo *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_50 = (addrinfo *)0x0;
  iVar1 = *param_1;
  local_54 = iVar1;
  iVar7 = strcmp(param_2,"*");
  pcVar10 = (char *)0x0;
  if (iVar7 != 0) {
    pcVar10 = param_2;
  }
  __service = "0";
  if (param_3 != (char *)0x0) {
    __service = param_3;
  }
  iVar7 = getaddrinfo(pcVar10,__service,param_4,&local_50);
  lVar8 = socket_gaistrerror(iVar7);
  if (lVar8 == 0) {
    paVar9 = local_50;
    if (local_50 == (addrinfo *)0x0) {
      lVar8 = 0;
    }
    else {
      do {
        if (iVar1 == -1) {
          socket_create(&local_54,paVar9->ai_family,paVar9->ai_socktype,paVar9->ai_protocol);
          lVar8 = socket_strerror();
          if (lVar8 == 0) goto LAB_009d2420;
LAB_009d247c:
          paVar9 = paVar9->ai_next;
        }
        else {
LAB_009d2420:
          socket_bind(&local_54,paVar9->ai_canonname,paVar9->ai_addrlen);
          lVar8 = socket_strerror();
          if (lVar8 == 0) {
            sVar3 = paVar9->ai_addrlen;
            uVar4 = *(undefined4 *)&paVar9->field_0x14;
            paVar11 = paVar9->ai_next;
            pcVar10 = paVar9->ai_canonname;
            iVar1 = paVar9->ai_socktype;
            iVar7 = paVar9->ai_protocol;
            iVar5 = paVar9->ai_flags;
            iVar6 = paVar9->ai_family;
            param_4->ai_addr = paVar9->ai_addr;
            param_4->ai_addrlen = sVar3;
            *(undefined4 *)&param_4->field_0x14 = uVar4;
            param_4->ai_next = paVar11;
            param_4->ai_canonname = pcVar10;
            param_4->ai_socktype = iVar1;
            param_4->ai_protocol = iVar7;
            param_4->ai_flags = iVar5;
            param_4->ai_family = iVar6;
            break;
          }
          if (local_54 == *param_1) goto LAB_009d247c;
          socket_destroy(&local_54);
          paVar9 = paVar9->ai_next;
        }
        iVar1 = local_54;
      } while (paVar9 != (addrinfo *)0x0);
    }
    freeaddrinfo(local_50);
    *param_1 = local_54;
  }
  else if (local_50 != (addrinfo *)0x0) {
    freeaddrinfo(local_50);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar8;
}

