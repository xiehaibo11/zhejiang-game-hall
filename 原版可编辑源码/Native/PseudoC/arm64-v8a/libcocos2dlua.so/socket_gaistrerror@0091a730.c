
char * socket_gaistrerror(int param_1)

{
  char *pcVar1;
  int *piVar2;
  
  pcVar1 = (char *)0x0;
  switch(param_1) {
  case 0:
    goto switchD_0091a758_caseD_0;
  default:
    pcVar1 = gai_strerror(param_1);
    return pcVar1;
  case 2:
    pcVar1 = "temporary failure in name resolution";
switchD_0091a758_caseD_0:
    return pcVar1;
  case 3:
    return "invalid value for ai_flags";
  case 4:
    return "non-recoverable failure in name resolution";
  case 5:
    return "ai_family not supported";
  case 6:
    return "memory allocation failure";
  case 8:
    return "host or service not provided, or not known";
  case 9:
    return "service not supported for socket type";
  case 10:
    return "ai_socktype not supported";
  case 0xb:
    piVar2 = (int *)__errno(0);
    pcVar1 = strerror(*piVar2);
    return pcVar1;
  case 0xc:
    return "invalid value for hints";
  case 0xd:
    return "resolved protocol is unknown";
  case 0xe:
    return "argument buffer overflow";
  }
}

