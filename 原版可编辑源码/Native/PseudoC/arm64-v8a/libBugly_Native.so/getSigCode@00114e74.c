
char * getSigCode(undefined4 param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_2 < 1) {
    if (4 < param_2 + 4U) {
      return "UNKNOWN_USER";
    }
    return (&PTR_s_SI_ASYNCIO_0013e120)[(int)(param_2 + 4U)];
  }
  switch(param_1) {
  case 4:
    if (7 < param_2 - 1U) {
      return "UNKNOWN_SIGILL";
    }
    return (&PTR_s_ILL_ILLOPC_0013e148)[(int)(param_2 - 1U)];
  case 5:
    pcVar1 = "UNKNOWN_SIGTRAP";
    pcVar2 = "TRAP_TRACE";
    pcVar3 = "TRAP_BRKPT";
    break;
  default:
    return "UNKNOWN_SIGNO";
  case 7:
    if (2 < param_2 - 1U) {
      return "UNKNOWN_SIGBUS";
    }
    return (&PTR_s_BUS_ADRALN_0013e1c8)[(int)(param_2 - 1U)];
  case 8:
    if (7 < param_2 - 1U) {
      return "UNKNOWN_SIGFPE";
    }
    return (&PTR_s_FPE_INTDIV_0013e188)[(int)(param_2 - 1U)];
  case 0xb:
    pcVar1 = "UNKNOWN_SIGSEGV";
    pcVar2 = "SEGV_ACCERR";
    pcVar3 = "SEGV_MAPERR";
    break;
  case 0x11:
    if (5 < param_2 - 1U) {
      return "UNKNOWN_SIGCHLD";
    }
    return (&PTR_s_CLD_EXITED_0013e1e0)[(int)(param_2 - 1U)];
  case 0x1d:
    if (param_2 - 1U < 6) {
      return (&PTR_s_POLL_IN_0013e210)[(int)(param_2 - 1U)];
    }
    return "UNKNOWN_SIGPOLL";
  }
  if (param_2 != 2) {
    pcVar2 = pcVar1;
  }
  if (param_2 != 1) {
    pcVar3 = pcVar2;
  }
  return pcVar3;
}

