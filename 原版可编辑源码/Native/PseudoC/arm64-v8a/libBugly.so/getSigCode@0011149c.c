
char * getSigCode(undefined4 param_1,int param_2)

{
  if (param_2 < 1) {
    switch(param_2) {
    case 0:
      return "SI_USER";
    case -4:
      return "SI_ASYNCIO";
    case -3:
      return "SI_MESGQ";
    case -2:
      return "SI_TIMER";
    case -1:
      return "SI_QUEUE";
    default:
      return "UNKNOWN_USER";
    }
  }
  switch(param_1) {
  case 4:
    switch(param_2) {
    case 1:
      return "ILL_ILLOPC";
    case 2:
      return "ILL_ILLOPN";
    case 3:
      return "ILL_ILLADR";
    case 4:
      return "ILL_ILLTRP";
    case 5:
      return "ILL_PRVOPC";
    case 6:
      return "ILL_PRVREG";
    case 7:
      return "ILL_COPROC";
    case 8:
      return "ILL_BADSTK";
    default:
      return "UNKNOWN_SIGILL";
    }
  case 5:
    break;
  default:
    return "UNKNOWN_SIGNO";
  case 7:
    if (param_2 == 2) {
      return "BUS_ADRERR";
    }
    if (param_2 != 3) {
      if (param_2 != 1) {
        return "UNKNOWN_SIGBUS";
      }
      return "BUS_ADRALN";
    }
    return "BUS_OBJERR";
  case 8:
    switch(param_2) {
    case 1:
      return "FPE_INTDIV";
    case 2:
      return "FPE_INTOVF";
    case 3:
      return "FPE_FLTDIV";
    case 4:
      return "FPE_FLTOVF";
    case 5:
      return "FPE_FLTUND";
    case 6:
      return "FPE_FLTRES";
    case 7:
      return "FPE_FLTINV";
    case 8:
      return "FPE_FLTSUB";
    default:
      return "UNKNOWN_SIGFPE";
    }
  case 0xb:
    if (param_2 == 1) {
      return "SEGV_MAPERR";
    }
    if (param_2 == 2) {
      return "SEGV_ACCERR";
    }
    return "UNKNOWN_SIGSEGV";
  case 0x11:
    switch(param_2) {
    case 1:
      return "CLD_EXITED";
    case 2:
      return "CLD_KILLED";
    case 3:
      return "CLD_DUMPED";
    case 4:
      return "CLD_TRAPPED";
    case 5:
      return "CLD_STOPPED";
    case 6:
      return "CLD_CONTINUED";
    default:
      return "UNKNOWN_SIGCHLD";
    }
  case 0x1d:
    switch(param_2) {
    case 1:
      return "POLL_IN";
    case 2:
      return "POLL_OUT";
    case 3:
      return "POLL_MSG";
    case 4:
      return "POLL_ERR";
    case 5:
      return "POLL_PRI";
    case 6:
      return "POLL_HUP";
    default:
      return "UNKNOWN_SIGPOLL";
    }
  }
  if (param_2 == 1) {
    return "TRAP_BRKPT";
  }
  if (param_2 == 2) {
    return "TRAP_TRACE";
  }
  return "UNKNOWN_SIGTRAP";
}

